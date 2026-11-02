#!/usr/bin/env bash
# ==============================================================================
# build.sh - Cross-platform build script for Linux and macOS
# ==============================================================================

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/.." && pwd)"
BUILD_DIR="${REPO_ROOT}/build"

CONFIG="Release"
CLEAN=false
RUN_TESTS=false
CHECK_FORMAT=false
EXTRACT_ASSETS=false

print_usage() {
    cat <<EOF
Usage: ./scripts/build.sh [OPTIONS]

Options:
    -c, --config <type>   Build configuration: Release (default), Debug, RelWithDebInfo
    --clean               Remove build directory before configuring
    -t, --test            Run automated CTest test suite after compilation
    --check-format        Run clang-format and IWYU verification checks prior to build
    -e, --extract-assets  Run sar_extractor to extract assets from assets/firehawk
    -h, --help            Show this help message
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -c|--config)
            CONFIG="$2"
            shift 2
            ;;
        --clean)
            CLEAN=true
            shift
            ;;
        -t|--test)
            RUN_TESTS=true
            shift
            ;;
        --check-format)
            CHECK_FORMAT=true
            shift
            ;;
        -e|--extract-assets)
            EXTRACT_ASSETS=true
            shift
            ;;
        -h|--help)
            print_usage
            exit 0
            ;;
        *)
            echo "Unknown option: $1" >&2
            print_usage
            exit 1
            ;;
    esac
done

cd "${REPO_ROOT}"

echo "=== Thexder / Firehawk Build System (Linux/macOS) ==="
echo "Configuration : ${CONFIG}"
echo "Repository    : ${REPO_ROOT}"
echo "Build Dir     : ${BUILD_DIR}"

# Step 0: Check Formatting / IWYU if requested
if [ "${CHECK_FORMAT}" = true ]; then
    echo ""
    echo "--- Running Code Style & Header Checks ---"
    python3 scripts/verify_clang_format.py
    python3 scripts/verify_iwyu_cstdint.py
    echo "[OK] Code style and headers verified cleanly."
fi

# Step 1: Clean build directory if requested
if [ "${CLEAN}" = true ]; then
    echo ""
    echo "--- Cleaning Build Directory ---"
    rm -rf "${BUILD_DIR}"
    echo "[OK] Removed ${BUILD_DIR}"
fi

# Step 2: Configure with CMake
echo ""
echo "--- Configuring Project with CMake ---"
cmake -B "${BUILD_DIR}" \
      -DCMAKE_BUILD_TYPE="${CONFIG}" \
      -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# Step 3: Compile targets
echo ""
echo "--- Compiling Project (${CONFIG}) ---"
NUM_JOBS="$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)"
cmake --build "${BUILD_DIR}" --config "${CONFIG}" -j"${NUM_JOBS}"
echo "[OK] Compilation completed successfully."

# Step 4: Run Tests if requested
if [ "${RUN_TESTS}" = true ]; then
    echo ""
    echo "--- Running CTest Automated Test Suite ---"
    ctest --test-dir "${BUILD_DIR}" -C "${CONFIG}" --output-on-failure
    echo "[OK] 100% Tests Passed."
fi

# Step 5: Extract assets if requested
if [ "${EXTRACT_ASSETS}" = true ]; then
    echo ""
    echo "--- Extracting Firehawk Assets ---"
    EXTRACTOR_BIN="${BUILD_DIR}/tools/sar_extractor"
    if [ -f "${EXTRACTOR_BIN}" ]; then
        OUT_DIR="${BUILD_DIR}/extracted_assets"
        mkdir -p "${OUT_DIR}"
        "${EXTRACTOR_BIN}" "assets/firehawk" "${OUT_DIR}"
        echo "[OK] Firehawk assets extracted to: ${OUT_DIR}"
    else
        echo "Warning: sar_extractor binary not found at: ${EXTRACTOR_BIN}" >&2
    fi
fi

echo ""
echo "=== Build Finished Successfully ==="


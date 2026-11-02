#!/usr/bin/env bash
# Root convenience launcher for scripts/build.sh
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
exec "${SCRIPT_DIR}/scripts/build.sh" "$@"


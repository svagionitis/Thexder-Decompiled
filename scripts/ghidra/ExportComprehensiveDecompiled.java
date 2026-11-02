// Comprehensive Ghidra Exporter for 16-bit DOS Real Mode Executables
// Exports:
// 1. Decompiled C code with full function prototypes and calling conventions
// 2. Full linear assembly disassembly with addresses, bytes, and comments
// 3. String tables and cross-references
// 4. Memory segments / blocks map

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.*;

import java.io.File;
import java.io.PrintWriter;
import java.util.*;

public class ExportComprehensiveDecompiled extends GhidraScript {
    @Override
    public void run() throws Exception {
        String progName = currentProgram.getName();
        println("=== Starting Comprehensive Export for: " + progName + " ===");

        String[] args = getScriptArgs();
        String outDirPath = (args.length > 0) ? args[0] : "reference/raw_decompiled";
        File outDir = new File(outDirPath);
        if (!outDir.exists()) {
            outDir.mkdirs();
        }

        // Subdirectory per binary or prefixed files
        File cOutFile = new File(outDir, progName + "_decompiled.c");
        File asmOutFile = new File(outDir, progName + "_disassembly.asm");
        File memOutFile = new File(outDir, progName + "_memory_map.md");
        File symOutFile = new File(outDir, progName + "_symbols.txt");

        // 1. Export Memory Map
        println("Exporting Memory Map...");
        PrintWriter memWriter = new PrintWriter(memOutFile);
        memWriter.println("# Memory Map: " + progName);
        memWriter.println("| Block Name | Start Address | End Address | Size (bytes) | Read | Write | Execute | Initialized |");
        memWriter.println("| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |");
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            memWriter.printf("| `%s` | `0x%s` | `0x%s` | %d | %b | %b | %b | %b |\n",
                block.getName(),
                block.getStart().toString(),
                block.getEnd().toString(),
                block.getSize(),
                block.isRead(),
                block.isWrite(),
                block.isExecute(),
                block.isInitialized());
        }
        memWriter.close();

        // 2. Export Decompiled C Functions
        println("Exporting Decompiled C...");
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);

        PrintWriter cWriter = new PrintWriter(cOutFile);
        cWriter.println("/**");
        cWriter.println(" * ============================================================================");
        cWriter.println(" * Comprehensive Decompiled Source: " + progName);
        cWriter.println(" * Architecture: 16-bit x86 Real Mode");
        cWriter.println(" * Image Base: " + currentProgram.getImageBase());
        cWriter.println(" * MD5: " + currentProgram.getExecutableMD5());
        cWriter.println(" * ============================================================================");
        cWriter.println(" */\n");
        cWriter.println("#include <stdint.h>");
        cWriter.println("#include <stdbool.h>\n");

        FunctionIterator funcIter = currentProgram.getListing().getFunctions(true);
        int funcCount = 0;
        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function f = funcIter.next();
            funcCount++;

            cWriter.println("// ============================================================================");
            cWriter.println("// Function: " + f.getName());
            cWriter.println("// Entry:    " + f.getEntryPoint());
            cWriter.println("// Body:     " + f.getBody().getMinAddress() + " -> " + f.getBody().getMaxAddress());
            cWriter.println("// Size:     " + f.getBody().getNumAddresses() + " bytes");
            cWriter.println("// Prototype: " + f.getPrototypeString(true, true));
            cWriter.println("// ============================================================================");

            DecompileResults res = decomp.decompileFunction(f, 30, monitor);
            if (res != null && res.decompileCompleted()) {
                cWriter.println(res.getDecompiledFunction().getC());
            } else {
                cWriter.println("// [Ghidra Decompile Failed/Timed Out for " + f.getName() + "]");
            }
            cWriter.println();
        }
        cWriter.close();
        decomp.dispose();
        println("Exported " + funcCount + " decompiled functions.");

        // 3. Export Disassembly
        println("Exporting Linear Disassembly...");
        PrintWriter asmWriter = new PrintWriter(asmOutFile);
        asmWriter.println("; ============================================================================");
        asmWriter.println("; Linear Disassembly for: " + progName);
        asmWriter.println("; Architecture: 16-bit x86 Real Mode");
        asmWriter.println("; ============================================================================\n");

        InstructionIterator instIter = currentProgram.getListing().getInstructions(true);
        int instCount = 0;
        while (instIter.hasNext() && !monitor.isCancelled()) {
            Instruction inst = instIter.next();
            instCount++;

            // Check if there is a function or label at this address
            Symbol[] syms = currentProgram.getSymbolTable().getSymbols(inst.getAddress());
            if (syms != null && syms.length > 0) {
                for (Symbol s : syms) {
                    asmWriter.println("\n" + s.getName() + ":");
                }
            }

            // Print formatted address and instruction
            String bytesHex = "";
            try {
                byte[] b = inst.getBytes();
                StringBuilder sb = new StringBuilder();
                for (byte val : b) {
                    sb.append(String.format("%02X ", val));
                }
                bytesHex = sb.toString();
            } catch (Exception e) {}

            asmWriter.printf("  %-12s  %-15s  %s\n",
                inst.getAddress().toString(),
                bytesHex,
                inst.toString());
        }
        asmWriter.close();
        println("Exported " + instCount + " instructions.");

        // 4. Export Symbols and Strings
        println("Exporting Defined Symbols & Data...");
        PrintWriter symWriter = new PrintWriter(symOutFile);
        symWriter.println("# Symbols and Data References for: " + progName);
        SymbolIterator symIter = currentProgram.getSymbolTable().getAllSymbols(true);
        while (symIter.hasNext() && !monitor.isCancelled()) {
            Symbol s = symIter.next();
            symWriter.printf("%-20s  %-15s  %-10s  refs=%d\n",
                s.getName(),
                s.getAddress().toString(),
                s.getSymbolType().toString(),
                s.getReferenceCount());
        }
        symWriter.close();

        println("=== Successfully completed comprehensive export for: " + progName + " ===");
    }
}


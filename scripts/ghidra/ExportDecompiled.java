// Ghidra script to test headless decompiler export
// @category Decompilation

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;

import java.io.File;
import java.io.PrintWriter;

public class ExportDecompiled extends GhidraScript {
    @Override
    public void run() throws Exception {
        println("=== Running ExportDecompiled for: " + currentProgram.getName() + " ===");
        
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        
        String[] args = getScriptArgs();
        String outDirPath = (args.length > 0) ? args[0] : "reference/raw_decompiled";
        File outDir = new File(outDirPath);
        if (!outDir.exists()) {
            outDir.mkdirs();
        }
        
        File outFile = new File(outDir, currentProgram.getName() + "_decompiled.c");
        PrintWriter writer = new PrintWriter(outFile);
        
        writer.println("/**");
        writer.println(" * Raw Decompiled Reference for: " + currentProgram.getName());
        writer.println(" * Program Base: " + currentProgram.getImageBase());
        writer.println(" * Executable Format: " + currentProgram.getExecutableFormat());
        writer.println(" * Creation Date: " + currentProgram.getCreationDate());
        writer.println(" * Compiler: " + currentProgram.getCompiler());
        writer.println(" */\n");
        writer.println("#include <stdint.h>");
        writer.println("#include <stdbool.h>\n");
        
        FunctionIterator functions = currentProgram.getListing().getFunctions(true);
        int count = 0;
        while (functions.hasNext() && !monitor.isCancelled()) {
            Function func = functions.next();
            count++;
            
            writer.println("// ============================================================================");
            writer.println("// Function: " + func.getName() + " @ " + func.getEntryPoint());
            writer.println("// Signature: " + func.getPrototypeString(true, true));
            writer.println("// ============================================================================");
            
            DecompileResults results = decomp.decompileFunction(func, 30, monitor);
            if (results != null && results.decompileCompleted()) {
                String cCode = results.getDecompiledFunction().getC();
                writer.println(cCode);
            } else {
                writer.println("// Decompilation timed out or failed for: " + func.getName());
            }
            writer.println();
        }
        
        writer.close();
        decomp.dispose();
        println("Successfully exported " + count + " functions to " + outFile.getAbsolutePath());
    }
}


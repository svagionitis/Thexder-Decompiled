/**
 * ============================================================================
 * Comprehensive Decompiled Source: SIERRA.EXE
 * Architecture: 16-bit x86 Real Mode
 * Image Base: 0000:0000
 * MD5: 5b4a495b6ec98d5f324b78ac0ba11f01
 * ============================================================================
 */

#include <stdint.h>
#include <stdbool.h>

// ============================================================================
// Function: entry
// Entry:    135c:0012
// Body:     135c:0012 -> 135c:0037
// Size:     38 bytes
// Prototype: undefined __cdecl16far entry()
// ============================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_ES;
  
  DAT_1000_35c4 = unaff_ES + 0x10;
  _DAT_2000_3f1e = DAT_1000_35c4 + DAT_1000_35cc;
  puVar4 = (undefined1 *)(DAT_1000_35c6 + -1);
  puVar5 = puVar4;
  for (iVar3 = DAT_1000_35c6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  _DAT_2000_3f1c = 0x38;
  return;
}




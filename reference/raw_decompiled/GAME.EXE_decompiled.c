/**
 * ============================================================================
 * Comprehensive Decompiled Source: GAME.EXE
 * Architecture: 16-bit x86 Real Mode
 * Image Base: 0000:0000
 * MD5: 32aafe4f4a964cfd8e315afa2df0d90c
 * ============================================================================
 */

#include <stdint.h>
#include <stdbool.h>

// ============================================================================
// Function: entry
// Entry:    1000:0000
// Body:     1000:0000 -> 1000:0001
// Size:     2 bytes
// Prototype: undefined entry()
// ============================================================================

/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void entry(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  undefined1 in_AL;
  byte bVar6;
  byte extraout_AH;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  undefined2 uVar20;
  undefined2 unaff_DS;
  undefined2 uVar21;
  undefined2 uVar22;
  
  *(undefined1 *)0x1626 = in_AL;
  uRam0001fffe = 0x22;
  FUN_1000_2a01();
  *(undefined2 *)0xf183 = 0;
  puVar17 = (undefined2 *)0xdc15;
  DAT_1000_0014 = unaff_DS;
  for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar17;
    puVar17 = puVar17 + 1;
    *puVar3 = 0;
  }
  *(undefined1 *)0x582 = 1;
  *(undefined2 *)0x57e = 0x51d1;
  *(undefined2 *)0x580 = 0x1000;
  uRam0001fffe = 0x1000;
  puVar8 = (undefined1 *)0xfffc;
  uRam0001fffc = 0x5a;
  (*(code *)*(undefined2 *)0x508)();
  uVar21 = ((undefined2 *)0x597)[1];
  pcVar5 = (code *)*(undefined2 *)0x597;
  *(undefined2 *)(puVar8 + -2) = 0x1000;
  puVar9 = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 0x60;
  (*pcVar5)();
  *(undefined2 *)(puVar9 + -2) = 0x67;
  FUN_1000_03f8();
  *(undefined2 *)(puVar9 + -2) = 0x6a;
  FUN_1000_039b();
  *(undefined1 *)0x1625 = 0;
  *(undefined2 *)0x1692 = 0;
  *(uint *)(puVar9 + -2) = (uint)extraout_AH << 8;
  *(undefined2 *)(puVar9 + -4) = unaff_DS;
  *(undefined2 *)(puVar9 + -6) = unaff_DS;
  *(undefined2 *)(puVar9 + -8) = 0x1000;
  uVar21 = *(undefined2 *)(puVar9 + -8);
  puVar18 = (undefined2 *)0x16d1;
  puVar17 = (undefined2 *)0x5271;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = puVar18;
    puVar18 = puVar18 + 1;
    puVar3 = puVar17;
    puVar17 = puVar17 + 1;
    *puVar4 = *puVar3;
  }
  uVar22 = *(undefined2 *)(puVar9 + -6);
  uVar20 = *(undefined2 *)(puVar9 + -4);
  *(undefined1 *)0x16d9 = 0x3e;
  *(undefined1 *)0x16dd = 0x3f;
  *(undefined1 *)0x1643 = 1;
  uVar21 = ((undefined2 *)0x508)[1];
  pcVar5 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar9 + -2) = 0x1000;
  puVar10 = puVar9 + -4;
  *(undefined2 *)(puVar9 + -4) = 0xb9;
  (*pcVar5)();
  if (*(char *)0x59b != -1) {
    *(undefined2 *)(puVar10 + -2) = 0xc3;
    FUN_1000_8ce7();
  }
  uVar21 = ((undefined2 *)0x508)[1];
  pcVar5 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar10 + -2) = 0x1000;
  puVar11 = puVar10 + -4;
  *(undefined2 *)(puVar10 + -4) = 0xcc;
  (*pcVar5)();
  *(undefined2 *)(puVar11 + -2) = 0xcf;
  FUN_1000_039b();
  *(undefined2 *)(puVar11 + -2) = 0xd2;
  FUN_1000_0464();
  *(undefined2 *)(puVar11 + -2) = 0xd5;
  FUN_1000_01b3();
  *(undefined2 *)(puVar11 + -2) = 0xd8;
  FUN_1000_03bc();
  *(undefined2 *)(puVar11 + -2) = 0xdb;
  FUN_1000_0256();
  puVar16 = (undefined1 *)0xdebc;
  puVar19 = (undefined1 *)0x5ef;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar19;
    puVar19 = puVar19 + 1;
    puVar1 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)(puVar11 + -2) = 0xe9;
  FUN_1000_0188();
  *(undefined2 *)(puVar11 + -2) = 0xec;
  thunk_FUN_1000_1ced();
  *(undefined2 *)(puVar11 + -2) = 0xef;
  FUN_1000_05f7();
  *(undefined2 *)(puVar11 + -2) = 0xf2;
  FUN_1000_402d();
  *(undefined2 *)(puVar11 + -2) = 0xf5;
  FUN_1000_3f7b();
  uVar21 = ((undefined2 *)0x508)[1];
  pcVar5 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar11 + -2) = 0x1000;
  puVar12 = puVar11 + -4;
  *(undefined2 *)(puVar11 + -4) = 0x101;
  (*pcVar5)();
  *(undefined1 *)0xf17e = 0;
  *(undefined2 *)(puVar12 + -2) = 0x10f;
  FUN_1000_218b();
  *(undefined1 *)0xf17e = 9;
  *(undefined2 *)(puVar12 + -2) = 0x11d;
  FUN_1000_218b();
  *(undefined2 *)(puVar12 + -2) = uVar20;
  uVar21 = ((undefined2 *)0x508)[1];
  pcVar5 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar12 + -4) = 0x1000;
  puVar13 = (undefined2 *)(puVar12 + -6);
  *(undefined2 *)(puVar12 + -6) = 0x132;
  (*pcVar5)();
  *puVar13 = 0x136;
  FUN_1000_2a4c();
  do {
    if (DAT_1000_51d0 == '\x01') {
      *puVar13 = 0x141;
      switchD_1000:4289::caseD_b();
    }
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    if (-1 < *(char *)0x56c) break;
    *puVar13 = 0x156;
    bVar6 = FUN_1000_48e2();
  } while ((bVar6 & 0xc0) == 0);
  uVar21 = ((undefined2 *)0x508)[1];
  pcVar5 = (code *)*(undefined2 *)0x508;
  *puVar13 = 0x1000;
  puVar14 = puVar13 + -1;
  puVar13[-1] = 0x163;
  (*pcVar5)();
  uVar21 = ((undefined2 *)0x508)[1];
  pcVar5 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar14 + -2) = 0x1000;
  puVar15 = (undefined1 *)((int)puVar14 + -4);
  *(undefined2 *)((int)puVar14 + -4) = 0x16a;
  (*pcVar5)();
  *(undefined2 *)(puVar15 + -2) = 0x16d;
  FUN_1000_0c27();
  *(undefined2 *)(puVar15 + -2) = 0x170;
  FUN_1000_4649();
  uVar21 = ((undefined2 *)0x5ab)[1];
  pcVar5 = (code *)*(undefined2 *)0x5ab;
  *(undefined2 *)(puVar15 + -2) = 0x1000;
  *(undefined2 *)(puVar15 + -4) = 0x17f;
  (*pcVar5)();
  FUN_1000_477f();
  return;
}



// ============================================================================
// Function: FUN_1000_0016
// Entry:    1000:0016
// Body:     1000:0016 -> 1000:0181
// Size:     364 bytes
// Prototype: undefined FUN_1000_0016()
// ============================================================================

void FUN_1000_0016(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 in_AL;
  byte bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x1626 = in_AL;
  FUN_1000_2a01();
  *(BADSPACEBASE **)0xf183 = register0x00000010;
  puVar8 = (undefined2 *)0xdc15;
  DAT_1000_0014 = unaff_DS;
  for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = 0;
  }
  *(undefined1 *)0x582 = 1;
  *(undefined2 *)0x57e = 0x51d1;
  *(undefined2 *)0x580 = 0x1000;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x597)(0x1000);
  FUN_1000_03f8();
  FUN_1000_039b();
  *(undefined1 *)0x1625 = 0;
  *(undefined2 *)0x1692 = 0;
  puVar9 = (undefined2 *)0x16d1;
  puVar8 = (undefined2 *)0x5271;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = *puVar3;
  }
  *(undefined1 *)0x16d9 = 0x3e;
  *(undefined1 *)0x16dd = 0x3f;
  *(undefined1 *)0x1643 = 1;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  if (*(char *)0x59b != -1) {
    FUN_1000_8ce7();
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_039b();
  FUN_1000_0464();
  FUN_1000_01b3();
  FUN_1000_03bc();
  FUN_1000_0256();
  puVar7 = (undefined1 *)0xdebc;
  puVar10 = (undefined1 *)0x5ef;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = *puVar1;
  }
  FUN_1000_0188();
  thunk_FUN_1000_1ced();
  FUN_1000_05f7();
  FUN_1000_402d();
  FUN_1000_3f7b();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  *(undefined1 *)0xf17e = 0;
  FUN_1000_218b();
  *(undefined1 *)0xf17e = 9;
  FUN_1000_218b();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_2a4c();
  while( true ) {
    if (DAT_1000_51d0 == '\x01') {
      switchD_1000:4289::caseD_b();
    }
    if (*(char *)0x55b == '\x01') break;
    if ((-1 < *(char *)0x56c) || (bVar5 = FUN_1000_48e2(), (bVar5 & 0xc0) != 0)) {
      (*(code *)*(undefined2 *)0x508)(0x1000);
      (*(code *)*(undefined2 *)0x508)(0x1000);
      FUN_1000_0c27();
      FUN_1000_4649();
      (*(code *)*(undefined2 *)0x5ab)(0x1000);
      FUN_1000_477f();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x58b)();
  return;
}



// ============================================================================
// Function: FUN_1000_0188
// Entry:    1000:0188
// Body:     1000:0188 -> 1000:01b2
// Size:     43 bytes
// Prototype: undefined __cdecl16near FUN_1000_0188()
// ============================================================================

void __cdecl16near FUN_1000_0188(void)

{
  char *pcVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  bool bVar2;
  int in_stack_00000001;
  
  switch(*(byte *)0x1626 & 3) {
  case 2:
    if (*(char *)0x5ff != '\0') {
      FUN_1000_301c();
      return;
    }
  case 1:
    *(undefined1 *)0x1626 = 0;
    *(undefined1 *)0x5ef = 1;
    return;
  case 3:
    FUN_1000_032d();
    return;
  }
  *(int *)(in_stack_00000001 + 0x13) = *(int *)(in_stack_00000001 + 0x13) + unaff_SI;
  pcVar1 = (char *)(unaff_SI + 1);
  *pcVar1 = *pcVar1 + '\x01';
  bVar2 = *pcVar1 == '\0';
  FUN_1000_1885();
  if (bVar2) {
    return;
  }
  FUN_1000_16a9();
  return;
}



// ============================================================================
// Function: FUN_1000_01b3
// Entry:    1000:01b3
// Body:     1000:01b3 -> 1000:0255
// Size:     163 bytes
// Prototype: undefined __cdecl16near FUN_1000_01b3()
// ============================================================================

void __cdecl16near FUN_1000_01b3(void)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  char cVar6;
  undefined2 *unaff_SI;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar7 = (undefined1 *)0x1627;
  for (iVar5 = 0xa9; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = 0;
  }
  puVar8 = (undefined2 *)0x16e1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar4 = *puVar1;
  }
  DAT_1000_5c20 = *(char *)0x55a == '\x02';
  *(undefined1 *)0x1683 = DAT_1000_5c20;
  if (!(bool)(*(byte *)0x574 >> 1 & 1)) {
    DAT_1000_5c20 = *(undefined1 *)0x574;
    *(undefined1 *)0x1683 = DAT_1000_5c20;
  }
  *(undefined2 *)0x1686 = 0x6663;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_3f44();
  puVar7 = (undefined1 *)0x164b;
  cVar6 = '\b';
  do {
    *puVar7 = 0x30;
    puVar7 = puVar7 + 1;
    cVar6 = cVar6 + -1;
  } while (cVar6 != '\0');
  if (*(char *)0x1624 == '\0') {
    return;
  }
  *(undefined1 *)0x1626 = 1;
  FUN_1000_0463();
  puVar7 = (undefined1 *)0x5ef;
  puVar9 = (undefined1 *)0x5ff;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = *puVar2;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0256
// Entry:    1000:0256
// Body:     1000:0256 -> 1000:02f7
// Size:     162 bytes
// Prototype: undefined __cdecl16near FUN_1000_0256()
// ============================================================================

void __cdecl16near FUN_1000_0256(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x165b = 0x14;
  *(undefined1 *)0x165d = 0x19;
  *(undefined1 *)0x16cf = 0x80;
  *(undefined1 *)0x16d0 = 0;
  *(undefined1 *)0x1689 = 1;
  *(undefined1 *)0x168a = 0;
  *(undefined1 *)0x168b = 0;
  *(undefined1 *)0x168c = 0;
  *(undefined1 *)0x168d = 0;
  *(undefined1 *)0x168e = 0;
  *(undefined1 *)0x168f = 0;
  *(undefined2 *)0x1649 = 0x2783;
  *(undefined2 *)0x16cc = 0x2783;
  *(undefined1 *)0x1679 = 4;
  *(undefined2 *)0x1677 = 0x1694;
  *(undefined1 *)0x5f7 = 0;
  *(undefined1 *)0x5f8 = 0;
  *(undefined1 *)0x5f9 = 0;
  *(undefined1 *)0x5fa = 0;
  *(undefined1 *)0x5fb = 0;
  *(undefined1 *)0x5fc = 0;
  puVar3 = (undefined1 *)0x7583;
  for (iVar2 = 0x369; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0xf0;
  }
  puVar3 = (undefined1 *)0x78ed;
  for (iVar2 = 0x368; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  puVar3 = (undefined1 *)0x832b;
  for (iVar2 = 0x369; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0xff;
  }
  puVar3 = (undefined1 *)0x7553;
  for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_032d
// Entry:    1000:032d
// Body:     1000:032d -> 1000:039a
// Size:     110 bytes
// Prototype: undefined FUN_1000_032d()
// ============================================================================

void FUN_1000_032d(void)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x5ef = 0;
  *(undefined1 *)0x1676 = 1;
  DAT_1000_5377 = 0x30;
  *(undefined1 *)0xdc45 = 1;
  *(undefined1 *)0xdc46 = 1;
  FUN_1000_2138();
  DAT_1000_5413 = 0x30;
  DAT_1000_5414 = 0x31;
  FUN_1000_2138();
  (*(code *)*(undefined2 *)0x5ab)(0x1000);
  *(undefined1 *)0xf17e = 6;
  FUN_1000_218b();
  *(undefined1 *)0xf17e = 0;
  FUN_1000_218b();
  *(undefined1 *)0xf17e = 9;
  FUN_1000_218b();
  FUN_1000_0c27();
  FUN_1000_477f();
  return;
}



// ============================================================================
// Function: FUN_1000_039b
// Entry:    1000:039b
// Body:     1000:039b -> 1000:03bb
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_039b()
// ============================================================================

void __cdecl16near FUN_1000_039b(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x56e != -0x41) {
    return;
  }
  if (*(char *)0x56f != -0xd) {
    return;
  }
  cVar1 = *(char *)0x1624;
  *(undefined1 *)0x1624 = 0;
  if (cVar1 != '\0') {
    return;
  }
  *(undefined1 *)0x1624 = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_03bc
// Entry:    1000:03bc
// Body:     1000:03bc -> 1000:03d1
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_03bc()
// ============================================================================

void __cdecl16near FUN_1000_03bc(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x1626 != '\0') {
    return;
  }
  uVar1 = 0;
  FUN_1000_03d2();
  FUN_1000_03ed();
  *(undefined1 *)0x1657 = uVar1;
  return;
}



// ============================================================================
// Function: FUN_1000_03d2
// Entry:    1000:03d2
// Body:     1000:03d2 -> 1000:03ec
// Size:     27 bytes
// Prototype: undefined __cdecl16near FUN_1000_03d2()
// ============================================================================

void __cdecl16near FUN_1000_03d2(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x56e != -3) {
    return;
  }
  if (*(char *)0x56f != '\x7f') {
    return;
  }
  if (*(char *)0x56d != -3) {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_03ed
// Entry:    1000:03ed
// Body:     1000:03ed -> 1000:03f7
// Size:     11 bytes
// Prototype: undefined __cdecl16near FUN_1000_03ed()
// ============================================================================

void __cdecl16near FUN_1000_03ed(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x574 != -0x21) {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_03f8
// Entry:    1000:03f8
// Body:     1000:03f8 -> 1000:0462
// Size:     107 bytes
// Prototype: undefined __cdecl16near FUN_1000_03f8()
// ============================================================================

void __cdecl16near FUN_1000_03f8(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xe4c2 = 0x4d4;
  *(undefined2 *)0xe4c4 = 0x1000;
  *(undefined2 *)0xe4c6 = 0x4db0;
  *(undefined2 *)0xe4c8 = 0x1000;
  *(undefined2 *)0xe4ca = 0x4de0;
  *(undefined2 *)0xe4cc = 0x1000;
  *(undefined2 *)0xe4ce = 0x58aa;
  *(undefined2 *)0xe4d0 = 0x1000;
  *(undefined2 *)0xe4d2 = 0xe00;
  *(undefined2 *)0xe4d4 = 0x1000;
  *(undefined2 *)0xe4d6 = 0x4070;
  *(undefined2 *)0xe4d8 = 0x1000;
  *(undefined2 *)0xe4da = 0x407c;
  *(undefined2 *)0xe4dc = 0x1000;
  *(undefined2 *)0xe4de = 0x4666;
  *(undefined2 *)0xe4e0 = 0x1000;
  *(undefined2 *)0xe4e2 = 0xd90;
  *(undefined2 *)0xe4e4 = 0x1000;
  *(undefined2 *)0xe4e6 = 0x4680;
  *(undefined2 *)0xe4e8 = 0x1000;
  *(undefined2 *)0xe4ea = 0x4dc7;
  *(undefined2 *)0xe4ec = 0x1000;
  *(undefined2 *)0xe4ee = 0x4c0;
  *(undefined2 *)0xe4f0 = 0x1000;
  *(undefined2 *)0xe4f2 = 0x4763;
  *(undefined2 *)0xe4f4 = 0x1000;
  return;
}



// ============================================================================
// Function: FUN_1000_0463
// Entry:    1000:0463
// Body:     1000:0463 -> 1000:0463
// Size:     1 bytes
// Prototype: undefined __cdecl16near FUN_1000_0463()
// ============================================================================

void __cdecl16near FUN_1000_0463(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_0464
// Entry:    1000:0464
// Body:     1000:0464 -> 1000:04bd
// Size:     90 bytes
// Prototype: undefined __cdecl16near FUN_1000_0464()
// ============================================================================

void __cdecl16near FUN_1000_0464(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_2138();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_2138();
  *(undefined1 *)0xf17e = 6;
  FUN_1000_218b();
  FUN_1000_2138();
  *(undefined1 *)0xf17e = 1;
  FUN_1000_218b();
  *(undefined1 *)0xf17e = 2;
  FUN_1000_218b();
  *(undefined1 *)0xdc45 = 5;
  *(undefined1 *)0xdc46 = 5;
  return;
}



// ============================================================================
// Function: FUN_1000_04c0
// Entry:    1000:04c0
// Body:     1000:04c0 -> 1000:04d3
// Size:     20 bytes
// Prototype: undefined __cdecl16far FUN_1000_04c0()
// ============================================================================

void __cdecl16far FUN_1000_04c0(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(int *)0x1622 + 0x9248U >> 1;
  *(uint *)0x1622 =
       ((uVar1 | (uint)((*(int *)0x1622 + 0x9248U & 1) != 0) << 0xf) >> 1 |
       (uint)((uVar1 & 1) != 0) << 0xf) >> 1 | (uint)((uVar1 & 2) != 0) << 0xf;
  return;
}



// ============================================================================
// Function: FUN_1000_0506
// Entry:    1000:0506
// Body:     1000:0506 -> 1000:05ad
// Size:     168 bytes
// Prototype: undefined __cdecl16near FUN_1000_0506()
// ============================================================================

void __cdecl16near FUN_1000_0506(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  if (*(char *)0x74e7 != '\x02') {
    pbVar3 = (byte *)*(undefined2 *)0x1649;
    if (*(char *)0x1660 != '\0') {
      bVar1 = *(char *)0x1660 + 1;
      do {
        LOCK();
        bVar2 = *(byte *)0xdc47;
        *(byte *)0xdc47 = bVar1;
        UNLOCK();
        if ((*pbVar3 & 0x80) == 0) {
          pbVar3 = (byte *)*(undefined2 *)0x16cc;
        }
        if ((pbVar3[5] & 0x80) != 0) {
          bVar2 = (pbVar3[1] + 3) - *(char *)0x1634;
          if ((*(byte *)0x1627 & 8) == 0) {
            if (bVar2 < 0x11) {
              *(undefined2 *)0x1649 = pbVar3 + 8;
              FUN_1000_05ae();
              return;
            }
          }
          else if (0x11 < bVar2) {
            *(undefined2 *)0x1649 = pbVar3 + 8;
            FUN_1000_05ae();
            return;
          }
        }
        pbVar3 = pbVar3 + 8;
        LOCK();
        bVar1 = *(byte *)0xdc47;
        *(byte *)0xdc47 = bVar2;
        UNLOCK();
        bVar1 = bVar1 - 1;
      } while (bVar1 != 0);
      *(undefined2 *)0x1649 = pbVar3;
    }
  }
  if ((*(byte *)0x1627 & 8) != 0) {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_05ae
// Entry:    1000:05ae
// Body:     1000:05ae -> 1000:05dc
// Size:     47 bytes
// Prototype: undefined __cdecl16near FUN_1000_05ae()
// ============================================================================

void __cdecl16near FUN_1000_05ae(void)

{
  FUN_1000_04c0();
  FUN_1000_5258();
  return;
}



// ============================================================================
// Function: FUN_1000_05e9
// Entry:    1000:05e9
// Body:     1000:05e9 -> 1000:05f6
// Size:     14 bytes
// Prototype: undefined __cdecl16near FUN_1000_05e9()
// ============================================================================

void __cdecl16near FUN_1000_05e9(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x593)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_05f7
// Entry:    1000:05f7
// Body:     1000:05f7 -> 1000:060d
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_05f7()
// ============================================================================

void __cdecl16near FUN_1000_05f7(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_060e
// Entry:    1000:060e
// Body:     1000:060e -> 1000:0620
// Size:     19 bytes
// Prototype: undefined __cdecl16near FUN_1000_060e()
// ============================================================================

undefined2 __cdecl16near FUN_1000_060e(void)

{
  undefined1 *puVar1;
  undefined2 in_AX;
  int iVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  puVar3 = (undefined1 *)0x7c57;
  for (iVar2 = 0x36a; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  return in_AX;
}



// ============================================================================
// Function: FUN_1000_0621
// Entry:    1000:0621
// Body:     1000:0621 -> 1000:0633
// Size:     18 bytes
// Prototype: undefined __cdecl16near FUN_1000_0621()
// ============================================================================

void __cdecl16near FUN_1000_0621(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1682 == '\0') {
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0634
// Entry:    1000:0634
// Body:     1000:0634 -> 1000:069e
// Size:     107 bytes
// Prototype: undefined __cdecl16near FUN_1000_0634()
// ============================================================================

void __cdecl16near FUN_1000_0634(void)

{
  undefined1 *in_BX;
  char *pcVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  
  for (pbVar2 = (byte *)0x2783; (*pbVar2 & 0x80) != 0; pbVar2 = pbVar2 + 8) {
    if (pbVar2[3] != 0) {
      FUN_1000_069f();
    }
  }
  FUN_1000_4e7a();
  *in_BX = 0xff;
  in_BX[0x26] = 0xff;
  if (*(char *)0x166b == '\0') {
    return;
  }
  pcVar1 = (char *)0x7583;
  FUN_1000_4de0();
  if (*pcVar1 == '\0') {
    *pcVar1 = -1;
  }
  if (pcVar1[1] == '\0') {
    pcVar1[1] = -1;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_069f
// Entry:    1000:069f
// Body:     1000:069f -> 1000:0701
// Size:     99 bytes
// Prototype: undefined __cdecl16near FUN_1000_069f()
// ============================================================================

void __cdecl16near FUN_1000_069f(void)

{
  byte bVar1;
  byte in_CL;
  byte in_CH;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  bVar1 = (unaff_SI[1] + 3) - in_CL;
  if ((byte)(unaff_SI[1] + 3) < in_CL) {
    return;
  }
  if (0x24 < bVar1) {
    return;
  }
  if ((byte)(unaff_SI[2] + 2) < in_CH) {
    return;
  }
  if (0x16 < (byte)((unaff_SI[2] + 2) - in_CH)) {
    return;
  }
  uVar2 = (uint)bVar1;
  iVar3 = uVar2 + 0x7583;
  FUN_1000_4dc7();
  puVar4 = (undefined1 *)(iVar3 + uVar2);
  if ((*unaff_SI & 0x70) != 0) {
    *puVar4 = 0xff;
    puVar4[1] = 0xff;
    puVar4[0x27] = 0xff;
    puVar4[0x26] = 0xff;
    return;
  }
  *puVar4 = 0xff;
  puVar4[1] = 0xff;
  puVar4[2] = 0xff;
  puVar4[0x28] = 0xff;
  puVar4[0x27] = 0xff;
  puVar4[0x26] = 0xff;
  puVar4[0x4c] = 0xff;
  puVar4[0x4d] = 0xff;
  puVar4[0x4e] = 0xff;
  return;
}



// ============================================================================
// Function: FUN_1000_0702
// Entry:    1000:0702
// Body:     1000:0702 -> 1000:0835
// Size:     306 bytes
// Prototype: undefined __cdecl16near FUN_1000_0702()
// ============================================================================

void __cdecl16near FUN_1000_0702(void)

{
  byte bVar1;
  char *in_BX;
  char *pcVar2;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  bVar1 = *(byte *)0x1627;
  if (bVar1 < 0x1a) {
    pcVar2 = (char *)((uint)bVar1 * 0xc + -0x2027);
  }
  else {
    pcVar2 = (char *)((uint)(byte)(bVar1 - 0x1a) * 9 + -0x1eef);
  }
  if (*pcVar2 != '\0') {
    *in_BX = *pcVar2;
  }
  if (pcVar2[1] != '\0') {
    in_BX[1] = pcVar2[1];
  }
  if (pcVar2[2] != '\0') {
    in_BX[2] = pcVar2[2];
  }
  if (pcVar2[3] != '\0') {
    in_BX[0x26] = pcVar2[3];
  }
  if (pcVar2[4] != '\0') {
    in_BX[0x27] = pcVar2[4];
  }
  if (pcVar2[5] != '\0') {
    in_BX[0x28] = pcVar2[5];
  }
  if (pcVar2[6] != '\0') {
    in_BX[0x4c] = pcVar2[6];
  }
  if (pcVar2[7] != '\0') {
    in_BX[0x4d] = pcVar2[7];
  }
  if (pcVar2[8] != '\0') {
    in_BX[0x4e] = pcVar2[8];
  }
  if (*(byte *)0x1627 < 0x1a) {
    if (pcVar2[9] != '\0') {
      in_BX[0x72] = pcVar2[9];
    }
    if (pcVar2[10] != '\0') {
      in_BX[0x73] = pcVar2[10];
    }
    if (pcVar2[0xb] != '\0') {
      in_BX[0x74] = pcVar2[0xb];
    }
  }
  in_BX[0xa3e] = in_BX[0xa3e] | 0xc4;
  in_BX[0xa3f] = in_BX[0xa3f] | 0xc4;
  in_BX[0xa40] = in_BX[0xa40] | 0xc4;
  in_BX[0xa64] = in_BX[0xa64] | 0xc4;
  in_BX[0xa65] = in_BX[0xa65] | 0xc4;
  in_BX[0xa66] = in_BX[0xa66] | 0xc4;
  in_BX[0xa8a] = in_BX[0xa8a] | 0xc4;
  in_BX[0xa8b] = in_BX[0xa8b] | 0xc4;
  in_BX[0xa8c] = in_BX[0xa8c] | 0xc4;
  if (0x19 < *(byte *)0x1627) {
    return;
  }
  in_BX[0xab0] = in_BX[0xab0] | 0xc4;
  in_BX[0xab1] = in_BX[0xab1] | 0xc4;
  in_BX[0xab2] = in_BX[0xab2] | 0xc4;
  return;
}



// ============================================================================
// Function: FUN_1000_0836
// Entry:    1000:0836
// Body:     1000:0836 -> 1000:0969
// Size:     308 bytes
// Prototype: undefined __cdecl16near FUN_1000_0836()
// ============================================================================

void __cdecl16near FUN_1000_0836(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined2 in_AX;
  uint uVar5;
  undefined1 uVar6;
  int in_DX;
  int extraout_DX;
  byte bVar7;
  int extraout_DX_00;
  int iVar8;
  undefined1 *puVar9;
  undefined2 unaff_DS;
  
  if (*(char *)0x16b6 != '\0') {
    return;
  }
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  uVar5 = CONCAT11((char)((uint)in_AX >> 8),*(undefined1 *)0x1690) & 0xff40;
  uVar6 = (undefined1)(uVar5 >> 8);
  if ((char)uVar5 == '\0') {
    return;
  }
  bVar3 = *(byte *)0x1627;
  if (0xf < bVar3) {
    if (bVar3 < 0x20) {
      return;
    }
    iVar8 = (uint)(byte)((bVar3 & 0xf) << 4) * 2 + (uint)(byte)((bVar3 & 0xf) * '\x02');
    puVar9 = (undefined1 *)(iVar8 + -0x1db7);
    *(undefined1 *)0x16ba = 1;
    cVar4 = *(char *)0x162a - *(char *)0x1635;
    FUN_1000_4dc7();
    in_DX = CONCAT11(*(undefined1 *)(iVar8 + -0x1db6),*puVar9) + -0x556b + in_DX;
    *(undefined1 *)0x16c0 = (char)in_DX;
    *(undefined1 *)0x16c1 = (char)((uint)in_DX >> 8);
    *(undefined1 *)0x16bf = *(undefined1 *)(iVar8 + -0x1db5);
    cVar1 = *(char *)(iVar8 + -0x1db3);
    uVar6 = puVar9[(byte)(cVar4 * '\x02') + 3];
    uVar2 = puVar9[(byte)(cVar4 * '\x02') + 4];
    *(undefined1 *)0x16bb = *(undefined1 *)(iVar8 + -0x1db4);
    *(char *)0x16bc = cVar4 * '\b' + cVar1;
    *(undefined1 *)0x16bd = uVar6;
    *(undefined1 *)0x16be = uVar2;
    return;
  }
  if ((bVar3 & 8) == 0) {
    *(undefined1 *)0x16ba = 1;
    cVar1 = *(char *)0x1635;
    cVar4 = *(char *)0x162a;
    bVar3 = (cVar4 - cVar1) * '\b' + 4;
    *(undefined1 *)0x16bb = 0x77;
    *(byte *)0x16bc = bVar3;
    FUN_1000_0506(CONCAT11(uVar6,cVar4 - cVar1));
    *(undefined1 *)0x16bd = (char)extraout_DX;
    bVar7 = (byte)((uint)extraout_DX >> 8);
    *(byte *)0x16be = bVar7;
    uVar6 = 5;
    if (bVar3 < bVar7) {
      uVar6 = 4;
    }
    *(undefined1 *)0x16bf = uVar6;
    iVar8 = extraout_DX;
    FUN_1000_4dc7();
    *(undefined1 *)0x16c0 = (char)(iVar8 + -0x7c78);
    *(undefined1 *)0x16c1 = (char)((uint)(iVar8 + -0x7c78) >> 8);
    return;
  }
  *(undefined1 *)0x16ba = 1;
  cVar1 = *(char *)0x1635;
  cVar4 = *(char *)0x162a;
  bVar3 = (cVar4 - cVar1) * '\b' + 4;
  *(undefined1 *)0x16bb = 0x80;
  *(byte *)0x16bc = bVar3;
  FUN_1000_0506(CONCAT11(uVar6,cVar4 - cVar1));
  *(undefined1 *)0x16bd = (char)extraout_DX_00;
  bVar7 = (byte)((uint)extraout_DX_00 >> 8);
  *(byte *)0x16be = bVar7;
  uVar6 = 5;
  if (bVar3 < bVar7) {
    uVar6 = 4;
  }
  *(undefined1 *)0x16bf = uVar6;
  iVar8 = extraout_DX_00;
  FUN_1000_4dc7();
  *(undefined1 *)0x16c0 = (char)(iVar8 + -0x7c76);
  *(undefined1 *)0x16c1 = (char)((uint)(iVar8 + -0x7c76) >> 8);
  return;
}



// ============================================================================
// Function: FUN_1000_096a
// Entry:    1000:096a
// Body:     1000:096a -> 1000:0a1a
// Size:     177 bytes
// Prototype: undefined __cdecl16near FUN_1000_096a()
// ============================================================================

void __cdecl16near FUN_1000_096a(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined2 in_CX;
  undefined2 in_DX;
  int extraout_DX;
  undefined2 in_BX;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int unaff_SI;
  undefined2 unaff_DS;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  
  LOCK();
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  iVar5 = CONCAT11(*(undefined1 *)(unaff_SI + 9),*(undefined1 *)(unaff_SI + 8));
  if (0xf < *(byte *)(iVar5 + -0xda8)) {
    *(undefined1 *)0x562 = 4;
    if ((*(byte *)(iVar5 + -0x6d4) != 0) && (*(byte *)(iVar5 + -0x6d4) < 0xed)) {
      FUN_1000_5685();
      return;
    }
    return;
  }
  if (*(byte *)(iVar5 + -0xda8) != 0xe) {
    return;
  }
  uVar6 = iVar5 + 0x7cd5;
  bVar8 = false;
  cVar4 = '\0';
  do {
    cVar3 = cVar4;
    uVar1 = (uint)bVar8;
    bVar9 = uVar6 < 0x26;
    uVar2 = uVar6 - 0x26;
    bVar8 = bVar9 || uVar2 < uVar1;
    uVar6 = uVar2 - uVar1;
    cVar4 = cVar3 + '\x01';
  } while (!bVar9 && uVar2 >= uVar1);
  bVar10 = (char)(*(char *)0x1635 + cVar3 + -2) == '\0';
  FUN_1000_4e2b();
  pbVar7 = (byte *)(extraout_DX + -0x796b);
  if ((bVar10 & 1) != 0) {
    bVar10 = *(char *)0x74ee << 1 | *(char *)0x74ee < '\0';
    bVar10 = bVar10 << 1 | (char)bVar10 < '\0';
    bVar10 = bVar10 << 1 | (char)bVar10 < '\0';
    *pbVar7 = *pbVar7 & 0xf | bVar10 << 1 | (char)bVar10 < '\0';
    return;
  }
  *pbVar7 = *pbVar7 & 0xf0 | *(byte *)0x74ee;
  return;
}



// ============================================================================
// Function: FUN_1000_0a1b
// Entry:    1000:0a1b
// Body:     1000:0a1b -> 1000:0a3f
// Size:     37 bytes
// Prototype: undefined __cdecl16near FUN_1000_0a1b()
// ============================================================================

void __cdecl16near FUN_1000_0a1b(void)

{
  char cVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x16b6 != '\0') {
    return;
  }
  pbVar2 = (byte *)*(undefined2 *)0x1677;
  cVar1 = *(char *)0x1679;
  do {
    if ((*pbVar2 & 1) != 0) {
      FUN_1000_0a40();
    }
    pbVar2 = pbVar2 + 8;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_0a40
// Entry:    1000:0a40
// Body:     1000:0a40 -> 1000:0bc2
// Size:     383 bytes
// Prototype: undefined __cdecl16near FUN_1000_0a40()
// ============================================================================

void __cdecl16near FUN_1000_0a40(void)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  byte *unaff_DI;
  undefined2 unaff_DS;
  
  bVar6 = unaff_DI[1] + 6 + *(char *)0x1634 * -2;
  if ((((5 < bVar6) && (bVar6 < 0x46)) &&
      (bVar4 = unaff_DI[3] + 4 + *(char *)0x1635 * -2, 3 < bVar4)) && (bVar4 < 0x28)) {
    if ((*unaff_DI & 2) == 0) {
      if (unaff_DI[6] != 0) {
        pbVar1 = unaff_DI + 6;
        *pbVar1 = *pbVar1 - 1;
        if (*pbVar1 == 0) {
          unaff_DI[6] = unaff_DI[7];
          cVar2 = *(char *)0x1635;
          bVar6 = unaff_DI[3];
          bVar4 = unaff_DI[5];
          unaff_DI[3] = bVar6 + bVar4;
          bVar4 = bVar6 + bVar4 + 4 + cVar2 * -2;
          if ((bVar4 < 4) || (0x27 < bVar4)) goto LAB_1000_0b5c;
        }
      }
      cVar2 = *(char *)0x1634;
      iVar7 = CONCAT11(unaff_DI[2],unaff_DI[1]) + (uint)unaff_DI[4];
      bVar6 = (byte)iVar7;
      unaff_DI[1] = bVar6;
      unaff_DI[2] = (byte)((uint)iVar7 >> 8);
      bVar6 = bVar6 + 6 + cVar2 * -2;
      if ((5 < bVar6) && (bVar6 < 0x46)) {
        uVar5 = CONCAT11(bVar4,bVar6);
LAB_1000_0b60:
        iVar7 = (uVar5 >> 1 & 0x7f) + 0x832b;
        FUN_1000_4dc7();
        pbVar8 = (byte *)((char *)(iVar7 + uVar5) + -0xda8);
        if (*(char *)(iVar7 + uVar5) < '\0') {
          FUN_1000_5576();
        }
        else {
          bVar6 = *pbVar8;
          if (((bVar6 == 0) || ((0xf < bVar6 && ((bVar6 < 0xc0 || (bVar6 == 0xfe)))))) ||
             ((*pbVar8 != 0xff && (0xf < *pbVar8)))) {
            *pbVar8 = 0xff;
            (*(code *)*(undefined2 *)0x508)(0x1000);
            return;
          }
        }
        *unaff_DI = *unaff_DI & 0xfe;
        return;
      }
    }
    else {
      if (unaff_DI[6] != 0) {
        pbVar1 = unaff_DI + 6;
        *pbVar1 = *pbVar1 - 1;
        if (*pbVar1 == 0) {
          unaff_DI[6] = unaff_DI[7];
          cVar2 = *(char *)0x1634;
          iVar7 = CONCAT11(unaff_DI[2],unaff_DI[1]) + (uint)unaff_DI[4];
          bVar6 = (byte)iVar7;
          unaff_DI[1] = bVar6;
          unaff_DI[2] = (byte)((uint)iVar7 >> 8);
          bVar6 = bVar6 + 6 + cVar2 * -2;
          if ((bVar6 < 6) || (0x45 < bVar6)) goto LAB_1000_0b5c;
        }
      }
      cVar2 = *(char *)0x1635;
      bVar4 = unaff_DI[3];
      bVar3 = unaff_DI[5];
      unaff_DI[3] = bVar4 + bVar3;
      bVar4 = bVar4 + bVar3 + 4 + cVar2 * -2;
      if ((3 < bVar4) && (bVar4 < 0x28)) {
        uVar5 = CONCAT11(bVar4,bVar6);
        goto LAB_1000_0b60;
      }
    }
  }
LAB_1000_0b5c:
  *unaff_DI = *unaff_DI & 0xfe;
  return;
}



// ============================================================================
// Function: FUN_1000_0bc3
// Entry:    1000:0bc3
// Body:     1000:0bc3 -> 1000:0c0e
// Size:     76 bytes
// Prototype: undefined __cdecl16near FUN_1000_0bc3()
// ============================================================================

undefined1 __cdecl16near FUN_1000_0bc3(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x167f == '\0') {
    return 0;
  }
  cVar1 = '2' - *(char *)0x1680;
  uVar2 = 0x7e;
  if (*(char *)0x1680 != '\0') {
    uVar2 = (*(code *)*(undefined2 *)0x508)(0x1000,0x930f);
  }
  if (cVar1 == '\0') {
    return uVar2;
  }
  uVar2 = (*(code *)*(undefined2 *)0x508)(0x1000);
  return uVar2;
}



// ============================================================================
// Function: FUN_1000_0c0f
// Entry:    1000:0c0f
// Body:     1000:0c0f -> 1000:0c26
// Size:     24 bytes
// Prototype: undefined __cdecl16near FUN_1000_0c0f()
// ============================================================================

void __cdecl16near FUN_1000_0c0f(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0c27
// Entry:    1000:0c27
// Body:     1000:0c27 -> 1000:0cb0
// Size:     138 bytes
// Prototype: undefined __cdecl16near FUN_1000_0c27()
// ============================================================================

void __cdecl16near FUN_1000_0c27(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x1686 = 0x7363;
  if (*(char *)0x162d == '\0') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    *(undefined2 *)0x1686 = 0x6663;
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  *(undefined2 *)0x1686 = 0x6663;
  return;
}



// ============================================================================
// Function: FUN_1000_0cb1
// Entry:    1000:0cb1
// Body:     1000:0cb1 -> 1000:0cdc
// Size:     44 bytes
// Prototype: undefined __cdecl16near FUN_1000_0cb1()
// ============================================================================

void __cdecl16near FUN_1000_0cb1(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0d10
// Entry:    1000:0d10
// Body:     1000:0d10 -> 1000:0d2a
// Size:     27 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d10()
// ============================================================================

void __cdecl16near FUN_1000_0d10(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_0d30
// Entry:    1000:0d30
// Body:     1000:0d30 -> 1000:0d86
// Size:     87 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d30()
// ============================================================================

void __cdecl16near FUN_1000_0d30(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  if (*(byte *)0x5fd < 5) {
    return;
  }
  if (*(byte *)0x165c < 10) {
    *(undefined1 *)0x165e = 1;
    *(undefined1 *)0x562 = 7;
    FUN_1000_3f0f();
    cVar1 = '\n';
    do {
      FUN_1000_407c();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    cVar1 = '\0';
    do {
      FUN_1000_4044();
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\x14');
    *(undefined1 *)0x165c = 0x14;
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0e9d
// Entry:    1000:0e9d
// Body:     1000:0e9d -> 1000:0f58
// Size:     188 bytes
// Prototype: undefined __cdecl16near FUN_1000_0e9d()
// ============================================================================

void __cdecl16near FUN_1000_0e9d(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar5;
  uint uVar4;
  byte bVar6;
  byte bVar7;
  int in_BX;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x165f = 1;
  uVar2 = *(uint *)0x1634;
  bVar6 = (byte)uVar2 + 0x21;
  bVar5 = (byte)(uVar2 >> 8);
  bVar7 = bVar5 + 0x13;
  for (pbVar10 = (byte *)0x2783; (*pbVar10 & 0x80) != 0; pbVar10 = pbVar10 + 8) {
    pbVar1 = pbVar10 + 3;
    *pbVar1 = *pbVar1;
    if (*pbVar1 == 0) {
      if ((pbVar10[5] & 0x80) != 0) {
        pbVar10[5] = pbVar10[5] & 0x7f;
        uVar4 = uVar2;
        iVar8 = CONCAT11(bVar7,bVar6);
        FUN_1000_4db0();
        iVar9 = (uVar4 & 0xff) + 0x7c57;
        FUN_1000_4dc7();
        in_BX = iVar9 + iVar8;
        if ((*pbVar10 & 0x70) == 0) {
          FUN_1000_50be();
        }
        else {
          FUN_1000_50aa();
        }
      }
    }
    else {
      bVar3 = pbVar10[5];
      pbVar10[5] = pbVar10[5] & 0x7f;
      if ((bVar3 & 0x80) != 0) {
        FUN_1000_0f79(in_BX);
      }
      bVar3 = pbVar10[1] + 1;
      if (((((byte)uVar2 <= bVar3) && (bVar3 < bVar6)) && (bVar5 <= (byte)(pbVar10[2] + 1))) &&
         ((byte)(pbVar10[2] + 1) < bVar7)) {
        uVar4 = (uint)(byte)(bVar3 - (char)*(undefined2 *)0x1634);
        iVar8 = uVar4 + 0x75ab;
        FUN_1000_4dc7();
        in_BX = iVar8 + uVar4;
        FUN_1000_4ecb();
        LOCK();
        *(undefined1 *)0xdc47 = *(undefined1 *)0x165f;
        UNLOCK();
        FUN_1000_4f94();
      }
    }
    *(char *)0x165f = *(char *)0x165f + '\x01';
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0f79
// Entry:    1000:0f79
// Body:     1000:0f79 -> 1000:0f9a
// Size:     34 bytes
// Prototype: undefined __cdecl16near FUN_1000_0f79()
// ============================================================================

void __cdecl16near FUN_1000_0f79(void)

{
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  if (*(char *)0x16b4 != '\0') {
    return;
  }
  if (*(char *)0x74e7 != '\0') {
    return;
  }
  (*(code *)*(undefined2 *)((byte)((*unaff_SI & 0xf) * '\x02') + 0xf59))();
  return;
}



// ============================================================================
// Function: caseD_0
// Entry:    1000:168d
// Body:     1000:168d -> 1000:16a0
// Size:     20 bytes
// Prototype: undefined __cdecl16near caseD_0()
// ============================================================================

void __cdecl16near switchD_1000:0195::caseD_0(void)

{
  char *pcVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  bool bVar2;
  int in_stack_00000001;
  
  *(int *)(in_stack_00000001 + 0x13) = *(int *)(in_stack_00000001 + 0x13) + unaff_SI;
  pcVar1 = (char *)(unaff_SI + 1);
  *pcVar1 = *pcVar1 + '\x01';
  bVar2 = *pcVar1 == '\0';
  FUN_1000_1885();
  if (bVar2) {
    return;
  }
  FUN_1000_16a9();
  return;
}



// ============================================================================
// Function: FUN_1000_16a9
// Entry:    1000:16a9
// Body:     1000:16a9 -> 1000:16b3
// Size:     11 bytes
// Prototype: undefined __cdecl16near FUN_1000_16a9()
// ============================================================================

void __cdecl16near FUN_1000_16a9(void)

{
  byte in_BH;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) & 0xcf | in_BH;
  return;
}



// ============================================================================
// Function: FUN_1000_17f1
// Entry:    1000:17f1
// Body:     1000:17f1 -> 1000:183a
// Size:     74 bytes
// Prototype: undefined __cdecl16near FUN_1000_17f1()
// ============================================================================

char __cdecl16near FUN_1000_17f1(void)

{
  char cVar1;
  byte in_CL;
  int in_DX;
  int iVar2;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  if ((*unaff_SI & 0x70) == 0) {
    cVar1 = FUN_1000_19d9();
    return cVar1;
  }
  iVar2 = 0x7582;
  FUN_1000_4db0();
  if (in_CL == 0) {
    cVar1 = FUN_1000_50a5();
    return cVar1;
  }
  iVar2 = iVar2 + (uint)in_CL;
  FUN_1000_4dc7();
  cVar1 = *(char *)(iVar2 + in_DX);
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar1 = ((char *)(iVar2 + in_DX))[0x26];
  if (cVar1 != '\0') {
    return cVar1;
  }
  FUN_1000_50aa();
  unaff_SI[1] = unaff_SI[1] - 1;
  return '\0';
}



// ============================================================================
// Function: FUN_1000_1885
// Entry:    1000:1885
// Body:     1000:1885 -> 1000:18d9
// Size:     85 bytes
// Prototype: undefined __cdecl16near FUN_1000_1885()
// ============================================================================

char __cdecl16near FUN_1000_1885(void)

{
  char cVar1;
  uint in_CX;
  int in_DX;
  int iVar2;
  char *pcVar3;
  int unaff_SI;
  undefined2 unaff_DS;
  
  iVar2 = 0x7582;
  FUN_1000_4db0();
  if ((char)in_CX == '\0') {
    cVar1 = FUN_1000_50a5();
    return cVar1;
  }
  if ((char)(in_CX >> 8) == '\0') {
    cVar1 = FUN_1000_50a5();
    return cVar1;
  }
  iVar2 = iVar2 + (in_CX & 0xff);
  FUN_1000_4dc7();
  pcVar3 = (char *)(iVar2 + in_DX);
  if (*pcVar3 != '\0') {
    return *pcVar3;
  }
  if (pcVar3[-0x26] != '\0') {
    return pcVar3[-0x26];
  }
  if (pcVar3[-0x25] != '\0') {
    return pcVar3[-0x25];
  }
  FUN_1000_50aa();
  *(char *)(unaff_SI + 1) = *(char *)(unaff_SI + 1) + -1;
  *(char *)(unaff_SI + 2) = *(char *)(unaff_SI + 2) + -1;
  return '\0';
}



// ============================================================================
// Function: FUN_1000_192f
// Entry:    1000:192f
// Body:     1000:192f -> 1000:1983
// Size:     85 bytes
// Prototype: undefined __cdecl16near FUN_1000_192f()
// ============================================================================

char __cdecl16near FUN_1000_192f(void)

{
  char cVar1;
  uint in_CX;
  int in_DX;
  int iVar2;
  char *pcVar3;
  int unaff_SI;
  undefined2 unaff_DS;
  
  iVar2 = 0x75a8;
  FUN_1000_4db0();
  if ((char)in_CX == '\0') {
    cVar1 = FUN_1000_50a5();
    return cVar1;
  }
  if ((char)(in_CX >> 8) == '\x14') {
    cVar1 = FUN_1000_50a5();
    return cVar1;
  }
  iVar2 = iVar2 + (in_CX & 0xff);
  FUN_1000_4dc7();
  pcVar3 = (char *)(iVar2 + in_DX);
  if (*pcVar3 != '\0') {
    return *pcVar3;
  }
  if (pcVar3[0x26] != '\0') {
    return pcVar3[0x26];
  }
  if (pcVar3[0x27] != '\0') {
    return pcVar3[0x27];
  }
  FUN_1000_50aa();
  *(char *)(unaff_SI + 1) = *(char *)(unaff_SI + 1) + -1;
  *(char *)(unaff_SI + 2) = *(char *)(unaff_SI + 2) + '\x01';
  return '\0';
}



// ============================================================================
// Function: FUN_1000_19d9
// Entry:    1000:19d9
// Body:     1000:19d9 -> 1000:1a28
// Size:     80 bytes
// Prototype: undefined __cdecl16near FUN_1000_19d9()
// ============================================================================

char __cdecl16near FUN_1000_19d9(void)

{
  char cVar1;
  byte in_CL;
  int in_DX;
  int iVar2;
  char *pcVar3;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) & 0xf7;
  iVar2 = 0x7582;
  FUN_1000_4db0();
  if (in_CL == 0) {
    cVar1 = FUN_1000_50a5();
    return cVar1;
  }
  iVar2 = iVar2 + (uint)in_CL;
  FUN_1000_4dc7();
  pcVar3 = (char *)(iVar2 + in_DX);
  if (*pcVar3 != '\0') {
    return *pcVar3;
  }
  if (pcVar3[0x26] != '\0') {
    return pcVar3[0x26];
  }
  if (pcVar3[0x4c] != '\0') {
    return pcVar3[0x4c];
  }
  FUN_1000_50be();
  *(char *)(unaff_SI + 1) = *(char *)(unaff_SI + 1) + -1;
  return '\0';
}



// ============================================================================
// Function: thunk_FUN_1000_1ced
// Entry:    1000:1cc5
// Body:     1000:1cc5 -> 1000:1cc7
// Size:     3 bytes
// Prototype: undefined __cdecl16near thunk_FUN_1000_1ced()
// ============================================================================

void __cdecl16near thunk_FUN_1000_1ced(void)

{
  FUN_1000_1ced();
  return;
}



// ============================================================================
// Function: FUN_1000_1ced
// Entry:    1000:1ced
// Body:     1000:1ced -> 1000:2016
// Size:     810 bytes
// Prototype: undefined __cdecl16near FUN_1000_1ced()
// ============================================================================

void __cdecl16near FUN_1000_1ced(void)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 unaff_DS;
  undefined1 uVar8;
  
  (*(code *)*(undefined2 *)0x5b3)(0x1000);
  (*(code *)*(undefined2 *)0x5bf)(0x1000);
  (*(code *)*(undefined2 *)0x5af)(0x1000);
  puVar6 = (undefined1 *)0x16e1;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = 0;
  }
  if (*(char *)0x16b9 == '\0') {
    *(undefined1 *)0x1676 = 1;
  }
  if ((*(char *)0x1676 != '\x04') && (*(char *)0x5ef != '\0')) {
    puVar6 = (undefined1 *)0x5ef;
    puVar7 = (undefined1 *)0x5ff;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar4 = puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar4 = *puVar3;
    }
  }
  *(undefined1 *)0x16b4 = 0;
  *(undefined1 *)0x16b5 = 0;
  *(undefined1 *)0x16b6 = 0;
  *(undefined1 *)0x16b9 = 0;
  *(undefined2 *)0x1628 = 0x824;
  if (*(char *)0x1676 != '\x04') {
    *(undefined1 *)0x1676 = 1;
  }
  puVar6 = (undefined1 *)0x1661;
  iVar5 = 5;
  do {
    *puVar6 = 0xe;
    puVar6[1] = 7;
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  DAT_1000_4be1 = 0;
  do {
    uVar8 = *(char *)0x165e == '\0';
    if (!(bool)uVar8) {
      FUN_1000_3ed3();
    }
  } while (!(bool)uVar8);
  *(undefined1 *)0x562 = 0;
  *(undefined1 *)0x1670 = 0;
  *(undefined1 *)0x1674 = 0;
  *(undefined1 *)0x167a = *(undefined1 *)0x74e6;
  FUN_1000_42cb();
  FUN_1000_42cb();
  FUN_1000_42cb();
  *(undefined1 *)0x1689 = 1;
  FUN_1000_45da();
  FUN_1000_453a();
  *(undefined1 *)0x162d = 0;
  *(undefined1 *)0x1631 = 0;
  *(undefined1 *)0x166f = 0;
  puVar6 = (undefined1 *)0x7583;
  for (iVar5 = 0x36a; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = 0xf0;
  }
  puVar6 = (undefined1 *)0x78ed;
  for (iVar5 = 0x36a; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = 0;
  }
  puVar6 = (undefined1 *)0x832b;
  for (iVar5 = 0x36a; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = 0xff;
  }
  puVar6 = (undefined1 *)*(undefined2 *)0x1677;
  for (iVar5 = (uint)*(byte *)0x1679 << 3; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar3 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar3 = 0;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  DAT_1000_1bc9 = *(char *)0x5ef + '0';
  DAT_1000_5377 = DAT_1000_1bc9;
  DAT_1000_5413 = DAT_1000_1bc9;
  if (*(char *)0x1676 == '\x01') {
    FUN_1000_2278();
  }
  DAT_1000_5414 = 0x31;
  *(byte *)0x7453 = *(byte *)0x7453 | 2;
  if (*(char *)0x1676 != '\x04') {
    DAT_1000_5413 = *(char *)0x5ef + '0';
    FUN_1000_2138();
  }
  bVar1 = *(byte *)0x74ea;
  *(byte *)0x1627 = bVar1;
  *(bool *)0x162d = 0x1f < bVar1;
  if (*(char *)0x5ef != '\t') {
    FUN_1000_2138();
  }
  cVar2 = *(char *)0x5ef;
  if (('\x01' < cVar2) && (cVar2 < '\x05')) {
    DAT_1000_537d = cVar2 + '0';
    *(undefined1 *)0xf17e = 10;
    FUN_1000_218b();
  }
  if (*(char *)0x1676 == '\x04') {
    return;
  }
  puVar6 = (undefined1 *)0x164b;
  iVar5 = 8;
  do {
    *puVar6 = 0x30;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined2 *)0x1686 = 0x1703;
  FUN_1000_2138();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_4b37();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  *(undefined2 *)0x1686 = 0x6663;
  if (*(char *)0x5ef < '\b') {
    FUN_1000_3fd8();
  }
  else {
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  FUN_1000_3fd8();
  FUN_1000_3fd8();
  FUN_1000_3fd8();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_05f7();
  FUN_1000_3f7b();
  if (*(char *)0x5ef != '\t') {
    return;
  }
  if (*(char *)0x1676 != '\x02') {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2138
// Entry:    1000:2138
// Body:     1000:2138 -> 1000:216d
// Size:     53 bytes
// Prototype: undefined __cdecl16near FUN_1000_2138()
// ============================================================================

void __cdecl16near FUN_1000_2138(void)

{
  int in_DX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  DAT_1000_2039 = unaff_DS;
  DAT_1000_2052 = in_BX;
  DAT_1000_2054 = unaff_DS;
  FUN_1000_2312(in_DX + 1);
  return;
}



// ============================================================================
// Function: FUN_1000_216e
// Entry:    1000:216e
// Body:     1000:216e -> 1000:2188
// Size:     27 bytes
// Prototype: undefined __cdecl16near FUN_1000_216e()
// ============================================================================

void __cdecl16near FUN_1000_216e(void)

{
  char *pcVar1;
  char *pcVar2;
  char *in_DX;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)0x2056;
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar1 = in_DX;
    in_DX = in_DX + 1;
    *pcVar2 = *pcVar1;
  } while (*in_DX != '\0');
  *pcVar3 = '\0';
  FUN_1000_2138();
  return;
}



// ============================================================================
// Function: FUN_1000_218b
// Entry:    1000:218b
// Body:     1000:218b -> 1000:2193
// Size:     9 bytes
// Prototype: undefined FUN_1000_218b()
// ============================================================================

undefined2 FUN_1000_218b(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  int in_DX;
  undefined2 in_BX;
  undefined2 uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  bVar3 = false;
  if (*(char *)0x558 == '\0') {
    uVar1 = FUN_1000_2138();
    return uVar1;
  }
  DAT_1000_2052 = 0;
  DAT_1000_2035 = in_BX;
  FUN_1000_2312(in_DX + 1);
  uVar1 = DAT_1000_2035;
  if (bVar3) {
    uVar1 = FUN_1000_2214();
    return uVar1;
  }
  DAT_1000_2189 = DAT_1000_2054;
  uVar2 = unaff_DS;
  uVar6 = unaff_DS;
  uVar4 = FUN_1000_6ddc();
  uVar5 = (undefined2)uVar4;
  (*(code *)*(undefined2 *)0x5db)
            (0x1000,uVar5,uVar2,in_CX,(int)((ulong)uVar4 >> 0x10),uVar1,unaff_DS);
  return uVar5;
}



// ============================================================================
// Function: FUN_1000_2194
// Entry:    1000:2194
// Body:     1000:2194 -> 1000:21f0
// Size:     92 bytes
// Prototype: undefined __cdecl16near FUN_1000_2194()
// ============================================================================

undefined2 __cdecl16near FUN_1000_2194(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  int in_DX;
  undefined2 in_BX;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  DAT_1000_2052 = 0;
  DAT_1000_2035 = in_BX;
  FUN_1000_2312(in_DX + 1);
  uVar1 = DAT_1000_2035;
  if ((bool)in_CF) {
    uVar1 = FUN_1000_2214();
    return uVar1;
  }
  DAT_1000_2189 = DAT_1000_2054;
  uVar2 = unaff_DS;
  uVar5 = unaff_DS;
  uVar3 = FUN_1000_6ddc();
  uVar4 = (undefined2)uVar3;
  (*(code *)*(undefined2 *)0x5db)
            (0x1000,uVar4,uVar2,in_CX,(int)((ulong)uVar3 >> 0x10),uVar1,unaff_DS);
  return uVar4;
}



// ============================================================================
// Function: FUN_1000_21f1
// Entry:    1000:21f1
// Body:     1000:21f1 -> 1000:2213
// Size:     35 bytes
// Prototype: undefined FUN_1000_21f1()
// ============================================================================

void FUN_1000_21f1(void)

{
  char *pcVar1;
  char *pcVar2;
  char *in_DX;
  char *pcVar3;
  undefined2 unaff_DS;
  
  if (*(char *)0x558 == '\0') {
    FUN_1000_216e();
    return;
  }
  pcVar3 = (char *)0x2056;
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar1 = in_DX;
    in_DX = in_DX + 1;
    *pcVar2 = *pcVar1;
  } while (*in_DX != '\0');
  *pcVar3 = '\0';
  FUN_1000_2194();
  return;
}



// ============================================================================
// Function: FUN_1000_2214
// Entry:    1000:2214
// Body:     1000:2214 -> 1000:2277
// Size:     100 bytes
// Prototype: undefined FUN_1000_2214()
// ============================================================================

void FUN_1000_2214(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  int in_AX;
  char in_CL;
  int iVar4;
  undefined2 extraout_DX;
  undefined1 *puVar5;
  
  DAT_1000_20c9 = in_CL + '0';
  puVar5 = (undefined1 *)0x20b9;
  iVar4 = 0xf;
  do {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 1;
    uVar3 = DAT_1000_0014;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  DAT_1000_207b = *(undefined2 *)((byte)(((char)in_AX + -1) * '\x02') + 0x211d);
  (*(code *)*(undefined2 *)0x593)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000,extraout_DX);
  if (in_AX != 3) {
                    /* WARNING: Could not recover jumptable at 0x00012269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x58b)();
    return;
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00012274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x58b)();
  return;
}



// ============================================================================
// Function: FUN_1000_2278
// Entry:    1000:2278
// Body:     1000:2278 -> 1000:2311
// Size:     154 bytes
// Prototype: undefined __cdecl16near FUN_1000_2278()
// ============================================================================

undefined4 __cdecl16near FUN_1000_2278(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined2 in_stack_00000000;
  undefined2 uVar4;
  
  if (*(char *)(*(byte *)0x5ef + 0x2047) == DAT_1000_2046) {
    return CONCAT22(in_DX,in_AX);
  }
  DAT_1000_2046 = *(char *)(*(byte *)0x5ef + 0x2047);
  DAT_1000_2023 = DAT_1000_2046 + '0';
  s_RES1_SAR_1000_2028[3] = DAT_1000_2023;
  uVar4 = DAT_1000_0014;
  (*(code *)*(undefined2 *)0x59f)(0x1000);
  if (DAT_1000_2044 != 0) {
    (*(code *)*(undefined2 *)0x5db)(0x1000);
  }
  bVar2 = false;
  uVar1 = 0;
  (*pcRam000105cf)(0x1000,uVar4);
  if (!bVar2) {
    DAT_1000_2044 = uVar1;
    return CONCAT22(param_3,in_stack_00000000);
  }
  uVar3 = FUN_1000_2214();
  return uVar3;
}



// ============================================================================
// Function: FUN_1000_2312
// Entry:    1000:2312
// Body:     1000:2312 -> 1000:23b5
// Size:     164 bytes
// Prototype: undefined __cdecl16near FUN_1000_2312()
// ============================================================================

void __cdecl16near FUN_1000_2312(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if (DAT_1000_2044 == 0) {
    *(undefined1 *)0x5ef = 1;
    FUN_1000_2278();
  }
  FUN_1000_23b6();
  if (!(bool)uVar2) {
    if (DAT_1000_2052 == 0) {
      DAT_1000_2054 = (*(code *)*(undefined2 *)0x5d7)(0x1000,unaff_DS);
      DAT_1000_2052 = 0;
    }
    bVar3 = false;
    FUN_1000_2409();
    if ((!bVar3) && (FUN_1000_2450(), !bVar3)) {
      FUN_1000_24cb(DAT_1000_2052,DAT_1000_2054,0,unaff_DS);
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      DAT_1000_2033 = 0;
      return;
    }
  }
  FUN_1000_2214();
  return;
}



// ============================================================================
// Function: FUN_1000_23b6
// Entry:    1000:23b6
// Body:     1000:23b6 -> 1000:2408
// Size:     83 bytes
// Prototype: undefined __cdecl16near FUN_1000_23b6()
// ============================================================================

void __cdecl16near FUN_1000_23b6(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  char *in_DX;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_DS;
  bool bVar9;
  
  uVar3 = DAT_1000_2044;
  pcVar7 = (char *)0x0;
  pcVar6 = (char *)0x203b;
  iVar4 = 8;
  do {
    if (*in_DX == '\0') break;
    *pcVar6 = *in_DX;
    pcVar6 = pcVar6 + 1;
    in_DX = in_DX + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  bVar9 = iVar4 == 0;
  if (!bVar9) {
    do {
      *pcVar6 = ' ';
      pcVar6 = pcVar6 + 1;
      bVar9 = pcVar6 == (char *)0x0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *pcVar6 = '\0';
  }
  iVar4 = 0xec;
  do {
    iVar5 = 8;
    pcVar6 = (char *)0x203b;
    pcVar8 = pcVar7;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      bVar9 = *pcVar1 == *pcVar2;
    } while (bVar9);
    if (bVar9) {
      return;
    }
    pcVar7 = pcVar7 + 0x12;
    iVar4 = iVar4 + -1;
    bVar9 = false;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}



// ============================================================================
// Function: FUN_1000_2409
// Entry:    1000:2409
// Body:     1000:2409 -> 1000:244f
// Size:     71 bytes
// Prototype: undefined __cdecl16near FUN_1000_2409()
// ============================================================================

void __cdecl16near FUN_1000_2409(void)

{
  code *pcVar1;
  undefined1 in_CF;
  
  while( true ) {
    pcVar1 = (code *)swi(0x21);
    DAT_1000_2031 = (*pcVar1)();
    if ((!(bool)in_CF) || ((char)DAT_1000_2031 != '\x02')) break;
    DAT_1000_2046 = *(char *)(*(byte *)0x5ef + 0x2047);
    DAT_1000_2023 = DAT_1000_2046 + 0x30;
    in_CF = DAT_1000_2023 < 0x30;
    s_RES1_SAR_1000_2028[3] = DAT_1000_2023;
    (*(code *)*(undefined2 *)0x59f)();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2450
// Entry:    1000:2450
// Body:     1000:2450 -> 1000:24aa
// Size:     88 bytes
// Prototype: undefined __cdecl16near FUN_1000_2450()
// ============================================================================

void __cdecl16near FUN_1000_2450(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar3;
  
  bVar3 = (*(uint *)(unaff_DI + 2) >> 3 & 1) != 0;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (bVar3) {
    return;
  }
  pcVar1 = (code *)swi(0x21);
  DAT_1000_2033 = uVar2;
  (*pcVar1)();
  if (!bVar3) {
    bVar3 = false;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar3) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      return;
    }
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_24cb
// Entry:    1000:24cb
// Body:     1000:24cb -> 1000:252a
// Size:     96 bytes
// Prototype: undefined __cdecl16near FUN_1000_24cb()
// ============================================================================

undefined4 __cdecl16near FUN_1000_24cb(void)

{
  undefined2 in_DX;
  
  DAT_1000_24b9 = 9;
  DAT_1000_24b7 = 0;
  DAT_1000_24bb = 0x200;
  DAT_1000_24c7 = 0;
  DAT_1000_24c9 = 0;
  DAT_1000_24ab = 0;
  FUN_1000_252b();
  return CONCAT22(in_DX,DAT_1000_24ab);
}



// ============================================================================
// Function: FUN_1000_252b
// Entry:    1000:252b
// Body:     1000:252b -> 1000:2607
// Size:     221 bytes
// Prototype: undefined __cdecl16near FUN_1000_252b()
// ============================================================================

void __cdecl16near FUN_1000_252b(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  pcVar1 = (code *)swi(0x21);
  DAT_1000_24ad = (*pcVar1)();
  while (puVar3 = (undefined2 *)FUN_1000_2608(), uVar2 = DAT_1000_24ad,
        puVar3 != (undefined2 *)0x101) {
    if (puVar3 == (undefined2 *)0x100) {
      FUN_1000_2653();
      DAT_1000_24af = (undefined2 *)FUN_1000_2608();
      DAT_1000_24bd = SUB21(DAT_1000_24af,0);
      DAT_1000_24b1 = DAT_1000_24af;
      DAT_1000_24be = DAT_1000_24bd;
      FUN_1000_2669();
    }
    else {
      DAT_1000_24af = puVar3;
      DAT_1000_24b3 = puVar3;
      if (DAT_1000_24b5 <= puVar3) {
        DAT_1000_24af = DAT_1000_24b1;
        DAT_1000_24b7 = DAT_1000_24b7 + 1;
      }
      for (; (undefined2 *)0xff < DAT_1000_24af; DAT_1000_24af = (undefined2 *)*DAT_1000_24af) {
        FUN_1000_2683();
        DAT_1000_24b7 = DAT_1000_24b7 + 1;
      }
      DAT_1000_24bd = SUB21(DAT_1000_24af,0);
      iVar4 = DAT_1000_24b7 + 1;
      DAT_1000_24be = DAT_1000_24bd;
      DAT_1000_24b7 = iVar4;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        FUN_1000_2669();
      }
      DAT_1000_24b7 = iVar4;
      FUN_1000_268c();
      DAT_1000_24b1 = DAT_1000_24b3;
      if ((DAT_1000_24bb <= DAT_1000_24b5) && (DAT_1000_24b9 != 0xc)) {
        DAT_1000_24b9 = DAT_1000_24b9 + 1;
        DAT_1000_24bb = (undefined2 *)((int)DAT_1000_24bb << 1);
      }
    }
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ============================================================================
// Function: FUN_1000_2608
// Entry:    1000:2608
// Body:     1000:2608 -> 1000:2652
// Size:     75 bytes
// Prototype: undefined __cdecl16near FUN_1000_2608()
// ============================================================================

uint __cdecl16near FUN_1000_2608(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int unaff_BP;
  undefined2 unaff_SS;
  byte bVar6;
  
  iVar1 = DAT_1000_24c9;
  iVar5 = DAT_1000_24c7;
  uVar3 = DAT_1000_24c7 + DAT_1000_24b9;
  LOCK();
  DAT_1000_24c7 = uVar3 & 7;
  UNLOCK();
  LOCK();
  DAT_1000_24c9 = (uVar3 >> 3) + DAT_1000_24c9;
  UNLOCK();
  puVar4 = (uint *)(iVar1 + *(int *)(unaff_BP + 8));
  uVar3 = *puVar4;
  bVar2 = (byte)puVar4[1];
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    bVar6 = bVar2 & 1;
    bVar2 = bVar2 >> 1;
    uVar3 = uVar3 >> 1 | (uint)bVar6 << 0xf;
  }
  return uVar3 & *(uint *)((DAT_1000_24b9 + -9) * 2 + 0x24bf);
}



// ============================================================================
// Function: FUN_1000_2653
// Entry:    1000:2653
// Body:     1000:2653 -> 1000:2668
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_2653()
// ============================================================================

void __cdecl16near FUN_1000_2653(void)

{
  DAT_1000_24b9 = 9;
  DAT_1000_24bb = 0x200;
  DAT_1000_24b5 = 0x102;
  return;
}



// ============================================================================
// Function: FUN_1000_2669
// Entry:    1000:2669
// Body:     1000:2669 -> 1000:2681
// Size:     25 bytes
// Prototype: undefined __cdecl16near FUN_1000_2669()
// ============================================================================

void __cdecl16near FUN_1000_2669(void)

{
  undefined1 in_AL;
  int unaff_BP;
  undefined2 unaff_SS;
  
  *(undefined1 *)(DAT_1000_24ab + *(int *)(unaff_BP + 4)) = in_AL;
  DAT_1000_24ab = DAT_1000_24ab + 1;
  return;
}



// ============================================================================
// Function: FUN_1000_2683
// Entry:    1000:2683
// Body:     1000:2683 -> 1000:268b
// Size:     9 bytes
// Prototype: undefined __cdecl16near FUN_1000_2683()
// ============================================================================

void __cdecl16near FUN_1000_2683(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_268c
// Entry:    1000:268c
// Body:     1000:268c -> 1000:26af
// Size:     36 bytes
// Prototype: undefined __cdecl16near FUN_1000_268c()
// ============================================================================

void __cdecl16near FUN_1000_268c(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_1000_24b5;
  FUN_1000_2683();
  uVar1 = DAT_1000_24ad;
  *(undefined1 *)(puVar2 + 1) = DAT_1000_24be;
  *puVar2 = DAT_1000_24b1;
  DAT_1000_24b5 = (undefined2 *)((int)DAT_1000_24b5 + 1);
  return;
}



// ============================================================================
// Function: FUN_1000_26b0
// Entry:    1000:26b0
// Body:     1000:26b0 -> 1000:26e4
// Size:     53 bytes
// Prototype: undefined __cdecl16near FUN_1000_26b0()
// ============================================================================

void __cdecl16near FUN_1000_26b0(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (DAT_1000_270a != 0) {
    (*(code *)*(undefined2 *)0x5db)(0x1000);
  }
  if (DAT_1000_2044 != 0) {
    (*(code *)*(undefined2 *)0x5db)(0x1000);
  }
  if (DAT_1000_2033 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_270c
// Entry:    1000:270c
// Body:     1000:270c -> 1000:27aa
// Size:     159 bytes
// Prototype: undefined FUN_1000_270c()
// ============================================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_270c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar17;
  
  FUN_1000_2a4c();
  if ((*(char *)0x5ef == '\t') && (*(char *)0x1676 == '\x02')) {
    DAT_1000_2a80 = '\x01';
    iVar11 = *(int *)0xf183;
    *(undefined1 *)0x1621 = 0xff;
    *(undefined2 *)(iVar11 + -2) = 0x2730;
    FUN_1000_5c21();
    uVar10 = ((undefined2 *)0x5ab)[1];
    pcVar5 = (code *)*(undefined2 *)0x5ab;
    *(undefined2 *)(iVar11 + -2) = 0x1000;
    puVar12 = (undefined1 *)(iVar11 + -4);
    *(undefined2 *)(iVar11 + -4) = 0x2738;
    (*pcVar5)();
    while (DAT_1000_2a80 == '\0') {
      *(undefined2 *)0x167b = *(undefined2 *)0x1634;
      *(undefined2 *)(puVar12 + -2) = 0x2ad6;
      FUN_1000_480d();
      *(undefined2 *)(puVar12 + -2) = 0x2ad9;
      FUN_1000_0621();
      *(undefined2 *)(puVar12 + -2) = 0x2adc;
      uVar9 = FUN_1000_48e2();
      *(undefined1 *)0x1690 = uVar9;
      *(undefined2 *)(puVar12 + -2) = 0x2ae2;
      FUN_1000_6bd8();
      *(undefined2 *)(puVar12 + -2) = 0x2ae5;
      FUN_1000_6c7c();
      *(undefined2 *)(puVar12 + -2) = 0x2ae8;
      FUN_1000_3074();
      *(undefined2 *)(puVar12 + -2) = 0x2aeb;
      FUN_1000_3a42();
      *(undefined2 *)(puVar12 + -2) = 0x2aee;
      FUN_1000_6870();
      *(undefined2 *)(puVar12 + -2) = 0x2af1;
      FUN_1000_0634();
      *(undefined2 *)(puVar12 + -2) = 0x2af4;
      FUN_1000_2c00();
      *(undefined2 *)(puVar12 + -2) = 10999;
      FUN_1000_060e();
      *(undefined2 *)(puVar12 + -2) = 0x2afa;
      FUN_1000_40e0();
      *(undefined2 *)(puVar12 + -2) = 0x2afd;
      FUN_1000_6cbc();
      *(undefined2 *)(puVar12 + -2) = 0x2b00;
      FUN_1000_0e9d();
      *(undefined2 *)(puVar12 + -2) = 0x2b03;
      FUN_1000_4c64();
      pcVar4 = DAT_1000_49a0;
      puVar13 = puVar12 + -2;
      *(undefined2 *)(puVar12 + -2) = 0x2b08;
      (*pcVar4)();
      *(undefined2 *)(puVar13 + -2) = 0x2b0b;
      FUN_1000_0702();
      *(undefined2 *)(puVar13 + -2) = 0x2b0e;
      FUN_1000_0621();
      *(undefined2 *)(puVar13 + -2) = 0x2b11;
      FUN_1000_5460();
      *(undefined2 *)(puVar13 + -2) = 0x2b14;
      FUN_1000_6954();
      *(undefined2 *)(puVar13 + -2) = 0x2b17;
      FUN_1000_5745();
      *(undefined2 *)(puVar13 + -2) = 0x2b1a;
      FUN_1000_557f();
      *(undefined2 *)(puVar13 + -2) = 0x2b1d;
      FUN_1000_0a1b();
      *(undefined2 *)(puVar13 + -2) = 0x2b20;
      FUN_1000_0836();
      *(undefined2 *)(puVar13 + -2) = 0x2b23;
      FUN_1000_6cca();
      *(undefined2 *)(puVar13 + -2) = 0x2b26;
      FUN_1000_0bc3();
      *(undefined2 *)(puVar13 + -2) = 0x2b29;
      FUN_1000_6d99();
      pcVar4 = DAT_1000_49a2;
      puVar12 = puVar13 + -2;
      *(undefined2 *)(puVar13 + -2) = 0x2b2e;
      (*pcVar4)();
      *(undefined2 *)(puVar12 + -2) = 0x2b31;
      FUN_1000_4be6();
      *(undefined2 *)(puVar12 + -2) = 0x2b34;
      FUN_1000_4c91();
      if (*(char *)0x16b6 == '\0') {
        *(undefined2 *)(puVar12 + -2) = 0x2b3e;
        FUN_1000_3ed3();
      }
      *(undefined2 *)(puVar12 + -2) = 0x2b41;
      FUN_1000_6d20();
      *(undefined2 *)(puVar12 + -2) = 0x2b44;
      FUN_1000_3f7b();
      if (*(char *)0x167d == '\0') {
        *(undefined2 *)(puVar12 + -2) = 0x2b4e;
        FUN_1000_2b5b();
      }
      if ((*(byte *)0x56f & 1) == 0) {
        *(undefined2 *)(puVar12 + -2) = 0x2b58;
        FUN_1000_4782();
      }
    }
    FUN_1000_2b74();
    return;
  }
  if (*(char *)0x1676 == '\x04') {
    (*(code *)*(undefined2 *)0x5ab)(0x1000);
    *(undefined1 *)0x1621 = 0xff;
  }
  DAT_1000_540c = DAT_1000_540c + '\x01';
  DAT_1000_5414 = DAT_1000_5414 + '\x01';
  FUN_1000_2138();
  if (*(char *)0x1676 == '\x04') {
    puVar14 = (undefined1 *)0x5ef;
    *(undefined1 *)0x750c = 0;
    puVar15 = (undefined1 *)0x750d;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar2 = puVar15;
      puVar15 = puVar15 + 1;
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar1;
    }
    puVar14 = (undefined1 *)0x540b;
    for (iVar11 = 2; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar2 = puVar15;
      puVar15 = puVar15 + 1;
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar1;
    }
    puVar14 = (undefined1 *)0x164b;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar2 = puVar15;
      puVar15 = puVar15 + 1;
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar1;
    }
    puVar14 = (undefined1 *)0x163b;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      puVar2 = puVar15;
      puVar15 = puVar15 + 1;
      puVar1 = puVar14;
      puVar14 = puVar14 + 1;
      *puVar2 = *puVar1;
    }
  }
  bVar17 = false;
  *(undefined1 *)0x1671 = 0;
  pcVar4 = (code *)swi(0x21);
  uVar10 = (*pcVar4)();
  if (bVar17) {
    FUN_1000_29f6();
    uVar10 = unaff_ES;
  }
  else {
    if (*(char *)0x59b != -1) {
                    /* WARNING: Could not recover jumptable at 0x000127c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
  }
  bVar7 = *(byte *)0x7453;
  if ((bVar7 & 1) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar7;
    UNLOCK();
    if (*(char *)0x558 == '\0') {
      FUN_1000_216e();
      bVar6 = FUN_1000_48ad();
    }
    else {
      *(undefined1 *)0xf17e = 4;
      bVar6 = FUN_1000_21f1();
    }
    LOCK();
    bVar7 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar6;
    UNLOCK();
  }
  if ((bVar7 & 0x10) != 0) {
    FUN_1000_216e();
    (*(code *)*(undefined2 *)0x58f)();
    uVar10 = unaff_DS;
    if (*(char *)0x1683 != '\0') {
      FUN_1000_2960();
    }
  }
  puVar16 = (undefined2 *)0x2783;
  for (iVar11 = 0x2ff; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar3 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar3 = 0;
  }
  if ((bVar7 & 0x20) != 0) {
    FUN_1000_216e();
    FUN_1000_4666();
  }
  if ((bVar7 & 4) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar7;
    UNLOCK();
    *(undefined1 *)0xf17e = 8;
    bVar6 = FUN_1000_21f1();
    LOCK();
    bVar7 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar6;
    UNLOCK();
  }
  if ((bVar7 & 2) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar7;
    UNLOCK();
    *(undefined1 *)0xf17e = 5;
    bVar6 = FUN_1000_21f1();
    LOCK();
    bVar7 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar6;
    UNLOCK();
  }
  if ((bVar7 & 8) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar7;
    UNLOCK();
    bVar6 = FUN_1000_216e();
    LOCK();
    bVar7 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar6;
    UNLOCK();
  }
  if ((bVar7 & 0x40) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar7;
    UNLOCK();
    uVar9 = 0;
    if (DAT_1000_270a != 0) {
      (*(code *)*(undefined2 *)0x5db)();
    }
    iVar11 = 0;
    FUN_1000_216e();
    if ((bool)uVar9) {
      FUN_1000_2a63();
      return;
    }
    DAT_1000_2be7 = 0;
    DAT_1000_2beb = 3;
    DAT_1000_2bef = 6;
    DAT_1000_270a = iVar11;
    DAT_1000_2be9 = iVar11;
    DAT_1000_2bed = iVar11;
    DAT_1000_2bf1 = iVar11;
    *(undefined1 *)0x1671 = 1;
    LOCK();
    *(undefined1 *)0xdc47 = 1;
    UNLOCK();
  }
  FUN_1000_29b7();
  puVar14 = (undefined1 *)0x7583;
  for (iVar11 = 0x369; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar1 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar1 = 0xf0;
  }
  if (*(char *)0x1671 != '\0') {
    (*(code *)*(undefined2 *)0x2beb)();
  }
  *(undefined1 *)0x1634 = *(undefined1 *)0x74dc;
  *(undefined1 *)0x1635 = *(undefined1 *)0x74dd;
  *(undefined1 *)0x162a = *(undefined1 *)0x74de;
  FUN_1000_6c5f();
  *(undefined1 *)0x167a = *(undefined1 *)0x74e6;
  cVar8 = *(char *)0x1683;
  if (cVar8 == '\0') {
    cVar8 = *(char *)0x74e9;
  }
  *(char *)0x1656 = cVar8;
  (*(code *)*(undefined2 *)0x508)();
  (*(code *)*(undefined2 *)0x508)();
  return;
}



// ============================================================================
// Function: FUN_1000_27ab
// Entry:    1000:27ab
// Body:     1000:27ab -> 1000:295f
// Size:     437 bytes
// Prototype: undefined __cdecl16near FUN_1000_27ab()
// ============================================================================

void __cdecl16near FUN_1000_27ab(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar11;
  undefined1 uVar12;
  
  bVar11 = false;
  *(undefined1 *)0x1671 = 0;
  pcVar3 = (code *)swi(0x21);
  uVar7 = (*pcVar3)();
  if (bVar11) {
    FUN_1000_29f6();
    uVar7 = unaff_ES;
  }
  else {
    if (*(char *)0x59b != -1) {
                    /* WARNING: Could not recover jumptable at 0x000127c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
  }
  bVar5 = *(byte *)0x7453;
  if ((bVar5 & 1) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar5;
    UNLOCK();
    if (*(char *)0x558 == '\0') {
      FUN_1000_216e();
      bVar4 = FUN_1000_48ad();
    }
    else {
      *(undefined1 *)0xf17e = 4;
      bVar4 = FUN_1000_21f1();
    }
    LOCK();
    bVar5 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar4;
    UNLOCK();
  }
  if ((bVar5 & 0x10) != 0) {
    FUN_1000_216e();
    (*(code *)*(undefined2 *)0x58f)();
    uVar7 = unaff_DS;
    if (*(char *)0x1683 != '\0') {
      FUN_1000_2960();
    }
  }
  puVar9 = (undefined2 *)0x2783;
  for (iVar8 = 0x2ff; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = 0;
  }
  if ((bVar5 & 0x20) != 0) {
    FUN_1000_216e();
    FUN_1000_4666();
  }
  if ((bVar5 & 4) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar5;
    UNLOCK();
    *(undefined1 *)0xf17e = 8;
    bVar4 = FUN_1000_21f1();
    LOCK();
    bVar5 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar4;
    UNLOCK();
  }
  if ((bVar5 & 2) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar5;
    UNLOCK();
    *(undefined1 *)0xf17e = 5;
    bVar4 = FUN_1000_21f1();
    LOCK();
    bVar5 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar4;
    UNLOCK();
  }
  if ((bVar5 & 8) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar5;
    UNLOCK();
    bVar4 = FUN_1000_216e();
    LOCK();
    bVar5 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar4;
    UNLOCK();
  }
  if ((bVar5 & 0x40) != 0) {
    LOCK();
    *(byte *)0xdc47 = bVar5;
    UNLOCK();
    uVar12 = 0;
    if (DAT_1000_270a != 0) {
      (*(code *)*(undefined2 *)0x5db)();
    }
    iVar8 = 0;
    FUN_1000_216e();
    if ((bool)uVar12) {
      FUN_1000_2a63();
      return;
    }
    DAT_1000_2be7 = 0;
    DAT_1000_2beb = 3;
    DAT_1000_2bef = 6;
    DAT_1000_270a = iVar8;
    DAT_1000_2be9 = iVar8;
    DAT_1000_2bed = iVar8;
    DAT_1000_2bf1 = iVar8;
    *(undefined1 *)0x1671 = 1;
    LOCK();
    *(undefined1 *)0xdc47 = 1;
    UNLOCK();
  }
  FUN_1000_29b7();
  puVar10 = (undefined1 *)0x7583;
  for (iVar8 = 0x369; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar1 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar1 = 0xf0;
  }
  if (*(char *)0x1671 != '\0') {
    (*(code *)*(undefined2 *)0x2beb)();
  }
  *(undefined1 *)0x1634 = *(undefined1 *)0x74dc;
  *(undefined1 *)0x1635 = *(undefined1 *)0x74dd;
  *(undefined1 *)0x162a = *(undefined1 *)0x74de;
  FUN_1000_6c5f();
  *(undefined1 *)0x167a = *(undefined1 *)0x74e6;
  cVar6 = *(char *)0x1683;
  if (cVar6 == '\0') {
    cVar6 = *(char *)0x74e9;
  }
  *(char *)0x1656 = cVar6;
  (*(code *)*(undefined2 *)0x508)();
  (*(code *)*(undefined2 *)0x508)();
  return;
}



// ============================================================================
// Function: FUN_1000_2960
// Entry:    1000:2960
// Body:     1000:2960 -> 1000:29aa
// Size:     75 bytes
// Prototype: undefined __cdecl16near FUN_1000_2960()
// ============================================================================

void __cdecl16near FUN_1000_2960(void)

{
  byte bVar1;
  int iVar2;
  byte extraout_DH;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0x2400;
  if (*(char *)0x1676 == '\x04') {
    iVar2 = 0x1200;
  }
  pbVar3 = (byte *)0x8695;
  do {
    FUN_1000_29ab();
    bVar1 = FUN_1000_29ab();
    *pbVar3 = extraout_DH & 0xf0 | bVar1;
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_29ab
// Entry:    1000:29ab
// Body:     1000:29ab -> 1000:29b6
// Size:     12 bytes
// Prototype: undefined __cdecl16near FUN_1000_29ab()
// ============================================================================

undefined2 __cdecl16near FUN_1000_29ab(void)

{
  uint in_AX;
  undefined1 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined1 *)((in_AX & 0xff) + 0x74fc);
  return CONCAT11((char)((uint)puVar1 >> 8),*puVar1);
}



// ============================================================================
// Function: FUN_1000_29b7
// Entry:    1000:29b7
// Body:     1000:29b7 -> 1000:29da
// Size:     35 bytes
// Prototype: undefined __cdecl16near FUN_1000_29b7()
// ============================================================================

void __cdecl16near FUN_1000_29b7(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1657 == '\0') {
    return;
  }
  if ((*(char *)0x1657 - 1U & 1) != 0) {
    *(undefined1 *)0x74e4 = 10;
    *(undefined1 *)0x74e5 = 10;
    return;
  }
  *(undefined1 *)0x74e4 = 2;
  *(undefined1 *)0x74e5 = 2;
  return;
}



// ============================================================================
// Function: FUN_1000_29f6
// Entry:    1000:29f6
// Body:     1000:29f6 -> 1000:2a00
// Size:     11 bytes
// Prototype: undefined __cdecl16near FUN_1000_29f6()
// ============================================================================

void __cdecl16near FUN_1000_29f6(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x593)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_2a01
// Entry:    1000:2a01
// Body:     1000:2a01 -> 1000:2a0c
// Size:     12 bytes
// Prototype: undefined __cdecl16near FUN_1000_2a01()
// ============================================================================

undefined2 __cdecl16near FUN_1000_2a01(undefined2 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return param_1;
}



// ============================================================================
// Function: FUN_1000_2a4c
// Entry:    1000:2a4c
// Body:     1000:2a4c -> 1000:2a62
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_2a4c()
// ============================================================================

void __cdecl16near FUN_1000_2a4c(void)

{
  code *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x16);
  uVar2 = (*pcVar1)();
  if ((uVar2 & 0x20) == 0) {
    return;
  }
  (*(code *)*(undefined2 *)0x593)();
  return;
}



// ============================================================================
// Function: FUN_1000_2a63
// Entry:    1000:2a63
// Body:     1000:2a63 -> 1000:2a77
// Size:     21 bytes
// Prototype: undefined FUN_1000_2a63()
// ============================================================================

void FUN_1000_2a63(void)

{
  undefined2 uVar1;
  
  uVar1 = DAT_1000_0014;
  (*(code *)*(undefined2 *)0x593)(0x1000);
                    /* WARNING: Could not recover jumptable at 0x00012a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x58b)();
  return;
}



// ============================================================================
// Function: FUN_1000_2a81
// Entry:    1000:2a81
// Body:     1000:2a81 -> 1000:2b5a
// Size:     218 bytes
// Prototype: undefined FUN_1000_2a81()
// ============================================================================

void FUN_1000_2a81(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  FUN_1000_4649();
  FUN_1000_27ab();
  FUN_1000_49b8();
  FUN_1000_3f7b();
  FUN_1000_42cb();
  FUN_1000_42cb();
  FUN_1000_42cb();
  FUN_1000_4008();
  FUN_1000_05f7();
  FUN_1000_402d();
  FUN_1000_3f44();
  FUN_1000_45da();
  *(undefined1 *)0x16b6 = 1;
  *(undefined1 *)0x167d = 0;
  while (DAT_1000_2a80 == '\0') {
    *(undefined2 *)0x167b = *(undefined2 *)0x1634;
    FUN_1000_480d();
    FUN_1000_0621();
    uVar1 = FUN_1000_48e2();
    *(undefined1 *)0x1690 = uVar1;
    FUN_1000_6bd8();
    FUN_1000_6c7c();
    FUN_1000_3074();
    FUN_1000_3a42();
    FUN_1000_6870();
    FUN_1000_0634();
    FUN_1000_2c00();
    FUN_1000_060e();
    FUN_1000_40e0();
    FUN_1000_6cbc();
    FUN_1000_0e9d();
    FUN_1000_4c64();
    (*DAT_1000_49a0)();
    FUN_1000_0702();
    FUN_1000_0621();
    FUN_1000_5460();
    FUN_1000_6954();
    FUN_1000_5745();
    FUN_1000_557f();
    FUN_1000_0a1b();
    FUN_1000_0836();
    FUN_1000_6cca();
    FUN_1000_0bc3();
    FUN_1000_6d99();
    (*DAT_1000_49a2)();
    FUN_1000_4be6();
    FUN_1000_4c91();
    if (*(char *)0x16b6 == '\0') {
      FUN_1000_3ed3();
    }
    FUN_1000_6d20();
    FUN_1000_3f7b();
    if (*(char *)0x167d == '\0') {
      FUN_1000_2b5b();
    }
    if ((*(byte *)0x56f & 1) == 0) {
      FUN_1000_4782();
    }
  }
  FUN_1000_2b74();
  return;
}



// ============================================================================
// Function: FUN_1000_2b5b
// Entry:    1000:2b5b
// Body:     1000:2b5b -> 1000:2b73
// Size:     25 bytes
// Prototype: undefined __cdecl16near FUN_1000_2b5b()
// ============================================================================

void __cdecl16near FUN_1000_2b5b(void)

{
  char in_AL;
  undefined2 unaff_DS;
  
  *(char *)0x167d = in_AL + '\x01';
  *(undefined1 *)0x16b6 = 0;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_2b74
// Entry:    1000:2b74
// Body:     1000:2b74 -> 1000:2be6
// Size:     115 bytes
// Prototype: undefined FUN_1000_2b74()
// ============================================================================

void FUN_1000_2b74(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  do {
    do {
      *(undefined2 *)0x167b = *(undefined2 *)0x1634;
      FUN_1000_480d();
      FUN_1000_0621();
      uVar1 = FUN_1000_48e2();
      *(undefined1 *)0x1690 = uVar1;
      FUN_1000_3074();
      FUN_1000_3a42();
      FUN_1000_58c0();
      FUN_1000_2c00();
      FUN_1000_40e0();
      FUN_1000_5d97();
      (*DAT_1000_49a0)();
      FUN_1000_0702();
      FUN_1000_0621();
      FUN_1000_5460();
      FUN_1000_6954();
      FUN_1000_5745();
      FUN_1000_557f();
      FUN_1000_0a1b();
      FUN_1000_0836();
      FUN_1000_59fb();
      FUN_1000_0bc3();
      FUN_1000_6d99();
      (*DAT_1000_49a2)();
      FUN_1000_4be6();
      FUN_1000_4c91();
      if (*(char *)0x16b6 == '\0') {
        FUN_1000_3ed3();
      }
      FUN_1000_6d20();
      FUN_1000_3f7b();
    } while ((*(byte *)0x56f & 1) != 0);
    FUN_1000_4782();
  } while( true );
}



// ============================================================================
// Function: FUN_1000_2c00
// Entry:    1000:2c00
// Body:     1000:2c00 -> 1000:2cbc
// Size:     188 bytes
// Prototype: undefined __cdecl16near FUN_1000_2c00()
// ============================================================================

void __cdecl16near FUN_1000_2c00(void)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined2 unaff_DS;
  
  iVar7 = CONCAT11(*(undefined1 *)0x162a,*(char *)0x1634 + '\x0e');
  if (*(int *)0x1669 == iVar7) {
    uVar8 = *(undefined2 *)0x1663;
    uVar5 = 0;
  }
  else {
    puVar9 = (undefined1 *)0x1663;
    puVar10 = (undefined1 *)0x1661;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar4 = puVar10;
      puVar10 = puVar10 + 1;
      puVar3 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar4 = *puVar3;
    }
    *(int *)0x1669 = iVar7;
    uVar8 = *(undefined2 *)0x1661;
    uVar5 = 1;
    bVar1 = *(byte *)0x1627;
    if ((((7 < bVar1) && (uVar5 = 2, 0xf < bVar1)) && (uVar5 = 0, 0x1f < bVar1)) &&
       (((uVar5 = 1, 0x23 < bVar1 && (uVar5 = 0, bVar1 != 0x24)) &&
        ((bVar1 != 0x2c && (uVar5 = 2, 0x2b < bVar1)))))) {
      uVar5 = 1;
    }
  }
  *(undefined1 *)0x166c = uVar5;
  if (*(char *)0x166b != '\0') {
    *(undefined2 *)0x166d = CONCAT11((char)((uint)uVar8 >> 8) + '\x01',(char)uVar8);
    puVar9 = (undefined1 *)0x78ed;
    FUN_1000_4de0();
    cVar2 = *(char *)0x166c;
    *puVar9 = *(undefined1 *)((byte)(cVar2 * '\x02') + 0xe243);
    puVar9[1] = *(undefined1 *)((byte)(cVar2 * '\x02') + 0xe244);
    puVar9[0xa3f] = puVar9[0xa3f] | 0x44;
    puVar9[0xa3e] = puVar9[0xa3e] | 0x44;
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2d0d
// Entry:    1000:2d0d
// Body:     1000:2d0d -> 1000:2e70
// Size:     355 bytes
// Prototype: undefined __cdecl16far FUN_1000_2d0d()
// ============================================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 __cdecl16far FUN_1000_2d0d(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  
  if (*(char *)0x5ef == '\0') {
    uVar5 = FUN_1000_2e71();
    return uVar5;
  }
  DAT_1000_2d08 = 0;
  *(undefined1 *)0x16b6 = 0;
  *(undefined1 *)0x16b4 = 0;
  *(undefined1 *)0x16b5 = 0;
  (*(code *)*(undefined2 *)0x508)();
  if (*(char *)0x5ff == '\n') {
    *(char *)0x5ff = *(char *)0x5ff + -1;
  }
  if (*(char *)0x1671 != '\0') {
    (*(code *)*(undefined2 *)0x2bef)();
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  while( true ) {
    do {
      if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00012d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)(ulong)*(uint *)0x58b)();
        return uVar5;
      }
      bVar3 = FUN_1000_48e2();
    } while (bVar3 == 0);
    do {
      cVar4 = FUN_1000_48e2();
    } while (cVar4 != '\0');
    if ((bVar3 & 0x40) != 0) break;
    DAT_1000_2d08 = DAT_1000_2d08 ^ 1;
    if (DAT_1000_2d08 == 0) {
      (*(code *)*(undefined2 *)0x508)();
      (*(code *)*(undefined2 *)0x508)();
    }
    else {
      (*(code *)*(undefined2 *)0x508)();
      (*(code *)*(undefined2 *)0x508)();
    }
  }
  if (DAT_1000_2d08 != 0) {
    if (*(char *)0x5ef == '\0') {
      puVar7 = (undefined1 *)0x5ff;
      puVar8 = (undefined1 *)0x5ef;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + 1;
        *puVar2 = *puVar1;
      }
    }
    (*(code *)*(undefined2 *)0x5b3)();
    (*(code *)*(undefined2 *)0x5bf)();
    (*(code *)*(undefined2 *)0x5af)();
    *(undefined1 *)0x16b9 = 0;
    (*(code *)*(undefined2 *)0x508)();
    (*(code *)*(undefined2 *)0x508)();
    (*(code *)*(undefined2 *)0x508)();
    (*(code *)*(undefined2 *)0x508)();
    FUN_1000_26b0();
    *(undefined2 *)0x57e = 0;
    *(undefined2 *)0x580 = 0;
    FUN_1000_2a01();
    return CONCAT11((char)((uint)*(undefined2 *)0xf183 >> 8),1);
  }
  uVar5 = FUN_1000_2e71();
  return uVar5;
}



// ============================================================================
// Function: FUN_1000_2e71
// Entry:    1000:2e71
// Body:     1000:2e71 -> 1000:2f91
// Size:     289 bytes
// Prototype: undefined FUN_1000_2e71()
// ============================================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_1000_2e71(void)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (*(char *)0x5ef == '\0') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x5af)(0x1000);
    *(undefined1 *)0x1626 = 2;
    FUN_1000_26b0();
    *(undefined2 *)0x57e = 0;
    *(undefined2 *)0x580 = 0;
    FUN_1000_2a01();
    return CONCAT11((char)((uint)*(undefined2 *)0xf183 >> 8),1);
  }
  *(undefined1 *)0x167e = 0;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_4649();
  *(undefined1 *)0x16b9 = 1;
  *(undefined1 *)0x1689 = 1;
  FUN_1000_45da();
  FUN_1000_453a();
  cVar1 = *(char *)0x5ef;
  if (cVar1 == '\n') {
    cVar1 = FUN_1000_2fe0();
  }
  bVar2 = *(byte *)0x1676;
  if ((cVar1 == '\t') && (1 < bVar2)) {
    bVar2 = FUN_1000_2fe0();
  }
  if (bVar2 == 4) {
    FUN_1000_2f92();
  }
  FUN_1000_301c();
  FUN_1000_3f7b();
  thunk_FUN_1000_1ced();
  FUN_1000_402d();
  if (*(char *)0x1676 != '\x04') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  *(undefined1 *)0xf17e = 0;
  FUN_1000_218b();
  FUN_1000_2138();
  if (*(char *)0x1676 != '\x04') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    do {
      if (DAT_1000_51d0 == '\x01') {
        switchD_1000:4289::caseD_b();
      }
      if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00012f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(ulong)*(uint *)0x58b)();
        return uVar3;
      }
    } while ((*(char *)0x56c < '\0') && (bVar2 = FUN_1000_48e2(), (bVar2 & 0xc0) == 0));
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_0c27();
  (*(code *)*(undefined2 *)0x5ab)(0x1000);
  if (*(char *)0x1676 != '\x04') {
    uVar3 = FUN_1000_2a81();
    return uVar3;
  }
  *(undefined1 *)0x1621 = 0xff;
  _DAT_1000_540b = 0x74eb;
  uVar3 = FUN_1000_2a81();
  return uVar3;
}



// ============================================================================
// Function: FUN_1000_2f92
// Entry:    1000:2f92
// Body:     1000:2f92 -> 1000:2fdf
// Size:     78 bytes
// Prototype: undefined __cdecl16near FUN_1000_2f92()
// ============================================================================

void __cdecl16near FUN_1000_2f92(void)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  char cVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 unaff_DS;
  
  if (*(char *)0x750c == '\0') {
    *(char *)0x750c = *(char *)0x750c + '\x01';
    puVar6 = (undefined2 *)0x750d;
    puVar8 = (undefined2 *)0x5ef;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar1;
    }
    puVar8 = (undefined2 *)0x164b;
    for (iVar4 = 4; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar1 = *puVar6;
    }
    puVar9 = (undefined1 *)0x163b;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      puVar1 = puVar6;
      puVar6 = (undefined2 *)((int)puVar6 + 1);
      *puVar2 = *(undefined1 *)puVar1;
    }
    pbVar7 = (byte *)0x747e;
    cVar5 = '\x14';
    do {
      if (pbVar7[1] != 0) {
        *pbVar7 = *pbVar7 | 0x80;
      }
      pbVar7 = pbVar7 + 3;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    return;
  }
  *(undefined1 *)0x1676 = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_2fe0
// Entry:    1000:2fe0
// Body:     1000:2fe0 -> 1000:3001
// Size:     34 bytes
// Prototype: undefined __cdecl16near FUN_1000_2fe0()
// ============================================================================

void __cdecl16near FUN_1000_2fe0(void)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x1676 = 1;
  *(undefined1 *)0x5ef = 9;
  DAT_1000_2a80 = 0;
  *(undefined1 *)0x167f = 0;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_301c
// Entry:    1000:301c
// Body:     1000:301c -> 1000:3046
// Size:     43 bytes
// Prototype: undefined __cdecl16near FUN_1000_301c()
// ============================================================================

void __cdecl16near FUN_1000_301c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  if (*(char *)0x1676 != '\x04') {
    puVar4 = (undefined2 *)0x5ff;
    puVar5 = (undefined2 *)0x5ef;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
  }
  *(bool *)0x166b = *(char *)0x5fa != '\0';
  return;
}



// ============================================================================
// Function: FUN_1000_3074
// Entry:    1000:3074
// Body:     1000:3074 -> 1000:394e
// Size:     191 bytes
// Prototype: undefined __cdecl16near FUN_1000_3074()
// ============================================================================

byte __cdecl16near FUN_1000_3074(void)

{
  byte bVar1;
  byte bVar2;
  byte extraout_DL;
  byte extraout_DL_00;
  byte *in_BX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  if (*(char *)0x16b9 != '\0') {
    bVar1 = FUN_1000_3b32();
    return bVar1;
  }
  if (*(byte *)0x16b6 != 0) {
    return *(byte *)0x16b6;
  }
  *(undefined1 *)0x1636 = 0;
  *(undefined1 *)0x1637 = 0;
  *(undefined1 *)0x162f = 0;
  *(undefined1 *)0x1672 = 0;
  if (*(char *)0x162d == '\0') {
    bVar1 = *(byte *)0x1690;
    *(byte *)0x163b = bVar1;
    bVar1 = bVar1 & 0xf;
    switch(bVar1) {
    default:
      return bVar1 << 1;
    case 1:
      if (*(char *)0x162e == '\x02') {
        return 2;
      }
      FUN_1000_4e7a();
      if ((((*(char *)0x1672 != '\x01') || ((in_BX[-1] & 0x20) == 0)) &&
          (((*in_BX & 0x20) == 0 && (((in_BX[1] & 0x20) == 0 && ((in_BX[2] & 0x20) == 0)))))) &&
         ((*(char *)0x1672 != '\x02' || ((in_BX[3] & 0x20) == 0)))) {
        FUN_1000_3e63();
        *(char *)0x162a = *(char *)0x162a + -1;
        if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
          *(char *)0x1635 = *(char *)0x1635 + -1;
          *(char *)0x1637 = *(char *)0x1637 + -1;
        }
        else {
          *(int *)0x1628 = *(int *)0x1628 + -0x280;
        }
        *(char *)0x1630 = *(char *)0x1630 + '\x01';
        if (*(char *)0x1630 != '\x11') {
          *(undefined1 *)0x162e = 1;
          *(undefined1 *)0x162f = 1;
          return 1;
        }
      }
      if (*(char *)0x1631 != '\0') {
        *(undefined1 *)0x162e = 2;
        return 2;
      }
      return 0;
    case 2:
    case 3:
    case 6:
    case 10:
      goto switchD_1000_30ab_caseD_2;
    case 4:
      FUN_1000_4e7a();
      bVar1 = 0x26;
      if ((((*in_BX & 0x20) == 0) && ((in_BX[0x26] & 0x20) == 0)) && ((in_BX[0x4c] & 0x20) == 0)) {
        if ((in_BX[0x72] & 0x20) == 0) {
          FUN_1000_3e5d();
          *(char *)0x1634 = *(char *)0x1634 + -1;
          *(char *)0x1636 = *(char *)0x1636 + -1;
          bVar1 = 0;
        }
        else if (((*(char *)0x162e == '\0') && ((in_BX[-0x26] & 0x20) == 0)) &&
                (((in_BX[-0x25] & 0x20) == 0 && ((in_BX[-0x24] & 0x20) == 0)))) {
          FUN_1000_3e5d();
          *(char *)0x1634 = *(char *)0x1634 + -1;
          *(char *)0x1636 = *(char *)0x1636 + -1;
          FUN_1000_3e63();
          *(char *)0x162a = *(char *)0x162a + -1;
          bVar1 = extraout_DL;
          if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
            *(char *)0x1635 = *(char *)0x1635 + -1;
            *(char *)0x1637 = *(char *)0x1637 + -1;
          }
          else {
            *(int *)0x1628 = *(int *)0x1628 + -0x280;
          }
        }
      }
      if ((((*(byte *)0x1627 & 8) != 0) && (*(byte *)0x1627 < 0x12)) && (*(char *)0x1631 == '\0')) {
        *(undefined1 *)0x1631 = 1;
        *(undefined2 *)0x1632 = 0xdd96;
      }
      if (bVar1 == 0) {
        *(undefined1 *)0x1672 = 1;
        if (*(byte *)0x1631 != 0) {
          return *(byte *)0x1631;
        }
        bVar1 = FUN_1000_4988();
        return bVar1;
      }
      return bVar1;
    case 5:
      switchD_1000:30ab::caseD_4();
      if (*(byte *)0x167c == *(byte *)0x1635) {
        bVar1 = switchD_1000:30ab::caseD_1();
        return bVar1;
      }
      return *(byte *)0x167c;
    case 8:
      FUN_1000_4e7a();
      bVar1 = 0x26;
      if ((((*in_BX & 0x20) == 0) && ((in_BX[0x26] & 0x20) == 0)) && ((in_BX[0x4c] & 0x20) == 0)) {
        if ((in_BX[0x72] & 0x20) == 0) {
          FUN_1000_3e11();
          *(char *)0x1634 = *(char *)0x1634 + '\x01';
          *(char *)0x1636 = *(char *)0x1636 + '\x01';
          bVar1 = 0;
        }
        else if (((*(char *)0x162e == '\0') && ((in_BX[-0x26] & 0x20) == 0)) &&
                (((in_BX[-0x27] & 0x20) == 0 && ((in_BX[-0x28] & 0x20) == 0)))) {
          FUN_1000_3e11();
          *(char *)0x1634 = *(char *)0x1634 + '\x01';
          *(char *)0x1636 = *(char *)0x1636 + '\x01';
          FUN_1000_3e63();
          *(char *)0x162a = *(char *)0x162a + -1;
          bVar1 = extraout_DL_00;
          if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
            *(char *)0x1635 = *(char *)0x1635 + -1;
            *(char *)0x1637 = *(char *)0x1637 + -1;
          }
          else {
            *(int *)0x1628 = *(int *)0x1628 + -0x280;
          }
        }
      }
      if ((((*(byte *)0x1627 & 8) == 0) && (*(byte *)0x1627 < 0x12)) && (*(char *)0x1631 == '\0')) {
        *(undefined1 *)0x1631 = 1;
        *(undefined2 *)0x1632 = 0xdd92;
      }
      if (bVar1 == 0) {
        *(undefined1 *)0x1672 = 2;
        if (*(byte *)0x1631 != 0) {
          return *(byte *)0x1631;
        }
        bVar1 = FUN_1000_4988();
        return bVar1;
      }
      return bVar1;
    case 9:
      switchD_1000:30ab::caseD_8();
      if (*(byte *)0x167c == *(byte *)0x1635) {
        bVar1 = switchD_1000:30ab::caseD_1();
        return bVar1;
      }
      return *(byte *)0x167c;
    }
  }
  *(undefined1 *)0x162b = 0;
  *(undefined1 *)0x162c = 0;
  *(undefined1 *)0x1639 = 0;
  bVar1 = *(byte *)0x163b;
  *(byte *)0x163c = bVar1;
  bVar2 = *(byte *)0x1690 & 0xf;
  if ((*(byte *)0x1690 & 0xf) == 0) {
    bVar2 = bVar1;
  }
  *(byte *)0x163b = bVar2;
  if (bVar2 == *(byte *)(bVar1 + 0xddc0)) {
    bVar1 = FUN_1000_394f();
    return bVar1;
  }
  while( true ) {
    if (bVar2 == 1) {
      bVar1 = FUN_1000_34d9();
      return bVar1;
    }
    if (*(char *)0x1631 == '\x02') {
      return 2;
    }
    if (bVar2 == 2) {
      bVar1 = FUN_1000_3558();
      return bVar1;
    }
    if (bVar2 == 4) {
      bVar1 = FUN_1000_35d7();
      return bVar1;
    }
    if (bVar2 == 8) {
      bVar1 = FUN_1000_3641();
      return bVar1;
    }
    if (bVar2 == 5) {
      bVar1 = FUN_1000_37e9();
      return bVar1;
    }
    if (bVar2 == 6) {
      bVar1 = FUN_1000_36ab();
      return bVar1;
    }
    if (bVar2 == 9) break;
    if (bVar2 == 10) {
      bVar1 = FUN_1000_374a();
      return bVar1;
    }
    if (bVar2 == 0xc) {
      *(byte *)0x163b = ~*(byte *)0x163c & 0xc;
      bVar1 = FUN_1000_394f();
      return bVar1;
    }
    bVar2 = *(byte *)0x163c;
    *(byte *)0x163b = bVar2;
  }
  bVar1 = FUN_1000_3888();
  return bVar1;
switchD_1000_30ab_caseD_2:
  bVar4 = (bool)(*(byte *)0x1690 & 1);
  if (bVar4) {
    return *(byte *)0x1690 >> 1 | bVar4 << 7;
  }
  if (*(char *)0x1631 == '\x02') {
    return 2;
  }
  *(undefined1 *)0x1631 = 2;
  bVar1 = *(byte *)0x1627;
  if (bVar1 < 0x10) {
    bVar2 = bVar1 & 8;
    bVar1 = bVar1 & 8;
    uVar3 = 0xdd9a;
    if (bVar2 == 0) goto LAB_1000_394a;
  }
  uVar3 = 0xdda2;
LAB_1000_394a:
  *(undefined2 *)0x1632 = uVar3;
  return bVar1;
}



// ============================================================================
// Function: FUN_1000_30e1
// Entry:    1000:30e1
// Body:     1000:30e1 -> 1000:313d
// Size:     93 bytes
// Prototype: undefined __cdecl16near FUN_1000_30e1()
// ============================================================================

void __cdecl16near FUN_1000_30e1(void)

{
  char in_AL;
  undefined2 unaff_DS;
  
  while( true ) {
    if (in_AL == '\x01') {
      FUN_1000_34d9();
      return;
    }
    if (*(char *)0x1631 == '\x02') {
      return;
    }
    if (in_AL == '\x02') {
      FUN_1000_3558();
      return;
    }
    if (in_AL == '\x04') {
      FUN_1000_35d7();
      return;
    }
    if (in_AL == '\b') {
      FUN_1000_3641();
      return;
    }
    if (in_AL == '\x05') {
      FUN_1000_37e9();
      return;
    }
    if (in_AL == '\x06') {
      FUN_1000_36ab();
      return;
    }
    if (in_AL == '\t') break;
    if (in_AL == '\n') {
      FUN_1000_374a();
      return;
    }
    if (in_AL == '\f') {
      *(byte *)0x163b = ~*(byte *)0x163c & 0xc;
      FUN_1000_394f();
      return;
    }
    in_AL = *(char *)0x163c;
    *(char *)0x163b = in_AL;
  }
  FUN_1000_3888();
  return;
}



// ============================================================================
// Function: caseD_1
// Entry:    1000:313f
// Body:     1000:313f -> 1000:31cc
// Size:     141 bytes
// Prototype: undefined __cdecl16near caseD_1()
// ============================================================================

void __cdecl16near switchD_1000:30ab::caseD_1(void)

{
  byte *in_BX;
  undefined2 unaff_DS;
  
  if (*(char *)0x162e == '\x02') {
    return;
  }
  FUN_1000_4e7a();
  if (((((*(char *)0x1672 != '\x01') || ((in_BX[-1] & 0x20) == 0)) && ((*in_BX & 0x20) == 0)) &&
      (((in_BX[1] & 0x20) == 0 && ((in_BX[2] & 0x20) == 0)))) &&
     ((*(char *)0x1672 != '\x02' || ((in_BX[3] & 0x20) == 0)))) {
    FUN_1000_3e63();
    *(char *)0x162a = *(char *)0x162a + -1;
    if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
      *(char *)0x1635 = *(char *)0x1635 + -1;
      *(char *)0x1637 = *(char *)0x1637 + -1;
    }
    else {
      *(int *)0x1628 = *(int *)0x1628 + -0x280;
    }
    *(char *)0x1630 = *(char *)0x1630 + '\x01';
    if (*(char *)0x1630 != '\x11') {
      *(undefined1 *)0x162e = 1;
      *(undefined1 *)0x162f = 1;
      return;
    }
  }
  if (*(char *)0x1631 != '\0') {
    *(undefined1 *)0x162e = 2;
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_31cd
// Entry:    1000:31cd
// Body:     1000:31cd -> 1000:3285
// Size:     185 bytes
// Prototype: undefined __cdecl16near FUN_1000_31cd()
// ============================================================================

void __cdecl16near FUN_1000_31cd(void)

{
  byte *in_BX;
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if (((((*(char *)0x1672 != '\x01') || ((in_BX[-1] & 0x20) == 0)) && ((*in_BX & 0x20) == 0)) &&
      (((in_BX[1] & 0x20) == 0 && ((in_BX[2] & 0x20) == 0)))) &&
     ((*(char *)0x1672 != '\x02' || ((in_BX[3] & 0x20) == 0)))) {
    if ((*(char *)0x162e != '\0') ||
       ((((in_BX[0x28] & 0x20) == 0 && ((in_BX[0x27] & 0x20) == 0)) && ((in_BX[0x26] & 0x20) == 0)))
       ) {
      *(undefined1 *)0x162e = 2;
      *(undefined1 *)0x1630 = 0;
    }
    FUN_1000_3e17();
    *(char *)0x162a = *(char *)0x162a + '\x01';
    if ((*(byte *)0x162a < 0x56) && (7 < *(byte *)0x162a)) {
      *(char *)0x1635 = *(char *)0x1635 + '\x01';
      *(char *)0x1637 = *(char *)0x1637 + '\x01';
      return;
    }
    *(int *)0x1628 = *(int *)0x1628 + 0x280;
    return;
  }
  if (*(char *)0x162e == '\0') {
    return;
  }
  *(undefined1 *)0x162e = 0;
  if (*(char *)0x1631 == '\0') {
    *(undefined1 *)0x1631 = 1;
    uVar1 = 0xddba;
    if ((*(byte *)0x1627 & 8) != 0) {
      uVar1 = 0xddbd;
    }
    *(undefined2 *)0x1632 = uVar1;
    return;
  }
  return;
}



// ============================================================================
// Function: caseD_4
// Entry:    1000:3286
// Body:     1000:3286 -> 1000:3351
// Size:     202 bytes
// Prototype: undefined __cdecl16near caseD_4()
// ============================================================================

void __cdecl16near switchD_1000:30ab::caseD_4(void)

{
  char cVar1;
  char extraout_DL;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  cVar1 = '&';
  if ((((*in_BX & 0x20) == 0) && ((in_BX[0x26] & 0x20) == 0)) && ((in_BX[0x4c] & 0x20) == 0)) {
    if ((in_BX[0x72] & 0x20) == 0) {
      FUN_1000_3e5d();
      *(char *)0x1634 = *(char *)0x1634 + -1;
      *(char *)0x1636 = *(char *)0x1636 + -1;
      cVar1 = '\0';
    }
    else if (((*(char *)0x162e == '\0') && ((in_BX[-0x26] & 0x20) == 0)) &&
            (((in_BX[-0x25] & 0x20) == 0 && ((in_BX[-0x24] & 0x20) == 0)))) {
      FUN_1000_3e5d();
      *(char *)0x1634 = *(char *)0x1634 + -1;
      *(char *)0x1636 = *(char *)0x1636 + -1;
      FUN_1000_3e63();
      *(char *)0x162a = *(char *)0x162a + -1;
      cVar1 = extraout_DL;
      if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
        *(char *)0x1635 = *(char *)0x1635 + -1;
        *(char *)0x1637 = *(char *)0x1637 + -1;
      }
      else {
        *(int *)0x1628 = *(int *)0x1628 + -0x280;
      }
    }
  }
  if ((((*(byte *)0x1627 & 8) != 0) && (*(byte *)0x1627 < 0x12)) && (*(char *)0x1631 == '\0')) {
    *(undefined1 *)0x1631 = 1;
    *(undefined2 *)0x1632 = 0xdd96;
  }
  if (cVar1 == '\0') {
    *(undefined1 *)0x1672 = 1;
    if (*(char *)0x1631 != '\0') {
      return;
    }
    FUN_1000_4988();
    return;
  }
  return;
}



// ============================================================================
// Function: caseD_8
// Entry:    1000:3352
// Body:     1000:3352 -> 1000:341d
// Size:     202 bytes
// Prototype: undefined __cdecl16near caseD_8()
// ============================================================================

void __cdecl16near switchD_1000:30ab::caseD_8(void)

{
  char cVar1;
  char extraout_DL;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  cVar1 = '&';
  if ((((*in_BX & 0x20) == 0) && ((in_BX[0x26] & 0x20) == 0)) && ((in_BX[0x4c] & 0x20) == 0)) {
    if ((in_BX[0x72] & 0x20) == 0) {
      FUN_1000_3e11();
      *(char *)0x1634 = *(char *)0x1634 + '\x01';
      *(char *)0x1636 = *(char *)0x1636 + '\x01';
      cVar1 = '\0';
    }
    else if (((*(char *)0x162e == '\0') && ((in_BX[-0x26] & 0x20) == 0)) &&
            (((in_BX[-0x27] & 0x20) == 0 && ((in_BX[-0x28] & 0x20) == 0)))) {
      FUN_1000_3e11();
      *(char *)0x1634 = *(char *)0x1634 + '\x01';
      *(char *)0x1636 = *(char *)0x1636 + '\x01';
      FUN_1000_3e63();
      *(char *)0x162a = *(char *)0x162a + -1;
      cVar1 = extraout_DL;
      if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
        *(char *)0x1635 = *(char *)0x1635 + -1;
        *(char *)0x1637 = *(char *)0x1637 + -1;
      }
      else {
        *(int *)0x1628 = *(int *)0x1628 + -0x280;
      }
    }
  }
  if ((((*(byte *)0x1627 & 8) == 0) && (*(byte *)0x1627 < 0x12)) && (*(char *)0x1631 == '\0')) {
    *(undefined1 *)0x1631 = 1;
    *(undefined2 *)0x1632 = 0xdd92;
  }
  if (cVar1 == '\0') {
    *(undefined1 *)0x1672 = 2;
    if (*(char *)0x1631 != '\0') {
      return;
    }
    FUN_1000_4988();
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_3444
// Entry:    1000:3444
// Body:     1000:3444 -> 1000:34d8
// Size:     148 bytes
// Prototype: undefined __cdecl16near FUN_1000_3444()
// ============================================================================

void __cdecl16near FUN_1000_3444(void)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  byte *in_BX;
  undefined2 unaff_DS;
  
  if (*(char *)0x162e != '\0') {
    return;
  }
  if ((*(byte *)0x163b & 0xf) != 0) {
    return;
  }
  FUN_1000_4e7a();
  bVar4 = 4;
  cVar5 = '\x03';
  LOCK();
  *(undefined1 *)0xdc47 = 0;
  UNLOCK();
  bVar3 = 1;
  do {
    if (bVar3 < *in_BX) {
      LOCK();
      bVar1 = *(byte *)0xdc47;
      *(byte *)0xdc47 = bVar3;
      UNLOCK();
      LOCK();
      bVar3 = *(byte *)0xdc47;
      *(byte *)0xdc47 = bVar1 | bVar4;
      UNLOCK();
    }
    bVar4 = bVar4 >> 1;
    in_BX = in_BX + 1;
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  LOCK();
  bVar4 = *(byte *)0xdc47;
  *(byte *)0xdc47 = bVar3;
  UNLOCK();
  if (bVar4 == 0) {
    return;
  }
  LOCK();
  *(byte *)0xdc47 = bVar4;
  UNLOCK();
  bVar2 = false;
  cVar5 = '\x03';
  do {
    in_BX = in_BX + -1;
    if ((0xe < *in_BX) && (*in_BX < 0x94)) {
      bVar2 = true;
    }
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  if (bVar2) {
    FUN_1000_5576();
  }
  if ((*(byte *)0x1627 & 8) == 0) {
    LOCK();
    cVar5 = *(char *)0xdc47;
    *(char *)0xdc47 = '\0';
    UNLOCK();
    uVar6 = 7;
    if ((cVar5 != '\x01') && (uVar6 = 1, cVar5 != '\x04')) {
      uVar6 = 2;
    }
  }
  else {
    LOCK();
    bVar3 = *(byte *)0xdc47;
    *(byte *)0xdc47 = *(byte *)0x1627 & 8;
    UNLOCK();
    uVar6 = 0xf;
    if ((bVar3 != 4) && (uVar6 = 9, bVar3 != 1)) {
      uVar6 = 10;
    }
  }
  *(undefined1 *)0x1627 = uVar6;
  return;
}



// ============================================================================
// Function: FUN_1000_34d9
// Entry:    1000:34d9
// Body:     1000:34d9 -> 1000:3557
// Size:     126 bytes
// Prototype: undefined __cdecl16near FUN_1000_34d9()
// ============================================================================

void __cdecl16near FUN_1000_34d9(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if ((((*in_BX & 0x20) != 0) || ((in_BX[1] & 0x20) != 0)) || ((in_BX[2] & 0x20) != 0)) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 5;
    if (cVar1 != '\x01') {
      uVar2 = 8;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e63();
  *(char *)0x162a = *(char *)0x162a + -1;
  if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
    *(char *)0x1635 = *(char *)0x1635 + -1;
    *(char *)0x1637 = *(char *)0x1637 + -1;
  }
  else {
    *(int *)0x1628 = *(int *)0x1628 + -0x280;
  }
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == '$') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_3558
// Entry:    1000:3558
// Body:     1000:3558 -> 1000:35d6
// Size:     126 bytes
// Prototype: undefined __cdecl16near FUN_1000_3558()
// ============================================================================

void __cdecl16near FUN_1000_3558(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if ((((*in_BX & 0x20) != 0) || ((in_BX[1] & 0x20) != 0)) || ((in_BX[2] & 0x20) != 0)) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 10;
    if (cVar1 != '\x01') {
      uVar2 = 4;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e17();
  *(char *)0x162a = *(char *)0x162a + '\x01';
  if ((*(byte *)0x162a < 0x56) && (7 < *(byte *)0x162a)) {
    *(char *)0x1635 = *(char *)0x1635 + '\x01';
    *(char *)0x1637 = *(char *)0x1637 + '\x01';
  }
  else {
    *(int *)0x1628 = *(int *)0x1628 + 0x280;
  }
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == ',') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_35d7
// Entry:    1000:35d7
// Body:     1000:35d7 -> 1000:3640
// Size:     106 bytes
// Prototype: undefined __cdecl16near FUN_1000_35d7()
// ============================================================================

void __cdecl16near FUN_1000_35d7(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x162c = 1;
  FUN_1000_4e7a();
  if ((((*in_BX & 0x20) != 0) || ((in_BX[0x26] & 0x20) != 0)) || ((in_BX[0x4c] & 0x20) != 0)) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 6;
    if (cVar1 != '\x01') {
      uVar2 = 1;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e5d();
  *(char *)0x1634 = *(char *)0x1634 + -1;
  *(char *)0x1636 = *(char *)0x1636 + -1;
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == ' ') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_3641
// Entry:    1000:3641
// Body:     1000:3641 -> 1000:36aa
// Size:     106 bytes
// Prototype: undefined __cdecl16near FUN_1000_3641()
// ============================================================================

void __cdecl16near FUN_1000_3641(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x162c = 1;
  FUN_1000_4e7a();
  if ((((*in_BX & 0x20) != 0) || ((in_BX[0x26] & 0x20) != 0)) || ((in_BX[0x4c] & 0x20) != 0)) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 9;
    if (cVar1 != '\x01') {
      uVar2 = 2;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e11();
  *(char *)0x1634 = *(char *)0x1634 + '\x01';
  *(char *)0x1636 = *(char *)0x1636 + '\x01';
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == '(') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_36ab
// Entry:    1000:36ab
// Body:     1000:36ab -> 1000:3749
// Size:     158 bytes
// Prototype: undefined __cdecl16near FUN_1000_36ab()
// ============================================================================

void __cdecl16near FUN_1000_36ab(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if (((((*in_BX & 0x20) != 0) || ((in_BX[-1] & 0x20) != 0)) || ((in_BX[-2] & 0x20) != 0)) ||
     (((in_BX[-0x28] & 0x20) != 0 || ((in_BX[-0x4e] & 0x20) != 0)))) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 2;
    if (cVar1 != '\x01') {
      uVar2 = 5;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e5d();
  *(char *)0x1634 = *(char *)0x1634 + -1;
  *(char *)0x1636 = *(char *)0x1636 + -1;
  FUN_1000_3e17();
  *(char *)0x162a = *(char *)0x162a + '\x01';
  if ((*(byte *)0x162a < 0x56) && (7 < *(byte *)0x162a)) {
    *(char *)0x1635 = *(char *)0x1635 + '\x01';
    *(char *)0x1637 = *(char *)0x1637 + '\x01';
  }
  else {
    *(int *)0x1628 = *(int *)0x1628 + 0x280;
  }
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == '.') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_374a
// Entry:    1000:374a
// Body:     1000:374a -> 1000:37e8
// Size:     158 bytes
// Prototype: undefined __cdecl16near FUN_1000_374a()
// ============================================================================

void __cdecl16near FUN_1000_374a(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if (((((*in_BX & 0x20) != 0) || ((in_BX[1] & 0x20) != 0)) || ((in_BX[2] & 0x20) != 0)) ||
     (((in_BX[-0x24] & 0x20) != 0 || ((in_BX[-0x4a] & 0x20) != 0)))) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 8;
    if (cVar1 != '\x01') {
      uVar2 = 6;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e11();
  *(char *)0x1634 = *(char *)0x1634 + '\x01';
  *(char *)0x1636 = *(char *)0x1636 + '\x01';
  FUN_1000_3e17();
  *(char *)0x162a = *(char *)0x162a + '\x01';
  if ((*(byte *)0x162a < 0x56) && (7 < *(byte *)0x162a)) {
    *(char *)0x1635 = *(char *)0x1635 + '\x01';
    *(char *)0x1637 = *(char *)0x1637 + '\x01';
  }
  else {
    *(int *)0x1628 = *(int *)0x1628 + 0x280;
  }
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == '*') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_37e9
// Entry:    1000:37e9
// Body:     1000:37e9 -> 1000:3887
// Size:     158 bytes
// Prototype: undefined __cdecl16near FUN_1000_37e9()
// ============================================================================

void __cdecl16near FUN_1000_37e9(void)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if (((((*in_BX & 0x20) != 0) || ((in_BX[-1] & 0x20) != 0)) || ((in_BX[-2] & 0x20) != 0)) ||
     (((in_BX[0x24] & 0x20) != 0 || ((in_BX[0x4a] & 0x20) != 0)))) {
    if (*(char *)0x162b == '\x02') {
      FUN_1000_394f();
      return;
    }
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar2 = 4;
    if (cVar1 != '\x01') {
      uVar2 = 9;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_3e5d();
  *(char *)0x1634 = *(char *)0x1634 + -1;
  *(char *)0x1636 = *(char *)0x1636 + -1;
  FUN_1000_3e63();
  *(char *)0x162a = *(char *)0x162a + -1;
  if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
    *(char *)0x1635 = *(char *)0x1635 + -1;
    *(char *)0x1637 = *(char *)0x1637 + -1;
  }
  else {
    *(int *)0x1628 = *(int *)0x1628 + -0x280;
  }
  if (*(char *)0x1631 != '\0') {
    return;
  }
  if (*(char *)0x1627 == '\"') {
    return;
  }
  FUN_1000_4763();
  return;
}



// ============================================================================
// Function: FUN_1000_3888
// Entry:    1000:3888
// Body:     1000:3888 -> 1000:3923
// Size:     155 bytes
// Prototype: undefined __cdecl16near FUN_1000_3888()
// ============================================================================

void __cdecl16near FUN_1000_3888(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *in_BX;
  byte *pbVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if (((((*in_BX & 0x20) == 0) && ((in_BX[1] & 0x20) == 0)) && ((in_BX[2] & 0x20) == 0)) &&
     (((in_BX[0x28] & 0x20) == 0 && ((in_BX[0x4e] & 0x20) == 0)))) {
    FUN_1000_3e11();
    *(char *)0x1634 = *(char *)0x1634 + '\x01';
    *(char *)0x1636 = *(char *)0x1636 + '\x01';
    FUN_1000_3e63();
    *(char *)0x162a = *(char *)0x162a + -1;
    if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
      *(char *)0x1635 = *(char *)0x1635 + -1;
      *(char *)0x1637 = *(char *)0x1637 + -1;
    }
    else {
      *(int *)0x1628 = *(int *)0x1628 + -0x280;
    }
    if (*(char *)0x1631 == '\0') {
      if (*(char *)0x1627 != '&') {
        FUN_1000_4763();
        return;
      }
      return;
    }
    return;
  }
  pbVar4 = (byte *)0x162b;
  if (*(char *)0x162b != '\x02') {
    cVar1 = *(char *)0x162b + '\x01';
    *(char *)0x162b = cVar1;
    uVar3 = 1;
    if (cVar1 != '\x01') {
      uVar3 = 10;
    }
    *(undefined1 *)0x163b = uVar3;
    FUN_1000_30e1();
    return;
  }
  FUN_1000_4e7a();
  if ((((*pbVar4 & 0x20) != 0) || ((pbVar4[1] & 0x20) != 0)) || ((pbVar4[2] & 0x20) != 0)) {
    if ((((pbVar4[-0x98] & 0x20) != 0) || ((pbVar4[-0x97] & 0x20) != 0)) ||
       ((pbVar4[-0x96] & 0x20) != 0)) {
      if (*(char *)0x162b == '\0') {
        FUN_1000_30e1();
        return;
      }
      if ((*(char *)0x162c == '\0') && (*(char *)0x163b != *(char *)0x163c)) {
        *(char *)0x163b = *(char *)0x163c;
        FUN_1000_30e1();
        return;
      }
      *(char *)0x1639 = *(char *)0x1639 + '\x01';
      if (*(char *)0x1639 == '\b') {
        return;
      }
      *(undefined1 *)0x163b = *(undefined1 *)((*(byte *)0x163b & 0xf) + 0xddd0);
      bVar2 = *(char *)0x1639 + 1U & 7;
      if (bVar2 == 0) {
        *(char *)0x1627 = *(char *)0x1627 + '\x01';
        if (*(char *)0x1627 == '0') {
          *(undefined1 *)0x1627 = 0x20;
          return;
        }
        return;
      }
      *(byte *)0x1639 = bVar2;
      FUN_1000_30e1();
      return;
    }
    FUN_1000_3e63();
    *(char *)0x162a = *(char *)0x162a + -1;
    if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
      *(char *)0x1635 = *(char *)0x1635 + -1;
      *(char *)0x1637 = *(char *)0x1637 + -1;
    }
    else {
      *(int *)0x1628 = *(int *)0x1628 + -0x280;
    }
  }
  if (*(char *)0x1631 != '\x02') {
    *(undefined1 *)0x1631 = 2;
    *(undefined1 *)0x162e = 2;
    uVar5 = 0xddaa;
    if (((*(byte *)0x1627 & 0xc) != 0) && ((*(byte *)0x1627 & 0xc) != 0xc)) {
      uVar5 = 0xddb2;
    }
    *(undefined2 *)0x1632 = uVar5;
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_394f
// Entry:    1000:394f
// Body:     1000:394f -> 1000:3a41
// Size:     241 bytes
// Prototype: undefined __cdecl16near FUN_1000_394f()
// ============================================================================

void __cdecl16near FUN_1000_394f(void)

{
  byte bVar1;
  byte *in_BX;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if ((((*in_BX & 0x20) != 0) || ((in_BX[1] & 0x20) != 0)) || ((in_BX[2] & 0x20) != 0)) {
    if ((((in_BX[-0x98] & 0x20) != 0) || ((in_BX[-0x97] & 0x20) != 0)) ||
       ((in_BX[-0x96] & 0x20) != 0)) {
      if (*(char *)0x162b == '\0') {
        FUN_1000_30e1();
        return;
      }
      if ((*(char *)0x162c == '\0') && (*(char *)0x163b != *(char *)0x163c)) {
        *(char *)0x163b = *(char *)0x163c;
        FUN_1000_30e1();
        return;
      }
      *(char *)0x1639 = *(char *)0x1639 + '\x01';
      if (*(char *)0x1639 == '\b') {
        return;
      }
      *(undefined1 *)0x163b = *(undefined1 *)((*(byte *)0x163b & 0xf) + 0xddd0);
      bVar1 = *(char *)0x1639 + 1U & 7;
      if (bVar1 == 0) {
        *(char *)0x1627 = *(char *)0x1627 + '\x01';
        if (*(char *)0x1627 == '0') {
          *(undefined1 *)0x1627 = 0x20;
          return;
        }
        return;
      }
      *(byte *)0x1639 = bVar1;
      FUN_1000_30e1();
      return;
    }
    FUN_1000_3e63();
    *(char *)0x162a = *(char *)0x162a + -1;
    if ((*(byte *)0x162a < 0x55) && (6 < *(byte *)0x162a)) {
      *(char *)0x1635 = *(char *)0x1635 + -1;
      *(char *)0x1637 = *(char *)0x1637 + -1;
    }
    else {
      *(int *)0x1628 = *(int *)0x1628 + -0x280;
    }
  }
  if (*(char *)0x1631 != '\x02') {
    *(undefined1 *)0x1631 = 2;
    *(undefined1 *)0x162e = 2;
    uVar2 = 0xddaa;
    if (((*(byte *)0x1627 & 0xc) != 0) && ((*(byte *)0x1627 & 0xc) != 0xc)) {
      uVar2 = 0xddb2;
    }
    *(undefined2 *)0x1632 = uVar2;
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_3a42
// Entry:    1000:3a42
// Body:     1000:3a42 -> 1000:3b31
// Size:     240 bytes
// Prototype: undefined __cdecl16near FUN_1000_3a42()
// ============================================================================

void __cdecl16near FUN_1000_3a42(void)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  if (*(char *)0x16b6 != '\0') {
    return;
  }
  if (*(char *)0x162d != '\0') {
    if (*(char *)0x1631 == '\0') {
      return;
    }
    if (*(char *)0x1631 != '\x02') {
      uVar2 = *(undefined1 *)*(undefined2 *)0x1632;
      pcVar3 = (undefined1 *)*(undefined2 *)0x1632 + 1;
      cVar1 = *pcVar3;
      *(undefined2 *)0x1632 = pcVar3;
      if (cVar1 == '\0') {
        *(undefined1 *)0x1631 = 0;
      }
      *(undefined1 *)0x1627 = uVar2;
      return;
    }
    uVar2 = *(undefined1 *)*(undefined2 *)0x1632;
    pcVar3 = (undefined1 *)*(undefined2 *)0x1632 + 1;
    cVar1 = *pcVar3;
    *(undefined2 *)0x1632 = pcVar3;
    if (cVar1 == '\0') {
      *(undefined1 *)0x1631 = 0;
      *(undefined1 *)0x162d = 0;
      FUN_1000_0cb1();
      FUN_1000_0c27();
    }
    *(undefined1 *)0x1627 = uVar2;
    return;
  }
  if (*(char *)0x162f == '\0') {
    FUN_1000_31cd();
  }
  if ((*(char *)0x162e != '\0') && (*(char *)0x1631 != '\x02')) {
    *(byte *)0x1627 = *(byte *)0x1627 & 8;
  }
  FUN_1000_3444();
  if (*(char *)0x1631 == '\0') {
    return;
  }
  if (*(char *)0x1631 == '\x02') {
    uVar2 = *(undefined1 *)*(undefined2 *)0x1632;
    pcVar3 = (undefined1 *)*(undefined2 *)0x1632 + 1;
    cVar1 = *pcVar3;
    *(undefined2 *)0x1632 = pcVar3;
    if (cVar1 != '\0') {
      *(undefined1 *)0x1627 = uVar2;
      return;
    }
    *(undefined1 *)0x1631 = 0;
    *(undefined1 *)0x162d = 1;
    *(undefined1 *)0x1627 = uVar2;
    uVar2 = 4;
    if (*(char *)0x1627 != ' ') {
      uVar2 = 8;
    }
    *(undefined1 *)0x163b = uVar2;
    FUN_1000_0cb1();
    FUN_1000_0c27();
    return;
  }
  uVar2 = *(undefined1 *)*(undefined2 *)0x1632;
  pcVar3 = (undefined1 *)*(undefined2 *)0x1632 + 1;
  cVar1 = *pcVar3;
  *(undefined2 *)0x1632 = pcVar3;
  if (cVar1 != '\0') {
    *(undefined1 *)0x1627 = uVar2;
    return;
  }
  *(undefined1 *)0x1627 = uVar2;
  *(undefined1 *)0x1631 = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_3b32
// Entry:    1000:3b32
// Body:     1000:3b32 -> 1000:3bf5
// Size:     195 bytes
// Prototype: undefined __cdecl16near FUN_1000_3b32()
// ============================================================================

void __cdecl16near FUN_1000_3b32(void)

{
  byte bVar1;
  char in_AL;
  uint uVar2;
  int extraout_DX;
  undefined2 unaff_DS;
  bool bVar3;
  
  if (in_AL == '\x01') {
    *(undefined1 *)0x1684 = 1;
    *(undefined2 *)0x16b7 = 0;
    *(undefined1 *)0x16b9 = 2;
    DAT_1000_3052 = 0x14;
    DAT_1000_3050 = (*(byte *)0x1627 & 8) != 0;
    if ((bool)DAT_1000_3050) {
      DAT_1000_3052 = 0x17;
    }
    DAT_1000_3053 = 0x28;
    if (((*(char *)0x162d != '\0') && (bVar1 = *(byte *)0x1627, DAT_1000_3052 = bVar1, bVar1 < 0x20)
        ) && (DAT_1000_3052 = 0x20, 0x1c < bVar1)) {
      DAT_1000_3052 = 0x28;
    }
    *(byte *)0x1627 = DAT_1000_3052;
    DAT_1000_3051 = 0;
    DAT_1000_4be1 = 0;
    return;
  }
  if (in_AL != '\x02') {
    DAT_1000_3053 = DAT_1000_3053 + -1;
    if (DAT_1000_3053 != '\0') {
      return;
    }
    FUN_1000_2d0d();
    return;
  }
  bVar3 = *(char *)0x1684 == '\0';
  if (!bVar3) {
    if (*(char *)0x1684 == '\x01') {
      FUN_1000_3bf6();
    }
    *(undefined1 *)0x1627 = DAT_1000_3052;
    if (0x103 < *(uint *)0x16b7) {
      *(undefined1 *)0x1684 = 0;
      FUN_1000_3c21();
      return;
    }
    FUN_1000_3c70();
    FUN_1000_3ca9();
    return;
  }
  FUN_1000_3ca9();
  if (bVar3) {
    FUN_1000_3c70();
    return;
  }
  FUN_1000_3c47();
  if (DAT_1000_3051 != 6) {
    uVar2 = (uint)DAT_1000_3051;
    DAT_1000_3051 = DAT_1000_3051 + 1;
    *(undefined1 *)0x1627 = *(undefined1 *)(uVar2 + extraout_DX);
    return;
  }
  DAT_1000_3051 = DAT_1000_3051 + 1;
  *(char *)0x16b9 = *(char *)0x16b9 + '\x01';
  return;
}



// ============================================================================
// Function: FUN_1000_3bf6
// Entry:    1000:3bf6
// Body:     1000:3bf6 -> 1000:3c20
// Size:     43 bytes
// Prototype: undefined __cdecl16near FUN_1000_3bf6()
// ============================================================================

void __cdecl16near FUN_1000_3bf6(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x1684 = 2;
  if (*(char *)0x162d == '\0') {
    puVar4 = (undefined2 *)0xe4f6;
    puVar5 = (undefined2 *)0x3d43;
    for (iVar3 = 800; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  puVar4 = (undefined2 *)0xeb36;
  puVar5 = (undefined2 *)0x61a3;
  for (iVar3 = 0x1a0; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_3c21
// Entry:    1000:3c21
// Body:     1000:3c21 -> 1000:3c46
// Size:     38 bytes
// Prototype: undefined __cdecl16near FUN_1000_3c21()
// ============================================================================

void __cdecl16near FUN_1000_3c21(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  if (*(char *)0x162d == '\0') {
    puVar4 = (undefined2 *)0xe1d7;
    puVar5 = (undefined2 *)0xdfd9;
    for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  puVar4 = (undefined2 *)0xe21f;
  puVar5 = (undefined2 *)0xe111;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_3c47
// Entry:    1000:3c47
// Body:     1000:3c47 -> 1000:3c6f
// Size:     41 bytes
// Prototype: undefined __cdecl16near FUN_1000_3c47()
// ============================================================================

void __cdecl16near FUN_1000_3c47(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x162d != '\0') {
    if (DAT_1000_3050 != '\0') {
      return;
    }
    return;
  }
  if (DAT_1000_3050 == '\0') {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_3c70
// Entry:    1000:3c70
// Body:     1000:3c70 -> 1000:3ca8
// Size:     57 bytes
// Prototype: undefined __cdecl16near FUN_1000_3c70()
// ============================================================================

void __cdecl16near FUN_1000_3c70(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_4e6a();
  FUN_1000_04c0();
  FUN_1000_04c0();
  FUN_1000_4de0();
  FUN_1000_5724();
  *(undefined1 *)0x562 = 0xc;
  *(undefined1 *)0x16b6 = 1;
  *(undefined1 *)0x16b4 = 1;
  *(undefined1 *)0x16b5 = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_3ca9
// Entry:    1000:3ca9
// Body:     1000:3ca9 -> 1000:3d06
// Size:     94 bytes
// Prototype: undefined __cdecl16near FUN_1000_3ca9()
// ============================================================================

byte __cdecl16near FUN_1000_3ca9(void)

{
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  if ((*in_BX & 0x20) != 0) {
    return *in_BX & 0x20;
  }
  if ((in_BX[1] & 0x20) != 0) {
    return in_BX[1] & 0x20;
  }
  if ((in_BX[2] & 0x20) != 0) {
    return in_BX[2] & 0x20;
  }
  if (*(byte *)0x167e == 0) {
    FUN_1000_3e17();
    *(char *)0x162a = *(char *)0x162a + '\x01';
    if ((*(byte *)0x162a < 0x56) && (7 < *(byte *)0x162a)) {
      *(char *)0x1635 = *(char *)0x1635 + '\x01';
      *(char *)0x1637 = *(char *)0x1637 + '\x01';
      return 0;
    }
    *(int *)0x1628 = *(int *)0x1628 + 0x280;
    return 0;
  }
  return *(byte *)0x167e;
}



// ============================================================================
// Function: FUN_1000_3d10
// Entry:    1000:3d10
// Body:     1000:3d10 -> 1000:3d72
// Size:     97 bytes
// Prototype: undefined __cdecl16near FUN_1000_3d10()
// ============================================================================

void __cdecl16near FUN_1000_3d10(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  if (((*(char *)0x5f2 == *(char *)0x5f5) && (*(char *)0x5f1 == *(char *)0x5f4)) &&
     (*(char *)0x5f0 == *(char *)0x5f3)) {
    return;
  }
  *(char *)0x5f2 = *(char *)0x5f2 + '\x01';
  cVar1 = *(char *)0x5f2;
  if (cVar1 == '\x01') {
    FUN_1000_3d73();
    return;
  }
  if (cVar1 == '\x06') {
    FUN_1000_3d73();
    return;
  }
  if (cVar1 != '\n') {
    return;
  }
  *(undefined1 *)0x5f2 = 0;
  *(char *)0x5f1 = *(char *)0x5f1 + '\x01';
  if (*(char *)0x5f1 != '\n') {
    return;
  }
  *(undefined1 *)0x5f1 = 0;
  *(char *)0x5f0 = *(char *)0x5f0 + '\x01';
  if (*(char *)0x5f0 != '\n') {
    return;
  }
  *(undefined1 *)0x5f0 = 9;
  *(undefined1 *)0x5f1 = 9;
  *(undefined1 *)0x5f2 = 9;
  return;
}



// ============================================================================
// Function: FUN_1000_3d73
// Entry:    1000:3d73
// Body:     1000:3d73 -> 1000:3d9a
// Size:     40 bytes
// Prototype: undefined __cdecl16near FUN_1000_3d73()
// ============================================================================

void __cdecl16near FUN_1000_3d73(void)

{
  undefined2 unaff_DS;
  
  *(char *)0x5fd = *(char *)0x5fd + '\x01';
  if (*(byte *)0x5fd < 0x15) {
    FUN_1000_4044();
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_3d9b
// Entry:    1000:3d9b
// Body:     1000:3d9b -> 1000:3dad
// Size:     19 bytes
// Prototype: undefined __cdecl16near FUN_1000_3d9b()
// ============================================================================

void __cdecl16near FUN_1000_3d9b(void)

{
  char cVar1;
  
  cVar1 = '\x13';
  do {
    FUN_1000_405a();
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_3dae
// Entry:    1000:3dae
// Body:     1000:3dae -> 1000:3dcd
// Size:     32 bytes
// Prototype: undefined __cdecl16near FUN_1000_3dae()
// ============================================================================

void __cdecl16near FUN_1000_3dae(void)

{
  undefined2 unaff_DS;
  
  *(char *)0x5fd = *(char *)0x5fd + -1;
  if (0x13 < *(byte *)0x5fd) {
    return;
  }
  if (*(byte *)0x5fd == 0) {
    *(undefined1 *)0x16b9 = 1;
  }
  FUN_1000_405a();
  return;
}



// ============================================================================
// Function: FUN_1000_3dce
// Entry:    1000:3dce
// Body:     1000:3dce -> 1000:3e10
// Size:     67 bytes
// Prototype: undefined __cdecl16near FUN_1000_3dce()
// ============================================================================

void __cdecl16near FUN_1000_3dce(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x5f3 == '\x05') {
    return;
  }
  *(char *)0x5f5 = *(char *)0x5f5 + '\x01';
  *(char *)0x5f5 = *(char *)0x5f5 + '\x01';
  if (*(char *)0x5f5 != '\n') {
    return;
  }
  *(undefined1 *)0x5f5 = 0;
  *(char *)0x5f4 = *(char *)0x5f4 + '\x01';
  if (*(char *)0x5f4 != '\n') {
    return;
  }
  *(undefined1 *)0x5f4 = 0;
  *(char *)0x5f3 = *(char *)0x5f3 + '\x01';
  if (*(char *)0x5f3 != '\n') {
    return;
  }
  *(undefined1 *)0x5f3 = 9;
  *(undefined1 *)0x5f4 = 9;
  *(undefined1 *)0x5f5 = 8;
  return;
}



// ============================================================================
// Function: FUN_1000_3e11
// Entry:    1000:3e11
// Body:     1000:3e11 -> 1000:3e15
// Size:     5 bytes
// Prototype: undefined __cdecl16near FUN_1000_3e11()
// ============================================================================

void __cdecl16near FUN_1000_3e11(void)

{
  undefined2 unaff_DS;
  
  *(char *)0x164e = *(char *)0x164e + '\x01';
  if (*(char *)0x164e != ':') {
    return;
  }
  *(undefined1 *)0x164e = 0x30;
  *(char *)0x164d = *(char *)0x164d + '\x01';
  if (*(char *)0x164d != ':') {
    return;
  }
  *(undefined1 *)0x164d = 0x30;
  *(char *)0x164c = *(char *)0x164c + '\x01';
  if (*(char *)0x164c != ':') {
    return;
  }
  *(undefined1 *)0x164c = 0x30;
  *(char *)0x164b = *(char *)0x164b + '\x01';
  if (*(char *)0x164b != ':') {
    return;
  }
  *(undefined1 *)0x164b = 0x30;
  *(undefined1 *)0x164c = 0x30;
  *(undefined1 *)0x164d = 0x30;
  *(undefined1 *)0x164e = 0x30;
  return;
}



// ============================================================================
// Function: FUN_1000_3e17
// Entry:    1000:3e17
// Body:     1000:3e17 -> 1000:3e5c
// Size:     70 bytes
// Prototype: undefined __cdecl16near FUN_1000_3e17()
// ============================================================================

void __cdecl16near FUN_1000_3e17(void)

{
  undefined2 unaff_DS;
  
  *(char *)0x1652 = *(char *)0x1652 + '\x01';
  if (*(char *)0x1652 != ':') {
    return;
  }
  *(undefined1 *)0x1652 = 0x30;
  *(char *)0x1651 = *(char *)0x1651 + '\x01';
  if (*(char *)0x1651 != ':') {
    return;
  }
  *(undefined1 *)0x1651 = 0x30;
  *(char *)0x1650 = *(char *)0x1650 + '\x01';
  if (*(char *)0x1650 != ':') {
    return;
  }
  *(undefined1 *)0x1650 = 0x30;
  *(char *)0x164f = *(char *)0x164f + '\x01';
  if (*(char *)0x164f != ':') {
    return;
  }
  *(undefined1 *)0x164f = 0x30;
  *(undefined1 *)0x1650 = 0x30;
  *(undefined1 *)0x1651 = 0x30;
  *(undefined1 *)0x1652 = 0x30;
  return;
}



// ============================================================================
// Function: FUN_1000_3e5d
// Entry:    1000:3e5d
// Body:     1000:3e5d -> 1000:3e61
// Size:     5 bytes
// Prototype: undefined __cdecl16near FUN_1000_3e5d()
// ============================================================================

void __cdecl16near FUN_1000_3e5d(void)

{
  undefined2 unaff_DS;
  
  *(char *)0x164e = *(char *)0x164e + -1;
  if (*(char *)0x164e != '/') {
    return;
  }
  *(undefined1 *)0x164e = 0x39;
  *(char *)0x164d = *(char *)0x164d + -1;
  if (*(char *)0x164d != '/') {
    return;
  }
  *(undefined1 *)0x164d = 0x39;
  *(char *)0x164c = *(char *)0x164c + -1;
  if (*(char *)0x164c != '/') {
    return;
  }
  *(undefined1 *)0x164c = 0x39;
  *(char *)0x164b = *(char *)0x164b + -1;
  if (*(char *)0x164b != '/') {
    return;
  }
  *(undefined1 *)0x164b = 0x39;
  *(undefined1 *)0x164c = 0x39;
  *(undefined1 *)0x164d = 0x39;
  *(undefined1 *)0x164e = 0x39;
  return;
}



// ============================================================================
// Function: FUN_1000_3e63
// Entry:    1000:3e63
// Body:     1000:3e63 -> 1000:3ea8
// Size:     70 bytes
// Prototype: undefined __cdecl16near FUN_1000_3e63()
// ============================================================================

void __cdecl16near FUN_1000_3e63(void)

{
  undefined2 unaff_DS;
  
  *(char *)0x1652 = *(char *)0x1652 + -1;
  if (*(char *)0x1652 != '/') {
    return;
  }
  *(undefined1 *)0x1652 = 0x39;
  *(char *)0x1651 = *(char *)0x1651 + -1;
  if (*(char *)0x1651 != '/') {
    return;
  }
  *(undefined1 *)0x1651 = 0x39;
  *(char *)0x1650 = *(char *)0x1650 + -1;
  if (*(char *)0x1650 != '/') {
    return;
  }
  *(undefined1 *)0x1650 = 0x39;
  *(char *)0x164f = *(char *)0x164f + -1;
  if (*(char *)0x164f != '/') {
    return;
  }
  *(undefined1 *)0x164f = 0x39;
  *(undefined1 *)0x1650 = 0x39;
  *(undefined1 *)0x1651 = 0x39;
  *(undefined1 *)0x1652 = 0x39;
  return;
}



// ============================================================================
// Function: FUN_1000_3ea9
// Entry:    1000:3ea9
// Body:     1000:3ea9 -> 1000:3eb9
// Size:     17 bytes
// Prototype: undefined __cdecl16near FUN_1000_3ea9()
// ============================================================================

void __cdecl16near FUN_1000_3ea9(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 unaff_DS;
  byte in_AF;
  
  bVar2 = *(byte *)0x5f6;
  if (0x97 < bVar2) {
    bVar2 = 0x97;
  }
  bVar1 = 9 < (bVar2 + 2 & 0xf) | in_AF;
  bVar3 = bVar2 + 2 + bVar1 * '\x06';
  *(char *)0x5f6 = bVar3 + (0x90 < (bVar3 & 0xf0) | 0xfd < bVar2 | bVar1 * (0xf9 < bVar3)) * '`';
  return;
}



// ============================================================================
// Function: FUN_1000_3ed3
// Entry:    1000:3ed3
// Body:     1000:3ed3 -> 1000:3f0e
// Size:     60 bytes
// Prototype: undefined __cdecl16near FUN_1000_3ed3()
// ============================================================================

void __cdecl16near FUN_1000_3ed3(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x165e == '\0') {
    return;
  }
  pcVar1 = (char *)0x165d;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0') {
    return;
  }
  *(undefined1 *)0x165d = 0x19;
  cVar2 = *(char *)0x165c;
  FUN_1000_405a();
  *(char *)0x165c = cVar2 + -1;
  if ((char)(cVar2 + -1) != '\0') {
    return;
  }
  FUN_1000_3f44();
  *(undefined1 *)0x165e = 0;
  *(undefined1 *)0x562 = 9;
  return;
}



// ============================================================================
// Function: FUN_1000_3f0f
// Entry:    1000:3f0f
// Body:     1000:3f0f -> 1000:3f43
// Size:     53 bytes
// Prototype: undefined __cdecl16near FUN_1000_3f0f()
// ============================================================================

void __cdecl16near FUN_1000_3f0f(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_3f44
// Entry:    1000:3f44
// Body:     1000:3f44 -> 1000:3f7a
// Size:     55 bytes
// Prototype: undefined __cdecl16near FUN_1000_3f44()
// ============================================================================

void __cdecl16near FUN_1000_3f44(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_3f7b
// Entry:    1000:3f7b
// Body:     1000:3f7b -> 1000:3fad
// Size:     51 bytes
// Prototype: undefined __cdecl16near FUN_1000_3f7b()
// ============================================================================

void __cdecl16near FUN_1000_3f7b(void)

{
  FUN_1000_3fae();
  FUN_1000_3fae();
  FUN_1000_3fd8();
  FUN_1000_3fd8();
  FUN_1000_4008();
  return;
}



// ============================================================================
// Function: FUN_1000_3fae
// Entry:    1000:3fae
// Body:     1000:3fae -> 1000:3fd7
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_3fae()
// ============================================================================

void __cdecl16near FUN_1000_3fae(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_3fd8
// Entry:    1000:3fd8
// Body:     1000:3fd8 -> 1000:4007
// Size:     48 bytes
// Prototype: undefined __cdecl16near FUN_1000_3fd8()
// ============================================================================

void __cdecl16near FUN_1000_3fd8(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_4008
// Entry:    1000:4008
// Body:     1000:4008 -> 1000:402c
// Size:     37 bytes
// Prototype: undefined __cdecl16near FUN_1000_4008()
// ============================================================================

void __cdecl16near FUN_1000_4008(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_402d
// Entry:    1000:402d
// Body:     1000:402d -> 1000:4043
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_402d()
// ============================================================================

void __cdecl16near FUN_1000_402d(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)0x5fd;
  *(undefined1 *)0x5fd = 0;
  do {
    FUN_1000_3d73();
  } while (*(char *)0x5fd != cVar1);
  return;
}



// ============================================================================
// Function: FUN_1000_4044
// Entry:    1000:4044
// Body:     1000:4044 -> 1000:4059
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_4044()
// ============================================================================

undefined2 __cdecl16near FUN_1000_4044(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return in_AX;
}



// ============================================================================
// Function: FUN_1000_405a
// Entry:    1000:405a
// Body:     1000:405a -> 1000:406f
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_405a()
// ============================================================================

void __cdecl16near FUN_1000_405a(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_4070
// Entry:    1000:4070
// Body:     1000:4070 -> 1000:407b
// Size:     12 bytes
// Prototype: undefined __cdecl16far FUN_1000_4070()
// ============================================================================

void __cdecl16far FUN_1000_4070(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  FUN_1000_3d10();
  return;
}



// ============================================================================
// Function: FUN_1000_407c
// Entry:    1000:407c
// Body:     1000:407c -> 1000:40d7
// Size:     92 bytes
// Prototype: undefined __cdecl16far FUN_1000_407c()
// ============================================================================

void __cdecl16far FUN_1000_407c(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  if ((*(byte *)0x575 & 0x80) == 0) {
    return;
  }
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  *(char *)0x5f2 = *(char *)0x5f2 + -1;
  cVar1 = *(char *)0x5f2;
  if (cVar1 == '\0') {
    FUN_1000_3dae();
    return;
  }
  if (cVar1 == '\x05') {
    FUN_1000_3dae();
    return;
  }
  if (cVar1 != -1) {
    return;
  }
  *(undefined1 *)0x5f2 = 9;
  *(char *)0x5f1 = *(char *)0x5f1 + -1;
  if (*(char *)0x5f1 != -1) {
    return;
  }
  *(undefined1 *)0x5f1 = 9;
  *(char *)0x5f0 = *(char *)0x5f0 + -1;
  if (*(char *)0x5f0 != -1) {
    return;
  }
  *(undefined1 *)0x5f0 = 0;
  *(undefined1 *)0x5f1 = 0;
  *(undefined1 *)0x5f2 = 0;
  *(undefined1 *)0x16b9 = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_40e0
// Entry:    1000:40e0
// Body:     1000:40e0 -> 1000:4100
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_40e0()
// ============================================================================

void __cdecl16near FUN_1000_40e0(void)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  pbVar3 = (byte *)0x747e;
  cVar1 = '\0';
  do {
    LOCK();
    cVar2 = *(char *)0xdc47;
    *(char *)0xdc47 = cVar1;
    UNLOCK();
    if ((*pbVar3 & 0x80) != 0) {
      cVar2 = FUN_1000_4101();
    }
    pbVar3 = pbVar3 + 3;
    LOCK();
    cVar1 = *(char *)0xdc47;
    *(char *)0xdc47 = cVar2;
    UNLOCK();
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '\x14');
  return;
}



// ============================================================================
// Function: FUN_1000_4101
// Entry:    1000:4101
// Body:     1000:4101 -> 1000:417b
// Size:     123 bytes
// Prototype: undefined __cdecl16near FUN_1000_4101()
// ============================================================================

byte __cdecl16near FUN_1000_4101(void)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  bVar2 = unaff_SI[1] - (*(char *)0x1634 + -3);
  if (bVar2 == 0) {
    return bVar2;
  }
  if (0x24 < bVar2) {
    return bVar2;
  }
  bVar2 = unaff_SI[2] - (*(char *)0x1635 + -2);
  if (bVar2 == 0) {
    return bVar2;
  }
  if (0x14 < bVar2) {
    return bVar2;
  }
  FUN_1000_4de0();
  bVar2 = *unaff_SI >> 4 & 7;
  if (bVar2 == 0) {
    bVar2 = FUN_1000_417c();
  }
  LOCK();
  cVar1 = *(char *)0xdc47;
  *(char *)0xdc47 = (bVar2 - 1) * '\x02';
  UNLOCK();
  LOCK();
  *(char *)0xdc47 = cVar1 + -0x15;
  UNLOCK();
  cVar3 = FUN_1000_43b1();
  LOCK();
  cVar1 = *(char *)0xdc47;
  *(char *)0xdc47 = cVar3;
  UNLOCK();
  LOCK();
  bVar2 = *(byte *)0xdc47;
  *(byte *)0xdc47 = cVar1 + 0x15;
  UNLOCK();
  return bVar2;
}



// ============================================================================
// Function: FUN_1000_417c
// Entry:    1000:417c
// Body:     1000:417c -> 1000:4182
// Size:     7 bytes
// Prototype: undefined __cdecl16near FUN_1000_417c()
// ============================================================================

char __cdecl16near FUN_1000_417c(void)

{
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  return (*unaff_SI & 0xf) + 8;
}



// ============================================================================
// Function: FUN_1000_4193
// Entry:    1000:4193
// Body:     1000:1663 -> 1000:42ca
// Size:     325 bytes
// Prototype: undefined __cdecl16near FUN_1000_4193()
// ============================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001168b) overlaps instruction at (ram,0x00011689)
    */

uint __cdecl16near FUN_1000_4193(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint in_AX;
  uint uVar6;
  int in_BX;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined2 unaff_DS;
  bool bVar11;
  
  if (0xa5 < (byte)in_AX) {
    return in_AX;
  }
  pcVar7 = (char *)(in_BX + 0x6d4);
  pbVar8 = (byte *)((byte)((*pcVar7 + '\x15') * '\x03') + 0x747e);
  bVar2 = *pbVar8 & 0xf;
  uVar6 = (uint)bVar2;
  switch(*pbVar8 >> 4 & 7) {
  case 0:
    LOCK();
    *(byte *)0xdc47 = bVar2;
    UNLOCK();
    *(undefined1 *)0x166b = 1;
    *(undefined2 *)0x166d =
         CONCAT11((char)((uint)*(undefined2 *)0x1663 >> 8) + '\x01',(char)*(undefined2 *)0x1663);
    cVar4 = (*pbVar8 & 0xf) + 1;
    bVar2 = 0;
    pcVar9 = (char *)0x5f7;
    if (*(char *)0x5f7 != cVar4) {
      bVar2 = 1;
      pcVar9 = (char *)0x5f8;
      if (*(char *)0x5f8 != cVar4) {
        bVar2 = 2;
        pcVar9 = (char *)0x5f9;
        if (*(char *)0x5f9 != cVar4) {
          bVar2 = 0;
          pcVar9 = (char *)0x5f7;
          if ((*(char *)0x5f7 != '\0') &&
             (bVar2 = 1, pcVar9 = (char *)0x5f8, *(char *)0x5f8 != '\0')) {
            bVar2 = 2;
            pcVar9 = (char *)0x5f9;
            if (*(byte *)0x5f9 != 0) {
              return (uint)*(byte *)0x5f9;
            }
          }
        }
      }
    }
    break;
  default:
    return uVar6;
  case 2:
    *pbVar8 = *pbVar8 & 0x7f;
    do {
      LOCK();
      *(undefined1 *)0xdc47 = (char)uVar6;
      UNLOCK();
      cVar3 = FUN_1000_3dce();
      LOCK();
      cVar4 = *(char *)0xdc47;
      *(char *)0xdc47 = cVar3;
      UNLOCK();
      bVar2 = cVar4 - 1;
      uVar6 = (uint)bVar2;
    } while (bVar2 != 0);
    *(undefined1 *)0x562 = 10;
    return 10;
  case 3:
    *pbVar8 = *pbVar8 & 0x7f;
    do {
      LOCK();
      *(undefined1 *)0xdc47 = (char)uVar6;
      UNLOCK();
      cVar3 = FUN_1000_3ea9();
      LOCK();
      cVar4 = *(char *)0xdc47;
      *(char *)0xdc47 = cVar3;
      UNLOCK();
      bVar2 = cVar4 - 1;
      uVar6 = (uint)bVar2;
    } while (bVar2 != 0);
    *(undefined1 *)0x562 = 10;
    if (*(byte *)0x1689 != 2) {
      return (uint)*(byte *)0x1689;
    }
    uVar6 = FUN_1000_453a();
    return uVar6;
  }
  *(undefined1 *)0x562 = 10;
  *pbVar8 = *pbVar8 & 0x7f;
  bVar5 = *pbVar8 & 0xf;
  *pcVar9 = bVar5 + 1;
  pbVar10 = (byte *)(pcVar9 + 3);
  uVar6 = (uint)(byte)(bVar5 * '\x02');
  switch(bVar5) {
  case 0:
    *pbVar10 = 8;
    break;
  case 1:
    do {
    } while( true );
  case 2:
    *pbVar10 = 0x10;
    break;
  case 3:
    *pbVar10 = 1;
    break;
  case 4:
    *pbVar10 = 5;
    break;
  case 5:
    *pbVar10 = 5;
    break;
  case 6:
    *pbVar10 = 5;
    break;
  case 7:
    FUN_1000_4de0();
    if (*pbVar8 == 0) {
      *pbVar8 = 0xff;
    }
    bVar2 = pbVar8[1];
    if (bVar2 == 0) {
      pbVar8[1] = 0xff;
    }
    return (uint)bVar2;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    FUN_1000_4dc7();
    pbVar8 = pbVar8 + (int)pcVar7;
    if ((*pbVar10 & 0x70) != 0) {
      *pbVar8 = 0xff;
      pbVar8[1] = 0xff;
      pbVar8[0x27] = 0xff;
      pbVar8[0x26] = 0xff;
      return 0xff;
    }
    *pbVar8 = 0xff;
    pbVar8[1] = 0xff;
    pbVar8[2] = 0xff;
    pbVar8[0x28] = 0xff;
    pbVar8[0x27] = 0xff;
    pbVar8[0x26] = 0xff;
    pbVar8[0x4c] = 0xff;
    pbVar8[0x4d] = 0xff;
    pbVar8[0x4e] = 0xff;
    return 0xff;
  case 10:
  case 0xd:
    *(int *)(uVar6 + 0x16) = (int)(pcVar9 + *(int *)(uVar6 + 0x16) + 4);
    pcVar1 = pcVar9 + 6;
    *pcVar1 = *pcVar1 + -1;
    bVar11 = *pcVar1 == '\0';
    FUN_1000_17f1();
    if (!bVar11) {
      uVar6 = FUN_1000_16a9();
      return uVar6;
    }
    pcVar1 = pcVar9 + 5;
    *pcVar1 = *pcVar1 + '\x01';
    bVar11 = *pcVar1 == '\0';
    uVar6 = FUN_1000_192f();
    if (bVar11) {
      return uVar6;
    }
    uVar6 = FUN_1000_16a9();
    return uVar6;
  case 0xb:
    *(undefined1 *)0x1644 = 0xc;
    if (*(char *)0x558 == '\0') {
      (*(code *)*(undefined2 *)0x508)(0x1000);
    }
    *(char *)0x1643 = *(char *)0x1643 + '\x01';
    if (*(char *)0x1643 == '\x05') {
      *(undefined1 *)0x1643 = 0;
    }
    DAT_1000_51d0 = 0;
    return uVar6;
  case 0xc:
  case 0xf:
    *(char *)(uVar6 + 0x16) = *(char *)(uVar6 + 0x16) + (char)((uint)pcVar7 >> 8);
    pcVar1 = pcVar9 + 5;
    *pcVar1 = *pcVar1 + '\x01';
    bVar11 = *pcVar1 == '\0';
    FUN_1000_17f1();
    if (!bVar11) {
      bVar2 = pcVar9[8];
      pcVar9[8] = (char)(bVar2 & 0xffcf);
      return bVar2 & 0xffcf;
    }
    pcVar1 = pcVar9 + 4;
    *pcVar1 = *pcVar1 + '\x01';
    bVar11 = *pcVar1 == '\0';
    uVar6 = FUN_1000_1885();
    if (bVar11) {
      return uVar6;
    }
    uVar6 = FUN_1000_16a9();
    return uVar6;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((3 < *(byte *)0x1689) && ((byte)(*(byte *)0x1689 - 5) == bVar2)) {
    FUN_1000_453a();
  }
  if (*(char *)(bVar2 + 0x5f7) == '\0') {
    if (bVar2 == 3) {
      return 3;
    }
    uVar6 = (*(code *)*(undefined2 *)0x508)(0x1000);
    return uVar6;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  uVar6 = FUN_1000_4008();
  return uVar6;
}



// ============================================================================
// Function: FUN_1000_42cb
// Entry:    1000:42cb
// Body:     1000:42cb -> 1000:43b0
// Size:     230 bytes
// Prototype: undefined __cdecl16near FUN_1000_42cb()
// ============================================================================

void __cdecl16near FUN_1000_42cb(void)

{
  byte in_AL;
  undefined2 unaff_DS;
  
  if (*(char *)(in_AL + 0x5f7) != '\0') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    FUN_1000_4008();
    return;
  }
  if (in_AL == 3) {
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_43b1
// Entry:    1000:43b1
// Body:     1000:43b1 -> 1000:448e
// Size:     222 bytes
// Prototype: undefined __cdecl16near FUN_1000_43b1()
// ============================================================================

undefined1 __cdecl16near FUN_1000_43b1(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char in_AL;
  undefined1 *in_DX;
  undefined1 *in_BX;
  undefined2 unaff_DS;
  
  if (in_AL != '\x04') {
    *in_BX = *in_DX;
    in_BX[1] = in_DX[1];
    in_BX[0x27] = in_DX[2];
    uVar2 = in_DX[3];
    in_BX[0x26] = uVar2;
    LOCK();
    uVar1 = *(undefined1 *)0xdc47;
    *(undefined1 *)0xdc47 = uVar2;
    UNLOCK();
    in_BX[0x6d4] = uVar1;
    in_BX[0x6d5] = uVar1;
    in_BX[0x6fb] = uVar1;
    in_BX[0x6fa] = uVar1;
    LOCK();
    uVar2 = *(undefined1 *)0xdc47;
    *(undefined1 *)0xdc47 = uVar1;
    UNLOCK();
    in_BX[0xda8] = in_BX[0xda8] | 2;
    in_BX[0xda9] = in_BX[0xda9] | 2;
    in_BX[0xdcf] = in_BX[0xdcf] | 2;
    in_BX[0xdce] = in_BX[0xdce] | 2;
    return uVar2;
  }
  *in_BX = *in_DX;
  in_BX[1] = in_DX[1];
  in_BX[2] = in_DX[2];
  in_BX[0x28] = in_DX[3];
  in_BX[0x27] = in_DX[4];
  in_BX[0x26] = in_DX[5];
  in_BX[0x4c] = in_DX[6];
  in_BX[0x4d] = in_DX[7];
  uVar2 = in_DX[8];
  in_BX[0x4e] = uVar2;
  LOCK();
  uVar1 = *(undefined1 *)0xdc47;
  *(undefined1 *)0xdc47 = uVar2;
  UNLOCK();
  in_BX[0x6d4] = uVar1;
  in_BX[0x6d5] = uVar1;
  in_BX[0x6d6] = uVar1;
  in_BX[0x6fc] = uVar1;
  in_BX[0x6fb] = uVar1;
  in_BX[0x6fa] = uVar1;
  in_BX[0x720] = uVar1;
  in_BX[0x721] = uVar1;
  in_BX[0x722] = uVar1;
  LOCK();
  uVar2 = *(undefined1 *)0xdc47;
  *(undefined1 *)0xdc47 = uVar1;
  UNLOCK();
  in_BX[0xda8] = in_BX[0xda8] | 2;
  in_BX[0xda9] = in_BX[0xda9] | 2;
  in_BX[0xdaa] = in_BX[0xdaa] | 2;
  in_BX[0xdd0] = in_BX[0xdd0] | 2;
  in_BX[0xdcf] = in_BX[0xdcf] | 2;
  in_BX[0xdce] = in_BX[0xdce] | 2;
  in_BX[0xdf4] = in_BX[0xdf4] | 2;
  in_BX[0xdf5] = in_BX[0xdf5] | 2;
  in_BX[0xdf6] = in_BX[0xdf6] | 2;
  return uVar2;
}



// ============================================================================
// Function: FUN_1000_453a
// Entry:    1000:453a
// Body:     1000:453a -> 1000:45ae
// Size:     117 bytes
// Prototype: undefined __cdecl16near FUN_1000_453a()
// ============================================================================

void __cdecl16near FUN_1000_453a(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0x1689;
  if (4 < bVar1) {
    FUN_1000_4008();
    return;
  }
  if (bVar1 != 1) {
    if (bVar1 != 2) {
      (*(code *)*(undefined2 *)0x508)(0x1000);
      (*(code *)*(undefined2 *)0x508)(0x1000);
      (*(code *)*(undefined2 *)0x508)(0x1000);
      return;
    }
    FUN_1000_4008();
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_45b0
// Entry:    1000:45b0
// Body:     1000:45b0 -> 1000:45d9
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_45b0()
// ============================================================================

void __cdecl16near FUN_1000_45b0(void)

{
  char in_AL;
  undefined2 unaff_DS;
  
  if (in_AL == '\0') {
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_45da
// Entry:    1000:45da
// Body:     1000:45da -> 1000:461b
// Size:     66 bytes
// Prototype: undefined __cdecl16near FUN_1000_45da()
// ============================================================================

void __cdecl16near FUN_1000_45da(void)

{
  char in_AL;
  int *piVar1;
  undefined2 in_CX;
  undefined2 uVar2;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 uVar3;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  uVar3 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  piVar1 = (int *)((byte)(in_AL * '\x02') + 0x461c);
  if (*piVar1 != 0) {
    piVar1 = (int *)CONCAT11((char)*piVar1,*(undefined1 *)((byte)(in_AL * '\x02') + 0x461d));
    uVar2 = 0x1004;
    (*(code *)*(undefined2 *)0x508)(0x1000);
    uVar3 = extraout_DX;
  }
  LOCK();
  *(undefined2 *)0xdc4a = piVar1;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = uVar2;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = uVar3;
  UNLOCK();
  return;
}



// ============================================================================
// Function: FUN_1000_4649
// Entry:    1000:4649
// Body:     1000:4649 -> 1000:465f
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_4649()
// ============================================================================

void __cdecl16near FUN_1000_4649(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_4666
// Entry:    1000:4666
// Body:     1000:4666 -> 1000:467f
// Size:     26 bytes
// Prototype: undefined __cdecl16far FUN_1000_4666()
// ============================================================================

void __cdecl16far FUN_1000_4666(void)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  pbVar3 = (byte *)0x2783;
  cVar2 = '\0';
  do {
    pbVar1 = pbVar3;
    pbVar3 = pbVar3 + 8;
    cVar2 = cVar2 + '\x01';
  } while ((*pbVar1 & 0x80) != 0);
  *(char *)0x1660 = cVar2;
  return;
}



// ============================================================================
// Function: FUN_1000_4763
// Entry:    1000:4763
// Body:     1000:4763 -> 1000:477e
// Size:     28 bytes
// Prototype: undefined __cdecl16far FUN_1000_4763()
// ============================================================================

void __cdecl16far FUN_1000_4763(void)

{
  byte in_AL;
  int in_DX;
  undefined2 unaff_DS;
  
  *(int *)0x1632 = *(int *)(in_DX + (uint)(in_AL & 0xe)) + -0x23ae;
  *(undefined1 *)0x1631 = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_477f
// Entry:    1000:477f
// Body:     1000:477f -> 1000:4781
// Size:     3 bytes
// Prototype: undefined FUN_1000_477f()
// ============================================================================

void FUN_1000_477f(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  FUN_1000_4649();
  FUN_1000_27ab();
  FUN_1000_49b8();
  FUN_1000_3f7b();
  FUN_1000_42cb();
  FUN_1000_42cb();
  FUN_1000_42cb();
  FUN_1000_4008();
  FUN_1000_05f7();
  FUN_1000_402d();
  FUN_1000_3f44();
  FUN_1000_45da();
  *(undefined1 *)0x16b6 = 1;
  *(undefined1 *)0x167d = 0;
  while (DAT_1000_2a80 == '\0') {
    *(undefined2 *)0x167b = *(undefined2 *)0x1634;
    FUN_1000_480d();
    FUN_1000_0621();
    uVar1 = FUN_1000_48e2();
    *(undefined1 *)0x1690 = uVar1;
    FUN_1000_6bd8();
    FUN_1000_6c7c();
    FUN_1000_3074();
    FUN_1000_3a42();
    FUN_1000_6870();
    FUN_1000_0634();
    FUN_1000_2c00();
    FUN_1000_060e();
    FUN_1000_40e0();
    FUN_1000_6cbc();
    FUN_1000_0e9d();
    FUN_1000_4c64();
    (*DAT_1000_49a0)();
    FUN_1000_0702();
    FUN_1000_0621();
    FUN_1000_5460();
    FUN_1000_6954();
    FUN_1000_5745();
    FUN_1000_557f();
    FUN_1000_0a1b();
    FUN_1000_0836();
    FUN_1000_6cca();
    FUN_1000_0bc3();
    FUN_1000_6d99();
    (*DAT_1000_49a2)();
    FUN_1000_4be6();
    FUN_1000_4c91();
    if (*(char *)0x16b6 == '\0') {
      FUN_1000_3ed3();
    }
    FUN_1000_6d20();
    FUN_1000_3f7b();
    if (*(char *)0x167d == '\0') {
      FUN_1000_2b5b();
    }
    if ((*(byte *)0x56f & 1) == 0) {
      FUN_1000_4782();
    }
  }
  FUN_1000_2b74();
  return;
}



// ============================================================================
// Function: FUN_1000_4782
// Entry:    1000:4782
// Body:     1000:4782 -> 1000:478f
// Size:     14 bytes
// Prototype: undefined __cdecl16near FUN_1000_4782()
// ============================================================================

void __cdecl16near FUN_1000_4782(void)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x562 = 0x11;
  FUN_1000_05e9();
  *(undefined1 *)0x562 = 0x11;
  return;
}



// ============================================================================
// Function: FUN_1000_480d
// Entry:    1000:480d
// Body:     1000:480d -> 1000:4880
// Size:     115 bytes
// Prototype: undefined __cdecl16near FUN_1000_480d()
// ============================================================================

byte __cdecl16near FUN_1000_480d(void)

{
  bool bVar1;
  byte bVar2;
  uint *puVar3;
  undefined2 unaff_DS;
  
  if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(code *)(ulong)*(uint *)0x58b)();
    return bVar2;
  }
  bVar2 = *(byte *)0x576 >> 1;
  bVar1 = (bool)(bVar2 & 1);
  if (!bVar1) {
    return (byte)(bVar2 | *(byte *)0x576 << 7) >> 1 | bVar1 << 7;
  }
  puVar3 = (uint *)0xf181;
  do {
    if (DAT_1000_51d0 == '\x01') {
      switchD_1000:4289::caseD_b();
    }
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001483d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar2 = (*(code *)(ulong)*(uint *)0x58b)();
      return bVar2;
    }
    if (!(bool)(*(byte *)0x574 >> 1 & 1)) {
      (*(code *)*(undefined2 *)0x5e7)(0x1000);
    }
    if ((*(byte *)0x576 & 8) == 0) {
      do {
      } while ((*(byte *)0x576 & 8) == 0);
      FUN_1000_7be6();
    }
    if (*(char *)0x574 == 'w') goto LAB_1000_4866;
  } while (*puVar3 < 0xc);
LAB_1000_487c:
  *puVar3 = 0;
  return 0;
LAB_1000_4866:
  do {
    FUN_1000_407c();
  } while (*(char *)0x16b9 == '\0');
  goto LAB_1000_487c;
}



// ============================================================================
// Function: FUN_1000_4881
// Entry:    1000:4881
// Body:     1000:4881 -> 1000:48ac
// Size:     44 bytes
// Prototype: undefined __cdecl16near FUN_1000_4881()
// ============================================================================

uint __cdecl16near FUN_1000_4881(void)

{
  uint uVar1;
  uint in_CX;
  undefined2 unaff_DS;
  bool bVar2;
  
  if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(ulong)*(uint *)0x58b)();
    return uVar1;
  }
  bVar2 = (bool)(*(byte *)0x575 & 1);
  if (!bVar2) {
    return (uint)(byte)(*(byte *)0x575 >> 1 | bVar2 << 7);
  }
  *(undefined2 *)0x16b7 = 0;
  do {
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000148a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)*(uint *)0x58b)();
      return uVar1;
    }
  } while (*(uint *)0x16b7 < in_CX);
  return *(uint *)0x16b7;
}



// ============================================================================
// Function: FUN_1000_48ad
// Entry:    1000:48ad
// Body:     1000:48ad -> 1000:48c1
// Size:     21 bytes
// Prototype: undefined __cdecl16near FUN_1000_48ad()
// ============================================================================

void __cdecl16near FUN_1000_48ad(void)

{
  char cVar1;
  
  cVar1 = '\x10';
  do {
    FUN_1000_48c2();
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_48c2
// Entry:    1000:48c2
// Body:     1000:48c2 -> 1000:48e1
// Size:     32 bytes
// Prototype: undefined __cdecl16near FUN_1000_48c2()
// ============================================================================

void __cdecl16near FUN_1000_48c2(void)

{
  int iVar1;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  
  iVar1 = 8;
  do {
    *unaff_DI = *unaff_SI;
    unaff_DI[0x80] = unaff_SI[1];
    unaff_DI[0x100] = unaff_SI[2];
    unaff_SI = unaff_SI + 3;
    unaff_DI = unaff_DI + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_48e2
// Entry:    1000:48e2
// Body:     1000:48e2 -> 1000:5257
// Size:     19 bytes
// Prototype: undefined __cdecl16near FUN_1000_48e2()
// ============================================================================

undefined1 __cdecl16near FUN_1000_48e2(void)

{
  undefined1 extraout_DH;
  undefined2 unaff_DS;
  
  FUN_1000_48f4();
  if (*(char *)0x1625 != '\0') {
    return extraout_DH;
  }
  return extraout_DH;
}



// ============================================================================
// Function: FUN_1000_48f4
// Entry:    1000:48f4
// Body:     1000:48f4 -> 1000:4987
// Size:     148 bytes
// Prototype: undefined __cdecl16near FUN_1000_48f4()
// ============================================================================

undefined1 __cdecl16near FUN_1000_48f4(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (*(char *)0x555 == '\x01') {
    uVar1 = (*(code *)*(undefined2 *)0x500)(0x1000);
  }
  return uVar1;
}



// ============================================================================
// Function: FUN_1000_4988
// Entry:    1000:4988
// Body:     1000:4988 -> 1000:499d
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_4988()
// ============================================================================

void __cdecl16near FUN_1000_4988(void)

{
  undefined2 unaff_DS;
  
  *(byte *)0x1627 = *(byte *)0x1627 + 1 & 7 | *(byte *)0x1627 & 0xf8;
  return;
}



// ============================================================================
// Function: FUN_1000_49b8
// Entry:    1000:49b8
// Body:     1000:49b8 -> 1000:4a42
// Size:     139 bytes
// Prototype: undefined __cdecl16near FUN_1000_49b8()
// ============================================================================

void __cdecl16near FUN_1000_49b8(void)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  switch(*(char *)0x1689) {
  case '\0':
    DAT_1000_499e = 0x85c8;
    DAT_1000_49a0 = 0;
    DAT_1000_49a2 = 0;
    return;
  case '\x01':
    DAT_1000_499e = DAT_1000_4660;
    DAT_1000_49a0 = DAT_1000_4662;
    DAT_1000_49a2 = DAT_1000_4664;
    return;
  case '\x02':
    DAT_1000_499e = 0x82ab;
    DAT_1000_49a0 = 0x8369;
    DAT_1000_49a2 = 0x84d2;
    return;
  default:
    cVar1 = *(char *)0x1689 + -4;
    pcVar2 = (char *)0x5f7;
  }
  while (cVar1 = cVar1 + -1, cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
  }
  (*(code *)*(undefined2 *)((byte)((*pcVar2 + '\x02') * '\x02') + 0x49a4))();
  DAT_1000_4660 = DAT_1000_499e;
  DAT_1000_4662 = DAT_1000_49a0;
  DAT_1000_4664 = DAT_1000_49a2;
  return;
}



// ============================================================================
// Function: FUN_1000_4b37
// Entry:    1000:4b37
// Body:     1000:4b37 -> 1000:4be0
// Size:     170 bytes
// Prototype: undefined __cdecl16near FUN_1000_4b37()
// ============================================================================

undefined2 __cdecl16near FUN_1000_4b37(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  FUN_1000_2138();
  DAT_1000_4b33 = uVar1;
  if (*(char *)0x558 == '\0') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  else {
    DAT_1000_4b35 = (*(code *)*(undefined2 *)0x5d7)(0x1000);
    FUN_1000_6ddc();
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x5db)(0x1000);
  }
  (*(code *)*(undefined2 *)0x5db)(0x1000);
  return in_AX;
}



// ============================================================================
// Function: FUN_1000_4be6
// Entry:    1000:4be6
// Body:     1000:4be6 -> 1000:4c63
// Size:     126 bytes
// Prototype: undefined __cdecl16near FUN_1000_4be6()
// ============================================================================

void __cdecl16near FUN_1000_4be6(void)

{
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if (DAT_1000_4be1 == '\0') {
    return;
  }
  DAT_1000_4be2 = DAT_1000_4be2 + '\x01';
  if (DAT_1000_4be2 != '\b') {
    return;
  }
  DAT_1000_4be2 = 0;
  DAT_1000_4be4 = DAT_1000_4be4 + -1;
  if (DAT_1000_4be4 == '/') {
    DAT_1000_4be4 = '9';
    DAT_1000_4be3 = DAT_1000_4be3 + -1;
    if (DAT_1000_4be3 == '/') {
      *(undefined1 *)0xdc15 = 0;
      *(undefined1 *)0x1701 = 0;
      DAT_1000_4be1 = '\0';
      *(undefined1 *)0x16b4 = 0;
      *(undefined1 *)0x16b5 = 0;
    }
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  if (DAT_1000_4be1 == '\0') {
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000,unaff_ES);
  return;
}



// ============================================================================
// Function: FUN_1000_4c64
// Entry:    1000:4c64
// Body:     1000:4c64 -> 1000:4c87
// Size:     36 bytes
// Prototype: undefined __cdecl16near FUN_1000_4c64()
// ============================================================================

void __cdecl16near FUN_1000_4c64(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x165a == '\0') {
    return;
  }
  if (*(char *)0x165a == '\x01') {
    *(char *)0x1634 = *(char *)0x1634 + -1;
    *(char *)0x1636 = *(char *)0x1636 + -1;
    FUN_1000_3e5d();
    return;
  }
  *(char *)0x1634 = *(char *)0x1634 + '\x01';
  *(char *)0x1636 = *(char *)0x1636 + '\x01';
  FUN_1000_3e11();
  return;
}



// ============================================================================
// Function: FUN_1000_4c91
// Entry:    1000:4c91
// Body:     1000:4c91 -> 1000:4d04
// Size:     115 bytes
// Prototype: undefined __cdecl16near FUN_1000_4c91()
// ============================================================================

void __cdecl16near FUN_1000_4c91(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 unaff_DS;
  
  if (DAT_1000_4c90 != '\0') {
    return;
  }
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  if (*(char *)0x16b6 != '\0') {
    return;
  }
  if ((*(char *)0x1625 == '\0') && (!(bool)(*(byte *)0x575 & 1))) {
    FUN_1000_4d69();
    return;
  }
  if ((*(byte *)0x1690 & 0x80) == 0) {
    if (*(char *)0x1670 == '\0') {
      return;
    }
    *(undefined1 *)0x1670 = 0;
    FUN_1000_4d42();
    if (*(char *)0x1689 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1000_499e)();
      return;
    }
    FUN_1000_0d30();
    return;
  }
  if (((*(char *)0x162d == '\0') && (*(char *)0x1631 == '\0')) && ((*(byte *)0x1690 & 2) != 0)) {
    FUN_1000_4d69();
    return;
  }
  if (*(char *)0x1670 != '\n') {
    *(char *)0x1670 = *(char *)0x1670 + '\x01';
    FUN_1000_4d1b();
    return;
  }
  *(undefined1 *)0x1670 = 0;
  DAT_1000_499e = (code *)0x7efb;
  DAT_1000_49a0 = 0x829b;
  DAT_1000_7efa = 1;
  FUN_1000_0c0f();
  cVar2 = *(char *)0x1689;
  *(char *)0x1675 = cVar2;
  if ('\x03' < cVar2) {
    cVar2 = '\x03';
  }
  *(char *)0x1689 = cVar2;
  FUN_1000_81ae();
  FUN_1000_816a();
  FUN_1000_8291();
  FUN_1000_7f90();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_0c27();
  FUN_1000_0c0f();
  FUN_1000_05f7();
  FUN_1000_3f7b();
  FUN_1000_45da();
  FUN_1000_453a();
  FUN_1000_402d();
  FUN_1000_8291();
  if ('\x03' < *(char *)0x1689) {
    puVar4 = (undefined1 *)0xdc15;
    DAT_1000_7efa = 0;
    if (*(byte *)0xdc15 < 2) {
      for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = 0;
      }
      FUN_1000_49b8();
      return;
    }
    FUN_1000_49b8();
    return;
  }
  DAT_1000_7efa = 0;
  if (*(char *)0xdc15 == '\0') {
    *(undefined1 *)0x16e2 = 0;
    FUN_1000_49b8();
    return;
  }
  FUN_1000_49b8();
  return;
}



// ============================================================================
// Function: FUN_1000_4d05
// Entry:    1000:4d05
// Body:     1000:4d05 -> 1000:4d1a
// Size:     22 bytes
// Prototype: undefined FUN_1000_4d05()
// ============================================================================

void FUN_1000_4d05(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *in_BX;
  undefined1 *puVar4;
  undefined2 unaff_DS;
  
  *in_BX = 0;
  DAT_1000_499e = 0x7efb;
  DAT_1000_49a0 = 0x829b;
  DAT_1000_7efa = 1;
  FUN_1000_0c0f();
  cVar2 = *(char *)0x1689;
  *(char *)0x1675 = cVar2;
  if ('\x03' < cVar2) {
    cVar2 = '\x03';
  }
  *(char *)0x1689 = cVar2;
  FUN_1000_81ae();
  FUN_1000_816a();
  FUN_1000_8291();
  FUN_1000_7f90();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_0c27();
  FUN_1000_0c0f();
  FUN_1000_05f7();
  FUN_1000_3f7b();
  FUN_1000_45da();
  FUN_1000_453a();
  FUN_1000_402d();
  FUN_1000_8291();
  if ('\x03' < *(char *)0x1689) {
    puVar4 = (undefined1 *)0xdc15;
    DAT_1000_7efa = 0;
    if (*(byte *)0xdc15 < 2) {
      for (iVar3 = 0x2f; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar1 = 0;
      }
      FUN_1000_49b8();
      return;
    }
    FUN_1000_49b8();
    return;
  }
  DAT_1000_7efa = 0;
  if (*(char *)0xdc15 == '\0') {
    *(undefined1 *)0x16e2 = 0;
    FUN_1000_49b8();
    return;
  }
  FUN_1000_49b8();
  return;
}



// ============================================================================
// Function: FUN_1000_4d1b
// Entry:    1000:4d1b
// Body:     1000:4d1b -> 1000:4d41
// Size:     39 bytes
// Prototype: undefined __cdecl16near FUN_1000_4d1b()
// ============================================================================

void __cdecl16near FUN_1000_4d1b(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1670 == '\0') {
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_4d42
// Entry:    1000:4d42
// Body:     1000:4d42 -> 1000:4d68
// Size:     39 bytes
// Prototype: undefined __cdecl16near FUN_1000_4d42()
// ============================================================================

void __cdecl16near FUN_1000_4d42(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  cVar1 = '\n';
  do {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_4d69
// Entry:    1000:4d69
// Body:     1000:4d69 -> 1000:4d8a
// Size:     34 bytes
// Prototype: undefined FUN_1000_4d69()
// ============================================================================

void FUN_1000_4d69(void)

{
  char cVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  *(byte *)0x1690 = *(byte *)0x1690 & 0xfd;
  cVar1 = '\n';
  do {
    *(char *)0x1670 = cVar1;
    LOCK();
    *(char *)0xdc47 = cVar1;
    UNLOCK();
    cVar2 = FUN_1000_4d1b();
    LOCK();
    cVar1 = *(char *)0xdc47;
    *(char *)0xdc47 = cVar2;
    UNLOCK();
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  FUN_1000_4d05();
  return;
}



// ============================================================================
// Function: FUN_1000_4d8b
// Entry:    1000:4d8b
// Body:     1000:4d8b -> 1000:4da0
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_4d8b()
// ============================================================================

undefined2 __cdecl16near FUN_1000_4d8b(void)

{
  undefined2 uVar1;
  
  DAT_1000_499e = 0x85c8;
  uVar1 = FUN_1000_85c8();
  DAT_1000_499e = 0x7efb;
  return uVar1;
}



// ============================================================================
// Function: FUN_1000_4db0
// Entry:    1000:4db0
// Body:     1000:4db0 -> 1000:4dc6
// Size:     23 bytes
// Prototype: undefined __cdecl16far FUN_1000_4db0()
// ============================================================================

char __cdecl16far FUN_1000_4db0(void)

{
  int unaff_SI;
  undefined2 unaff_DS;
  
  return (*(char *)(unaff_SI + 2) + '\x02') - (char)((uint)*(undefined2 *)0x1634 >> 8);
}



// ============================================================================
// Function: FUN_1000_4dc7
// Entry:    1000:4dc7
// Body:     1000:4dc7 -> 1000:4ddf
// Size:     25 bytes
// Prototype: undefined __cdecl16far FUN_1000_4dc7()
// ============================================================================

int __cdecl16far FUN_1000_4dc7(void)

{
  uint in_AX;
  
  return (in_AX & 0xff) * 0x26;
}



// ============================================================================
// Function: FUN_1000_4de0
// Entry:    1000:4de0
// Body:     1000:4de0 -> 1000:4e0a
// Size:     43 bytes
// Prototype: undefined __cdecl16far FUN_1000_4de0()
// ============================================================================

bool __cdecl16far FUN_1000_4de0(void)

{
  char in_DH;
  
  return CARRY1(in_DH * '\t',in_DH * '\n');
}



// ============================================================================
// Function: FUN_1000_4e2b
// Entry:    1000:4e2b
// Body:     1000:4e2b -> 1000:4e69
// Size:     63 bytes
// Prototype: undefined __cdecl16near FUN_1000_4e2b()
// ============================================================================

void __cdecl16near FUN_1000_4e2b(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x74da == -0x40) {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_4e6a
// Entry:    1000:4e6a
// Body:     1000:4e6a -> 1000:4e79
// Size:     16 bytes
// Prototype: undefined __cdecl16near FUN_1000_4e6a()
// ============================================================================

void __cdecl16near FUN_1000_4e6a(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_4e7a
// Entry:    1000:4e7a
// Body:     1000:4e7a -> 1000:4e9f
// Size:     38 bytes
// Prototype: undefined __cdecl16near FUN_1000_4e7a()
// ============================================================================

char __cdecl16near FUN_1000_4e7a(void)

{
  undefined2 unaff_DS;
  
  return (*(char *)0x162a - *(char *)0x1635) * '\t';
}



// ============================================================================
// Function: FUN_1000_4ea0
// Entry:    1000:4ea0
// Body:     1000:4ea0 -> 1000:4eb5
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_4ea0()
// ============================================================================

void __cdecl16near FUN_1000_4ea0(void)

{
  uint uVar1;
  uint uVar2;
  int in_DX;
  int in_BX;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = in_BX - in_DX;
  bVar4 = false;
  do {
    uVar1 = (uint)bVar4;
    bVar5 = uVar3 < 0x26;
    uVar2 = uVar3 - 0x26;
    bVar4 = bVar5 || uVar2 < uVar1;
    uVar3 = uVar2 - uVar1;
  } while (!bVar5 && uVar2 >= uVar1);
  return;
}



// ============================================================================
// Function: FUN_1000_4ecb
// Entry:    1000:4ecb
// Body:     1000:4ecb -> 1000:4f93
// Size:     199 bytes
// Prototype: undefined __cdecl16near FUN_1000_4ecb()
// ============================================================================

void __cdecl16near FUN_1000_4ecb(void)

{
  char *pcVar1;
  byte bVar2;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  bVar2 = *unaff_SI;
  if ((bVar2 & 0x70) == 0) {
    if ((bVar2 & 0xf) == 0) {
      unaff_SI[5] = unaff_SI[5] & 0xf3;
    }
    else {
      unaff_SI[5] = unaff_SI[5] & 0xfb;
    }
    return;
  }
  bVar2 = *(byte *)((byte)((bVar2 >> 4 & 7) * '\x03') + 0xdf6a);
  if ((*(char *)0x5ef != '\n') && ((*(char *)0x5ef < '\t' || (*(char *)0x1676 < '\x02')))) {
    pcVar1 = (char *)0x1653;
    *pcVar1 = *pcVar1;
    if ((*pcVar1 == '\0') &&
       (((bVar2 = unaff_SI[5] & bVar2, unaff_SI[5] = bVar2, (bVar2 & 0xf) == 0 &&
         ((*unaff_SI & 0xf) == 7)) && ((unaff_SI[5] & 0x20) != 0)))) {
      unaff_SI[5] = unaff_SI[5] + 1;
    }
    return;
  }
  unaff_SI[5] = unaff_SI[5] & bVar2;
  return;
}



// ============================================================================
// Function: FUN_1000_4f94
// Entry:    1000:4f94
// Body:     1000:4f94 -> 1000:50a4
// Size:     273 bytes
// Prototype: undefined __cdecl16near FUN_1000_4f94()
// ============================================================================

void __cdecl16near FUN_1000_4f94(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *in_DX;
  undefined1 *in_BX;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  unaff_SI[5] = unaff_SI[5] | 0x80;
  if ((*unaff_SI & 0x70) != 0) {
    *in_BX = *in_DX;
    in_BX[1] = in_DX[1];
    in_BX[0x27] = in_DX[2];
    uVar2 = in_DX[3];
    in_BX[0x26] = uVar2;
    LOCK();
    uVar1 = *(undefined1 *)0xdc47;
    *(undefined1 *)0xdc47 = uVar2;
    UNLOCK();
    in_BX[0x6d4] = uVar1;
    in_BX[0x6d5] = uVar1;
    in_BX[0x6fb] = uVar1;
    in_BX[0x6fa] = uVar1;
    LOCK();
    *(undefined1 *)0xdc47 = uVar1;
    UNLOCK();
    in_BX[0xda8] = in_BX[0xda8] | 0x22;
    in_BX[0xda9] = in_BX[0xda9] | 0x22;
    in_BX[0xdcf] = in_BX[0xdcf] | 0x22;
    in_BX[0xdce] = in_BX[0xdce] | 0x22;
    return;
  }
  *in_BX = *in_DX;
  in_BX[1] = in_DX[1];
  in_BX[2] = in_DX[2];
  in_BX[0x26] = in_DX[3];
  in_BX[0x27] = in_DX[4];
  in_BX[0x28] = in_DX[5];
  in_BX[0x4c] = in_DX[6];
  in_BX[0x4d] = in_DX[7];
  uVar2 = in_DX[8];
  in_BX[0x4e] = uVar2;
  LOCK();
  uVar1 = *(undefined1 *)0xdc47;
  *(undefined1 *)0xdc47 = uVar2;
  UNLOCK();
  in_BX[0x6d4] = uVar1;
  in_BX[0x6d5] = uVar1;
  in_BX[0x6d6] = uVar1;
  in_BX[0x6fa] = uVar1;
  in_BX[0x6fb] = uVar1;
  in_BX[0x6fc] = uVar1;
  in_BX[0x720] = uVar1;
  in_BX[0x721] = uVar1;
  in_BX[0x722] = uVar1;
  LOCK();
  *(undefined1 *)0xdc47 = uVar1;
  UNLOCK();
  in_BX[0xda8] = in_BX[0xda8] | 0x22;
  in_BX[0xda9] = in_BX[0xda9] | 0x22;
  in_BX[0xdaa] = in_BX[0xdaa] | 0x22;
  in_BX[0xdce] = in_BX[0xdce] | 0x22;
  in_BX[0xdcf] = in_BX[0xdcf] | 0x22;
  in_BX[0xdd0] = in_BX[0xdd0] | 0x22;
  in_BX[0xdf4] = in_BX[0xdf4] | 0x22;
  in_BX[0xdf5] = in_BX[0xdf5] | 0x22;
  in_BX[0xdf6] = in_BX[0xdf6] | 0x22;
  return;
}



// ============================================================================
// Function: FUN_1000_50a5
// Entry:    1000:50a5
// Body:     1000:50a5 -> 1000:50a9
// Size:     5 bytes
// Prototype: undefined __cdecl16near FUN_1000_50a5()
// ============================================================================

undefined1 __cdecl16near FUN_1000_50a5(void)

{
  return 1;
}



// ============================================================================
// Function: FUN_1000_50aa
// Entry:    1000:50aa
// Body:     1000:50aa -> 1000:50bd
// Size:     20 bytes
// Prototype: undefined __cdecl16near FUN_1000_50aa()
// ============================================================================

void __cdecl16near FUN_1000_50aa(void)

{
  undefined1 *in_BX;
  undefined2 unaff_DS;
  
  *in_BX = 0;
  in_BX[1] = 0;
  in_BX[0x27] = 0;
  in_BX[0x26] = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_50be
// Entry:    1000:50be
// Body:     1000:50be -> 1000:50e6
// Size:     41 bytes
// Prototype: undefined __cdecl16near FUN_1000_50be()
// ============================================================================

void __cdecl16near FUN_1000_50be(void)

{
  undefined1 *in_BX;
  undefined2 unaff_DS;
  
  *in_BX = 0;
  in_BX[1] = 0;
  in_BX[2] = 0;
  in_BX[0x28] = 0;
  in_BX[0x27] = 0;
  in_BX[0x26] = 0;
  in_BX[0x4c] = 0;
  in_BX[0x4d] = 0;
  in_BX[0x4e] = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_50e7
// Entry:    1000:50e7
// Body:     1000:50e7 -> 1000:51c0
// Size:     217 bytes
// Prototype: undefined FUN_1000_50e7()
// ============================================================================

void FUN_1000_50e7(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)();
  (*(code *)*(undefined2 *)0x508)();
  if (*(char *)0x5ef != '\0') {
    *(char *)0x5ef = *(char *)0x5ef + '\x01';
    (*(code *)*(undefined2 *)0x5e3)(0x1000);
    *(char *)0x5ef = *(char *)0x5ef + -1;
  }
  if (*(char *)0x5ef == '\0') {
    puVar5 = (undefined2 *)0x5ff;
    puVar6 = (undefined2 *)0x5ef;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    FUN_1000_2e71();
    return;
  }
  *(char *)0x5ef = *(char *)0x5ef + '\x01';
  thunk_FUN_1000_1ced();
  (*(code *)*(undefined2 *)0x508)();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  do {
    if (DAT_1000_51d0 == '\x01') {
      switchD_1000:4289::caseD_b();
    }
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00015174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    if (-1 < *(char *)0x56c) break;
    bVar3 = FUN_1000_48e2();
  } while ((bVar3 & 0xc0) == 0);
  (*(code *)*(undefined2 *)0x5ab)();
  (*(code *)*(undefined2 *)0x508)();
  (*(code *)*(undefined2 *)0x508)();
  FUN_1000_0c27();
  FUN_1000_4649();
  FUN_1000_2a81();
  return;
}



// ============================================================================
// Function: caseD_b
// Entry:    1000:5201
// Body:     1000:5201 -> 1000:5241
// Size:     65 bytes
// Prototype: undefined __cdecl16near caseD_b()
// ============================================================================

undefined2 __cdecl16near switchD_1000:4289::caseD_b(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x1644 = 0xc;
  if (*(char *)0x558 == '\0') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  *(char *)0x1643 = *(char *)0x1643 + '\x01';
  if (*(char *)0x1643 == '\x05') {
    *(undefined1 *)0x1643 = 0;
  }
  DAT_1000_51d0 = 0;
  return in_AX;
}



// ============================================================================
// Function: FUN_1000_5258
// Entry:    1000:5258
// Body:     1000:5258 -> 1000:5266
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_5258()
// ============================================================================

undefined1 __cdecl16near FUN_1000_5258(void)

{
  undefined1 in_AL;
  undefined2 unaff_DS;
  
  if (*(char *)0x1625 == '\0') {
    return in_AL;
  }
  return 0;
}



// ============================================================================
// Function: FUN_1000_5460
// Entry:    1000:5460
// Body:     1000:5460 -> 1000:5503
// Size:     164 bytes
// Prototype: undefined __cdecl16near FUN_1000_5460()
// ============================================================================

void __cdecl16near FUN_1000_5460(void)

{
  int iVar1;
  byte *in_BX;
  undefined2 unaff_DS;
  
  if (*(char *)0x16b6 != '\0') {
    return;
  }
  FUN_1000_4e7a();
  iVar1 = 0x24;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + iVar1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + iVar1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + iVar1;
  if (0x19 < *(byte *)0x1627) {
    return;
  }
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + iVar1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  in_BX = in_BX + 1;
  if (0xe < *in_BX) {
    FUN_1000_5504();
  }
  if (0xe < in_BX[1]) {
    FUN_1000_5504();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_5504
// Entry:    1000:5504
// Body:     1000:5504 -> 1000:5575
// Size:     114 bytes
// Prototype: undefined __cdecl16near FUN_1000_5504()
// ============================================================================

void __cdecl16near FUN_1000_5504(void)

{
  char cVar1;
  byte *in_BX;
  undefined2 unaff_DS;
  
  if (0x93 < *in_BX) {
    FUN_1000_4193();
    return;
  }
  if (*(char *)0x165e != '\0') {
    if ((in_BX[0x6d4] != 0) && (*(char *)0x74e3 != '\0')) {
      FUN_1000_5685();
    }
    *(undefined1 *)0x562 = 8;
    if (*(char *)0x1674 == '\0') {
      *(undefined1 *)0x1674 = 6;
    }
    cVar1 = *(char *)0x74e2;
    if (cVar1 != '\0') {
      do {
        FUN_1000_3ed3();
        cVar1 = cVar1 + -1;
      } while (cVar1 != '\0');
      return;
    }
    return;
  }
  *(undefined1 *)0x562 = 0xd;
  *(undefined1 *)0x166f = 1;
  cVar1 = *(char *)0x74df;
  if (cVar1 != '\0') {
    do {
      FUN_1000_407c();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_5576
// Entry:    1000:5576
// Body:     1000:5576 -> 1000:557e
// Size:     9 bytes
// Prototype: undefined __cdecl16near FUN_1000_5576()
// ============================================================================

void __cdecl16near FUN_1000_5576(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x165e == '\0') {
    *(undefined1 *)0x562 = 0xd;
    *(undefined1 *)0x166f = 1;
    cVar1 = *(char *)0x74df;
    if (cVar1 != '\0') {
      do {
        FUN_1000_407c();
        cVar1 = cVar1 + -1;
      } while (cVar1 != '\0');
      return;
    }
    return;
  }
  *(undefined1 *)0x562 = 8;
  if (*(char *)0x1674 == '\0') {
    *(undefined1 *)0x1674 = 6;
  }
  cVar1 = *(char *)0x74e2;
  if (cVar1 != '\0') {
    do {
      FUN_1000_3ed3();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_557f
// Entry:    1000:557f
// Body:     1000:557f -> 1000:5684
// Size:     262 bytes
// Prototype: undefined __cdecl16near FUN_1000_557f()
// ============================================================================

void __cdecl16near FUN_1000_557f(void)

{
  int iVar1;
  char cVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  char cVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined2 unaff_DS;
  
  cVar2 = *(char *)0x1674;
  if (cVar2 == '\0') {
    return;
  }
  if ((*(char *)0x16b9 != '\0') || (*(char *)0x16b6 == '\0')) {
    *(char *)0x1674 = *(char *)0x1674 + -1;
  }
  iVar1 = (byte)((cVar2 + -1) * '\x10') + 0xdde0;
  if (*(byte *)0x1627 < 0x1a) {
    FUN_1000_4e6a(iVar1);
    iVar1 = CONCAT11(((char)((uint)extraout_DX >> 8) + -1) * '\b',(char)extraout_DX << 1) + -1;
    cVar2 = '\x04';
    do {
      FUN_1000_45b0();
      iVar1 = iVar1 + 2;
      FUN_1000_45b0();
      iVar1 = iVar1 + 2;
      FUN_1000_45b0();
      iVar1 = iVar1 + 2;
      FUN_1000_45b0();
      iVar1 = CONCAT11((char)((uint)iVar1 >> 8) + '\b',(char)iVar1 + -6);
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    FUN_1000_4e7a();
    cVar2 = '\x04';
    puVar4 = (undefined1 *)(iVar1 + -1);
    do {
      *puVar4 = 0xff;
      puVar4[1] = 0xff;
      puVar4[2] = 0xff;
      puVar4[3] = 0xff;
      puVar4[4] = 0xff;
      puVar4 = puVar4 + 0x26;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    return;
  }
  FUN_1000_4e6a(iVar1);
  iVar1 = CONCAT11(((char)((uint)extraout_DX_00 >> 8) + -1) * '\b' + -4,
                   (char)extraout_DX_00 * '\x02' + -1);
  cVar2 = '\x04';
  do {
    FUN_1000_45b0();
    cVar5 = (char)((uint)iVar1 >> 8);
    cVar3 = (char)iVar1 + '\x02';
    FUN_1000_45b0();
    cVar3 = cVar3 + '\x02';
    FUN_1000_45b0();
    cVar3 = cVar3 + '\x02';
    FUN_1000_45b0();
    iVar1 = CONCAT11(cVar5 + '\b',cVar3 + -6);
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  FUN_1000_4e7a();
  cVar2 = '\x06';
  puVar4 = (undefined1 *)(iVar1 + -1);
  do {
    *puVar4 = 0xff;
    puVar4[1] = 0xff;
    puVar4[2] = 0xff;
    puVar4[3] = 0xff;
    puVar4[4] = 0xff;
    puVar4 = puVar4 + 0x26;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_5685
// Entry:    1000:5685
// Body:     1000:5685 -> 1000:56b5
// Size:     49 bytes
// Prototype: undefined __cdecl16near FUN_1000_5685()
// ============================================================================

void __cdecl16near FUN_1000_5685(void)

{
  undefined1 in_AL;
  undefined2 in_CX;
  byte bVar1;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined1 *)0xdc47 = in_AL;
  UNLOCK();
  if (*(char *)0x16d0 != '\0') {
    return;
  }
  bVar1 = (byte)((uint)in_CX >> 8);
  if (0xec < bVar1) {
    return;
  }
  LOCK();
  *(byte *)0xdc47 = bVar1;
  UNLOCK();
  FUN_1000_58aa();
  return;
}



// ============================================================================
// Function: FUN_1000_56bc
// Entry:    1000:56bc
// Body:     1000:56bc -> 1000:5722
// Size:     102 bytes
// Prototype: undefined FUN_1000_56bc()
// ============================================================================

void FUN_1000_56bc(void)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  undefined1 in_CL;
  byte bVar5;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar6;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 uVar7;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  LOCK();
  bVar5 = *(byte *)0xdc47;
  *(byte *)0xdc47 = in_AL;
  UNLOCK();
  bVar2 = unaff_SI[3];
  while( true ) {
    if (bVar2 == 0) {
      if ((*unaff_SI & 0xf) == 7) {
        unaff_SI[5] = unaff_SI[5] | 0x20;
      }
      FUN_1000_5724();
      return;
    }
    pbVar1 = unaff_SI + 3;
    *pbVar1 = *pbVar1 - 1;
    if (*pbVar1 == 0) break;
    bVar5 = bVar5 - 1;
    bVar2 = bVar5;
  }
  *(undefined1 *)0x562 = 0xe;
  uVar3 = CONCAT11(unaff_SI[4],in_CL);
  if (unaff_SI[4] != 0) {
    *(undefined1 *)0x562 = 0xf;
    LOCK();
    cVar6 = *(char *)0xdc47;
    *(char *)0xdc47 = '\x0f';
    UNLOCK();
    if (cVar6 == '\0') {
      do {
        LOCK();
        uVar7 = *(undefined2 *)0xdc4a;
        *(undefined2 *)0xdc4a = in_BX;
        UNLOCK();
        LOCK();
        uVar4 = *(undefined2 *)0xdc4c;
        *(undefined2 *)0xdc4c = uVar3;
        UNLOCK();
        LOCK();
        uVar3 = *(undefined2 *)0xdc4e;
        *(undefined2 *)0xdc4e = in_DX;
        UNLOCK();
        FUN_1000_4070();
        LOCK();
        in_BX = *(undefined2 *)0xdc4a;
        *(undefined2 *)0xdc4a = uVar7;
        UNLOCK();
        LOCK();
        uVar7 = *(undefined2 *)0xdc4c;
        *(undefined2 *)0xdc4c = uVar4;
        UNLOCK();
        LOCK();
        in_DX = *(undefined2 *)0xdc4e;
        *(undefined2 *)0xdc4e = uVar3;
        UNLOCK();
        cVar6 = (char)((uint)uVar7 >> 8) + -1;
        uVar3 = CONCAT11(cVar6,(char)uVar7);
      } while (cVar6 != '\0');
    }
  }
  FUN_1000_5724();
  return;
}



// ============================================================================
// Function: FUN_1000_5724
// Entry:    1000:5724
// Body:     1000:5724 -> 1000:5744
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_5724()
// ============================================================================

void __cdecl16near FUN_1000_5724(void)

{
  char cVar1;
  int in_BX;
  char *pcVar2;
  undefined2 unaff_DS;
  
  pcVar2 = (char *)0x7553;
  cVar1 = '\n';
  do {
    if (*pcVar2 == '\0') {
      *pcVar2 = '\a';
      *(int *)(pcVar2 + 1) = in_BX + 0xa3e;
      return;
    }
    pcVar2 = pcVar2 + 3;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_5745
// Entry:    1000:5745
// Body:     1000:5745 -> 1000:575e
// Size:     26 bytes
// Prototype: undefined __cdecl16near FUN_1000_5745()
// ============================================================================

void __cdecl16near FUN_1000_5745(void)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  pcVar2 = (char *)0x7553;
  cVar1 = '\n';
  do {
    if (*pcVar2 != '\0') {
      FUN_1000_575f();
    }
    pcVar2 = pcVar2 + 3;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_575f
// Entry:    1000:575f
// Body:     1000:575f -> 1000:580a
// Size:     172 bytes
// Prototype: undefined FUN_1000_575f()
// ============================================================================

void FUN_1000_575f(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 in_AL;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined2 in_CX;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 extraout_DX;
  int extraout_DX_00;
  undefined2 extraout_DX_01;
  int extraout_DX_02;
  int iVar9;
  char *unaff_SI;
  int iVar10;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined1 *)0xdc47 = in_AL;
  UNLOCK();
  *unaff_SI = *unaff_SI + -1;
  FUN_1000_580c();
  cVar4 = FUN_1000_4ea0();
  *(undefined2 *)0xdc4c = extraout_DX;
  LOCK();
  cVar1 = *(char *)0xdc47;
  *(char *)0xdc47 = cVar4;
  UNLOCK();
  uVar5 = (uint)(byte)((cVar1 + -1) * '\x04');
  iVar6 = uVar5 + 0xdea0;
  iVar10 = uVar5 + 0xdea1;
  FUN_1000_5827(iVar10);
  LOCK();
  iVar2 = *(int *)0xdc4a;
  *(int *)0xdc4a = iVar6;
  UNLOCK();
  LOCK();
  uVar3 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  iVar6 = *(int *)0xdc4e;
  *(int *)0xdc4e = extraout_DX_00 + 2;
  UNLOCK();
  LOCK();
  iVar9 = *(int *)0xdc4a;
  *(int *)0xdc4a = iVar2;
  UNLOCK();
  LOCK();
  uVar7 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = CONCAT11((char)((uint)uVar3 >> 8),(char)uVar3 + '\x01');
  UNLOCK();
  LOCK();
  *(int *)0xdc4e = iVar6;
  UNLOCK();
  iVar10 = iVar10 + 1;
  FUN_1000_5827(iVar10);
  LOCK();
  iVar2 = *(int *)0xdc4a;
  *(int *)0xdc4a = iVar9;
  UNLOCK();
  LOCK();
  uVar3 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = uVar7;
  UNLOCK();
  LOCK();
  uVar7 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = CONCAT11((char)((uint)extraout_DX_01 >> 8) + '\b',(char)extraout_DX_01);
  UNLOCK();
  LOCK();
  iVar6 = *(int *)0xdc4a;
  *(int *)0xdc4a = iVar2;
  UNLOCK();
  LOCK();
  uVar8 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = CONCAT11((char)((uint)uVar3 >> 8) + '\x01',(char)uVar3);
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = uVar7;
  UNLOCK();
  FUN_1000_5827(iVar10 + 1);
  LOCK();
  iVar2 = *(int *)0xdc4a;
  *(int *)0xdc4a = iVar6;
  UNLOCK();
  LOCK();
  uVar3 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = uVar8;
  UNLOCK();
  LOCK();
  iVar6 = *(int *)0xdc4e;
  *(int *)0xdc4e = extraout_DX_02 + -2;
  UNLOCK();
  LOCK();
  *(int *)0xdc4a = iVar2;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = CONCAT11((char)((uint)uVar3 >> 8),(char)uVar3 + -1);
  UNLOCK();
  LOCK();
  *(int *)0xdc4e = iVar6;
  UNLOCK();
  FUN_1000_5827();
  return;
}



// ============================================================================
// Function: FUN_1000_580c
// Entry:    1000:580c
// Body:     1000:580c -> 1000:5826
// Size:     27 bytes
// Prototype: undefined __cdecl16near FUN_1000_580c()
// ============================================================================

void __cdecl16near FUN_1000_580c(void)

{
  int in_BX;
  undefined2 unaff_DS;
  
  *(undefined1 *)(in_BX + -0xda8) = 0xfe;
  *(undefined1 *)(in_BX + -0xda7) = 0xfe;
  *(undefined1 *)(in_BX + -0xd81) = 0xfe;
  *(undefined1 *)(in_BX + -0xd82) = 0xfe;
  return;
}



// ============================================================================
// Function: FUN_1000_5827
// Entry:    1000:5827
// Body:     1000:5827 -> 1000:58a9
// Size:     131 bytes
// Prototype: undefined __cdecl16near FUN_1000_5827()
// ============================================================================

void __cdecl16near FUN_1000_5827(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 in_AL;
  undefined2 in_CX;
  byte bVar4;
  undefined2 in_DX;
  undefined2 uVar5;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0xdc4a;
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  uVar5 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  uVar5 = CONCAT11(in_AL,(char)uVar5);
  if ((((2 < (byte)uVar2) && ((byte)uVar2 < 0x23)) && (bVar4 = (byte)((uint)uVar2 >> 8), 1 < bVar4))
     && (bVar4 < 0x14)) {
    LOCK();
    uVar3 = *(undefined2 *)0xdc4a;
    *(undefined2 *)0xdc4a = uVar1;
    UNLOCK();
    LOCK();
    *(undefined2 *)0xdc4c = uVar2;
    UNLOCK();
    LOCK();
    *(undefined2 *)0xdc4e = uVar5;
    UNLOCK();
    if (*(char *)0x558 == '\0') {
      (*(code *)*(undefined2 *)0x508)(0x1000);
    }
    else {
      (*(code *)*(undefined2 *)0x508)(0x1000,uVar3);
    }
    return;
  }
  LOCK();
  *(undefined2 *)0xdc4a = uVar1;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = uVar2;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = uVar5;
  UNLOCK();
  return;
}



// ============================================================================
// Function: FUN_1000_58aa
// Entry:    1000:58aa
// Body:     1000:58aa -> 1000:58b3
// Size:     10 bytes
// Prototype: undefined __cdecl16far FUN_1000_58aa()
// ============================================================================

void __cdecl16far FUN_1000_58aa(void)

{
  undefined1 in_AL;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined1 *)0xdc47 = in_AL;
  UNLOCK();
  FUN_1000_56bc();
  return;
}



// ============================================================================
// Function: FUN_1000_58c0
// Entry:    1000:58c0
// Body:     1000:58c0 -> 1000:58fa
// Size:     59 bytes
// Prototype: undefined __cdecl16near FUN_1000_58c0()
// ============================================================================

void __cdecl16near FUN_1000_58c0(void)

{
  char cVar1;
  char cVar2;
  int extraout_DX;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  FUN_1000_0d10();
  pcVar3 = (char *)(extraout_DX + -0x7a2e);
  pcVar4 = (char *)0x7583;
  cVar2 = '\0';
  while( true ) {
    cVar1 = '\0';
    do {
      pcVar5 = pcVar3;
      if (*pcVar5 != *pcVar4) {
        FUN_1000_58fb();
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = cVar1 + '\x01';
      pcVar3 = pcVar5 + 1;
    } while (cVar1 != '&');
    cVar2 = cVar2 + '\x01';
    if (cVar2 == '\x17') break;
    pcVar3 = pcVar5 + 0x3b;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_58fb
// Entry:    1000:58fb
// Body:     1000:58fb -> 1000:5922
// Size:     40 bytes
// Prototype: undefined __cdecl16near FUN_1000_58fb()
// ============================================================================

void __cdecl16near FUN_1000_58fb(void)

{
  byte bVar1;
  undefined1 in_AL;
  byte *in_BX;
  byte *pbVar2;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined1 *)0xdc47 = in_AL;
  UNLOCK();
  LOCK();
  bVar1 = *(byte *)0xdc47;
  *(byte *)0xdc47 = *in_BX;
  UNLOCK();
  *in_BX = bVar1;
  pbVar2 = in_BX + 0xda8;
  if (1 < bVar1) {
    *pbVar2 = 0x22;
    return;
  }
  if (bVar1 != 1) {
    *pbVar2 = 1;
    return;
  }
  *pbVar2 = 0x12;
  return;
}



// ============================================================================
// Function: FUN_1000_5931
// Entry:    1000:5931
// Body:     1000:5931 -> 1000:5953
// Size:     35 bytes
// Prototype: undefined __cdecl16near FUN_1000_5931()
// ============================================================================

void __cdecl16near FUN_1000_5931(void)

{
  byte in_AL;
  
  if ((in_AL & 0xf) == 0) {
    return;
  }
  (*(code *)*(undefined2 *)((uint)(byte)((in_AL & 0xf) - 1) * 2 + 0x5923))();
  return;
}



// ============================================================================
// Function: FUN_1000_59fb
// Entry:    1000:59fb
// Body:     1000:59fb -> 1000:5af5
// Size:     251 bytes
// Prototype: undefined __cdecl16near FUN_1000_59fb()
// ============================================================================

void __cdecl16near FUN_1000_59fb(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int extraout_DX;
  byte *pbVar4;
  uint uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  char *pcVar7;
  
  if (*(char *)0x1680 == '\0') {
    return;
  }
  if (*(char *)0x16ba == '\0') {
    return;
  }
  *(char *)0x16ba = *(char *)0x16ba + -1;
  pcVar1 = (char *)0x165b;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    *(undefined1 *)0x165b = 0x14;
    FUN_1000_407c();
  }
  *(undefined1 *)0x16ba = 0;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  pcVar7 = (char *)0x16ba;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  *(undefined1 *)0x562 = 3;
  cVar3 = *pcVar7;
  *pcVar7 = '\0';
  if (cVar3 != '\x02') {
    return;
  }
  pbVar4 = (byte *)(*(int *)(pcVar7 + 8) + -0xda8);
  bVar2 = *pbVar4;
  if (*(char *)0x5ef == '\n') {
    if (0x5f < bVar2) {
      bVar6 = bVar2 == 0x62;
      if (0x61 < bVar2) {
        return;
      }
      *(undefined1 *)0x562 = 4;
      cVar3 = *(char *)0x74e4;
      do {
        FUN_1000_5b56(pbVar4);
        if (bVar6) break;
        cVar3 = cVar3 + -1;
        bVar6 = cVar3 == '\0';
      } while (!bVar6);
      FUN_1000_5724();
      return;
    }
  }
  else if (0xf < bVar2) {
    bVar6 = bVar2 == 0x1f;
    if (0x1e < bVar2) {
      return;
    }
    *(undefined1 *)0x562 = 4;
    cVar3 = *(char *)0x74e4;
    do {
      FUN_1000_5b56(pbVar4);
      if (bVar6) break;
      cVar3 = cVar3 + -1;
      bVar6 = cVar3 == '\0';
    } while (!bVar6);
    FUN_1000_5724();
    return;
  }
  if (bVar2 != 0xe) {
    return;
  }
  uVar5 = *(int *)(pcVar7 + 8) + 0x7cd5;
  do {
    bVar6 = 0x25 < uVar5;
    uVar5 = uVar5 - 0x26;
  } while (bVar6);
  FUN_1000_0d10();
  *(undefined1 *)(extraout_DX + -0x796b) = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_5b56
// Entry:    1000:5b56
// Body:     1000:5b56 -> 1000:5b6e
// Size:     25 bytes
// Prototype: undefined __cdecl16near FUN_1000_5b56()
// ============================================================================

void __cdecl16near FUN_1000_5b56(void)

{
  undefined1 in_DH;
  undefined2 unaff_DS;
  
  DAT_1000_5d54 = DAT_1000_5d54 + -1;
  if (DAT_1000_5d54 != '\0') {
    return;
  }
  DAT_1000_5d54 = in_DH;
  if (*(char *)0x1680 == '\0') {
    return;
  }
  *(char *)0x1680 = *(char *)0x1680 + -1;
  return;
}



// ============================================================================
// Function: FUN_1000_5c21
// Entry:    1000:5c21
// Body:     1000:5c21 -> 1000:5d1c
// Size:     252 bytes
// Prototype: undefined __cdecl16near FUN_1000_5c21()
// ============================================================================

void __cdecl16near FUN_1000_5c21(void)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  bool bVar7;
  
  puVar6 = (undefined1 *)0x5d50;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  puVar6 = (undefined1 *)0xee76;
  for (iVar5 = 0xa0; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  puVar6 = (undefined1 *)0xe4b9;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  *(undefined1 *)0x1671 = 0;
  DAT_1000_540c = DAT_1000_540c + '\x01';
  DAT_1000_5414 = DAT_1000_5414 + '\x01';
  FUN_1000_2138();
  bVar7 = (bool)(*(byte *)0x7453 & 1);
  bVar2 = *(byte *)0x7453 >> 1 | bVar7 << 7;
  if (bVar7) {
    LOCK();
    *(byte *)0xdc47 = bVar2;
    UNLOCK();
    if (*(char *)0x558 == '\0') {
      FUN_1000_216e();
      bVar3 = FUN_1000_48ad();
    }
    else {
      *(undefined1 *)0xf17e = 4;
      bVar3 = FUN_1000_21f1();
    }
    LOCK();
    bVar2 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar3;
    UNLOCK();
  }
  bVar3 = bVar2 >> 1 | (bVar2 & 1) << 7;
  if ((bool)(bVar2 & 1)) {
    LOCK();
    *(byte *)0xdc47 = bVar3;
    UNLOCK();
    *(undefined1 *)0xf17e = 0xc;
    bVar2 = FUN_1000_21f1();
    LOCK();
    bVar3 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar2;
    UNLOCK();
  }
  bVar2 = bVar3 >> 1 | (bVar3 & 1) << 7;
  if ((bool)(bVar3 & 1)) {
    LOCK();
    *(byte *)0xdc47 = bVar2;
    UNLOCK();
    bVar3 = FUN_1000_216e();
    LOCK();
    bVar2 = *(byte *)0xdc47;
    *(byte *)0xdc47 = bVar3;
    UNLOCK();
  }
  bVar7 = (bool)(bVar2 >> 1 & 1);
  if (bVar7) {
    LOCK();
    *(byte *)0xdc47 = (byte)(bVar2 >> 1 | bVar2 << 7) >> 1 | bVar7 << 7;
    UNLOCK();
    uVar4 = FUN_1000_216e();
    LOCK();
    *(undefined1 *)0xdc47 = uVar4;
    UNLOCK();
  }
  DAT_1000_5c20 = *(undefined1 *)0x1683;
  *(undefined1 *)0x1683 = 1;
  FUN_1000_5d21();
  *(undefined1 *)0x1634 = *(undefined1 *)0x74dc;
  *(undefined1 *)0x1635 = *(undefined1 *)0x74dd;
  *(undefined1 *)0x162a = *(undefined1 *)0x74de;
  FUN_1000_6c5f();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_5d21
// Entry:    1000:5d21
// Body:     1000:5d21 -> 1000:5d4a
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_5d21()
// ============================================================================

void __cdecl16near FUN_1000_5d21(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1657 == '\0') {
    return;
  }
  switch(*(char *)0x1657 - 1U & 1) {
  case 0:
    *(undefined1 *)0x74e4 = 2;
    *(undefined1 *)0x74e5 = 2;
    return;
  case 1:
    *(undefined1 *)0x74e4 = 10;
    *(undefined1 *)0x74e5 = 10;
    return;
  }
}



// ============================================================================
// Function: FUN_1000_5d97
// Entry:    1000:5d97
// Body:     1000:5d97 -> 1000:6054
// Size:     701 bytes
// Prototype: undefined __cdecl16near FUN_1000_5d97()
// ============================================================================

uint __cdecl16near FUN_1000_5d97(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char cVar9;
  byte bVar10;
  int iVar8;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 *puVar16;
  uint unaff_DS;
  bool bVar17;
  
  bVar17 = (bool)(*(byte *)0x573 & 1);
  if (!bVar17) {
    return (uint)(byte)(*(byte *)0x573 >> 1 | bVar17 << 7);
  }
  if (*(byte *)0x16b9 != 0) {
    return (uint)*(byte *)0x16b9;
  }
  *(undefined1 *)0x16b4 = 0;
  *(undefined1 *)0x16b5 = 0;
  switch(DAT_1000_5d50) {
  case '\0':
    *(undefined1 *)0x1679 = 0x14;
    *(undefined2 *)0x1677 = 0xee76;
    *(undefined1 *)0x167f = 0x32;
    *(undefined1 *)0x1680 = 0x32;
    DAT_1000_5d54 = *(byte *)0x74e1;
    uVar6 = (uint)DAT_1000_5d54;
    *(undefined1 *)0x1660 = 1;
    puVar16 = (undefined1 *)0xe4b9;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)0x16cc = 0xe4b9;
    *(undefined1 *)0x16d0 = 1;
    DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
    return uVar6;
  case '\x01':
    DAT_1000_5d51 = DAT_1000_5d51 + 1;
    puVar16 = (undefined1 *)((uint)*(byte *)((DAT_1000_5d51 & 0xf) + 0x5d69) * 0x24 + -0x3dab);
    puVar13 = (undefined1 *)0xc1e0;
    iVar8 = 4;
    do {
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar13;
        puVar13 = puVar13 + 1;
        puVar1 = puVar16;
        puVar16 = puVar16 + 1;
        *puVar2 = *puVar1;
      }
      puVar13 = puVar13 + 0x17;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    pcVar11 = (char *)0xc115;
    pcVar14 = (char *)0xa699;
    cVar5 = '\n';
    do {
      cVar9 = ' ';
      pcVar15 = pcVar14;
      do {
        cVar4 = *pcVar11;
        if (cVar4 != '\0') {
          cVar4 = cVar4 + -0x6c;
        }
        *pcVar15 = cVar4;
        pcVar11 = pcVar11 + 1;
        pcVar15 = pcVar15 + 1;
        cVar9 = cVar9 + -1;
      } while (cVar9 != '\0');
      pcVar14 = pcVar14 + 0x60;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    FUN_1000_65d5();
    if (*(byte *)0x1680 == 0) {
      DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
      return 0;
    }
    return (uint)*(byte *)0x1680;
  case '\x02':
    *(undefined1 *)0x562 = 0xc;
    DAT_1000_5d56 = DAT_1000_5d56 + 1;
    if (0x14 < DAT_1000_5d56) {
      DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
      return (uint)DAT_1000_5d56;
    }
    if (!(bool)(DAT_1000_5d56 & 1)) {
      cVar5 = '\v';
      puVar13 = (undefined1 *)0xa999;
      puVar16 = (undefined1 *)0xa9f9;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12;
        for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          puVar1 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar2 = *puVar1;
        }
        cVar5 = cVar5 + -1;
        puVar13 = puVar12 + -0x60;
        puVar16 = puVar12;
      } while (cVar5 != '\0');
      return unaff_DS;
    }
    return (uint)(byte)(DAT_1000_5d56 >> 1 | (DAT_1000_5d56 & 1) << 7);
  case '\x03':
    *(undefined1 *)0xf17e = 0xd;
    FUN_1000_218b();
    FUN_1000_2138();
    *(undefined1 *)0x5ef = 10;
    *(undefined1 *)0x1676 = 1;
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    DAT_1000_5d52 = 1;
    DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
    FUN_1000_6055();
    puVar16 = (undefined1 *)0x7584;
    for (iVar8 = 0x36a; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar1 = 0xf0;
    }
    return 0xf0;
  case '\x04':
    DAT_1000_5d53 = 0xc;
    FUN_1000_607e();
    puVar16 = (undefined1 *)*(undefined2 *)0x1677;
    for (iVar8 = 0xa0; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar1 = 0;
    }
    puVar13 = (undefined1 *)0x985b;
    puVar16 = (undefined1 *)0x7c57;
    cVar5 = '0';
    do {
      puVar12 = puVar13;
      for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar16;
        puVar16 = puVar16 + 1;
        puVar1 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar2 = *puVar1;
      }
      puVar13 = puVar13 + 0x60;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    *(undefined1 *)0x978e = 0;
    cVar5 = '2';
    puVar16 = (undefined1 *)0x978e;
    puVar13 = (undefined1 *)0x978f;
    do {
      puVar12 = puVar13;
      for (iVar8 = 0x2f; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar12;
        puVar12 = puVar12 + 1;
        puVar1 = puVar16;
        puVar16 = puVar16 + 1;
        *puVar2 = *puVar1;
      }
      cVar5 = cVar5 + -1;
      puVar16 = puVar13;
      puVar13 = puVar13 + 0x60;
    } while (cVar5 != '\0');
    *(undefined1 *)0x1680 = 0x32;
    DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
    uVar6 = FUN_1000_6055();
    return uVar6;
  case '\x05':
    uVar6 = (uint)DAT_1000_5d52;
    bVar17 = 0x30 < DAT_1000_5d52;
    DAT_1000_5d52 = DAT_1000_5d52 + 1;
    if (bVar17) {
      DAT_1000_5d52 = 0x60;
      DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
      return uVar6;
    }
    break;
  case '\x06':
    if (*(char *)0x1680 == '\0') {
      DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
      return 0;
    }
    uVar6 = FUN_1000_607e();
    return uVar6;
  case '\a':
    FUN_1000_6055();
    bVar10 = DAT_1000_5d52;
    if (DAT_1000_5d52 < 2) {
      DAT_1000_5d50 = DAT_1000_5d50 + '\x01';
      return (uint)DAT_1000_5d52;
    }
    *(undefined1 *)0x562 = 0xc;
    uVar6 = (uint)(bVar10 >> 1);
    DAT_1000_5d52 = DAT_1000_5d52 - 1;
    break;
  case '\b':
    if (DAT_1000_5d55 != '\0') {
      DAT_1000_5d55 = DAT_1000_5d55 + '\x01';
      (*(code *)*(undefined2 *)0x508)(0x1000);
      FUN_1000_26b0();
      DAT_1000_2a80 = 0;
      DAT_1000_5413 = 0x30;
      DAT_1000_5414 = 0x30;
      *(undefined1 *)0x5ef = 1;
      *(undefined1 *)0x5ff = 1;
      *(undefined1 *)0x1676 = 1;
      DAT_1000_540b = 1;
      DAT_1000_540c = 1;
      *(undefined1 *)0x1683 = DAT_1000_5c20;
      *(undefined1 *)0x167f = 0;
      *(undefined1 *)0x1679 = 4;
      *(undefined2 *)0x1677 = 0x1694;
      *(undefined2 *)0x16cc = 0x2783;
      *(undefined1 *)0x16d0 = 0;
      return 2;
    }
    DAT_1000_5d55 = DAT_1000_5d55 + '\x01';
    uVar6 = FUN_1000_6055();
    return uVar6;
  default:
    return 0;
  }
  puVar16 = (undefined1 *)0xaa5b;
  uVar3 = uVar6;
  do {
    puVar16 = puVar16 + -0x60;
    bVar10 = (char)uVar3 - 1;
    uVar3 = (uint)bVar10;
  } while (bVar10 != 0);
  puVar13 = (undefined1 *)0x7c57;
  do {
    puVar12 = puVar16;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar2 = *puVar1;
    }
    puVar16 = puVar16 + 0x60;
    bVar10 = (char)uVar6 - 1;
    uVar6 = (uint)bVar10;
  } while (bVar10 != 0);
  return 0;
}



// ============================================================================
// Function: FUN_1000_6055
// Entry:    1000:6055
// Body:     1000:6055 -> 1000:6077
// Size:     35 bytes
// Prototype: undefined __cdecl16near FUN_1000_6055()
// ============================================================================

void __cdecl16near FUN_1000_6055(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x978e = 0;
  cVar3 = '2';
  puVar5 = (undefined1 *)0x978e;
  puVar6 = (undefined1 *)0x978f;
  do {
    puVar7 = puVar6;
    for (iVar4 = 0x2f; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    cVar3 = cVar3 + -1;
    puVar5 = puVar6;
    puVar6 = puVar6 + 0x60;
  } while (cVar3 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_607e
// Entry:    1000:607e
// Body:     1000:607e -> 1000:6294
// Size:     535 bytes
// Prototype: undefined __cdecl16near FUN_1000_607e()
// ============================================================================

void __cdecl16near FUN_1000_607e(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  
  FUN_1000_6055();
  iVar1 = (DAT_1000_5d53 & 0xff0f) * 0x34;
  pcVar4 = (char *)(*(int *)(iVar1 + 0x6295) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x6297);
  cVar2 = '\x04';
  DAT_1000_5d53 = DAT_1000_5d53 + 1;
  do {
    cVar3 = '\x04';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x5d;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x6299) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x629b);
  cVar2 = '\t';
  do {
    cVar3 = '\b';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x59;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x629d) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x629f);
  cVar2 = '\n';
  do {
    cVar3 = '\f';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x55;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62a1) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62a3);
  cVar2 = '\b';
  do {
    cVar3 = '\v';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x56;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62a5) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62a7);
  cVar2 = '\x10';
  do {
    cVar3 = '\x0f';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x52;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62a9) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62ab);
  cVar2 = '\x12';
  do {
    cVar3 = '\x11';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x50;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62ad) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62af);
  cVar2 = '\x18';
  do {
    cVar3 = '\v';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x56;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62b1) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62b3);
  cVar2 = '\b';
  do {
    cVar3 = '\v';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x56;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62b5) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62b7);
  cVar2 = '\x10';
  do {
    cVar3 = '\x0f';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x52;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62b9) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62bb);
  cVar2 = '\x12';
  do {
    cVar3 = '\x11';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x50;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62bd) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62bf);
  cVar2 = '\x04';
  do {
    cVar3 = '\x04';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x5d;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62c1) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62c3);
  cVar2 = '\t';
  do {
    cVar3 = '\b';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x59;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  pcVar4 = (char *)(*(int *)(iVar1 + 0x62c5) + -0x67cb);
  pcVar6 = (char *)*(undefined2 *)(iVar1 + 0x62c7);
  cVar2 = '\n';
  do {
    cVar3 = '\f';
    do {
      pcVar5 = pcVar4;
      if (*pcVar6 != 'P') {
        *pcVar5 = *pcVar6;
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar3 + -1;
      pcVar4 = pcVar5 + 1;
    } while (cVar3 != '\0');
    pcVar4 = pcVar5 + 0x55;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_65d5
// Entry:    1000:65d5
// Body:     1000:65d5 -> 1000:6860
// Size:     648 bytes
// Prototype: undefined __cdecl16near FUN_1000_65d5()
// ============================================================================

void __cdecl16near FUN_1000_65d5(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 extraout_DX;
  byte bVar9;
  uint uVar8;
  int iVar10;
  byte *pbVar11;
  undefined2 unaff_DS;
  bool bVar12;
  
  bVar2 = DAT_1000_5d66;
  bVar1 = DAT_1000_5d63;
  bVar5 = DAT_1000_5d60;
  bVar9 = DAT_1000_5d5d;
  bVar4 = DAT_1000_5d5a;
  bVar7 = DAT_1000_5d57;
  iVar10 = 0x5d57;
  DAT_1000_5d57 = DAT_1000_5d57 + 1;
  if ((bVar7 & 3) != 0) {
    iVar10 = 0x5d5a;
    DAT_1000_5d5a = DAT_1000_5d5a + 1;
    if ((bVar4 & 3) != 0) {
      iVar10 = 0x5d5d;
      DAT_1000_5d5d = DAT_1000_5d5d + 1;
      if ((bVar9 & 3) != 0) {
        iVar10 = 0x5d60;
        DAT_1000_5d60 = DAT_1000_5d60 + 1;
        if ((bVar5 & 3) != 0) {
          iVar10 = 0x5d63;
          DAT_1000_5d63 = DAT_1000_5d63 + 1;
          if ((bVar1 & 3) != 0) {
            iVar10 = 0x5d66;
            DAT_1000_5d66 = DAT_1000_5d66 + 1;
            if ((bVar2 & 3) != 0) {
              return;
            }
          }
        }
      }
    }
  }
  pbVar11 = (byte *)*(undefined2 *)0x1677;
  cVar3 = *(char *)0x1679;
  do {
    if ((*pbVar11 & 1) == 0) {
      *pbVar11 = *pbVar11 | 1;
      FUN_1000_4e6a();
      bVar5 = (*(char *)(iVar10 + 2) - (char)((uint)*(undefined2 *)0x1634 >> 8)) + 3;
      bVar4 = (*(char *)(iVar10 + 1) - (char)*(undefined2 *)0x1634) + 4;
      bVar9 = (char)((uint)extraout_DX >> 8) + 2;
      bVar7 = (char)extraout_DX + 1;
      if (bVar5 < bVar9) {
        if (bVar4 < bVar7) {
          bVar7 = bVar7 - bVar4;
          bVar9 = bVar9 - bVar5;
          if (bVar9 < bVar7) {
            bVar4 = 0;
            bVar5 = 0;
            if (bVar9 != 0) {
              do {
                bVar5 = bVar4 + 1;
                bVar12 = bVar9 <= bVar7;
                bVar7 = bVar7 - bVar9;
                bVar4 = bVar5;
              } while (bVar12);
            }
            cVar3 = '\b';
            if ((bVar5 < 4) && (cVar3 = '\t', bVar5 < 3)) {
              cVar3 = '\n';
            }
          }
          else {
            bVar4 = 0;
            bVar5 = 0;
            if (bVar7 != 0) {
              do {
                bVar5 = bVar4 + 1;
                bVar12 = bVar7 <= bVar9;
                bVar9 = bVar9 - bVar7;
                bVar4 = bVar5;
              } while (bVar12);
            }
            cVar3 = '\f';
            if ((bVar5 < 4) && (cVar3 = '\v', bVar5 < 3)) {
              cVar3 = '\n';
            }
          }
        }
        else {
          bVar4 = bVar4 - bVar7;
          bVar9 = bVar9 - bVar5;
          if (bVar9 < bVar4) {
            bVar7 = 0;
            bVar5 = 0;
            if (bVar9 != 0) {
              do {
                bVar5 = bVar7 + 1;
                bVar12 = bVar9 <= bVar4;
                bVar4 = bVar4 - bVar9;
                bVar7 = bVar5;
              } while (bVar12);
            }
            cVar3 = '\0';
            if ((bVar5 < 4) && (cVar3 = '\x0f', bVar5 < 3)) {
              cVar3 = '\x0e';
            }
          }
          else {
            bVar7 = 10;
            if (bVar4 != 0) {
              bVar7 = 0;
              do {
                bVar7 = bVar7 + 1;
                bVar12 = bVar4 <= bVar9;
                bVar9 = bVar9 - bVar4;
              } while (bVar12);
            }
            cVar3 = '\f';
            if ((bVar7 < 4) && (cVar3 = '\r', bVar7 < 3)) {
              cVar3 = '\x0e';
            }
          }
        }
      }
      else if (bVar4 < bVar7) {
        bVar7 = bVar7 - bVar4;
        bVar5 = bVar5 - bVar9;
        if (bVar5 < bVar7) {
          bVar4 = 0;
          bVar9 = 0;
          if (bVar5 != 0) {
            do {
              bVar9 = bVar4 + 1;
              bVar12 = bVar5 <= bVar7;
              bVar7 = bVar7 - bVar5;
              bVar4 = bVar9;
            } while (bVar12);
          }
          cVar3 = '\b';
          if ((bVar9 < 4) && (cVar3 = '\a', bVar9 < 3)) {
            cVar3 = '\x06';
          }
        }
        else {
          bVar4 = 0;
          bVar9 = 0;
          if (bVar7 != 0) {
            do {
              bVar9 = bVar4 + 1;
              bVar12 = bVar7 <= bVar5;
              bVar5 = bVar5 - bVar7;
              bVar4 = bVar9;
            } while (bVar12);
          }
          cVar3 = '\x04';
          if ((bVar9 < 4) && (cVar3 = '\x05', bVar9 < 3)) {
            cVar3 = '\x06';
          }
        }
      }
      else {
        bVar4 = bVar4 - bVar7;
        bVar5 = bVar5 - bVar9;
        if (bVar5 < bVar4) {
          bVar7 = 0;
          bVar9 = 0;
          if (bVar5 != 0) {
            do {
              bVar9 = bVar7 + 1;
              bVar12 = bVar5 <= bVar4;
              bVar4 = bVar4 - bVar5;
              bVar7 = bVar9;
            } while (bVar12);
          }
          cVar3 = '\0';
          if ((bVar9 < 4) && (cVar3 = '\x01', bVar9 < 3)) {
            cVar3 = '\x02';
          }
        }
        else {
          bVar7 = 10;
          if (bVar4 != 0) {
            bVar7 = 0;
            do {
              bVar7 = bVar7 + 1;
              bVar12 = bVar4 <= bVar5;
              bVar5 = bVar5 - bVar4;
            } while (bVar12);
          }
          cVar3 = '\x04';
          if ((bVar7 < 4) && (cVar3 = '\x03', bVar7 < 3)) {
            cVar3 = '\x02';
          }
        }
      }
      uVar8 = (uint)(byte)(cVar3 * '\x06');
      *pbVar11 = *pbVar11 & 0xfd;
      if (*(char *)(uVar8 + 0xde40) != '\0') {
        *pbVar11 = *pbVar11 | 2;
      }
      uVar6 = 0;
      if ((*(byte *)(uVar8 + 0xde41) & 0x80) != 0) {
        uVar6 = 0xff;
      }
      *(uint *)(pbVar11 + 1) =
           (uint)*(byte *)(iVar10 + 1) * 2 + CONCAT11(uVar6,*(byte *)(uVar8 + 0xde41));
      pbVar11[3] = *(char *)(iVar10 + 2) * '\x02' + *(char *)(uVar8 + 0xde42);
      pbVar11[4] = *(byte *)(uVar8 + 0xde43);
      pbVar11[5] = *(byte *)(uVar8 + 0xde44);
      bVar7 = *(byte *)(uVar8 + 0xde45);
      pbVar11[6] = bVar7;
      pbVar11[7] = bVar7;
      return;
    }
    pbVar11 = pbVar11 + 8;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_6870
// Entry:    1000:6870
// Body:     1000:6870 -> 1000:6929
// Size:     186 bytes
// Prototype: undefined __cdecl16near FUN_1000_6870()
// ============================================================================

void __cdecl16near FUN_1000_6870(void)

{
  char cVar1;
  char cVar2;
  int extraout_DX;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  FUN_1000_4e2b();
  if ((bool)in_ZF) {
    pbVar4 = (byte *)((extraout_DX + -0x796b) - (uint)(byte)(*(char *)0x74da + 2));
    pbVar3 = (byte *)0x7583;
    cVar2 = '\0';
    while( true ) {
      cVar1 = '\0';
      do {
        pbVar5 = pbVar4;
        if ((*pbVar5 & 0xf) != *pbVar3) {
          FUN_1000_692a();
        }
        pbVar3 = pbVar3 + 1;
        cVar1 = cVar1 + '\x01';
        if (pbVar5[1] >> 4 != *pbVar3) {
          FUN_1000_692a();
        }
        pbVar3 = pbVar3 + 1;
        cVar1 = cVar1 + '\x01';
        pbVar4 = pbVar5 + 1;
      } while (cVar1 != '&');
      cVar2 = cVar2 + '\x01';
      if (cVar2 == '\x17') break;
      pbVar4 = pbVar5 + (*(byte *)0x74db - 0x12);
    }
    return;
  }
  pbVar4 = (byte *)((extraout_DX + -0x796b) - (uint)(byte)(*(char *)0x74da + 1));
  pbVar3 = (byte *)0x7583;
  cVar2 = '\0';
  while( true ) {
    cVar1 = '\0';
    do {
      pbVar5 = pbVar4;
      if (*pbVar5 >> 4 != *pbVar3) {
        FUN_1000_692a();
      }
      pbVar3 = pbVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if ((*pbVar5 & 0xf) != *pbVar3) {
        FUN_1000_692a();
      }
      pbVar3 = pbVar3 + 1;
      cVar1 = cVar1 + '\x01';
      pbVar4 = pbVar5 + 1;
    } while (cVar1 != '&');
    cVar2 = cVar2 + '\x01';
    if (cVar2 == '\x17') break;
    pbVar4 = pbVar5 + (*(byte *)0x74db - 0x12);
  }
  return;
}



// ============================================================================
// Function: FUN_1000_692a
// Entry:    1000:692a
// Body:     1000:692a -> 1000:6953
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_692a()
// ============================================================================

void __cdecl16near FUN_1000_692a(void)

{
  byte in_AL;
  byte *in_BX;
  byte *pbVar1;
  undefined2 unaff_DS;
  
  *in_BX = in_AL;
  pbVar1 = in_BX + 0xda8;
  if (1 < in_AL) {
    *pbVar1 = 0x22;
    return;
  }
  if ((in_AL == 1) && (*(char *)0x74e8 != '\0')) {
    *pbVar1 = 0x12;
    return;
  }
  *pbVar1 = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_6954
// Entry:    1000:6954
// Body:     1000:6954 -> 1000:6a35
// Size:     226 bytes
// Prototype: undefined __cdecl16near FUN_1000_6954()
// ============================================================================

void __cdecl16near FUN_1000_6954(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)0x837a;
  cVar2 = '\x01';
  do {
    cVar1 = '\x04';
    do {
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar3 != '\0') {
        FUN_1000_6a44();
      }
      pcVar4 = pcVar3 + 1;
      cVar1 = cVar1 + '\x01';
      if (*pcVar4 != '\0') {
        FUN_1000_6a44();
      }
      pcVar3 = pcVar4 + 1;
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '$');
    pcVar3 = pcVar4 + 7;
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != '\x13');
  *(undefined1 *)0x166f = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_6a44
// Entry:    1000:6a44
// Body:     1000:6a44 -> 1000:6a73
// Size:     48 bytes
// Prototype: undefined __cdecl16near FUN_1000_6a44()
// ============================================================================

void __cdecl16near FUN_1000_6a44(void)

{
  byte in_AL;
  undefined2 in_CX;
  undefined2 unaff_DS;
  
  if (DAT_1000_2a80 != '\0') {
    FUN_1000_5931();
    return;
  }
  if ((in_AL & 0xf) == 0) {
    return;
  }
  *(undefined2 *)0x1658 = in_CX;
  (*(code *)*(undefined2 *)((uint)(byte)((in_AL & 0xf) - 1) * 2 + 0x6a36))();
  return;
}



// ============================================================================
// Function: FUN_1000_6bd8
// Entry:    1000:6bd8
// Body:     1000:6bd8 -> 1000:6c3d
// Size:     102 bytes
// Prototype: undefined __cdecl16near FUN_1000_6bd8()
// ============================================================================

void __cdecl16near FUN_1000_6bd8(void)

{
  char cVar1;
  char cVar2;
  undefined2 extraout_DX;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
  pcVar4 = (char *)0x74ba;
  cVar2 = '\a';
  while ((*pcVar4 != (char)(*(char *)0x1634 + '\x0e') || (pcVar4[1] != *(char *)0x162a))) {
    pcVar4 = pcVar4 + 5;
    cVar2 = cVar2 + -1;
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_1000_6c3e();
  if ((cVar2 != '\x01') || (uVar3 = extraout_DX, *(char *)0x16b9 == '\0')) {
    *(char *)0x167a = pcVar4[4];
    cVar1 = pcVar4[3];
    uVar3 = CONCAT11(cVar1 + -7,pcVar4[2] + -0xe);
    *(undefined2 *)0x1634 = uVar3;
    *(char *)0x162a = cVar1;
  }
  if ((*(char *)0x5ef != '\0') && (cVar2 != '\x01')) {
    if ((cVar2 == '\x01') && (*(char *)0x16b9 != '\0')) {
      return;
    }
    pcVar4 = (char *)0x1661;
    cVar2 = '\x05';
    do {
      *pcVar4 = *pcVar4 + (char)uVar3;
      pcVar4[1] = pcVar4[1] + (char)((uint)uVar3 >> 8);
      pcVar4 = pcVar4 + 2;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    return;
  }
  *(undefined1 *)0x167e = 1;
  return;
}



// ============================================================================
// Function: FUN_1000_6c3e
// Entry:    1000:6c3e
// Body:     1000:6c3e -> 1000:6c5e
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_6c3e()
// ============================================================================

void __cdecl16near FUN_1000_6c3e(void)

{
  undefined2 uVar1;
  char in_CL;
  char cVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  if ((in_CL == '\x01') && (*(char *)0x16b9 != '\0')) {
    return;
  }
  pcVar3 = (char *)0x1661;
  cVar2 = '\x05';
  do {
    uVar1 = *(undefined2 *)0x1634;
    *pcVar3 = *pcVar3 - (char)uVar1;
    pcVar3[1] = pcVar3[1] - (char)((uint)uVar1 >> 8);
    pcVar3 = pcVar3 + 2;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_6c5f
// Entry:    1000:6c5f
// Body:     1000:6c5f -> 1000:6c7b
// Size:     29 bytes
// Prototype: undefined __cdecl16near FUN_1000_6c5f()
// ============================================================================

void __cdecl16near FUN_1000_6c5f(void)

{
  char in_CL;
  char cVar1;
  char in_DL;
  char in_DH;
  char *pcVar2;
  undefined2 unaff_DS;
  
  if ((in_CL == '\x01') && (*(char *)0x16b9 != '\0')) {
    return;
  }
  pcVar2 = (char *)0x1661;
  cVar1 = '\x05';
  do {
    *pcVar2 = *pcVar2 + in_DL;
    pcVar2[1] = pcVar2[1] + in_DH;
    pcVar2 = pcVar2 + 2;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



// ============================================================================
// Function: FUN_1000_6c7c
// Entry:    1000:6c7c
// Body:     1000:6c7c -> 1000:6cbb
// Size:     64 bytes
// Prototype: undefined __cdecl16near FUN_1000_6c7c()
// ============================================================================

void __cdecl16near FUN_1000_6c7c(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x167e == '\0') {
    return;
  }
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  if (*(char *)0x1671 != '\0') {
    (*(code *)*(undefined2 *)0x2bef)(0x1000);
  }
  *(undefined1 *)0x167e = 0;
  if ((char)(*(char *)0x1676 + '\x01') == '\x05') {
    FUN_1000_50e7();
    return;
  }
  if (*(char *)0x5ef == '\0') {
    FUN_1000_50e7();
    return;
  }
  *(char *)0x1676 = *(char *)0x1676 + '\x01';
  FUN_1000_270c();
  return;
}



// ============================================================================
// Function: FUN_1000_6cbc
// Entry:    1000:6cbc
// Body:     1000:6cbc -> 1000:6cc9
// Size:     14 bytes
// Prototype: undefined __cdecl16near FUN_1000_6cbc()
// ============================================================================

void __cdecl16near FUN_1000_6cbc(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1671 == '\0') {
    return;
  }
  (*(code *)*(undefined2 *)0x2be7)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_6cca
// Entry:    1000:6cca
// Body:     1000:6cca -> 1000:6d1f
// Size:     86 bytes
// Prototype: undefined __cdecl16near FUN_1000_6cca()
// ============================================================================

void __cdecl16near FUN_1000_6cca(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 unaff_DS;
  char *pcVar3;
  
  if (*(char *)0x16ba == '\0') {
    return;
  }
  *(char *)0x16ba = *(char *)0x16ba + -1;
  pcVar1 = (char *)0x165b;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    *(undefined1 *)0x165b = 0x14;
    FUN_1000_407c();
  }
  *(undefined1 *)0x16ba = 0;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  pcVar3 = (char *)0x16ba;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  *(undefined1 *)0x562 = 3;
  cVar2 = *pcVar3;
  *pcVar3 = '\0';
  if (cVar2 != '\x02') {
    return;
  }
  FUN_1000_096a();
  return;
}



// ============================================================================
// Function: FUN_1000_6d20
// Entry:    1000:6d20
// Body:     1000:6d20 -> 1000:6d62
// Size:     66 bytes
// Prototype: undefined __cdecl16near FUN_1000_6d20()
// ============================================================================

void __cdecl16near FUN_1000_6d20(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x16b9 != '\0') {
    return;
  }
  if (*(char *)0x162d != '\0') {
    FUN_1000_6d64();
    FUN_1000_6d64();
    return;
  }
  if (*(char *)0x162e == '\0') {
    if ((*(byte *)0x1690 & 0xf) != 0) {
      FUN_1000_6d64();
      return;
    }
    return;
  }
  if (*(char *)0x162e != '\x02') {
    cVar1 = *(char *)0x1630;
    if (cVar1 != '\0') {
      do {
        FUN_1000_6d64();
        cVar1 = cVar1 + -1;
      } while (cVar1 != '\0');
      return;
    }
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_6d64
// Entry:    1000:6d64
// Body:     1000:6d64 -> 1000:6d89
// Size:     38 bytes
// Prototype: undefined __cdecl16near FUN_1000_6d64()
// ============================================================================

void __cdecl16near FUN_1000_6d64(void)

{
  char *pcVar1;
  undefined2 in_CX;
  undefined2 uVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  char *in_BX;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  pcVar1 = in_BX;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0') {
    return;
  }
  *in_BX = -0x80;
  LOCK();
  uVar4 = *(undefined2 *)0xdc4a;
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  uVar3 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  FUN_1000_407c();
  LOCK();
  *(undefined2 *)0xdc4a = uVar4;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = uVar2;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = uVar3;
  UNLOCK();
  return;
}



// ============================================================================
// Function: FUN_1000_6d99
// Entry:    1000:6d99
// Body:     1000:6d99 -> 1000:6db4
// Size:     28 bytes
// Prototype: undefined __cdecl16near FUN_1000_6d99()
// ============================================================================

void __cdecl16near FUN_1000_6d99(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1625 == '\0') {
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_6ddc
// Entry:    1000:6ddc
// Body:     1000:6ddc -> 1000:6de7
// Size:     12 bytes
// Prototype: undefined __cdecl16near FUN_1000_6ddc()
// ============================================================================

void __cdecl16near FUN_1000_6ddc(void)

{
  byte in_AL;
  
  (*(code *)*(undefined2 *)((uint)in_AL * 2 + 0x6dc0))();
  return;
}



// ============================================================================
// Function: FUN_1000_7be6
// Entry:    1000:7be6
// Body:     1000:7be6 -> 1000:7e51
// Size:     617 bytes
// Prototype: undefined __cdecl16near FUN_1000_7be6()
// ============================================================================

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1000_7be6(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  undefined2 *puVar5;
  code *pcVar6;
  byte bVar7;
  undefined2 in_AX;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined2 in_DX;
  char *pcVar12;
  undefined2 unaff_SI;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined2 unaff_SS;
  undefined1 uVar17;
  bool bVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  
  uVar17 = 0;
  if (DAT_1000_7efa != '\0') {
    return in_AX;
  }
  while( true ) {
    puVar14 = (undefined1 *)0x7aa1;
    iVar10 = 8;
    do {
      for (iVar11 = 0xf; iVar11 != 0; iVar11 = iVar11 + -1) {
        puVar2 = puVar14;
        puVar14 = puVar14 + 1;
        *puVar2 = 0x20;
      }
      puVar14 = puVar14 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    if ((bool)uVar17) break;
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    if ((bool)uVar17) break;
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    iVar10 = 8;
    pcVar12 = (char *)0x7910;
    pcVar15 = (char *)0x7aa6;
    do {
      cVar4 = *pcVar12;
      if (cVar4 != '\0') {
        pcVar13 = (char *)0x7a4d;
        pcVar16 = pcVar15;
        for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
          pcVar3 = pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar1 = pcVar13;
          pcVar13 = pcVar13 + 1;
          *pcVar3 = *pcVar1;
        }
        *pcVar16 = cVar4 + '0';
      }
      pcVar15 = pcVar15 + 0x10;
      pcVar12 = pcVar12 + 0x22;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (*(char *)0x579 == '\0') {
      _DAT_1000_7a7b = 0x7a95;
    }
    else {
      _DAT_1000_7a7b = 0x7b90;
    }
    DAT_1000_7a56 = '\0';
    (*(code *)*(undefined2 *)0x5cb)(0x1000);
    uVar9 = 0x408;
    uVar20 = 0x7a57;
    uVar19 = 0x7c9c;
    (*(code *)*(undefined2 *)0x508)(0x1000,0x7a57);
LAB_1000_7c9d:
    bVar7 = *(char *)0x576 << 1 | *(char *)0x576 < '\0';
    bVar18 = (char)bVar7 < '\0';
    bVar7 = bVar7 << 1 | bVar18;
    if (!bVar18) {
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      if (!bVar18) {
        puVar14 = (undefined1 *)0x7910;
        for (iVar10 = 0x132; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar2 = puVar14;
          puVar14 = puVar14 + 1;
          *puVar2 = 0;
        }
        pcVar6 = (code *)swi(0x21);
        (*pcVar6)(uVar19);
        if (bVar18) break;
        pcVar6 = (code *)swi(0x21);
        (*pcVar6)();
LAB_1000_7e3d:
        (*(code *)*(undefined2 *)0x5c7)(0x1000);
        return unaff_SI;
      }
      break;
    }
    if ((char)(bVar7 << 1 | (char)bVar7 < '\0') < '\0') {
      uVar8 = FUN_1000_48e2();
      if ((char)uVar8 != '\0') {
        uVar19 = 0x7cc1;
        FUN_1000_4881(uVar9);
        if ((uVar8 & 0xc0) == 0) {
          if ((uVar8 & 2) == 0) {
            if ((uVar8 & 1) == 0) goto LAB_1000_7c9d;
            (*(code *)*(undefined2 *)0x508)(0x1000);
            if (DAT_1000_7a56 == '\0') {
              uVar9 = CONCAT11(0xc,(char)uVar9);
              DAT_1000_7a56 = '\b';
            }
            else {
              DAT_1000_7a56 = DAT_1000_7a56 + -1;
              uVar9 = CONCAT11((char)((uint)uVar9 >> 8) + -1,(char)uVar9);
            }
          }
          else {
            (*(code *)*(undefined2 *)0x508)(0x1000,uVar20);
            if (DAT_1000_7a56 == '\b') {
              uVar9 = CONCAT11(4,(char)uVar9);
              DAT_1000_7a56 = '\0';
            }
            else {
              uVar9 = CONCAT11((char)((uint)uVar9 >> 8) + '\x01',(char)uVar9);
              DAT_1000_7a56 = DAT_1000_7a56 + '\x01';
            }
          }
          uVar19 = 0x7d28;
          (*(code *)*(undefined2 *)0x508)(0x1000);
          goto LAB_1000_7c9d;
        }
        if (DAT_1000_7a56 == '\0') goto LAB_1000_7e3d;
        pcVar12 = (char *)((uint)(byte)(DAT_1000_7a56 - 1) * 0x22 + 0x7910);
        if (*pcVar12 != '\0') {
          iVar10 = 0x22;
          pcVar13 = (char *)0x5ef;
          pcVar15 = pcVar12;
          do {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          pcVar15 = (char *)0x5ff;
          iVar10 = 0x10;
          do {
            *pcVar15 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar15 = pcVar15 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          (*(code *)*(undefined2 *)0x5c7)(0x1000);
          if (*(char *)0x1671 != '\0') {
            (*(code *)*(undefined2 *)0x2bef)();
          }
          *(undefined1 *)0x167e = 0;
          *(undefined1 *)0x1676 = 1;
          iVar10 = *(int *)0xf183;
          DAT_1000_5413 = *(char *)0x5ef + '0';
          DAT_1000_5414 = 0x30;
          DAT_1000_2a80 = 0;
          *(undefined1 *)0x1683 = DAT_1000_5c20;
          *(undefined1 *)0x167f = 0;
          *(undefined1 *)0x1679 = 4;
          *(undefined2 *)0x1677 = 0x1694;
          *(undefined2 *)0x16cc = 0x2783;
          *(undefined1 *)0x16d0 = 0;
          puVar14 = (undefined1 *)0x7553;
          for (iVar11 = 0x4f; iVar11 != 0; iVar11 = iVar11 + -1) {
            puVar2 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar2 = 0;
          }
          *(undefined2 *)(iVar10 + -2) = 0x7dee;
          FUN_1000_3d9b();
          uVar9 = FUN_1000_2e71();
          return uVar9;
        }
      }
      goto LAB_1000_7c9d;
    }
    do {
      uVar17 = *(char *)0x576 != -1;
    } while (*(char *)0x576 != -1);
    (*(code *)*(undefined2 *)0x5c7)(0x1000);
    (*(code *)*(undefined2 *)0x593)(0x1000);
    puVar5 = (undefined2 *)0x5c7;
    in_DX = 0x1000;
    (*(code *)*puVar5)();
  }
  uVar9 = FUN_1000_2214();
  return uVar9;
}



// ============================================================================
// Function: FUN_1000_7f90
// Entry:    1000:7f90
// Body:     1000:7f90 -> 1000:812c
// Size:     390 bytes
// Prototype: undefined __cdecl16near FUN_1000_7f90()
// ============================================================================

byte __cdecl16near FUN_1000_7f90(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
code_r0x00017f90:
  do {
    while( true ) {
      while( true ) {
        FUN_1000_480d();
        bVar2 = FUN_1000_48e2();
        pcVar4 = (char *)0x1689;
        if (!(bool)(bVar2 & 1)) break;
        bVar2 = FUN_1000_812d();
        if ((bVar2 & 3) == 0) {
          *pcVar4 = bVar2 + 4;
        }
        *pcVar4 = *pcVar4 + -1;
        FUN_1000_816a();
        FUN_1000_45da();
        FUN_1000_453a();
        *(undefined1 *)0x562 = 1;
        FUN_1000_8291();
      }
      if (!(bool)(bVar2 >> 1 & 1)) break;
      bVar2 = FUN_1000_812d();
      if ((bVar2 & 3) == 3) {
        *pcVar4 = bVar2 - 4;
      }
      *pcVar4 = *pcVar4 + '\x01';
      FUN_1000_816a();
      FUN_1000_45da();
      FUN_1000_453a();
      *(undefined1 *)0x562 = 1;
      FUN_1000_8291();
    }
    if ((bVar2 >> 2 & 0x10) != 0) goto LAB_1000_801d;
  } while ((bVar2 >> 2 & 0x20) == 0);
  FUN_1000_45da();
  *pcVar4 = *(char *)0x1675;
LAB_1000_801d:
  do {
    bVar2 = *(byte *)0xdc15;
    cVar1 = *(char *)0x1675;
    bVar3 = *(byte *)0x1689 & 7;
    switch(*(byte *)0x1689 & 7) {
    case 0:
      FUN_1000_4d8b();
      *(undefined1 *)0x1689 = *(undefined1 *)0x1675;
      break;
    case 1:
      goto LAB_1000_80c9;
    case 2:
      goto switchD_1000_8034_caseD_2;
    case 3:
      if ((*(byte *)0xdc15 < 2) && (DAT_1000_4be1 == '\0')) {
        FUN_1000_0c0f();
        bVar2 = *(byte *)0x1675;
        if (bVar2 < 4) {
          bVar2 = 4;
        }
        *(byte *)0x1689 = bVar2;
        FUN_1000_81ae();
        FUN_1000_816a();
      }
      FUN_1000_8291();
      goto code_r0x00017f90;
    case 4:
      FUN_1000_0c0f();
      *(undefined1 *)0x1689 = 4;
      *(undefined1 *)0x1689 = 3;
      FUN_1000_81ae();
      FUN_1000_816a();
      FUN_1000_8291();
      goto code_r0x00017f90;
    case 5:
      bVar3 = *(byte *)0x1689;
      if (cVar1 == '\x05') goto LAB_1000_80c9;
      if ((DAT_1000_4be1 != '\0') || (1 < bVar2)) goto LAB_1000_80d5;
      cVar1 = *(char *)0x5f7;
      goto joined_r0x000180c4;
    case 6:
      bVar3 = *(byte *)0x1689;
      if (cVar1 == '\x06') goto LAB_1000_80c9;
      if ((DAT_1000_4be1 != '\0') || (1 < bVar2)) goto LAB_1000_80d5;
      cVar1 = *(char *)0x5f8;
      goto joined_r0x000180c4;
    case 7:
      bVar3 = *(byte *)0x1689;
      if (cVar1 == '\a') goto LAB_1000_80c9;
      if ((DAT_1000_4be1 != '\0') || (1 < bVar2)) goto LAB_1000_80d5;
      cVar1 = *(char *)0x5f9;
      goto joined_r0x000180c4;
    }
  } while( true );
switchD_1000_8034_caseD_2:
  if (*(char *)0x5f6 != '\0') {
    cVar1 = DAT_1000_4be1;
    if (*(byte *)0xdc15 < 2) {
LAB_1000_80c9:
      *(undefined1 *)0x562 = 1;
      *(byte *)0x1689 = bVar3;
      return bVar3;
    }
joined_r0x000180c4:
    if (cVar1 != '\0') goto LAB_1000_80c9;
  }
LAB_1000_80d5:
  *(undefined1 *)0x562 = 2;
  goto code_r0x00017f90;
}



// ============================================================================
// Function: FUN_1000_812d
// Entry:    1000:812d
// Body:     1000:812d -> 1000:8169
// Size:     61 bytes
// Prototype: undefined __cdecl16near FUN_1000_812d()
// ============================================================================

undefined4 __cdecl16near FUN_1000_812d(void)

{
  undefined2 in_AX;
  undefined2 in_CX;
  undefined2 uVar1;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 in_BX;
  undefined2 uVar2;
  undefined2 unaff_DS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  LOCK();
  uVar2 = *(undefined2 *)0xdc4a;
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  uVar2 = CONCAT11((char)((uint)uVar2 >> 8),7);
  (*(code *)*(undefined2 *)0x508)
            (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80
                    | (uint)(in_ZF & 1) * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
                    (uint)(in_CF & 1));
  LOCK();
  *(undefined2 *)0xdc4a = uVar2;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = uVar1;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = extraout_DX;
  UNLOCK();
  return CONCAT22(uVar2,in_AX);
}



// ============================================================================
// Function: FUN_1000_816a
// Entry:    1000:816a
// Body:     1000:816a -> 1000:819e
// Size:     53 bytes
// Prototype: undefined __cdecl16near FUN_1000_816a()
// ============================================================================

undefined4 __cdecl16near FUN_1000_816a(void)

{
  uint in_AX;
  uint uVar1;
  undefined2 in_CX;
  undefined2 uVar2;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 in_BX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  uVar1 = in_AX;
  if (3 < (byte)in_AX) {
    uVar1 = (uint)(byte)((byte)in_AX - 4);
  }
  LOCK();
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  uVar3 = CONCAT11((char)uVar1 + '\x14',0x18);
  uVar2 = 0x2ff;
  (*(code *)*(undefined2 *)0x508)
            (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                    (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80
                    | (uint)(in_ZF & 1) * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 |
                    (uint)(in_CF & 1));
  LOCK();
  *(undefined2 *)0xdc4a = uVar3;
  UNLOCK();
  LOCK();
  *(undefined2 *)0xdc4c = uVar2;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = extraout_DX;
  UNLOCK();
  return CONCAT22(uVar2,in_AX);
}



// ============================================================================
// Function: FUN_1000_819f
// Entry:    1000:819f
// Body:     1000:819f -> 1000:81ad
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_819f()
// ============================================================================

void __cdecl16near FUN_1000_819f(void)

{
  char *in_DX;
  
  do {
    in_DX = in_DX + 1;
  } while (*in_DX != -1);
  return;
}



// ============================================================================
// Function: FUN_1000_81ae
// Entry:    1000:81ae
// Body:     1000:81ae -> 1000:827e
// Size:     209 bytes
// Prototype: undefined __cdecl16near FUN_1000_81ae()
// ============================================================================

void __cdecl16near FUN_1000_81ae(void)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)0x1689 & 4) == 0) {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    FUN_1000_819f();
    (*(code *)*(undefined2 *)0x508)(0x1000);
    FUN_1000_819f();
    (*(code *)*(undefined2 *)0x508)(0x1000);
    FUN_1000_819f();
    (*(code *)*(undefined2 *)0x508)(0x1000);
    return;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_827f();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_827f();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_827f();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_827f
// Entry:    1000:827f
// Body:     1000:827f -> 1000:8290
// Size:     18 bytes
// Prototype: undefined __cdecl16near FUN_1000_827f()
// ============================================================================

void __cdecl16near FUN_1000_827f(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_8291
// Entry:    1000:8291
// Body:     1000:8291 -> 1000:829a
// Size:     10 bytes
// Prototype: undefined __cdecl16near FUN_1000_8291()
// ============================================================================

void __cdecl16near FUN_1000_8291(void)

{
  byte bVar1;
  undefined2 in_CX;
  
  do {
    bVar1 = FUN_1000_48e2();
  } while ((bVar1 & (byte)((uint)in_CX >> 8)) != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_85c8
// Entry:    1000:85c8
// Body:     1000:85c8 -> 1000:8602
// Size:     59 bytes
// Prototype: undefined __cdecl16near FUN_1000_85c8()
// ============================================================================

undefined1 __cdecl16near FUN_1000_85c8(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  bVar1 = FUN_1000_8659();
  if (bVar1 == 0) {
    return 0;
  }
  iVar2 = (byte)((bVar1 & 0xf) << 2) + 0x3063;
  (*(code *)*(undefined2 *)0x508)(0x1000,iVar2);
  FUN_1000_4b37(iVar2);
  FUN_1000_0c0f();
  FUN_1000_86e5();
  FUN_1000_0c0f();
  return 1;
}



// ============================================================================
// Function: FUN_1000_8659
// Entry:    1000:8659
// Body:     1000:8659 -> 1000:8694
// Size:     60 bytes
// Prototype: undefined __cdecl16near FUN_1000_8659()
// ============================================================================

undefined1 __cdecl16near FUN_1000_8659(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  byte *in_BX;
  undefined2 unaff_DS;
  
  FUN_1000_4e7a();
  iVar3 = 0x24;
  cVar2 = '\x04';
  if (0x1f < *(byte *)0x1627) {
    cVar2 = '\x03';
  }
  bVar1 = 0xeb;
  do {
    if (bVar1 <= *in_BX) {
      FUN_1000_8695();
      iVar3 = extraout_DX;
    }
    in_BX = in_BX + 1;
    if (bVar1 <= *in_BX) {
      FUN_1000_8695();
      iVar3 = extraout_DX_00;
    }
    in_BX = in_BX + 1;
    if (bVar1 <= *in_BX) {
      FUN_1000_8695();
      iVar3 = extraout_DX_01;
    }
    in_BX = in_BX + iVar3;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return 0;
}



// ============================================================================
// Function: FUN_1000_8695
// Entry:    1000:8695
// Body:     1000:8695 -> 1000:86d1
// Size:     61 bytes
// Prototype: undefined __cdecl16near FUN_1000_8695()
// ============================================================================

undefined4 __cdecl16near FUN_1000_8695(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined2 in_AX;
  byte *pbVar4;
  undefined2 in_CX;
  undefined2 in_DX;
  char *in_BX;
  undefined2 unaff_DS;
  
  cVar3 = *in_BX;
  LOCK();
  *(undefined2 *)0xdc4a = in_BX;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined2 *)0xdc4c;
  *(undefined2 *)0xdc4c = in_CX;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined2 *)0xdc4e;
  *(undefined2 *)0xdc4e = in_DX;
  UNLOCK();
  pbVar4 = (byte *)((byte)((cVar3 + '\x15') * '\x03') + 0x747e);
  if (((*pbVar4 & 0x70) != 0x40) && ((*pbVar4 & 0x70) != 0x50)) {
    LOCK();
    *(undefined2 *)0xdc4a = pbVar4;
    UNLOCK();
    LOCK();
    *(undefined2 *)0xdc4c = CONCAT11(cVar3 + '\x15',(char)uVar1);
    UNLOCK();
    LOCK();
    uVar1 = *(undefined2 *)0xdc4e;
    *(undefined2 *)0xdc4e = uVar2;
    UNLOCK();
    return CONCAT22(uVar1,in_AX);
  }
  return CONCAT22(uVar2,CONCAT11((char)((uint)in_AX >> 8),*pbVar4));
}



// ============================================================================
// Function: FUN_1000_86e5
// Entry:    1000:86e5
// Body:     1000:86e5 -> 1000:87cf
// Size:     233 bytes
// Prototype: undefined __cdecl16near FUN_1000_86e5()
// ============================================================================

void __cdecl16near FUN_1000_86e5(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar4;
  undefined2 uVar3;
  byte bVar5;
  byte bVar6;
  uint extraout_DX;
  uint uVar7;
  uint extraout_DX_00;
  int iVar8;
  char *unaff_SI;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined2 unaff_DS;
  int iVar12;
  
  DAT_1000_86e1 = unaff_SI;
  do {
    cVar2 = FUN_1000_48e2();
    uVar7 = extraout_DX;
  } while (cVar2 != '\0');
LAB_1000_86f2:
  pcVar1 = DAT_1000_86e1;
  uVar7 = uVar7 & 0xff00;
  DAT_1000_86de = 0;
  DAT_1000_86e0 = 0;
  *(undefined2 *)0x1686 = 0x6663;
  iVar8 = 0x1521;
  iVar11 = 0x1521;
  uVar3 = 0x100;
  pcVar10 = pcVar1;
  do {
    (*(code *)*(undefined2 *)0x508)(0x1000,uVar7,iVar8,uVar3);
    do {
      iVar8 = iVar11;
      pcVar9 = pcVar10;
      uVar4 = (undefined1)((uint)uVar3 >> 8);
      if ((DAT_1000_86e0 == 0) || ((byte)uVar7 < DAT_1000_86e0)) {
        uVar3 = CONCAT11(uVar4,*pcVar9);
        if (*pcVar9 == '\0') {
          DAT_1000_86e0 = 9;
          uVar3 = CONCAT11(uVar4,0x20);
        }
      }
      else {
        uVar3 = CONCAT11(uVar4,0x20);
      }
      DAT_1000_86e3 = (undefined1)uVar3;
      iVar12 = iVar8;
      (*(code *)*(undefined2 *)0x508)(0x1000);
      bVar6 = (char)uVar7 + 1;
      uVar7 = CONCAT11((char)(uVar7 >> 8),bVar6);
      if (DAT_1000_86e0 == 1) goto LAB_1000_86f2;
      bVar5 = (byte)((uint)uVar3 >> 8);
      pcVar10 = pcVar9 + 1;
      iVar11 = iVar12 + 1;
    } while (bVar5 != bVar6);
    if (DAT_1000_86e0 != 0) {
      DAT_1000_86e0 = DAT_1000_86e0 - 1;
    }
    DAT_1000_86de = DAT_1000_86de + 1;
    pcVar10 = pcVar1;
    if (9 < DAT_1000_86de) {
      pcVar10 = pcVar9 + -8;
    }
    *(undefined2 *)0x16b7 = 0;
    do {
    } while (*(uint *)0x16b7 < 0x1a);
    bVar6 = bVar5 + 1;
    if ('\n' < (char)(bVar5 + 1)) {
      bVar6 = bVar5;
    }
    uVar3 = CONCAT11(bVar6,(char)uVar3);
    iVar11 = (iVar12 + 1) - (uint)bVar6;
    cVar2 = FUN_1000_48e2();
    uVar7 = extraout_DX_00;
    if (cVar2 != '\0') {
      return;
    }
  } while( true );
}



// ============================================================================
// Function: FUN_1000_8ce7
// Entry:    1000:8ce7
// Body:     1000:8ce7 -> 1000:8cfd
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_8ce7()
// ============================================================================

void __cdecl16near FUN_1000_8ce7(void)

{
  FUN_1000_8d32();
  FUN_1000_8ed5();
  FUN_1000_8d3a();
  FUN_1000_8dd6();
  FUN_1000_8de2();
  FUN_1000_8cfe();
  return;
}



// ============================================================================
// Function: FUN_1000_8cfe
// Entry:    1000:8cfe
// Body:     1000:8cfe -> 1000:8d1e
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_8cfe()
// ============================================================================

byte __cdecl16near FUN_1000_8cfe(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)0x8c48;
  pbVar4 = (byte *)0x8cd4;
  iVar3 = 0xf;
  do {
    pbVar1 = pbVar4;
    pbVar2 = pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return *pbVar1 ^ *pbVar2;
}



// ============================================================================
// Function: FUN_1000_8d32
// Entry:    1000:8d32
// Body:     1000:8d32 -> 1000:8d39
// Size:     8 bytes
// Prototype: undefined __cdecl16near FUN_1000_8d32()
// ============================================================================

void __cdecl16near FUN_1000_8d32(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x5cb)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_8d3a
// Entry:    1000:8d3a
// Body:     1000:8d3a -> 1000:8da9
// Size:     112 bytes
// Prototype: undefined __cdecl16near FUN_1000_8d3a()
// ============================================================================

void __cdecl16near FUN_1000_8d3a(void)

{
  code *pcVar1;
  byte bVar2;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x1a);
  (*pcVar1)();
  *(undefined2 *)0x1622 = extraout_DX;
  bVar2 = FUN_1000_04c0();
  FUN_1000_8daa();
  (*(code *)*(undefined2 *)0x508)();
  FUN_1000_8daa();
  (*(code *)*(undefined2 *)0x508)();
  FUN_1000_8daa();
  (*(code *)*(undefined2 *)0x508)();
  DAT_1000_8ccc = *(undefined2 *)((uint)(bVar2 & 0xf) * 5 + -0x73a5);
  return;
}



// ============================================================================
// Function: FUN_1000_8daa
// Entry:    1000:8daa
// Body:     1000:8daa -> 1000:8dd5
// Size:     44 bytes
// Prototype: undefined __cdecl16near FUN_1000_8daa()
// ============================================================================

void __cdecl16near FUN_1000_8daa(void)

{
  char cVar1;
  uint in_AX;
  char cVar2;
  
  cVar1 = (char)((in_AX & 0xff) / 10);
  cVar2 = (char)((in_AX & 0xff) % 10);
  if (cVar1 == '\0') {
    DAT_1000_8ce4 = cVar2 + '0';
    DAT_1000_8ce5 = 0x20;
    return;
  }
  DAT_1000_8ce4 = cVar1 + '0';
  DAT_1000_8ce5 = cVar2 + '0';
  return;
}



// ============================================================================
// Function: FUN_1000_8dd6
// Entry:    1000:8dd6
// Body:     1000:8dd6 -> 1000:8de1
// Size:     12 bytes
// Prototype: undefined __cdecl16near FUN_1000_8dd6()
// ============================================================================

void __cdecl16near FUN_1000_8dd6(void)

{
  do {
    FUN_1000_8de7();
  } while (DAT_1000_8cd1 != '\x01');
  return;
}



// ============================================================================
// Function: FUN_1000_8de2
// Entry:    1000:8de2
// Body:     1000:8de2 -> 1000:8de6
// Size:     5 bytes
// Prototype: undefined __cdecl16near FUN_1000_8de2()
// ============================================================================

void __cdecl16near FUN_1000_8de2(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x5c7)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_8de7
// Entry:    1000:8de7
// Body:     1000:8de7 -> 1000:8ed4
// Size:     236 bytes
// Prototype: undefined __cdecl16near FUN_1000_8de7()
// ============================================================================

void __cdecl16near FUN_1000_8de7(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  DAT_1000_8ce5 = 0;
  pcVar1 = (code *)swi(0x16);
  (*pcVar1)();
  if (!(bool)in_ZF) {
    pcVar1 = (code *)swi(0x16);
    uVar3 = (*pcVar1)();
    cVar2 = (char)((uint)uVar3 >> 8);
    if (cVar2 == '\x0e') {
      if (DAT_1000_8cce != '\0') {
        FUN_1000_8ef9();
        DAT_1000_8cce = DAT_1000_8cce + -1;
        if (DAT_1000_8ccf != 0) {
          DAT_1000_8ccf = DAT_1000_8ccf - 1;
          *(undefined1 *)(DAT_1000_8ccf + 0x8cd4) = 0x20;
        }
        FUN_1000_8f1d();
        FUN_1000_8ed5();
      }
    }
    else if (cVar2 == '\x1c') {
      DAT_1000_8cd1 = 1;
      *(undefined1 *)0x59b = 0xff;
      *(undefined1 *)(DAT_1000_8ccf + 0x8cd4) = 0;
    }
    else {
      if (DAT_1000_8cce != '\x0f') {
        FUN_1000_8ef9();
        DAT_1000_8cce = DAT_1000_8cce + '\x01';
        FUN_1000_8ed5();
      }
      cVar2 = (char)uVar3;
      if ('Z' < cVar2) {
        cVar2 = cVar2 + -0x20;
      }
      if ((cVar2 < 'A') && (cVar2 != ' ')) {
        cVar2 = '@';
      }
      if (DAT_1000_8ccf != 0xf) {
        *(char *)(DAT_1000_8ccf + 0x8cd4) = cVar2;
        DAT_1000_8ce4 = cVar2;
        (*(code *)*(undefined2 *)0x508)();
        (*(code *)*(undefined2 *)0x508)();
        DAT_1000_8ccf = DAT_1000_8ccf + 1;
      }
    }
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_8ed5
// Entry:    1000:8ed5
// Body:     1000:8ed5 -> 1000:8ef8
// Size:     36 bytes
// Prototype: undefined __cdecl16near FUN_1000_8ed5()
// ============================================================================

void __cdecl16near FUN_1000_8ed5(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_8ef9
// Entry:    1000:8ef9
// Body:     1000:8ef9 -> 1000:8f1c
// Size:     36 bytes
// Prototype: undefined __cdecl16near FUN_1000_8ef9()
// ============================================================================

void __cdecl16near FUN_1000_8ef9(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_8f1d
// Entry:    1000:8f1d
// Body:     1000:8f1d -> 1000:8f40
// Size:     36 bytes
// Prototype: undefined __cdecl16near FUN_1000_8f1d()
// ============================================================================

void __cdecl16near FUN_1000_8f1d(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}




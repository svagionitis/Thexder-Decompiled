/**
 * ============================================================================
 * Comprehensive Decompiled Source: INSTALL.EXE
 * Architecture: 16-bit x86 Real Mode
 * Image Base: 0000:0000
 * MD5: c7e175f962894530d4cdb321da51773a
 * ============================================================================
 */

#include <stdint.h>
#include <stdbool.h>

// ============================================================================
// Function: FUN_1000_0010
// Entry:    1000:0010
// Body:     1000:0010 -> 1000:013a
// Size:     278 bytes
// Prototype: undefined __cdecl16near FUN_1000_0010()
// ============================================================================

void __cdecl16near FUN_1000_0010(void)

{
  int iVar1;
  int local_70;
  int local_68;
  int local_62;
  
  FUN_1000_1854();
  local_62 = 1;
  local_70 = 0;
  local_68 = 0;
  FUN_1000_0d70(1);
  FUN_1000_153e();
  FUN_1000_0264();
  FUN_1000_0976();
  FUN_1000_0e5e(0x5b,0x44,0x42);
LAB_1000_0075:
  do {
    if (6 < local_62) {
      FUN_1000_013c();
      FUN_1000_082e();
      FUN_1000_159c();
      return;
    }
    switch(local_62) {
    case 0:
      iVar1 = FUN_1000_0e5e(0x10f,0x109,0x106,2);
      if (iVar1 == 0x79) {
        FUN_1000_0d70(0);
        FUN_1000_159c();
        FUN_1000_1784(0);
        goto switchD_1000_0089_caseD_1;
      }
      local_70 = 0;
      local_62 = 0;
      break;
    case 1:
switchD_1000_0089_caseD_1:
      local_70 = FUN_1000_040e();
      break;
    case 2:
      local_70 = FUN_1000_05b0();
      break;
    case 3:
      local_70 = FUN_1000_04c6();
      break;
    case 4:
      local_70 = FUN_1000_0668();
      break;
    case 5:
      local_70 = FUN_1000_0720();
      break;
    case 6:
      local_70 = FUN_1000_079e();
    }
    if (local_70 == -2) {
      if (local_68 != -1) goto LAB_1000_010b;
      local_62 = local_62 + -1;
    }
    else {
      if (local_70 == -1) {
        local_62 = local_62 + -1;
        local_68 = -1;
        goto LAB_1000_0075;
      }
LAB_1000_010b:
      local_62 = local_62 + 1;
    }
    local_68 = 0;
  } while( true );
}



// ============================================================================
// Function: FUN_1000_013c
// Entry:    1000:013c
// Body:     1000:013c -> 1000:0262
// Size:     295 bytes
// Prototype: undefined __cdecl16near FUN_1000_013c()
// ============================================================================

void __cdecl16near FUN_1000_013c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1000_1854();
  iVar1 = FUN_1000_0d38(0x142);
  if (iVar1 < 0) {
    FUN_1000_0e5e(0x177,0x163,0x161);
    return;
  }
  uVar2 = FUN_1000_1c78(0xe2e);
  uVar3 = 0xe2e;
  FUN_1000_1b32(0xe2e,0xe2e,uVar2);
  FUN_1000_1b32(uVar3,0x14f);
  FUN_1000_1c78();
  FUN_1000_1b32(uVar3);
  FUN_1000_1b32();
  FUN_1000_1c78();
  FUN_1000_1b32();
  FUN_1000_1b32();
  FUN_1000_1c78();
  FUN_1000_1b32();
  FUN_1000_1b32();
  FUN_1000_1c78();
  FUN_1000_1b32();
  FUN_1000_1b32();
  FUN_1000_1c78();
  FUN_1000_1b32();
  FUN_1000_1b32();
  return;
}



// ============================================================================
// Function: FUN_1000_0264
// Entry:    1000:0264
// Body:     1000:0264 -> 1000:02bf
// Size:     92 bytes
// Prototype: undefined __cdecl16near FUN_1000_0264()
// ============================================================================

void __cdecl16near FUN_1000_0264(void)

{
  undefined2 **local_a;
  undefined2 uStack_8;
  undefined2 **ppuStack_6;
  undefined2 **ppuStack_4;
  
  ppuStack_4 = (undefined2 **)0x26d;
  FUN_1000_1854();
  FUN_1000_1160();
  ppuStack_4 = (undefined2 **)0x50;
  ppuStack_6 = (undefined2 **)0x0;
  uStack_8 = 0;
  local_a = &local_a;
  FUN_1000_0fc0();
  ppuStack_4 = (undefined2 **)0x28d;
  FUN_1000_10a4();
  ppuStack_4 = &local_a;
  ppuStack_6 = (undefined2 **)0x29b;
  FUN_1000_0b08();
  ppuStack_4 = (undefined2 **)0x1;
  ppuStack_6 = &local_a;
  uStack_8 = 0x2aa;
  FUN_1000_0fee();
  ppuStack_4 = &local_a;
  ppuStack_6 = (undefined2 **)0x1c7;
  uStack_8 = 700;
  FUN_1000_1370();
  return;
}



// ============================================================================
// Function: FUN_1000_02c0
// Entry:    1000:02c0
// Body:     1000:02c0 -> 1000:040c
// Size:     331 bytes
// Prototype: undefined __cdecl16near FUN_1000_02c0()
// ============================================================================

int __cdecl16near FUN_1000_02c0(undefined2 ***param_1,int param_2,int param_3,undefined2 *param_4)

{
  bool bVar1;
  undefined2 ***pppuVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_16;
  int local_e;
  undefined2 ***local_a;
  undefined2 ***pppuStack_8;
  
  FUN_1000_1854();
  bVar1 = false;
  local_a = (undefined2 ***)*param_4;
  pppuStack_8 = (undefined2 ***)param_4[1];
  FUN_1000_1160();
  pppuStack_8 = (undefined2 ***)0x2ed;
  FUN_1000_0c2c();
  pppuStack_8 = &local_a;
  local_a = (undefined2 ***)0x2fe;
  FUN_1000_0b08();
  pppuStack_8 = (undefined2 ***)0x1;
  local_a = &local_a;
  FUN_1000_0fee();
  pppuStack_8 = (undefined2 ***)0x317;
  FUN_1000_10a4();
  pppuStack_8 = (undefined2 ***)0x4;
  local_a = &local_a;
  FUN_1000_0fee();
  pppuStack_8 = &local_a;
  local_a = param_1;
  FUN_1000_1370();
  pppuStack_8 = (undefined2 ****)0x0;
  local_a = &local_a;
  FUN_1000_101c();
  pppuVar2 = local_a;
  do {
    while( true ) {
      if (bVar1) {
        pppuStack_8 = (undefined2 ***)0x401;
        FUN_1000_0cde();
        return param_3;
      }
      local_e = 0;
      local_16 = 0;
      local_a = pppuVar2;
      while (*(int *)(local_16 * 2 + param_2) != 0) {
        local_e = local_e + 1;
        if (param_3 == local_16) {
          FUN_1000_1154();
        }
        else {
          FUN_1000_1160();
        }
        pppuStack_8 = &local_a;
        local_a = (undefined2 ***)*(int *)(local_16 * 2 + param_2);
        FUN_1000_1370();
        local_a = (undefined2 ***)((int)local_a + 1);
        local_16 = local_16 + 1;
      }
      iVar3 = FUN_1000_116c();
      if (iVar3 != 0xd) break;
LAB_1000_03cd:
      bVar1 = true;
    }
    if (iVar3 == 0x1b) {
      param_3 = -1;
      goto LAB_1000_03cd;
    }
    if (iVar3 == 0x4800) {
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        param_3 = local_e + -1;
      }
    }
    else if ((iVar3 == 0x5000) && (param_3 = param_3 + 1, local_e <= param_3)) {
      param_3 = 0;
    }
  } while( true );
}



// ============================================================================
// Function: FUN_1000_040e
// Entry:    1000:040e
// Body:     1000:040e -> 1000:04c5
// Size:     184 bytes
// Prototype: undefined __cdecl16near FUN_1000_040e()
// ============================================================================

int __cdecl16near FUN_1000_040e(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_36;
  int local_34;
  undefined2 auStack_32 [10];
  undefined2 *local_1e [8];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 ***local_a;
  undefined2 uStack_8;
  
  FUN_1000_1854();
  local_36 = 0;
  local_34 = 0;
  while (iVar1 = local_34 * 6, *(char *)(iVar1 + 0x1228) != -1) {
    if (*(char *)(iVar1 + 0x1228) == '\0') {
      auStack_32[local_36] = *(undefined2 *)(iVar1 + 0x122a);
      local_1e[local_36] = (undefined2 *)*(undefined2 *)(iVar1 + 0x122c);
      local_36 = local_36 + 1;
    }
    local_34 = local_34 + 1;
  }
  local_1e[local_36] = (undefined2 *)0x0;
  uStack_8 = 5;
  local_a = &local_a;
  uStack_c = 0x488;
  FUN_1000_0fee();
  uStack_8 = 0;
  local_a = (undefined2 ***)local_1e;
  uStack_c = 0x20e;
  uStack_e = 0x49d;
  iVar1 = FUN_1000_02c0();
  if (iVar1 != -1) {
    uStack_8 = 0x246;
    local_a = (undefined2 ***)0xe2e;
    uStack_c = 0x4ba;
    FUN_1000_1d34();
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_04c6
// Entry:    1000:04c6
// Body:     1000:04c6 -> 1000:05ae
// Size:     232 bytes
// Prototype: undefined __cdecl16near FUN_1000_04c6()
// ============================================================================

int __cdecl16near FUN_1000_04c6(void)

{
  bool bVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_24;
  int local_22;
  undefined2 local_20 [5];
  undefined2 local_16 [4];
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *puStack_a;
  undefined2 uStack_8;
  
  FUN_1000_1854();
  bVar1 = true;
  local_20[0] = 0x249;
  local_24 = 1;
  local_16[0] = 0x24e;
  local_22 = 0;
  while (iVar2 = local_22 * 6, *(char *)(iVar2 + 0x1228) != -1) {
    if (*(char *)(iVar2 + 0x1228) == '\x02') {
      local_20[local_24] = *(undefined2 *)(iVar2 + 0x122a);
      local_16[local_24] = *(undefined2 *)(iVar2 + 0x122c);
      bVar1 = false;
      local_24 = local_24 + 1;
    }
    local_22 = local_22 + 1;
  }
  local_16[local_24] = 0;
  if (bVar1) {
    local_22 = -2;
    uStack_8 = 0x274;
  }
  else {
    uStack_8 = 5;
    puStack_a = &local_c;
    local_c = 0x571;
    FUN_1000_0fee();
    uStack_8 = 0;
    puStack_a = local_16;
    local_c = 0x277;
    uStack_e = 0x586;
    local_22 = FUN_1000_02c0();
    if (local_22 == -1) {
      return -1;
    }
    uStack_8 = 0x2ef;
  }
  puStack_a = (undefined2 *)0xd8e;
  local_c = 0x5a3;
  FUN_1000_1d34();
  return local_22;
}



// ============================================================================
// Function: FUN_1000_05b0
// Entry:    1000:05b0
// Body:     1000:05b0 -> 1000:0667
// Size:     184 bytes
// Prototype: undefined __cdecl16near FUN_1000_05b0()
// ============================================================================

int __cdecl16near FUN_1000_05b0(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_5e;
  int local_5c;
  undefined2 auStack_5a [20];
  undefined2 *local_32 [18];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 ***local_a;
  undefined2 uStack_8;
  
  FUN_1000_1854();
  local_5e = 0;
  local_5c = 0;
  while (iVar1 = local_5c * 6, *(char *)(iVar1 + 0x1228) != -1) {
    if (*(char *)(iVar1 + 0x1228) == '\x01') {
      auStack_5a[local_5e] = *(undefined2 *)(iVar1 + 0x122a);
      local_32[local_5e] = (undefined2 *)*(undefined2 *)(iVar1 + 0x122c);
      local_5e = local_5e + 1;
    }
    local_5c = local_5c + 1;
  }
  local_32[local_5e] = (undefined2 *)0x0;
  uStack_8 = 5;
  local_a = &local_a;
  uStack_c = 0x62a;
  FUN_1000_0fee();
  uStack_8 = 0;
  local_a = (undefined2 ***)local_32;
  uStack_c = 0x2f7;
  uStack_e = 0x63f;
  iVar1 = FUN_1000_02c0();
  if (iVar1 != -1) {
    uStack_8 = 0x332;
    local_a = (undefined2 ***)0x10d6;
    uStack_c = 0x65c;
    FUN_1000_1d34();
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_0668
// Entry:    1000:0668
// Body:     1000:0668 -> 1000:071f
// Size:     184 bytes
// Prototype: undefined __cdecl16near FUN_1000_0668()
// ============================================================================

int __cdecl16near FUN_1000_0668(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_36;
  int local_34;
  undefined2 auStack_32 [10];
  undefined2 *local_1e [8];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 ***local_a;
  undefined2 uStack_8;
  
  FUN_1000_1854();
  local_36 = 0;
  local_34 = 0;
  while (iVar1 = local_34 * 6, *(char *)(iVar1 + 0x1228) != -1) {
    if (*(char *)(iVar1 + 0x1228) == '\x04') {
      auStack_32[local_36] = *(undefined2 *)(iVar1 + 0x122a);
      local_1e[local_36] = (undefined2 *)*(undefined2 *)(iVar1 + 0x122c);
      local_36 = local_36 + 1;
    }
    local_34 = local_34 + 1;
  }
  local_1e[local_36] = (undefined2 *)0x0;
  uStack_8 = 5;
  local_a = &local_a;
  uStack_c = 0x6e2;
  FUN_1000_0fee();
  uStack_8 = 0;
  local_a = (undefined2 ***)local_1e;
  uStack_c = 0x335;
  uStack_e = 0x6f7;
  iVar1 = FUN_1000_02c0();
  if (iVar1 != -1) {
    uStack_8 = 0x36d;
    local_a = (undefined2 ***)0x1126;
    uStack_c = 0x714;
    FUN_1000_1d34();
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_0720
// Entry:    1000:0720
// Body:     1000:0720 -> 1000:079c
// Size:     125 bytes
// Prototype: undefined __cdecl16near FUN_1000_0720()
// ============================================================================

int __cdecl16near FUN_1000_0720(void)

{
  int iVar1;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 **local_a;
  undefined2 uStack_8;
  
  FUN_1000_1854();
  local_14 = (undefined2 *)0x370;
  local_12 = 0x375;
  local_10 = 0;
  uStack_8 = 10;
  local_a = &local_a;
  uStack_c = 0x75f;
  FUN_1000_0fee();
  uStack_8 = 0;
  local_a = (undefined2 **)&local_14;
  uStack_c = 0x37a;
  uStack_e = 0x774;
  iVar1 = FUN_1000_02c0();
  if (iVar1 != -1) {
    uStack_8 = 0x3ec;
    local_a = (undefined2 **)0x11d8;
    uStack_c = 0x791;
    FUN_1000_1d34();
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_079e
// Entry:    1000:079e
// Body:     1000:079e -> 1000:082c
// Size:     142 bytes
// Prototype: undefined __cdecl16near FUN_1000_079e()
// ============================================================================

int __cdecl16near FUN_1000_079e(void)

{
  int iVar1;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 **local_a;
  undefined2 uStack_8;
  
  FUN_1000_1854();
  local_12 = (undefined2 *)0x3ef;
  local_10 = 0x409;
  local_e = 0;
  uStack_8 = 10;
  local_a = &local_a;
  uStack_c = 0x7dd;
  FUN_1000_0fee();
  uStack_8 = 0;
  local_a = (undefined2 **)&local_12;
  uStack_c = 0x428;
  local_e = 0x7f2;
  iVar1 = FUN_1000_02c0();
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      uStack_8 = 0x4b7;
    }
    else {
      if (iVar1 != 1) {
        return iVar1;
      }
      uStack_8 = 0x4c7;
    }
    local_a = (undefined2 **)0xdde;
    uStack_c = 0x81f;
    FUN_1000_1d34();
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_082e
// Entry:    1000:082e
// Body:     1000:082e -> 1000:0975
// Size:     325 bytes
// Prototype: undefined __cdecl16near FUN_1000_082e()
// ============================================================================

void __cdecl16near FUN_1000_082e(void)

{
  int iVar1;
  undefined2 local_3c [20];
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  undefined2 **local_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x837;
  FUN_1000_1854();
  local_10 = 0;
  local_12 = FUN_1000_151c();
  do {
    while( true ) {
      if (local_10 != 0) {
        return;
      }
      iStack_4 = 0x4e4;
      iStack_6 = 0x4f9;
      uStack_8 = 0x855;
      local_14 = FUN_1000_0e5e();
      if (local_14 != 0x1b) break;
      iStack_4 = 0x946;
      FUN_1000_14f4();
      local_10 = 1;
      iStack_4 = 0x64c;
      iStack_6 = 0x660;
      uStack_8 = 0x95d;
      FUN_1000_0e5e();
LAB_1000_0960:
      iStack_4 = 0x966;
      FUN_1000_0d70();
    }
    local_e = local_14 + -0x61;
    iStack_4 = 0x86d;
    FUN_1000_14f4();
    local_e = FUN_1000_151c();
    if (local_e != 0) {
      local_10 = 1;
      iStack_4 = 0x57d;
      iStack_6 = 0x585;
      uStack_8 = 0x891;
      FUN_1000_0e5e();
      iStack_4 = 0x50;
      iStack_6 = 0;
      uStack_8 = 0;
      local_a = &local_a;
      local_c = 0x8a7;
      FUN_1000_0fc0();
      iStack_4 = 0x8b1;
      local_c = FUN_1000_0c2c();
      iStack_4 = 0x8be;
      FUN_1000_10a4();
      iStack_4 = 0x8c7;
      FUN_1000_0d70();
      iStack_4 = local_12 + 0x61;
      iStack_6 = local_14;
      uStack_8 = 0x5d9;
      local_a = (undefined2 **)local_3c;
      local_c = 0x8e4;
      FUN_1000_1d34();
      iStack_4 = 0x8ed;
      FUN_1000_14f4();
      iStack_4 = 0x8f7;
      iVar1 = FUN_1000_1e66();
      if (iVar1 == -1) {
        iStack_4 = 0x5f1;
        iStack_6 = 0x608;
        uStack_8 = 0x90c;
        iStack_6 = FUN_1000_1df4();
        uStack_8 = 0x913;
        FUN_1000_0e5e();
      }
      iStack_4 = 0x91c;
      thunk_FUN_1000_27d8();
      goto LAB_1000_0960;
    }
    iStack_4 = 0x928;
    FUN_1000_14f4();
    iStack_4 = 0x611;
    iStack_6 = 0x628;
    uStack_8 = 0x93a;
    FUN_1000_0e5e();
  } while( true );
}



// ============================================================================
// Function: FUN_1000_0976
// Entry:    1000:0976
// Body:     1000:0976 -> 1000:0b06
// Size:     400 bytes
// Prototype: undefined __cdecl16near FUN_1000_0976()
// ============================================================================

void __cdecl16near FUN_1000_0976(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_8e;
  int local_8a;
  undefined1 *local_88;
  undefined1 local_86 [30];
  undefined1 local_68 [14];
  int local_5a;
  int *local_58;
  undefined1 *local_56;
  undefined1 local_54 [72];
  undefined2 uStack_c;
  undefined1 *puStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0x97f;
  FUN_1000_1854();
  local_5a = 0;
  local_4 = (undefined1 *)0x200;
  puStack_6 = (undefined1 *)0x98c;
  thunk_FUN_1000_27f9();
  local_4 = (undefined1 *)0x134;
  puStack_6 = (undefined1 *)0x675;
  puStack_8 = local_54;
  puStack_a = (undefined1 *)0x9a1;
  FUN_1000_1d34();
  local_4 = local_86;
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = local_54;
  puStack_a = (undefined1 *)0x9b3;
  iVar1 = FUN_1000_1470();
  while (iVar1 != -1) {
    local_4 = local_68;
    puStack_6 = (undefined1 *)0x12c;
    puStack_8 = (undefined1 *)0x681;
    puStack_a = local_54;
    uStack_c = 0x9cf;
    FUN_1000_1d34();
    local_4 = (undefined1 *)0x8000;
    puStack_6 = local_68;
    puStack_8 = (undefined1 *)0x9dd;
    puVar2 = (undefined1 *)FUN_1000_18a6();
    if (-1 < (int)puVar2) {
      local_56 = (undefined1 *)(local_5a * 6 + 0x1228);
      local_4 = (undefined1 *)0x100;
      puStack_6 = (undefined1 *)0x100;
      puStack_a = (undefined1 *)0xa0a;
      puStack_8 = puVar2;
      FUN_1000_1a48();
      local_4 = (undefined1 *)0xa14;
      FUN_1000_186c();
      local_58 = (int *)((int)local_4 + 4);
      if ((*local_58 == 0x4321) && (*(int *)((int)local_4 + 6) == -0x789b)) {
        *local_56 = *(undefined1 *)((int)local_4 + 8);
        local_8a = 10;
        for (local_8e = (int)*(char *)((int)local_4 + 9); local_8e != 0; local_8e = local_8e + -1) {
          local_8a = local_8a + 1;
        }
        local_4 = local_68;
        puStack_6 = (undefined1 *)0xa74;
        uVar3 = FUN_1000_1db4();
        *(undefined2 *)(local_56 + 2) = uVar3;
        local_8e = (int)(char)local_4[local_8a];
        local_4 = (undefined1 *)(local_8e + 1);
        puStack_6 = (undefined1 *)0xa94;
        local_88 = (undefined1 *)thunk_FUN_1000_27f9();
        *(undefined1 **)(local_56 + 4) = local_88;
        for (; local_8a = local_8a + 1, local_8e != 0; local_8e = local_8e + -1) {
          *local_88 = *(undefined1 *)(local_8a + (int)local_4);
          local_88 = local_88 + 1;
        }
        *local_88 = 0;
        local_5a = local_5a + 1;
        *(undefined1 *)(local_5a * 6 + 0x1228) = 0xff;
      }
    }
    local_4 = (undefined1 *)0xae3;
    iVar1 = FUN_1000_14c8();
  }
  puStack_6 = (undefined1 *)0xaef;
  thunk_FUN_1000_27d8();
  *(undefined1 *)(local_5a * 6 + 0x1228) = 0xff;
  return;
}



// ============================================================================
// Function: FUN_1000_0b08
// Entry:    1000:0b08
// Body:     1000:0b08 -> 1000:0c2a
// Size:     290 bytes
// Prototype: undefined __cdecl16near FUN_1000_0b08()
// ============================================================================

void __cdecl16near FUN_1000_0b08(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_a;
  int local_6;
  undefined2 uVar3;
  int iVar4;
  
  FUN_1000_1854();
  local_a = *param_1;
  iVar1 = param_1[3];
  iVar2 = param_1[2];
  FUN_1000_0d96(param_1[1],local_a);
  local_6 = 0xb3e;
  FUN_1000_0f4c(0xda);
  while (local_6 = local_6 + 1, local_6 < iVar1 + -1) {
    FUN_1000_0f4c(0xc4);
  }
  uVar3 = 0xb67;
  FUN_1000_0f4c(0xb7);
  FUN_1000_0d96(uVar3,iVar2 + -1);
  local_6 = 0xb7f;
  FUN_1000_0f4c(0xd4);
  while (local_6 = local_6 + 1, local_6 < iVar1 + -1) {
    FUN_1000_0f4c(0xcd);
  }
  uVar3 = 0xba9;
  FUN_1000_0f4c(0xbc);
  FUN_1000_0d96(uVar3,local_a + 1);
  while (local_a = local_a + 1, local_a < iVar2 + -1) {
    FUN_1000_0d96(uVar3,local_a);
    FUN_1000_0f4c(0xb3);
    FUN_1000_0d96(iVar1 + -1,local_a);
    uVar3 = 0xbe7;
    FUN_1000_0f4c(0xba);
  }
  if (param_2 != 0) {
    iVar4 = param_2;
    iVar2 = FUN_1000_1c78(param_2,iVar2 + -1);
    FUN_1000_0d96(((uint)((iVar1 - iVar4) - iVar2) >> 1) + iVar4);
    FUN_1000_0f74(param_2);
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0c2c
// Entry:    1000:0c2c
// Body:     1000:0c2c -> 1000:0cdd
// Size:     177 bytes
// Prototype: undefined __cdecl16near FUN_1000_0c2c()
// ============================================================================

int * __cdecl16near FUN_1000_0c2c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_6;
  int iVar4;
  
  FUN_1000_1854();
  piVar2 = (int *)thunk_FUN_1000_27f9((param_1[3] - param_1[1]) * (param_1[2] - *param_1) * 2 + 8);
  *piVar2 = *param_1;
  piVar2[1] = param_1[1];
  piVar2[2] = param_1[2];
  piVar2[3] = param_1[3];
  for (local_6 = *param_1; local_6 < param_1[2]; local_6 = local_6 + 1) {
    iVar4 = param_1[1];
    while (iVar4 < param_1[3]) {
      uVar3 = FUN_1000_0dac();
      *(undefined2 *)0xcb1 = uVar3;
      iVar1 = local_6 + 1;
      local_6 = iVar4;
      iVar4 = iVar1;
    }
  }
  return piVar2;
}



// ============================================================================
// Function: FUN_1000_0cde
// Entry:    1000:0cde
// Body:     1000:0cde -> 1000:0d37
// Size:     89 bytes
// Prototype: undefined __cdecl16near FUN_1000_0cde()
// ============================================================================

void __cdecl16near FUN_1000_0cde(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_8;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_1000_1854();
  piVar2 = param_1 + 4;
  piVar4 = param_1;
  for (local_8 = *param_1; param_1 = piVar2, local_8 < piVar4[2]; local_8 = local_8 + 1) {
    piVar2 = (int *)piVar4[1];
    while (iVar1 = local_8, (int)piVar2 < piVar4[3]) {
      iVar3 = *param_1;
      local_8 = 0xd18;
      piVar4 = piVar2;
      FUN_1000_0dfe(iVar3,piVar2,iVar1);
      param_1 = param_1 + 1;
      piVar2 = (int *)(iVar3 + 1);
    }
    piVar2 = param_1;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0d38
// Entry:    1000:0d38
// Body:     1000:0d38 -> 1000:0d6e
// Size:     55 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d38()
// ============================================================================

int __cdecl16near FUN_1000_0d38(undefined2 param_1)

{
  int iVar1;
  
  FUN_1000_1854();
  iVar1 = FUN_1000_18a6(param_1,0x8201);
  if (iVar1 == -1) {
    iVar1 = FUN_1000_18a6(param_1,0x8101,0x180);
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_0d70
// Entry:    1000:0d70
// Body:     1000:0d70 -> 1000:0d95
// Size:     38 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d70()
// ============================================================================

void __cdecl16near FUN_1000_0d70(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 0;
  *(undefined1 *)0xd80 = 3;
  FUN_1000_1cb6(0x10,0xd80,0x11ca);
  return;
}



// ============================================================================
// Function: FUN_1000_0d96
// Entry:    1000:0d96
// Body:     1000:0d96 -> 1000:0dab
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d96()
// ============================================================================

void __cdecl16near FUN_1000_0d96(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined2 *)0xe7e = param_1;
  *(undefined2 *)0xe80 = param_2;
  return;
}



// ============================================================================
// Function: FUN_1000_0dac
// Entry:    1000:0dac
// Body:     1000:0dac -> 1000:0dfc
// Size:     81 bytes
// Prototype: undefined __cdecl16near FUN_1000_0dac()
// ============================================================================

undefined2 __cdecl16near FUN_1000_0dac(undefined1 param_1,undefined1 param_2)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 2;
  *(undefined1 *)0xd86 = param_1;
  *(undefined1 *)0xd87 = param_2;
  *(undefined1 *)0xd83 = 0;
  FUN_1000_1cb6(0x10,0xd80,0x11ca);
  *(undefined1 *)0xd81 = 8;
  *(undefined1 *)0xd83 = 0;
  FUN_1000_1cb6(0x10,0xd80,0x11ca);
  return *(undefined2 *)0x11ca;
}



// ============================================================================
// Function: FUN_1000_0dfe
// Entry:    1000:0dfe
// Body:     1000:0dfe -> 1000:0e5d
// Size:     96 bytes
// Prototype: undefined __cdecl16near FUN_1000_0dfe()
// ============================================================================

void __cdecl16near FUN_1000_0dfe(undefined2 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 2;
  *(undefined1 *)0xd86 = param_2;
  *(undefined1 *)0xd87 = param_3;
  *(undefined1 *)0xd83 = 0;
  FUN_1000_1cb6(0x10,0xd80,0x11ca);
  *(undefined1 *)0xd81 = 9;
  *(undefined1 *)0xd80 = (undefined1)param_1;
  *(undefined1 *)0xd83 = 0;
  *(undefined1 *)0xd82 = param_1._1_1_;
  *(undefined2 *)0xd84 = 1;
  FUN_1000_1cb6(0x10,0xd80,0x11ca);
  return;
}



// ============================================================================
// Function: FUN_1000_0e5e
// Entry:    1000:0e5e
// Body:     1000:0e5e -> 1000:0f4a
// Size:     237 bytes
// Prototype: undefined __cdecl16near FUN_1000_0e5e()
// ============================================================================

undefined2 __cdecl16near FUN_1000_0e5e(undefined2 param_1,int param_2,undefined2 param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 local_14;
  undefined1 local_a [2];
  undefined2 uStack_8;
  undefined1 *puStack_6;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)0xe67;
  FUN_1000_1854();
  bVar1 = false;
  local_4 = local_a;
  puStack_6 = (undefined1 *)param_1;
  uStack_8 = 0xe7e;
  FUN_1000_1198();
  if (param_2 != 0) {
    local_4 = (undefined1 *)0xe8d;
    iVar2 = FUN_1000_1c78();
    if (local_4 < iVar2 + 2U) {
      local_4 = (undefined1 *)0xe9e;
      FUN_1000_1c78();
    }
  }
  local_4 = (undefined1 *)0xeae;
  FUN_1000_106c();
  local_4 = (undefined1 *)0xfffe;
  puStack_6 = local_a;
  uStack_8 = 0xebd;
  FUN_1000_0fee();
  local_4 = (undefined1 *)0xec7;
  FUN_1000_0c2c();
  FUN_1000_1160();
  local_4 = local_a;
  puStack_6 = (undefined1 *)0xeda;
  FUN_1000_0b08();
  local_4 = (undefined1 *)0x2;
  puStack_6 = local_a;
  uStack_8 = 0xee9;
  FUN_1000_0fee();
  local_4 = (undefined1 *)0xef3;
  FUN_1000_10a4();
  local_4 = local_a;
  puStack_6 = (undefined1 *)param_1;
  uStack_8 = 0xf04;
  FUN_1000_1370();
  local_4 = (undefined1 *)0xf0d;
  FUN_1000_1dd6();
  while (!bVar1) {
    FUN_1000_116c();
    local_4 = (undefined1 *)0xf19;
    local_14 = FUN_1000_1ca0();
    if ((char)local_14 != '\0') {
      local_4 = (undefined1 *)param_3;
      puStack_6 = (undefined1 *)0xf2c;
      iVar2 = FUN_1000_1d8a();
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
  }
  local_4 = (undefined1 *)0xf44;
  FUN_1000_0cde();
  return local_14;
}



// ============================================================================
// Function: FUN_1000_0f4c
// Entry:    1000:0f4c
// Body:     1000:0f4c -> 1000:0f73
// Size:     40 bytes
// Prototype: undefined __cdecl16near FUN_1000_0f4c()
// ============================================================================

void __cdecl16near FUN_1000_0f4c(uint param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  bVar1 = *(byte *)0x1082;
  uVar2 = *(undefined2 *)0xe80;
  uVar3 = *(undefined2 *)0xe7e;
  *(int *)0xe7e = *(int *)0xe7e + 1;
  FUN_1000_0dfe(param_1 | (uint)bVar1 << 8,uVar3,uVar2);
  return;
}



// ============================================================================
// Function: FUN_1000_0f74
// Entry:    1000:0f74
// Body:     1000:0f74 -> 1000:0fbf
// Size:     74 bytes
// Prototype: undefined __cdecl16near FUN_1000_0f74()
// ============================================================================

void __cdecl16near FUN_1000_0f74(char *param_1)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  FUN_1000_1854();
  uVar1 = *(undefined2 *)0xe7e;
  while (*param_1 != '\0') {
    if (*param_1 == '\r') {
      FUN_1000_0d96(uVar1,*(int *)0xe80 + 1);
      param_1 = param_1 + 1;
    }
    else {
      uVar1 = 0xfad;
      FUN_1000_0f4c((int)*param_1);
      param_1 = param_1 + 1;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0fc0
// Entry:    1000:0fc0
// Body:     1000:0fc0 -> 1000:0fec
// Size:     45 bytes
// Prototype: undefined __cdecl16near FUN_1000_0fc0()
// ============================================================================

void __cdecl16near
FUN_1000_0fc0(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  param_1[1] = param_2;
  param_1[3] = param_4;
  *param_1 = param_3;
  param_1[2] = param_5;
  return;
}



// ============================================================================
// Function: FUN_1000_0fee
// Entry:    1000:0fee
// Body:     1000:0fee -> 1000:101a
// Size:     45 bytes
// Prototype: undefined __cdecl16near FUN_1000_0fee()
// ============================================================================

void __cdecl16near FUN_1000_0fee(int *param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *param_1 = *param_1 + param_3;
  param_1[2] = param_1[2] - param_3;
  param_1[1] = param_1[1] + param_2;
  param_1[3] = param_1[3] - param_2;
  return;
}



// ============================================================================
// Function: FUN_1000_101c
// Entry:    1000:101c
// Body:     1000:101c -> 1000:1048
// Size:     45 bytes
// Prototype: undefined __cdecl16near FUN_1000_101c()
// ============================================================================

void __cdecl16near FUN_1000_101c(int *param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *param_1 = *param_1 + param_3;
  param_1[2] = param_1[2] + param_3;
  param_1[1] = param_1[1] + param_2;
  param_1[3] = param_1[3] + param_2;
  return;
}



// ============================================================================
// Function: FUN_1000_104a
// Entry:    1000:104a
// Body:     1000:104a -> 1000:106a
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_104a()
// ============================================================================

void __cdecl16near FUN_1000_104a(int *param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  FUN_1000_101c(param_1,param_2 - param_1[1],param_3 - *param_1);
  return;
}



// ============================================================================
// Function: FUN_1000_106c
// Entry:    1000:106c
// Body:     1000:106c -> 1000:10a3
// Size:     56 bytes
// Prototype: undefined __cdecl16near FUN_1000_106c()
// ============================================================================

void __cdecl16near FUN_1000_106c(int *param_1)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  FUN_1000_104a(param_1,((param_1[1] - param_1[3]) + 0x50) / 2,((*param_1 - param_1[2]) + 0x19) / 2)
  ;
  return;
}



// ============================================================================
// Function: FUN_1000_10a4
// Entry:    1000:10a4
// Body:     1000:10a4 -> 1000:10fb
// Size:     87 bytes
// Prototype: undefined __cdecl16near FUN_1000_10a4()
// ============================================================================

void __cdecl16near FUN_1000_10a4(int *param_1)

{
  undefined2 unaff_DS;
  int local_6;
  int iVar1;
  
  FUN_1000_1854();
  FUN_1000_1160();
  local_6 = *param_1;
  while( true ) {
    if (param_1[2] <= local_6) break;
    FUN_1000_0d96(param_1[1],local_6);
    for (iVar1 = param_1[1]; iVar1 < param_1[3]; iVar1 = iVar1 + 1) {
      iVar1 = 0x10cf;
      FUN_1000_0f4c(0x20);
    }
    local_6 = 0x10ea;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_10fc
// Entry:    1000:10fc
// Body:     1000:10fc -> 1000:1153
// Size:     87 bytes
// Prototype: undefined __cdecl16near FUN_1000_10fc()
// ============================================================================

void __cdecl16near FUN_1000_10fc(int *param_1)

{
  undefined2 unaff_DS;
  int local_6;
  int iVar1;
  
  FUN_1000_1854();
  FUN_1000_1154();
  local_6 = *param_1;
  while( true ) {
    if (param_1[2] <= local_6) break;
    FUN_1000_0d96(param_1[1],local_6);
    for (iVar1 = param_1[1]; iVar1 < param_1[3]; iVar1 = iVar1 + 1) {
      iVar1 = 0x1127;
      FUN_1000_0f4c(0x20);
    }
    local_6 = 0x1142;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1154
// Entry:    1000:1154
// Body:     1000:1154 -> 1000:115f
// Size:     12 bytes
// Prototype: undefined __cdecl16near FUN_1000_1154()
// ============================================================================

void __cdecl16near FUN_1000_1154(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined2 *)0x1082 = 0x70;
  return;
}



// ============================================================================
// Function: FUN_1000_1160
// Entry:    1000:1160
// Body:     1000:1160 -> 1000:116b
// Size:     12 bytes
// Prototype: undefined __cdecl16near FUN_1000_1160()
// ============================================================================

void __cdecl16near FUN_1000_1160(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined2 *)0x1082 = 7;
  return;
}



// ============================================================================
// Function: FUN_1000_116c
// Entry:    1000:116c
// Body:     1000:116c -> 1000:1197
// Size:     44 bytes
// Prototype: undefined __cdecl16near FUN_1000_116c()
// ============================================================================

undefined2 __cdecl16near FUN_1000_116c(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 0;
  FUN_1000_1cb6(0x16,0xd80);
  if (*(char *)0x11ca != '\0') {
    *(undefined1 *)0x11cb = 0;
  }
  return *(undefined2 *)0x11ca;
}



// ============================================================================
// Function: FUN_1000_1198
// Entry:    1000:1198
// Body:     1000:1198 -> 1000:1243
// Size:     171 bytes
// Prototype: undefined __cdecl16near FUN_1000_1198()
// ============================================================================

void __cdecl16near FUN_1000_1198(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  char *local_8;
  undefined2 local_6;
  char **local_4;
  
  local_4 = (char **)0x11a1;
  FUN_1000_1854();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3 == 0) {
    param_2[3] = 0x32;
  }
  else {
    param_2[3] = param_3;
  }
  local_8 = param_1;
  local_a = 0;
  local_c = 0;
  while (*local_8 != '\0') {
    local_4 = &local_8;
    local_6 = 0x11f7;
    FUN_1000_1244();
    local_4 = (char **)0x0;
    local_8 = (char *)0x1204;
    iVar1 = FUN_1000_1422();
    local_a = local_a + 1;
    if (local_c < iVar1) {
      local_c = iVar1;
    }
  }
  if (param_3 == 0) {
    if (local_c < (int)param_2[3]) {
      param_2[3] = local_c;
    }
  }
  param_2[2] = local_a;
  return;
}



// ============================================================================
// Function: FUN_1000_1244
// Entry:    1000:1244
// Body:     1000:1244 -> 1000:136e
// Size:     298 bytes
// Prototype: undefined __cdecl16near FUN_1000_1244()
// ============================================================================

int __cdecl16near FUN_1000_1244(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_8;
  int iVar3;
  
  FUN_1000_1854();
  local_a = 0;
  local_c = 0;
  local_8 = *param_1;
  do {
    iVar3 = local_8;
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\r') {
      if (*(char *)(*param_1 + 1) == '\n') {
        *param_1 = *param_1 + 1;
      }
      if (local_c == 0) goto LAB_1000_12da;
      iVar2 = FUN_1000_1422(local_8,0,local_a);
joined_r0x00011298:
      iVar3 = local_8;
      if (param_2 < iVar2) {
LAB_1000_129a:
        *param_1 = iVar3;
        return local_c;
      }
LAB_1000_12da:
      *param_1 = *param_1 + 1;
      return local_a;
    }
    if (cVar1 == '\n') {
      if (*(char *)(*param_1 + 1) == '\r') {
        *param_1 = *param_1 + 1;
      }
      if (local_c == 0) goto LAB_1000_12da;
      iVar2 = FUN_1000_1422(local_8,0,local_a);
      goto joined_r0x00011298;
    }
    if (cVar1 == '\0') {
      if (local_c == 0) {
        return local_a;
      }
      iVar2 = FUN_1000_1422(local_8,0,local_a);
      iVar3 = local_8;
      if (iVar2 <= param_2) {
        return local_a;
      }
      goto LAB_1000_129a;
    }
    if (cVar1 == ' ') {
      local_8 = 0x131a;
      iVar2 = FUN_1000_1422(iVar3,0,local_a);
      if (param_2 < iVar2) goto LAB_1000_129a;
      local_c = local_a;
    }
    iVar3 = local_8;
    local_a = local_a + 1;
    *param_1 = *param_1 + 1;
    if (local_c == 0) {
      local_8 = 0x1353;
      iVar2 = FUN_1000_1422(iVar3,0,local_a);
      if (param_2 <= iVar2) {
        *param_1 = iVar3 + local_a;
        return local_a;
      }
    }
  } while( true );
}



// ============================================================================
// Function: FUN_1000_1370
// Entry:    1000:1370
// Body:     1000:1370 -> 1000:1421
// Size:     173 bytes
// Prototype: undefined __cdecl16near FUN_1000_1370()
// ============================================================================

void __cdecl16near FUN_1000_1370(char *param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  int local_e;
  char *local_c;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  char **local_4;
  
  local_4 = (char **)0x1379;
  FUN_1000_1854();
  local_a = *(int *)(param_2 + 6) - *(int *)(param_2 + 2);
  local_c = param_1;
  do {
    if (*local_c == '\0') {
      return;
    }
    local_4 = &local_c;
    local_6 = 0x13aa;
    FUN_1000_1244();
    local_4 = (char **)0x0;
    local_8 = 0x13ba;
    local_e = FUN_1000_1422();
    if (param_3 == 0) {
LAB_1000_13d1:
      local_e = 0;
    }
    else if (param_3 == 1) {
      local_e = local_a - local_e;
    }
    else {
      if (param_3 != 2) goto LAB_1000_13d1;
      local_e = (local_a - local_e) / 2;
    }
    local_4 = (char **)(*(int *)(param_2 + 2) + local_e);
    local_6 = 0x13fb;
    FUN_1000_0d96();
    local_4 = (char **)0x0;
    local_8 = 0x140a;
    FUN_1000_1444();
  } while( true );
}



// ============================================================================
// Function: FUN_1000_1422
// Entry:    1000:1422
// Body:     1000:1422 -> 1000:142e
// Size:     13 bytes
// Prototype: undefined __cdecl16near FUN_1000_1422()
// ============================================================================

undefined2 __cdecl16near FUN_1000_1422(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_1854();
  return param_3;
}



// ============================================================================
// Function: FUN_1000_1430
// Entry:    1000:1430
// Body:     1000:1430 -> 1000:1442
// Size:     19 bytes
// Prototype: undefined __cdecl16near FUN_1000_1430()
// ============================================================================

void __cdecl16near FUN_1000_1430(undefined2 param_1)

{
  FUN_1000_1854();
  FUN_1000_1c78(param_1);
  return;
}



// ============================================================================
// Function: FUN_1000_1444
// Entry:    1000:1444
// Body:     1000:1444 -> 1000:146f
// Size:     43 bytes
// Prototype: undefined __cdecl16near FUN_1000_1444()
// ============================================================================

void __cdecl16near FUN_1000_1444(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  while (param_3 != 0) {
    FUN_1000_0f4c((int)*(char *)(param_2 + param_1));
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1470
// Entry:    1000:1470
// Body:     1000:1470 -> 1000:14c7
// Size:     88 bytes
// Prototype: undefined __cdecl16near FUN_1000_1470()
// ============================================================================

undefined2 __cdecl16near FUN_1000_1470(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined2 *)0xd86 = param_3;
  *(undefined1 *)0xd81 = 0x1a;
  FUN_1000_1cb6(0x21,0xd80,0x11ca);
  *(undefined2 *)0xd86 = param_1;
  *(undefined2 *)0xd84 = param_2;
  *(undefined1 *)0xd81 = 0x4e;
  FUN_1000_1cb6(0x21,0xd80,0x11ca);
  if (*(int *)0x11d6 != 0) {
    return 0xffff;
  }
  return 0;
}



// ============================================================================
// Function: FUN_1000_14c8
// Entry:    1000:14c8
// Body:     1000:14c8 -> 1000:14f2
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_14c8()
// ============================================================================

undefined2 __cdecl16near FUN_1000_14c8(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 0x4f;
  FUN_1000_1cb6(0x21,0xd80);
  if (*(int *)0x11d6 != 0) {
    return 0xffff;
  }
  return 0;
}



// ============================================================================
// Function: FUN_1000_14f4
// Entry:    1000:14f4
// Body:     1000:14f4 -> 1000:151a
// Size:     39 bytes
// Prototype: undefined __cdecl16near FUN_1000_14f4()
// ============================================================================

void __cdecl16near FUN_1000_14f4(undefined1 param_1)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 0xe;
  *(undefined1 *)0xd86 = param_1;
  FUN_1000_1cb6(0x21,0xd80,0x11ca);
  return;
}



// ============================================================================
// Function: FUN_1000_151c
// Entry:    1000:151c
// Body:     1000:151c -> 1000:153d
// Size:     34 bytes
// Prototype: undefined __cdecl16near FUN_1000_151c()
// ============================================================================

undefined1 __cdecl16near FUN_1000_151c(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  *(undefined1 *)0xd81 = 0x19;
  FUN_1000_1cb6(0x21,0xd80);
  return *(undefined1 *)0x11ca;
}



// ============================================================================
// Function: FUN_1000_153e
// Entry:    1000:153e
// Body:     1000:153e -> 1000:159b
// Size:     94 bytes
// Prototype: undefined __cdecl16near FUN_1000_153e()
// ============================================================================

void __cdecl16near FUN_1000_153e(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  if (*(int *)0x140 == 1) {
    *(undefined1 *)0xcdf = 3;
    *(undefined1 *)0xce1 = 0;
    FUN_1000_1cb6(0x10,0xcde);
    *(uint *)0x11c8 = (uint)*(byte *)0xcd5;
    *(uint *)0x1176 = (uint)*(byte *)0xcd4;
    *(undefined1 *)0xcdf = 1;
    *(undefined1 *)0xce3 = 0x31;
    *(undefined1 *)0xce2 = 1;
    FUN_1000_1cb6(0x10,0xcde);
    *(undefined2 *)0x140 = 0;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_159c
// Entry:    1000:159c
// Body:     1000:159c -> 1000:15cb
// Size:     48 bytes
// Prototype: undefined __cdecl16near FUN_1000_159c()
// ============================================================================

void __cdecl16near FUN_1000_159c(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  if (*(int *)0x140 == 0) {
    *(undefined1 *)0xcdf = 1;
    *(undefined1 *)0xce3 = *(undefined1 *)0x11c8;
    *(undefined1 *)0xce2 = *(undefined1 *)0x1176;
    FUN_1000_1cb6(0x10,0xcde);
  }
  return;
}



// ============================================================================
// Function: entry
// Entry:    1000:15cc
// Body:     1000:15cc -> 1000:1683
// Size:     184 bytes
// Prototype: undefined __cdecl16far entry()
// ============================================================================

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 uVar14;
  undefined2 unaff_DS;
  
  puVar6 = (undefined1 *)0x800;
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  if (bVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar12 = *(int *)0x2 + 0xecc9;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  puVar7 = puVar6 + 0x129e;
  puVar13 = puVar6 + 0x129e;
  if ((undefined1 *)0xed61 < puVar6) {
    *(undefined2 *)(puVar6 + 0x129c) = 0x1337;
    unaff_DS = *(undefined2 *)(puVar6 + 0x129c);
    *(undefined2 *)(puVar6 + 0x129c) = 0x15fa;
    FUN_1000_1ef6();
    *(undefined2 *)(puVar6 + 0x129c) = 0;
    *(undefined2 *)(puVar6 + 0x129a) = 0x1600;
    FUN_1000_2175();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar13 = puVar7;
  }
  DAT_1337_068c = uVar12 * 0x10 + -1;
  DAT_1337_068e = 0x1337;
  puVar8 = (undefined1 *)((uint)puVar13 & 0xfffe);
  DAT_1337_0698 = puVar8 + -2;
  DAT_1337_0692 = puVar8;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_1337_0694 = puVar8 + -4;
  DAT_1337_0696 = puVar8 + -4;
  DAT_1337_0688 = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar12 + 0x1337;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  DAT_1337_06c8 = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x1337;
  uVar14 = *(undefined2 *)(puVar9 + -2);
  puVar13 = (undefined1 *)0xcd0;
  for (iVar5 = 0x5d0; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x1337;
  pcVar2 = (code *)*(int *)0xbcc;
  if (pcVar2 != (code *)0x0) {
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0x1663;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = 0x1666;
  FUN_1000_20cc();
  puVar11 = puVar9 + -2;
  *(undefined2 *)(puVar9 + -2) = 0x1669;
  FUN_1000_1f3e();
  *(undefined2 *)(puVar11 + -2) = 0x166e;
  FUN_1000_16b6();
  *(undefined2 *)(puVar11 + -2) = 0x1337;
  uVar14 = *(undefined2 *)(puVar11 + -2);
  *(undefined2 *)(puVar11 + -2) = *(undefined2 *)0x6e9;
  *(undefined2 *)(puVar11 + -4) = *(undefined2 *)0x6e7;
  *(undefined2 *)(puVar11 + -6) = *(undefined2 *)0x6e5;
  *(undefined2 *)(puVar11 + -8) = 0x167f;
  uVar14 = FUN_1000_0010();
  *(undefined2 *)(puVar11 + -8) = uVar14;
  *(undefined2 *)(puVar11 + -10) = 0x1683;
  FUN_1000_1784();
  return;
}



// ============================================================================
// Function: FUN_1000_1694
// Entry:    1000:1694
// Body:     1000:1694 -> 1000:16b5
// Size:     34 bytes
// Prototype: undefined FUN_1000_1694()
// ============================================================================

void FUN_1000_1694(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  FUN_1000_1ef6();
  FUN_1000_2175();
  if (*(int *)0xbce == -0x292a) {
    (*(code *)*(undefined2 *)0xbd2)();
  }
  (*(code *)*(undefined2 *)0x68a)(0xff);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x6b4 = in_BX;
  *(undefined2 *)0x6b6 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xbde != 0) {
    *(undefined2 *)0xbe0 = 0x1000;
    *(undefined2 *)0xbe8 = 0x1000;
    bVar9 = false;
    (*(code *)*(undefined2 *)0xbde)();
    if (bVar9) {
      FUN_1000_1f16();
      return;
    }
    (*(code *)*(undefined2 *)0xbde)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x6a6;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x6d1;
        goto LAB_1000_1741;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_1755:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x6d1) = *(byte *)(iVar6 + 0x6d1) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x6d1) = *(byte *)(iVar6 + 0x6d1) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_1841();
  FUN_1000_1832();
  return;
LAB_1000_1741:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_1755;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_1755;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_1741;
}



// ============================================================================
// Function: FUN_1000_16b6
// Entry:    1000:16b6
// Body:     1000:16b6 -> 1000:1783
// Size:     206 bytes
// Prototype: undefined __cdecl16near FUN_1000_16b6()
// ============================================================================

void __cdecl16near FUN_1000_16b6(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x6b4 = in_BX;
  *(undefined2 *)0x6b6 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xbde != 0) {
    *(undefined2 *)0xbe0 = 0x1000;
    *(undefined2 *)0xbe8 = 0x1000;
    bVar9 = false;
    (*(code *)*(undefined2 *)0xbde)();
    if (bVar9) {
      FUN_1000_1f16();
      return;
    }
    (*(code *)*(undefined2 *)0xbde)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x6a6;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x6d1;
        goto LAB_1000_1741;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_1755:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x6d1) = *(byte *)(iVar6 + 0x6d1) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x6d1) = *(byte *)(iVar6 + 0x6d1) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_1841();
  FUN_1000_1832();
  return;
LAB_1000_1741:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_1755;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_1755;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_1741;
}



// ============================================================================
// Function: FUN_1000_1784
// Entry:    1000:1784
// Body:     1000:1784 -> 1000:1804
// Size:     103 bytes
// Prototype: undefined __cdecl16near FUN_1000_1784()
// ============================================================================

void __cdecl16near FUN_1000_1784(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_1832();
  FUN_1000_1832();
  if (*(int *)0xbce == -0x292a) {
    (*(code *)*(undefined2 *)0xbd4)();
  }
  FUN_1000_1832();
  FUN_1000_1841();
  FUN_1000_1f1c();
  FUN_1000_1805();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ============================================================================
// Function: FUN_1000_1805
// Entry:    1000:1805
// Body:     1000:1805 -> 1000:1831
// Size:     45 bytes
// Prototype: undefined __cdecl16near FUN_1000_1805()
// ============================================================================

void __cdecl16near FUN_1000_1805(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xbe0 != 0) {
    (*(code *)*(undefined2 *)0xbde)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x6f2 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1832
// Entry:    1000:1832
// Body:     1000:1832 -> 1000:1840
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_1832()
// ============================================================================

void __cdecl16near FUN_1000_1832(void)

{
  int *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1841
// Entry:    1000:1841
// Body:     1000:1841 -> 1000:1853
// Size:     19 bytes
// Prototype: undefined __cdecl16near FUN_1000_1841()
// ============================================================================

void __cdecl16near FUN_1000_1841(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x1000);
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1854
// Entry:    1000:1854
// Body:     1000:1854 -> 1000:186a
// Size:     23 bytes
// Prototype: undefined FUN_1000_1854()
// ============================================================================

void FUN_1000_1854(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0x6fa <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x00011863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_1694();
  return;
}



// ============================================================================
// Function: FUN_1000_186c
// Entry:    1000:186c
// Body:     1000:186c -> 1000:188b
// Size:     32 bytes
// Prototype: undefined FUN_1000_186c()
// ============================================================================

void FUN_1000_186c(uint param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_1 < *(uint *)0x6cf;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x6d1) = 0;
    }
  }
  FUN_1000_21aa();
  return;
}



// ============================================================================
// Function: FUN_1000_18a6
// Entry:    1000:18a6
// Body:     1000:18a6 -> 1000:1a36
// Size:     401 bytes
// Prototype: undefined __cdecl16near FUN_1000_18a6()
// ============================================================================

/* WARNING: Removing unreachable block (ram,0x0001199c) */

uint __cdecl16near FUN_1000_18a6(undefined2 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte local_6;
  char local_4;
  char local_3;
  
  uVar2 = _local_4;
  local_4 = '\0';
  local_6 = 0;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || ((*(byte *)0x795 & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar5 = param_2;
  uVar3 = (*pcVar1)();
  if (bVar7) {
    if ((uVar3 != 2) || ((uVar5 & 0x100) == 0)) goto LAB_1000_18ea;
    bVar7 = false;
    local_4 = -0x6d;
    FUN_1000_1a37();
    uVar8 = 0;
    uVar5 = 0;
LAB_1000_19a6:
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_1000_19af:
      uVar5 = FUN_1000_21bf();
      return uVar5;
    }
    if ((local_4 != '\0') || ((param_2 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
      if (bVar9) goto LAB_1000_19af;
      if ((!bVar7) && ((param_3 & 1) != 0)) {
        bVar7 = false;
        uVar5 = (uint)(byte)((byte)uVar5 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_1000_19af;
      }
    }
  }
  else {
    if ((uVar5 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_1000_18ea;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      local_6 = local_6 | 0x40;
    }
    if ((local_6 & 0x40) == 0) {
      if ((param_2 & 0x200) == 0) {
        if (((local_6 & 0x80) != 0) && ((param_2 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) && (local_3 = SUB21(uVar2,1), local_3 == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar5 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          goto LAB_1000_19a6;
        }
        uVar5 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar6 = 0;
    if ((uVar5 & 1) != 0) {
      bVar6 = 0x10;
    }
    if ((param_2 & 8) != 0) {
      bVar6 = bVar6 | 0x20;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar3 < *(uint *)0x6cf) {
    *(byte *)(uVar3 + 0x6d1) = bVar6 | local_6 | 1;
    return uVar3;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_1000_18ea:
  uVar5 = FUN_1000_21bf();
  return uVar5;
}



// ============================================================================
// Function: FUN_1000_1a37
// Entry:    1000:1a37
// Body:     1000:1a37 -> 1000:1a47
// Size:     17 bytes
// Prototype: undefined __cdecl16near FUN_1000_1a37()
// ============================================================================

void __cdecl16near FUN_1000_1a37(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_1a48
// Entry:    1000:1a48
// Body:     1000:1a48 -> 1000:1b30
// Size:     233 bytes
// Prototype: undefined FUN_1000_1a48()
// ============================================================================

/* WARNING: Removing unreachable block (ram,0x00011b2f) */
/* WARNING: Removing unreachable block (ram,0x00011b24) */

void FUN_1000_1a48(uint param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0x6cf <= param_1) || (param_3 == 0)) || ((*(byte *)(param_1 + 0x6d1) & 2) != 0)) {
LAB_1000_1ac5:
    FUN_1000_21bf();
    return;
  }
  uVar10 = *(uint *)0xbce < 0xd6d6;
  if (*(uint *)0xbce == 0xd6d6) {
    (*(code *)*(undefined2 *)0xbd0)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if ((((bool)uVar10) || ((*(byte *)(param_1 + 0x6d1) & 0x80) == 0)) ||
     (*(byte *)(param_1 + 0x6d1) = *(byte *)(param_1 + 0x6d1) & 0xfb, (int)uVar12 == 0))
  goto LAB_1000_1ac5;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_1 + 0x6d1) = *(byte *)(param_1 + 0x6d1) | 4;
  }
LAB_1000_1aaa:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_1000_1aba;
      goto LAB_1000_1abd;
    }
    bVar11 = false;
    if ((*(byte *)(param_1 + 0x6d1) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar10 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar7 = 1;
          uVar10 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar10,0xd);
        goto LAB_1000_1aba;
      }
      goto LAB_1000_1ac5;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_1000_1ac5;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_1 + 0x6d1) = *(byte *)(param_1 + 0x6d1) | 2;
    goto LAB_1000_1ac5;
  }
LAB_1000_1aba:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_1000_1abd:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_1000_1ac5;
  goto LAB_1000_1aaa;
}



// ============================================================================
// Function: FUN_1000_1b32
// Entry:    1000:1b32
// Body:     1000:1b32 -> 1000:1be2
// Size:     177 bytes
// Prototype: undefined FUN_1000_1b32()
// ============================================================================

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_1000_1b32(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  
  if (*(uint *)0x6cf <= param_1) {
LAB_1000_1b45:
    uVar4 = FUN_1000_21bf();
    return uVar4;
  }
  if (*(int *)0xbce == -0x292a) {
    (*(code *)*(undefined2 *)0xbd0)();
  }
  if ((*(byte *)(param_1 + 0x6d1) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_1000_1b45;
  }
  if ((*(byte *)(param_1 + 0x6d1) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_3;
    pcVar8 = param_2;
    if (param_3 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_1000_1bdb;
      uVar5 = FUN_1000_27c6();
      if (uVar5 < 0xa9) {
        uVar10 = FUN_1000_1854();
        pcVar7 = (char *)((ulong)uVar10 >> 0x10);
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_1000_21bf();
            return uVar4;
          }
        }
        return (int)uVar10;
      }
      pcVar7 = &stack0xfff2;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_1000_1be3();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_1000_1be3();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      FUN_1000_1be3();
    }
    uVar4 = FUN_1000_1c2d();
    return uVar4;
  }
LAB_1000_1bdb:
  uVar4 = FUN_1000_1c3b();
  return uVar4;
}



// ============================================================================
// Function: FUN_1000_1be3
// Entry:    1000:1be3
// Body:     1000:1be3 -> 1000:1c2c
// Size:     74 bytes
// Prototype: undefined __cdecl16near FUN_1000_1be3()
// ============================================================================

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_1000_1be3(void)

{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bVar4) ||
       (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + uVar2, uVar2 < unaff_DI - in_DX)) {
      uVar3 = FUN_1000_21bf();
      return uVar3;
    }
  }
  return in_AX;
}



// ============================================================================
// Function: FUN_1000_1c2d
// Entry:    1000:1c2d
// Body:     1000:1c2d -> 1000:1c3a
// Size:     14 bytes
// Prototype: undefined FUN_1000_1c2d()
// ============================================================================

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_1000_1c2d(void)

{
  FUN_1000_21bf();
  return;
}



// ============================================================================
// Function: FUN_1000_1c3b
// Entry:    1000:1c3b
// Body:     1000:1c3b -> 1000:1c6e
// Size:     52 bytes
// Prototype: undefined FUN_1000_1c3b()
// ============================================================================

void FUN_1000_1c3b(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 8) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_21bf();
    return;
  }
  FUN_1000_21bf();
  return;
}



// ============================================================================
// Function: thunk_FUN_1000_27f9
// Entry:    1000:1c70
// Body:     1000:1c70 -> 1000:1c72
// Size:     3 bytes
// Prototype: undefined __cdecl16near thunk_FUN_1000_27f9()
// ============================================================================

void __cdecl16near thunk_FUN_1000_27f9(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_2cd2(), bVar1)) && (FUN_1000_2d4e(), !bVar1)) {
    FUN_1000_2cd2();
  }
  return;
}



// ============================================================================
// Function: thunk_FUN_1000_27d8
// Entry:    1000:1c74
// Body:     1000:1c74 -> 1000:1c76
// Size:     3 bytes
// Prototype: undefined __cdecl16near thunk_FUN_1000_27d8()
// ============================================================================

void __cdecl16near thunk_FUN_1000_27d8(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x694 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x696) {
      *(undefined2 *)0x696 = pbVar1;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1c78
// Entry:    1000:1c78
// Body:     1000:1c78 -> 1000:1c92
// Size:     27 bytes
// Prototype: undefined __cdecl16near FUN_1000_1c78()
// ============================================================================

int __cdecl16near FUN_1000_1c78(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



// ============================================================================
// Function: FUN_1000_1ca0
// Entry:    1000:1ca0
// Body:     1000:1ca0 -> 1000:1cb5
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_1ca0()
// ============================================================================

int __cdecl16near FUN_1000_1ca0(int param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x797) & 1) != 0) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



// ============================================================================
// Function: FUN_1000_1cb6
// Entry:    1000:1cb6
// Body:     1000:1cb6 -> 1000:1d33
// Size:     126 bytes
// Prototype: undefined __cdecl16near FUN_1000_1cb6()
// ============================================================================

undefined2 __cdecl16near FUN_1000_1cb6(byte param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  undefined4 uVar7;
  undefined1 local_c;
  byte local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  
  local_c = (code)0xcd;
  local_b = param_1;
  bVar6 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar6 = param_1 < 0x26, param_1 == 0x26)) {
    local_8 = 0xcb;
    local_9 = 0x44;
    local_a = 0x44;
  }
  else {
    local_a = 0xcb;
  }
  uVar5 = *(undefined2 *)(param_2 + 2);
  uVar4 = *(undefined2 *)(param_2 + 4);
  uVar1 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined2 *)(param_2 + 10);
  uVar7 = (*(code *)&local_c)(0x1000);
  uVar3 = (undefined2)uVar7;
  *param_3 = uVar3;
  param_3[1] = uVar5;
  param_3[2] = uVar4;
  param_3[3] = (int)((ulong)uVar7 >> 0x10);
  param_3[4] = uVar1;
  param_3[5] = uVar2;
  if (bVar6) {
    FUN_1000_21cc();
    uVar3 = *param_3;
  }
  param_3[6] = (uint)bVar6;
  return uVar3;
}



// ============================================================================
// Function: FUN_1000_1d34
// Entry:    1000:1d34
// Body:     1000:1d34 -> 1000:1d89
// Size:     85 bytes
// Prototype: undefined __cdecl16near FUN_1000_1d34()
// ============================================================================

undefined2 __cdecl16near FUN_1000_1d34(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xcf2 = 0x42;
  *(undefined2 *)0xcf0 = param_1;
  *(undefined2 *)0xcec = param_1;
  *(undefined2 *)0xcee = 0x7fff;
  uVar3 = FUN_1000_22f0(0xcec,param_2,&stack0x0006);
  piVar1 = (int *)0xcee;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_1000_2200(0,0xcec);
  }
  else {
    puVar2 = (undefined1 *)*(undefined2 *)0xcec;
    *(int *)0xcec = *(int *)0xcec + 1;
    *puVar2 = 0;
  }
  return uVar3;
}



// ============================================================================
// Function: FUN_1000_1d8a
// Entry:    1000:1d8a
// Body:     1000:1d8a -> 1000:1db3
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_1d8a()
// ============================================================================

char * __cdecl16near FUN_1000_1d8a(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + -1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



// ============================================================================
// Function: FUN_1000_1db4
// Entry:    1000:1db4
// Body:     1000:1db4 -> 1000:1dd5
// Size:     34 bytes
// Prototype: undefined __cdecl16near FUN_1000_1db4()
// ============================================================================

void __cdecl16near FUN_1000_1db4(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000_1c78(param_1);
  iVar1 = thunk_FUN_1000_27f9(iVar1 + 1);
  if (iVar1 != 0) {
    FUN_1000_2862(iVar1);
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1dd6
// Entry:    1000:1dd6
// Body:     1000:1dd6 -> 1000:1df3
// Size:     30 bytes
// Prototype: undefined __cdecl16near FUN_1000_1dd6()
// ============================================================================

char * __cdecl16near FUN_1000_1dd6(char *param_1)

{
  char cVar1;
  int in_AX;
  byte bVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *pcVar3;
    bVar2 = (byte)((uint)in_AX >> 8);
    if (cVar1 == '\0') break;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *pcVar3 = cVar1 + ' ';
    }
    in_AX = (uint)bVar2 << 8;
    pcVar3 = pcVar3 + 1;
  }
  return (char *)CONCAT22(CONCAT11(bVar2,cVar1),param_1);
}



// ============================================================================
// Function: FUN_1000_1df4
// Entry:    1000:1df4
// Body:     1000:1df4 -> 1000:1e65
// Size:     114 bytes
// Prototype: undefined __cdecl16near FUN_1000_1df4()
// ============================================================================

void __cdecl16near FUN_1000_1df4(char *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xcf4 = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_1000_2822(0xcf4,param_1);
    FUN_1000_2822(0xcf4,0x6fc);
  }
  if ((*(int *)0x6c2 < 0) || (*(int *)0xa18 <= *(int *)0x6c2)) {
    iVar1 = *(int *)0xa18;
  }
  else {
    iVar1 = *(int *)0x6c2;
  }
  FUN_1000_2822(0xcf4,*(undefined2 *)(iVar1 * 2 + 0x9cc));
  FUN_1000_2822(0xcf4,0x6ff);
  return;
}



// ============================================================================
// Function: FUN_1000_1e66
// Entry:    1000:1e66
// Body:     1000:1e66 -> 1000:1ef4
// Size:     142 bytes
// Prototype: undefined __cdecl16near FUN_1000_1e66()
// ============================================================================

int __cdecl16near FUN_1000_1e66(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_a [3];
  undefined2 local_4;
  
  local_a[0] = FUN_1000_2894(0x702);
  if (param_1 == 0) {
    iVar1 = FUN_1000_2bd2(local_a[0],0);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    local_a[1] = 0x70a;
    local_a[2] = param_1;
    local_4 = 0;
    if ((local_a[0] == 0) ||
       ((iVar1 = FUN_1000_296e(0,local_a[0],local_a,*(undefined2 *)0x6e9), iVar1 == -1 &&
        ((*(int *)0x6c2 == 2 || (*(int *)0x6c2 == 0xd)))))) {
      local_a[0] = 0x70d;
      iVar1 = FUN_1000_2a90(0,0x70d,local_a,*(undefined2 *)0x6e9);
    }
  }
  return iVar1;
}



// ============================================================================
// Function: FUN_1000_1ef6
// Entry:    1000:1ef6
// Body:     1000:1ef6 -> 1000:1f15
// Size:     32 bytes
// Prototype: undefined __cdecl16near FUN_1000_1ef6()
// ============================================================================

void __cdecl16near FUN_1000_1ef6(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_2175(0xfc);
  if (*(int *)0x71a != 0) {
    (*(code *)*(undefined2 *)0x71a)();
  }
  FUN_1000_2175(0xff);
  return;
}



// ============================================================================
// Function: FUN_1000_1f16
// Entry:    1000:1f16
// Body:     1000:1f16 -> 1000:1f1b
// Size:     6 bytes
// Prototype: undefined FUN_1000_1f16()
// ============================================================================

void FUN_1000_1f16(void)

{
  FUN_1000_1694();
  return;
}



// ============================================================================
// Function: FUN_1000_1f1c
// Entry:    1000:1f1c
// Body:     1000:1f1c -> 1000:1f3d
// Size:     34 bytes
// Prototype: undefined __cdecl16near FUN_1000_1f1c()
// ============================================================================

uint __cdecl16near FUN_1000_1f1c(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_1000_1ef6();
    FUN_1000_2175(1);
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================================
// Function: FUN_1000_1f3e
// Entry:    1000:1f3e
// Body:     1000:1f3e -> 1000:20cb
// Size:     398 bytes
// Prototype: undefined FUN_1000_1f3e()
// ============================================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_1f3e(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined2 uVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x71c = in_stack_00000000;
  pcVar5 = (code *)swi(0x21);
  uVar6 = (*pcVar5)();
  *(undefined2 *)0x6ca = uVar6;
  uVar9 = 1;
  if ((char)uVar6 != '\x02') {
    uVar6 = *(undefined2 *)0x2c;
    *(undefined2 *)0x6ed = uVar6;
    iVar7 = -0x8000;
    pcVar12 = (char *)0x0;
LAB_1000_1f65:
    do {
      pcVar13 = pcVar12;
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        pcVar3 = pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar12;
        if (*pcVar3 != '\0') goto LAB_1000_1f65;
      }
      pcVar12 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    pcVar13 = pcVar13 + 3;
    *(undefined2 *)0x6eb = pcVar13;
    uVar9 = 0xffff;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar3 != '\0');
    uVar9 = ~uVar9;
  }
  iVar7 = 1;
  pcVar12 = (char *)0x81;
  uVar6 = *(undefined2 *)0x6c8;
LAB_1000_1f83:
  do {
    do {
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    iVar7 = iVar7 + 1;
    do {
      pcVar12 = pcVar12 + -1;
LAB_1000_1f96:
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar3;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_1000_1f83;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_1000_1fcf:
        do {
          while( true ) {
            while( true ) {
              pcVar3 = pcVar12;
              pcVar12 = pcVar12 + 1;
              cVar2 = *pcVar3;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_1fff;
              if (cVar2 == '\"') goto LAB_1000_1f96;
              if (cVar2 == '\\') break;
              uVar9 = uVar9 + 1;
            }
            uVar8 = 0;
            do {
              pcVar13 = pcVar12;
              uVar8 = uVar8 + 1;
              pcVar12 = pcVar13 + 1;
            } while (*pcVar13 == '\\');
            if (*pcVar13 == '\"') break;
            uVar9 = uVar9 + uVar8;
            pcVar12 = pcVar13;
          }
          uVar9 = uVar9 + (uVar8 >> 1) + (uint)((uVar8 & 1) != 0);
        } while ((uVar8 & 1) != 0);
        goto LAB_1000_1f96;
      }
      if (cVar2 != '\\') {
        uVar9 = uVar9 + 1;
        goto LAB_1000_1f96;
      }
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        pcVar3 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar3 == '\\');
      if (*pcVar3 == '\"') {
        uVar9 = uVar9 + (uVar8 >> 1) + (uint)((uVar8 & 1) != 0);
        if ((uVar8 & 1) == 0) goto LAB_1000_1fcf;
        goto LAB_1000_1f96;
      }
      uVar9 = uVar9 + uVar8;
    } while( true );
  }
LAB_1000_1fff:
  *(int *)0x6e5 = iVar7;
  iVar14 = (iVar7 + 1) * 2;
  iVar7 = -(uVar9 + iVar7 + iVar14 + 1 & 0xfffe);
  *(undefined1 **)0x6e7 = &stack0x0006 + iVar7;
  pcVar13 = &stack0x0006 + iVar14 + iVar7;
  *(undefined2 *)((int)&stack0x0004 + iVar7) = unaff_SS;
  uVar6 = *(undefined2 *)((int)&stack0x0004 + iVar7);
  *(char **)(&stack0x0006 + iVar7) = pcVar13;
  puVar10 = (undefined2 *)(&stack0x0008 + iVar7);
  pcVar3 = (char *)*(undefined4 *)0x6eb;
  pcVar12 = (char *)pcVar3;
  do {
    pcVar1 = pcVar12;
    pcVar12 = pcVar12 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar13;
    pcVar13 = pcVar13 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  uVar4 = *(undefined2 *)0x6c8;
  pcVar12 = (char *)0x81;
LAB_1000_2039:
  do {
    do {
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_20c2:
    *(undefined2 *)((int)&stack0x0004 + iVar7) = unaff_SS;
    uVar6 = *(undefined2 *)((int)&stack0x0004 + iVar7);
    *puVar10 = 0;
                    /* WARNING: Could not recover jumptable at 0x000120c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)0x71c)();
    return;
  }
  *puVar10 = pcVar13;
  puVar10 = puVar10 + 1;
  do {
    pcVar12 = pcVar12 + -1;
LAB_1000_2050:
    pcVar3 = pcVar12;
    pcVar12 = pcVar12 + 1;
    cVar2 = *pcVar3;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = '\0';
      goto LAB_1000_2039;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_1000_20bf:
      *pcVar13 = '\0';
      goto LAB_1000_20c2;
    }
    pcVar11 = pcVar12;
    if (cVar2 == '\"') {
LAB_1000_208c:
      while( true ) {
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_1000_20bf;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar9 = 0;
          do {
            pcVar11 = pcVar12;
            uVar9 = uVar9 + 1;
            pcVar12 = pcVar11 + 1;
          } while (*pcVar11 == '\\');
          if (*pcVar11 == '\"') {
            for (uVar8 = uVar9 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
              pcVar3 = pcVar13;
              pcVar13 = pcVar13 + 1;
              *pcVar3 = '\\';
            }
            if ((uVar9 & 1) == 0) break;
            pcVar3 = pcVar13;
            pcVar13 = pcVar13 + 1;
            *pcVar3 = '\"';
            pcVar11 = pcVar12;
          }
          else {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              pcVar3 = pcVar13;
              pcVar13 = pcVar13 + 1;
              *pcVar3 = '\\';
            }
          }
        }
        else {
          pcVar3 = pcVar13;
          pcVar13 = pcVar13 + 1;
          *pcVar3 = cVar2;
          pcVar11 = pcVar12;
        }
      }
      goto LAB_1000_2050;
    }
    if (cVar2 != '\\') {
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = cVar2;
      goto LAB_1000_2050;
    }
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar3 == '\\');
    if (*pcVar3 == '\"') {
      for (uVar8 = uVar9 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        pcVar3 = pcVar13;
        pcVar13 = pcVar13 + 1;
        *pcVar3 = '\\';
      }
      pcVar11 = pcVar12;
      if ((uVar9 & 1) == 0) goto LAB_1000_208c;
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = '\"';
      goto LAB_1000_2050;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      pcVar3 = pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar3 = '\\';
    }
  } while( true );
}



// ============================================================================
// Function: FUN_1000_20cc
// Entry:    1000:20cc
// Body:     1000:20cc -> 1000:2148
// Size:     125 bytes
// Prototype: undefined __cdecl16near FUN_1000_20cc()
// ============================================================================

void __cdecl16near FUN_1000_20cc(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  
  iVar5 = *(int *)0x2c;
  iVar8 = 0;
  pcVar11 = (char *)0x0;
  iVar7 = -1;
  if (iVar5 != 0) {
    cVar4 = *(char *)0x0;
    while (cVar4 != '\0') {
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      iVar8 = iVar8 + 1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar2;
    }
  }
  pcVar11 = (char *)FUN_1000_2bf2();
  puVar6 = (undefined2 *)FUN_1000_2bf2();
  *(undefined2 *)0x6e9 = puVar6;
  piVar9 = (int *)0x0;
  do {
    if (iVar8 == 0) {
      *puVar6 = 0;
      return;
    }
    bVar13 = *piVar9 == *(int *)0x6a6;
    if (bVar13) {
      piVar12 = (int *)0x6a6;
      iVar7 = 6;
      piVar10 = piVar9;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        piVar3 = piVar12;
        piVar12 = piVar12 + 1;
        piVar1 = piVar10;
        piVar10 = piVar10 + 1;
        bVar13 = *piVar1 == *piVar3;
      } while (bVar13);
      if (!bVar13) goto LAB_1000_2136;
    }
    else {
LAB_1000_2136:
      *puVar6 = pcVar11;
      puVar6 = puVar6 + 1;
    }
    do {
      piVar1 = piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
      iVar7 = *piVar1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar2 = (char)iVar7;
    } while ((char)iVar7 != '\0');
    iVar8 = iVar8 + -1;
  } while( true );
}



// ============================================================================
// Function: FUN_1000_214a
// Entry:    1000:214a
// Body:     1000:214a -> 1000:2174
// Size:     43 bytes
// Prototype: undefined __stdcall16near FUN_1000_214a()
// ============================================================================

int * FUN_1000_214a(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0xbf6;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



// ============================================================================
// Function: FUN_1000_2175
// Entry:    1000:2175
// Body:     1000:2175 -> 1000:21a9
// Size:     53 bytes
// Prototype: undefined __stdcall16near FUN_1000_2175()
// ============================================================================

void FUN_1000_2175(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_214a(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0xbce == -0x292a) {
      (*(code *)*(undefined2 *)0xbd0)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_21aa
// Entry:    1000:21aa
// Body:     1000:21aa -> 1000:21b1
// Size:     8 bytes
// Prototype: undefined __cdecl16near FUN_1000_21aa()
// ============================================================================

long __cdecl16near FUN_1000_21aa(void)

{
  uint in_DX;
  bool in_CF;
  
  if (!in_CF) {
    return (ulong)in_DX << 0x10;
  }
  FUN_1000_21d2();
  return -1;
}



// ============================================================================
// Function: FUN_1000_21bf
// Entry:    1000:21bf
// Body:     1000:21bf -> 1000:21cb
// Size:     13 bytes
// Prototype: undefined __cdecl16near FUN_1000_21bf()
// ============================================================================

void __cdecl16near FUN_1000_21bf(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_21d2();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_21cc
// Entry:    1000:21cc
// Body:     1000:21cc -> 1000:21d1
// Size:     6 bytes
// Prototype: undefined __cdecl16near FUN_1000_21cc()
// ============================================================================

void __cdecl16near FUN_1000_21cc(void)

{
  FUN_1000_21d2();
  return;
}



// ============================================================================
// Function: FUN_1000_21d2
// Entry:    1000:21d2
// Body:     1000:21d2 -> 1000:21fe
// Size:     45 bytes
// Prototype: undefined __cdecl16near FUN_1000_21d2()
// ============================================================================

void __cdecl16near FUN_1000_21d2(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x6cd = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_21f6;
  if (*(byte *)0x6ca < 3) {
LAB_1000_21ec:
    if (0x13 < bVar1) {
LAB_1000_21f0:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_21f0;
    if (bVar1 < 0x20) goto LAB_1000_21ec;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x71e);
LAB_1000_21f6:
  *(int *)0x6c2 = (int)cVar2;
  return;
}



// ============================================================================
// Function: FUN_1000_2200
// Entry:    1000:2200
// Body:     1000:2200 -> 1000:22df
// Size:     224 bytes
// Prototype: undefined __cdecl16near FUN_1000_2200()
// ============================================================================

uint __cdecl16near FUN_1000_2200(uint param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_DI;
  undefined2 unaff_DS;
  
  piVar1 = param_2;
  bVar2 = *(byte *)(param_2 + 3);
  if (((bVar2 & 0x82) != 0) && ((bVar2 & 0x40) == 0)) {
    param_2[1] = 0;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 0x10) == 0) goto LAB_1000_2277;
      *param_2 = param_2[2];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 3) = bVar2 & 0xef | 2;
    uVar4 = (uint)*(byte *)((int)param_2 + 7);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x50) & 1) == 0 &&
         (((((param_2 == (int *)0xa48 || (param_2 == (int *)0xa50)) || (param_2 == (int *)0xa60)) &&
           ((*(byte *)(uVar4 + 0x6d1) & 0x40) != 0)) ||
          (FUN_1000_2c16(param_2), (*(byte *)(piVar1 + 3) & 8) == 0)))))))) {
      iVar3 = FUN_1000_1b32(uVar4,&param_1,1);
      unaff_DI = 1;
    }
    else {
      iVar3 = *piVar1 - piVar1[2];
      *piVar1 = piVar1[2] + 1;
      piVar1[1] = piVar1[0x51] + -1;
      if (iVar3 == 0) {
        iVar3 = 0;
        unaff_DI = 0;
        if ((*(byte *)(uVar4 + 0x6d1) & 0x20) != 0) {
          FUN_1000_2c58(uVar4,0,0,2);
          iVar3 = 0;
          unaff_DI = 0;
        }
      }
      else {
        iVar3 = FUN_1000_1b32(uVar4,piVar1[2],iVar3,iVar3);
      }
      *(undefined1 *)piVar1[2] = (char)param_1;
    }
    if (iVar3 == unaff_DI) {
      return param_1 & 0xff;
    }
  }
LAB_1000_2277:
  *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 0x20;
  return 0xffff;
}



// ============================================================================
// Function: FUN_1000_22f0
// Entry:    1000:22f0
// Body:     1000:22f0 -> 1000:27c4
// Size:     92 bytes
// Prototype: undefined __cdecl16near FUN_1000_22f0()
// ============================================================================

undefined2 __cdecl16near FUN_1000_22f0(undefined2 param_1,char *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_1000_1854();
  if (*param_2 == '\0') {
    return 0;
  }
  bVar1 = *param_2 - 0x20;
  if (bVar1 < 0x59) {
    bVar1 = *(byte *)(ulong)(bVar1 + 0x732) & 0xf;
  }
  else {
    bVar1 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x00012334 */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*(undefined2 *)
                     ((char)(*(byte *)(ulong)((byte)(bVar1 * '\b') + 0x732) >> 4) * 2 + 0x22e0))();
  return uVar2;
}



// ============================================================================
// Function: FUN_1000_27c6
// Entry:    1000:27c6
// Body:     1000:27c6 -> 1000:27d7
// Size:     18 bytes
// Prototype: undefined FUN_1000_27c6()
// ============================================================================

void FUN_1000_27c6(void)

{
  code *in_stack_00000000;
  
                    /* WARNING: Could not recover jumptable at 0x000127d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*in_stack_00000000)();
  return;
}



// ============================================================================
// Function: FUN_1000_27d8
// Entry:    1000:27d8
// Body:     1000:27d8 -> 1000:27f8
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_27d8()
// ============================================================================

void __cdecl16near FUN_1000_27d8(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x694 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x696) {
      *(undefined2 *)0x696 = pbVar1;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_27f9
// Entry:    1000:27f9
// Body:     1000:27f9 -> 1000:2820
// Size:     40 bytes
// Prototype: undefined __cdecl16near FUN_1000_27f9()
// ============================================================================

void __cdecl16near FUN_1000_27f9(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_2cd2(), bVar1)) && (FUN_1000_2d4e(), !bVar1)) {
    FUN_1000_2cd2();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2822
// Entry:    1000:2822
// Body:     1000:2822 -> 1000:2860
// Size:     63 bytes
// Prototype: undefined __cdecl16near FUN_1000_2822()
// ============================================================================

char * __cdecl16near FUN_1000_2822(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}



// ============================================================================
// Function: FUN_1000_2862
// Entry:    1000:2862
// Body:     1000:2862 -> 1000:2893
// Size:     50 bytes
// Prototype: undefined __cdecl16near FUN_1000_2862()
// ============================================================================

void __cdecl16near FUN_1000_2862(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar3 = 0xffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  if (((uint)param_1 & 1) != 0) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2894
// Entry:    1000:2894
// Body:     1000:2894 -> 1000:28ec
// Size:     88 bytes
// Prototype: undefined __cdecl16near FUN_1000_2894()
// ============================================================================

int __cdecl16near FUN_1000_2894(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)*(int *)0x6e9;
  if ((piVar3 != (int *)0x0) && (param_1 != 0)) {
    iVar1 = FUN_1000_1c78(param_1);
    for (; *piVar3 != 0; piVar3 = piVar3 + 1) {
      iVar2 = FUN_1000_1c78(*piVar3);
      if (((iVar1 < iVar2) && (*(char *)(*piVar3 + iVar1) == '=')) &&
         (iVar2 = FUN_1000_2e4c(*piVar3,param_1,iVar1), iVar2 == 0)) {
        return *piVar3 + iVar1 + 1;
      }
    }
  }
  return 0;
}



// ============================================================================
// Function: FUN_1000_28ee
// Entry:    1000:28ee
// Body:     1000:28ee -> 1000:296c
// Size:     126 bytes
// Prototype: undefined __cdecl16near FUN_1000_28ee()
// ============================================================================

undefined2 __cdecl16near
FUN_1000_28ee(int ***param_1,undefined2 ***param_2,undefined2 param_3,undefined2 param_4,int param_5
             )

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_8a [120];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 ****ppppuStack_c;
  int ***local_a;
  int **local_8;
  undefined1 *local_6;
  undefined2 ***local_4;
  
  local_4 = (undefined2 ***)0x28f7;
  FUN_1000_1854();
  if (param_5 == 0) {
    local_8 = (int **)param_2;
    local_4 = (undefined2 ***)0xa1a;
    local_6 = (undefined1 *)0x290b;
    param_2 = (undefined2 ***)FUN_1000_2894();
    if (param_2 == (undefined2 ***)0x0) {
      *(undefined2 *)0x6c2 = 8;
      return 0xffff;
    }
  }
  else {
    local_8 = (int **)0x0;
  }
  local_4 = (undefined2 ***)local_8;
  local_6 = (undefined1 *)0x0;
  local_8 = (int **)local_8a;
  local_a = (int ***)&local_4;
  ppppuStack_c = &local_a;
  uStack_e = param_4;
  uStack_10 = param_3;
  uStack_12 = 0x2941;
  iVar1 = FUN_1000_2f3e();
  if (iVar1 == -1) {
    return 0xffff;
  }
  local_6 = local_8a;
  local_a = param_1;
  ppppuStack_c = (undefined2 ****)0x2956;
  local_8 = (int **)param_2;
  FUN_1000_319e();
  local_4 = local_a;
  local_6 = (undefined1 *)0x2962;
  thunk_FUN_1000_27d8();
  return local_6;
}



// ============================================================================
// Function: FUN_1000_296e
// Entry:    1000:296e
// Body:     1000:296e -> 1000:2a8f
// Size:     290 bytes
// Prototype: undefined __cdecl16near FUN_1000_296e()
// ============================================================================

undefined2 __cdecl16near
FUN_1000_296e(int param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  int iVar6;
  
  FUN_1000_1854();
  if (param_1 == 2) {
    uVar1 = FUN_1000_3286(param_2,param_3,param_4);
  }
  else {
    uVar2 = FUN_1000_2ec8(param_2,0x5c);
    uVar3 = FUN_1000_2ec8(param_2,0x2f);
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        uVar2 = param_2;
      }
    }
    else if ((uVar2 == 0) || (uVar2 < uVar3)) {
      uVar2 = uVar3;
    }
    iVar4 = FUN_1000_1d8a(uVar2,0x2e);
    if (iVar4 == 0) {
      *(undefined2 *)0xb82 = 0x10;
      iVar4 = FUN_1000_1c78(param_2);
      uVar1 = 0x2a0e;
      iVar4 = thunk_FUN_1000_27f9(iVar4 + 5);
      *(undefined2 *)0xb82 = uVar1;
      if (iVar4 == 0) {
        uVar1 = 0xffff;
      }
      else {
        FUN_1000_2862(iVar4,param_2);
        FUN_1000_1c78(param_2);
        uVar1 = 0xffff;
        for (iVar6 = 2; -1 < iVar6; iVar6 = iVar6 + -1) {
          FUN_1000_2862(*(undefined2 *)(iVar6 * 2 + 0xa32));
          uVar1 = 0x2a64;
          iVar5 = FUN_1000_2bd2(iVar4,0);
          if (iVar5 != -1) {
            uVar1 = FUN_1000_28ee(param_1,iVar4,param_3,param_4,iVar6);
            break;
          }
        }
        thunk_FUN_1000_27d8(iVar4);
      }
    }
    else {
      uVar1 = FUN_1000_2e86(iVar4,*(undefined2 *)0xa32);
      uVar1 = FUN_1000_28ee(param_1,param_2,param_3,param_4,uVar1);
    }
  }
  return uVar1;
}



// ============================================================================
// Function: FUN_1000_2a90
// Entry:    1000:2a90
// Body:     1000:2a90 -> 1000:2bd1
// Size:     321 bytes
// Prototype: undefined __cdecl16near FUN_1000_2a90()
// ============================================================================

int __cdecl16near
FUN_1000_2a90(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_6;
  
  pcVar5 = (char *)0x0;
  uVar1 = *(undefined2 *)0xb82;
  *(undefined2 *)0xb82 = 0x10;
  local_6 = FUN_1000_296e(param_1,param_2,param_3,param_4);
  if (((((local_6 == -1) && (*(int *)0x6c2 == 2)) &&
       (iVar2 = FUN_1000_1d8a(param_2,0x2f), iVar2 == 0)) &&
      (iVar2 = FUN_1000_1d8a(param_2,0x5c), iVar2 == 0)) &&
     (((*param_2 == '\0' || (param_2[1] != ':')) &&
      ((iVar2 = FUN_1000_2894(0xa38), iVar2 != 0 &&
       (pcVar5 = (char *)thunk_FUN_1000_27f9(0x104), pcVar5 != (char *)0x0)))))) {
    *(undefined2 *)0xb82 = uVar1;
    while ((iVar2 = FUN_1000_2ef4(iVar2,pcVar5,0x103), iVar2 != 0 && (*pcVar5 != '\0'))) {
      iVar3 = FUN_1000_1c78(pcVar5);
      if ((pcVar5[iVar3 + -1] != '\\') && (pcVar5[iVar3 + -1] != '/')) {
        FUN_1000_2822(pcVar5,0xa3d);
      }
      iVar3 = FUN_1000_1c78(param_2);
      iVar4 = FUN_1000_1c78(pcVar5);
      if (0x103 < (uint)(iVar4 + iVar3)) break;
      FUN_1000_2822(pcVar5,param_2);
      local_6 = FUN_1000_296e(param_1,pcVar5,param_3,param_4);
      if ((local_6 != -1) ||
         ((*(int *)0x6c2 != 2 &&
          (((*pcVar5 != '\\' && (*pcVar5 != '/')) || ((pcVar5[1] != '\\' && (pcVar5[1] != '/')))))))
         ) break;
    }
  }
  else {
    *(undefined2 *)0xb82 = uVar1;
  }
  if (pcVar5 != (char *)0x0) {
    thunk_FUN_1000_27d8(pcVar5);
  }
  return local_6;
}



// ============================================================================
// Function: FUN_1000_2bd2
// Entry:    1000:2bd2
// Body:     1000:2bd2 -> 1000:2bf0
// Size:     31 bytes
// Prototype: undefined FUN_1000_2bd2()
// ============================================================================

void FUN_1000_2bd2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_21aa();
  return;
}



// ============================================================================
// Function: FUN_1000_2bf2
// Entry:    1000:2bf2
// Body:     1000:2bf2 -> 1000:2c14
// Size:     35 bytes
// Prototype: undefined __cdecl16near FUN_1000_2bf2()
// ============================================================================

void __cdecl16near FUN_1000_2bf2(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0xb82;
  *(undefined2 *)0xb82 = 0x400;
  UNLOCK();
  iVar2 = thunk_FUN_1000_27f9();
  *(undefined2 *)0xb82 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_1000_1694();
  return;
}



// ============================================================================
// Function: FUN_1000_2c16
// Entry:    1000:2c16
// Body:     1000:2c16 -> 1000:2c56
// Size:     65 bytes
// Prototype: undefined __cdecl16near FUN_1000_2c16()
// ============================================================================

void __cdecl16near FUN_1000_2c16(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = thunk_FUN_1000_27f9(0x200);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
    param_1[0x51] = 1;
    iVar1 = (int)param_1 + 0xa1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
    param_1[0x51] = 0x200;
  }
  *param_1 = iVar1;
  param_1[2] = iVar1;
  param_1[1] = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_2c58
// Entry:    1000:2c58
// Body:     1000:2c58 -> 1000:2cd1
// Size:     122 bytes
// Prototype: undefined FUN_1000_2c58()
// ============================================================================

void FUN_1000_2c58(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x6cf <= param_1) goto LAB_1000_2ccf;
  bVar5 = false;
  if ((param_3 & 0x8000) != 0) {
    if (param_4 == 0) goto LAB_1000_2ccf;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_1000_2ccf;
    if ((param_4 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_2);
      bVar5 = CARRY2(uVar3,param_3) || CARRY2(uVar3 + param_3,uVar1);
      if ((int)(uVar3 + param_3 + uVar1) < 0) goto LAB_1000_2ccf;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_2);
      uVar1 = uVar4 + param_3;
      bVar5 = CARRY2(uVar4,param_3) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_1000_2ccf;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_1 + 0x6d1) = *(byte *)(param_1 + 0x6d1) & 0xfd;
  }
LAB_1000_2ccf:
  FUN_1000_21bf();
  return;
}



// ============================================================================
// Function: FUN_1000_2cd2
// Entry:    1000:2cd2
// Body:     1000:2cd2 -> 1000:2d4d
// Size:     123 bytes
// Prototype: undefined __cdecl16near FUN_1000_2cd2()
// ============================================================================

uint * __cdecl16near FUN_1000_2cd2(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int in_BX;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  puVar5 = (uint *)*(undefined2 *)(in_BX + 10);
  do {
    while( true ) {
      puVar1 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar6 = puVar1;
      if ((uVar3 & 1) != 0) {
        while( true ) {
          uVar2 = uVar3 - 1;
          if (uVar4 <= uVar2) {
            *puVar7 = uVar4;
            puVar7 = puVar1;
            if (uVar2 != uVar4) {
              *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) + -1;
              puVar7 = (uint *)((int)((int)puVar1 + uVar4) - uVar4);
            }
            *(int *)(in_BX + 8) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_2d2b;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_2d2b;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_1000_2d2b;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_2d2b:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}



// ============================================================================
// Function: FUN_1000_2d4e
// Entry:    1000:2d4e
// Body:     1000:2d4e -> 1000:2dd9
// Size:     140 bytes
// Prototype: undefined __cdecl16near FUN_1000_2d4e()
// ============================================================================

void __cdecl16near FUN_1000_2d4e(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_1000_2e2b();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar3 = *(uint *)(in_BX + 4);
    if (uVar3 != 0) {
      if (!CARRY2(in_CX + 2U,uVar3)) {
        uVar3 = *(uint *)0xb82;
        if (uVar3 == 0x2000) goto LAB_1000_2d9b;
        uVar4 = 0x8000;
        while (uVar3 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_1000_2db4;
        }
        if (uVar4 < 8) goto LAB_1000_2db4;
        uVar3 = uVar4 << 1;
        goto LAB_1000_2d9b;
      }
      uVar4 = 0xfff0;
      if (in_CX + 2U + uVar3 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_1000_2dda();
          if (!bVar7) break;
          if (uVar4 == 0xfff0) {
            return;
          }
LAB_1000_2db4:
          uVar3 = 0x10;
LAB_1000_2d9b:
          uVar4 = ~(uVar3 - 1);
        }
        iVar5 = iVar2 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar2;
        *(undefined2 *)(in_BX + 8) = unaff_SI;
        piVar1 = (int *)*(int *)(in_BX + 10);
        *piVar1 = iVar5 + -1;
        puVar6 = (undefined2 *)((int)piVar1 + iVar5);
        *puVar6 = 0xfffe;
        *(undefined2 *)(in_BX + 10) = puVar6;
      }
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2dda
// Entry:    1000:2dda
// Body:     1000:2dda -> 1000:2e2a
// Size:     80 bytes
// Prototype: undefined __cdecl16near FUN_1000_2dda()
// ============================================================================

void __cdecl16near FUN_1000_2dda(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 < *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0x6c8;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2e2b
// Entry:    1000:2e2b
// Body:     1000:2e2b -> 1000:2e4a
// Size:     32 bytes
// Prototype: undefined __cdecl16near FUN_1000_2e2b()
// ============================================================================

void __cdecl16near FUN_1000_2e2b(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 10)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2e4c
// Entry:    1000:2e4c
// Body:     1000:2e4c -> 1000:2e85
// Size:     58 bytes
// Prototype: undefined __cdecl16near FUN_1000_2e4c()
// ============================================================================

uint __cdecl16near FUN_1000_2e4c(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar4 = 0;
  iVar3 = param_3;
  pcVar5 = param_1;
  if (param_3 != 0) {
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = param_1;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)param_2[-1] <= (byte)param_1[-1]) {
      if (param_2[-1] == param_1[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



// ============================================================================
// Function: FUN_1000_2e86
// Entry:    1000:2e86
// Body:     1000:2e86 -> 1000:2ec7
// Size:     66 bytes
// Prototype: undefined __cdecl16near FUN_1000_2e86()
// ============================================================================

int __cdecl16near FUN_1000_2e86(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined2 unaff_DS;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_1000_2ec3;
      pbVar1 = param_2;
      param_2 = param_2 + 1;
      bVar3 = *pbVar1;
      pbVar1 = param_1;
      param_1 = param_1 + 1;
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  cVar4 = (bVar3 < bVar2) * -2 + '\x01';
LAB_1000_2ec3:
  return (int)cVar4;
}



// ============================================================================
// Function: FUN_1000_2ec8
// Entry:    1000:2ec8
// Body:     1000:2ec8 -> 1000:2ef2
// Size:     43 bytes
// Prototype: undefined __cdecl16near FUN_1000_2ec8()
// ============================================================================

char * __cdecl16near FUN_1000_2ec8(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  param_1 = param_1 + -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + -1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + 1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



// ============================================================================
// Function: FUN_1000_2ef4
// Entry:    1000:2ef4
// Body:     1000:2ef4 -> 1000:2f3d
// Size:     74 bytes
// Prototype: undefined __cdecl16near FUN_1000_2ef4()
// ============================================================================

char * __cdecl16near FUN_1000_2ef4(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  char *local_4;
  
  local_4 = param_1;
  while (param_3 = param_3 + -1, pcVar1 = param_1, param_3 != 0) {
    if ((*param_1 == '\0') || (*param_1 == ';')) goto LAB_1000_2f25;
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
LAB_1000_2f2a:
  local_4 = pcVar1;
  *param_2 = '\0';
  if (local_4 == param_1) {
    param_1 = (char *)0x0;
  }
  return param_1;
LAB_1000_2f25:
  for (; pcVar1 = local_4, *param_1 == ';'; param_1 = param_1 + 1) {
  }
  goto LAB_1000_2f2a;
}



// ============================================================================
// Function: FUN_1000_2f3e
// Entry:    1000:2f3e
// Body:     1000:2f3e -> 1000:3192
// Size:     592 bytes
// Prototype: undefined __cdecl16near FUN_1000_2f3e()
// ============================================================================

uint __cdecl16near
FUN_1000_2f3e(int *param_1,int *param_2,int *param_3,undefined2 *param_4,undefined1 *param_5,
             int param_6,int param_7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  int *local_8;
  int local_4;
  
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)*(undefined2 *)0x6e9;
  }
  if (param_2 != (int *)0x0) {
    local_8 = param_2;
    for (; (*local_8 != 0 && (uVar6 < 0x8000)); uVar6 = uVar6 + iVar3 + 1) {
      iVar3 = FUN_1000_1c78(*local_8);
      local_8 = local_8 + 1;
    }
  }
  if (*(int *)0xbca == 0) {
    local_4 = 0;
  }
  else {
    for (local_4 = *(int *)0x6cf; (local_4 != 0 && (*(char *)(local_4 + 0x6d0) == '\0'));
        local_4 = local_4 + -1) {
    }
  }
  if (local_4 != 0) {
    uVar6 = uVar6 + (local_4 + 7) * 2;
  }
  if (param_6 != 0) {
    iVar3 = FUN_1000_1c78(param_6);
    uVar6 = uVar6 + iVar3 + 3;
  }
  if (uVar6 + 1 < 0x8000) {
    uVar4 = *(undefined2 *)0xb82;
    *(undefined2 *)0xb82 = 0x10;
    iVar3 = thunk_FUN_1000_27f9(uVar6 + 0x10);
    if (iVar3 != 0) {
      *(undefined2 *)0xb82 = uVar4;
      *param_3 = iVar3;
      pcVar5 = (char *)(iVar3 + 0xfU & 0xfff0);
      *param_4 = pcVar5;
      if (param_2 != (int *)0x0) {
        for (local_8 = param_2; *local_8 != 0; local_8 = local_8 + 1) {
          uVar4 = FUN_1000_2862(pcVar5,*local_8,0);
          iVar3 = FUN_1000_1d8a(uVar4);
          pcVar5 = (char *)(iVar3 + 1);
        }
      }
      if (local_4 != 0) {
        uVar4 = FUN_1000_2862(pcVar5,0x6a6,0);
        pcVar5 = (char *)FUN_1000_1d8a(uVar4);
        iVar3 = 0;
        while (local_4 != 0) {
          bVar2 = *(byte *)(iVar3 + 0x6d1);
          *pcVar5 = ((char)bVar2 >> 4 & 0xfU) + 0x41;
          pcVar5[1] = (bVar2 & 0xf) + 0x41;
          pcVar5 = pcVar5 + 2;
          iVar3 = iVar3 + 1;
          local_4 = local_4 + -1;
        }
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      if (param_6 != 0) {
        pcVar5[1] = '\x01';
        pcVar5[2] = '\0';
        FUN_1000_2862(pcVar5 + 3,param_6);
      }
      puVar7 = (undefined1 *)0x0;
      puVar8 = param_5 + 1;
      if (param_7 != 0) {
        uVar4 = FUN_1000_2862(puVar8,0xb96,0,param_7,0);
        uVar4 = FUN_1000_1d8a(uVar4);
        uVar4 = FUN_1000_2862(uVar4);
        iVar3 = FUN_1000_1d8a(uVar4);
        puVar8 = (undefined1 *)(iVar3 + -4);
        puVar7 = puVar8 + (-1 - (int)param_5);
      }
      if (*param_1 != 0) {
        if (param_1[1] != 0) {
          *puVar8 = 0x20;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        }
        local_8 = param_1 + 1;
        while (*local_8 != 0) {
          iVar3 = FUN_1000_1c78(*local_8);
          if ((undefined1 *)0x7d < puVar7 + iVar3) {
            *(undefined2 *)0x6c2 = 7;
            *(undefined2 *)0x6cd = 10;
            thunk_FUN_1000_27d8(*param_3);
            return 0xffff;
          }
          puVar7 = puVar7 + iVar3;
          piVar1 = local_8 + 1;
          uVar4 = FUN_1000_2862(puVar8,*local_8,0);
          puVar8 = (undefined1 *)FUN_1000_1d8a(uVar4);
          local_8 = piVar1;
          if (*piVar1 != 0) {
            *puVar8 = 0x20;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 1;
          }
        }
      }
      *puVar8 = 0xd;
      *param_5 = (char)puVar7;
      return uVar6 + 1;
    }
    *(undefined2 *)0x6c2 = 0xc;
    *(undefined2 *)0x6cd = 8;
    *(undefined2 *)0xb82 = uVar4;
  }
  else {
    *(undefined2 *)0x6c2 = 7;
    *(undefined2 *)0x6cd = 10;
  }
  return 0xffff;
}



// ============================================================================
// Function: FUN_1000_319e
// Entry:    1000:319e
// Body:     1000:319e -> 1000:3285
// Size:     232 bytes
// Prototype: undefined FUN_1000_319e()
// ============================================================================

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_319e(int param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SS;
  int unaff_DS;
  byte bVar5;
  
  if ((param_1 != 1) && (param_1 != 0)) {
    *(undefined2 *)0x6c2 = 0x16;
    FUN_1000_21bf();
    return;
  }
  *(int *)0xb9a = unaff_DS + (param_4 >> 4);
  *(undefined2 *)0xb9c = param_3;
  *(int *)0xb9e = unaff_DS;
  *(int *)0xba2 = unaff_DS;
  *(int *)0xba6 = unaff_DS;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(int *)0xbce == -0x292a) {
    (*(code *)*(undefined2 *)0xbd0)();
  }
  DAT_1000_3194 = (undefined2 *)&stack0xfffc;
  DAT_1000_3198 = *(undefined2 *)0x2e;
  DAT_1000_319a = *(undefined2 *)0x30;
  bVar5 = 0;
  pcVar1 = (code *)swi(0x21);
  DAT_1000_3196 = unaff_SS;
  DAT_1000_319c = unaff_DS;
  (*pcVar1)();
  *(undefined2 *)0x6f0 = 1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = DAT_1000_319c;
  uVar3 = DAT_1000_3196;
  puVar2 = DAT_1000_3194;
  *(undefined2 *)0x30 = DAT_1000_319a;
  *(undefined2 *)0x2e = DAT_1000_3198;
  *(undefined2 *)0x6f0 = 0;
  if ((bVar5 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  FUN_1000_21bf();
  return;
}



// ============================================================================
// Function: FUN_1000_3286
// Entry:    1000:3286
// Body:     1000:3286 -> 1000:3299
// Size:     20 bytes
// Prototype: undefined FUN_1000_3286()
// ============================================================================

void FUN_1000_3286(void)

{
  undefined2 unaff_DS;
  
  if ((code *)*(int *)0xbec != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(int *)0xbec)();
    return;
  }
  *(undefined2 *)0x6c2 = 0x16;
  FUN_1000_21bf();
  return;
}



// ============================================================================
// Function: FUN_1000_329a
// Entry:    1000:329a
// Body:     1000:329a -> 1000:330b
// Size:     113 bytes
// Prototype: undefined __cdecl16near FUN_1000_329a()
// ============================================================================

undefined2 __cdecl16near FUN_1000_329a(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1000_3314(0);
  }
  else {
    if (((*(byte *)(param_1 + 3) & 3) == 2) &&
       (((*(byte *)(param_1 + 3) & 8) != 0 || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
      iVar1 = *param_1 - param_1[2];
      if (0 < iVar1) {
        iVar2 = FUN_1000_1b32(*(undefined1 *)((int)param_1 + 7),param_1[2],iVar1);
        if (iVar1 != iVar2) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
          uVar3 = 0xffff;
        }
      }
    }
    *param_1 = param_1[2];
    param_1[1] = 0;
  }
  return uVar3;
}



// ============================================================================
// Function: FUN_1000_3314
// Entry:    1000:3314
// Body:     1000:3314 -> 1000:335c
// Size:     72 bytes
// Prototype: undefined __stdcall16near FUN_1000_3314()
// ============================================================================

int FUN_1000_3314(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0xa40; uVar2 <= *(uint *)0xb80; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_1000_329a(uVar2);
      if (iVar1 == -1) {
        local_4 = -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}




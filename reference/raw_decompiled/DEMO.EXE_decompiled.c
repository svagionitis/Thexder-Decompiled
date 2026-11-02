/**
 * ============================================================================
 * Comprehensive Decompiled Source: DEMO.EXE
 * Architecture: 16-bit x86 Real Mode
 * Image Base: 0000:0000
 * MD5: 61050729a185c00d7901fd002ebcb123
 * ============================================================================
 */

#include <stdint.h>
#include <stdbool.h>

// ============================================================================
// Function: entry
// Entry:    1000:0000
// Body:     1000:0000 -> 1000:0002
// Size:     3 bytes
// Prototype: undefined __cdecl16far entry()
// ============================================================================

/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001048a) overlaps instruction at (ram,0x00010489)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

code * __cdecl16far entry(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  code *in_AX;
  int iVar11;
  uint uVar12;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  int iVar13;
  code *pcVar14;
  int iVar15;
  byte bVar18;
  byte extraout_DH;
  int iVar16;
  int iVar17;
  byte *pbVar19;
  byte *pbVar20;
  char *pcVar21;
  char *pcVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  uint *puVar38;
  int *piVar39;
  int *piVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  uint *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  uint *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined2 *puVar52;
  undefined1 *puVar53;
  undefined1 *puVar54;
  undefined1 *puVar55;
  uint *puVar56;
  undefined1 *puVar57;
  undefined1 *puVar58;
  undefined1 *puVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  undefined1 *puVar63;
  undefined1 *puVar64;
  uint *puVar65;
  uint *puVar66;
  undefined1 *puVar67;
  undefined1 *puVar68;
  uint *puVar69;
  uint *puVar70;
  uint *puVar71;
  undefined1 *puVar72;
  uint *puVar73;
  uint *puVar74;
  uint *puVar75;
  uint *puVar77;
  uint *puVar78;
  uint *puVar79;
  undefined2 *puVar80;
  uint *puVar81;
  uint *puVar82;
  undefined2 *puVar83;
  uint *puVar84;
  uint *puVar86;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined1 *puVar90;
  undefined1 *puVar91;
  uint *puVar92;
  undefined2 *puVar93;
  undefined2 *puVar94;
  uint *puVar95;
  uint *puVar97;
  uint *puVar98;
  uint *puVar99;
  int unaff_BP;
  byte *pbVar100;
  undefined1 *puVar101;
  byte *pbVar102;
  undefined1 *puVar103;
  byte *pbVar104;
  byte *pbVar105;
  undefined2 unaff_DS;
  undefined2 uVar106;
  undefined1 uVar107;
  bool bVar108;
  byte bVar109;
  byte bVar110;
  byte in_AF;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte in_TF;
  byte bVar115;
  bool bVar116;
  byte bVar117;
  byte in_NT;
  uint uVar118;
  code *pcVar119;
  undefined2 *puVar76;
  undefined2 *puVar85;
  undefined2 *puVar87;
  undefined2 *puVar96;
  
  bVar116 = false;
  puVar24 = (uint *)0x0;
code_r0x00010000:
  switchD_1000:04fc::caseD_72._0_1_ = (char)in_AX;
code_r0x0001022d:
  *(undefined2 *)0x580 = 0x1000;
  *(undefined2 *)0x57e = 0xb0a;
  bVar115 = 1;
  if ((char)switchD_1000:04fc::caseD_72 == '\0') {
    *(undefined2 *)((int)puVar24 + -2) = 0x245;
    FUN_1000_1f85();
    switchD_1000:04fc::caseD_72._0_1_ = '\x01';
    piVar39 = (int *)puVar24;
    if (*(char *)0x555 == '\x01') {
      do {
        *(int *)((int)piVar39 + -2) = unaff_BP;
        uVar106 = ((undefined2 *)0x500)[1];
        pcVar14 = (code *)*(undefined2 *)0x500;
        *(undefined2 *)((int)piVar39 + -4) = 0x1000;
        piVar40 = (int *)((int)piVar39 + -6);
        *(undefined2 *)((int)piVar39 + -6) = 0x25a;
        uVar12 = (*pcVar14)();
        unaff_BP = *piVar40;
        puVar24 = (uint *)(piVar40 + 1);
        piVar39 = piVar40 + 1;
      } while ((uVar12 & 0x40) != 0);
    }
  }
  if (*(char *)0x558 == '\0') {
    puVar101 = (undefined1 *)0x16a;
    iVar15 = 0x10;
  }
  else {
    puVar101 = (undefined1 *)0x17a;
    iVar15 = 0x20;
  }
  puVar103 = (undefined1 *)0x2620;
  for (; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar5 = puVar103;
    puVar103 = puVar103 + (uint)bVar116 * -2 + 1;
    puVar3 = puVar101;
    puVar101 = puVar101 + (uint)bVar116 * -2 + 1;
    *puVar5 = *puVar3;
  }
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar24 + -2) = 0x1000;
  puVar41 = (undefined1 *)((int)puVar24 + -4);
  *(undefined2 *)((int)puVar24 + -4) = 0x28c;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar41 + -2) = 0x1000;
  puVar42 = puVar41 + -4;
  *(undefined2 *)(puVar41 + -4) = 0x293;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x597)[1];
  pcVar14 = (code *)*(undefined2 *)0x597;
  *(undefined2 *)(puVar42 + -2) = 0x1000;
  puVar43 = puVar42 + -4;
  *(undefined2 *)(puVar42 + -4) = 0x299;
  (*pcVar14)();
  puVar44 = (uint *)(puVar43 + -2);
  *(undefined2 *)(puVar43 + -2) = 0x29c;
  FUN_1000_0d22();
  *(undefined2 *)((int)puVar44 + -2) = 0x29f;
  FUN_1000_0d78();
  if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
    puVar45 = (undefined1 *)((int)puVar44 + -2);
    *(undefined2 *)((int)puVar44 + -2) = 0x2aa;
    switchD_1000:04fc::caseD_69();
    switchD_1000:04fc::caseD_72._0_1_ = '\x01';
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar45 + -2) = 0x1000;
    puVar46 = puVar45 + -4;
    *(undefined2 *)(puVar45 + -4) = 0x2b7;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar46 + -2) = 0x1000;
    puVar47 = puVar46 + -4;
    *(undefined2 *)(puVar46 + -4) = 0x2be;
    (*pcVar14)();
    puVar44 = (uint *)(puVar47 + -2);
    *(undefined2 *)(puVar47 + -2) = 0x2c1;
    FUN_1000_0d22();
    *(undefined2 *)((int)puVar44 + -2) = 0x2c4;
    FUN_1000_0d78();
  }
LAB_1000_02c4:
  *(undefined2 *)((int)puVar44 + -2) = 0x2cd;
  FUN_1000_080e();
  *(undefined2 *)((int)puVar44 + -2) = 0x2d6;
  FUN_1000_080e();
  if (*(char *)0x558 == '\0') {
    puVar101 = (undefined1 *)0x2640;
    puVar103 = (undefined1 *)0xa400;
    for (iVar15 = 0x801; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar5 = puVar103;
      puVar103 = puVar103 + (uint)bVar116 * -2 + 1;
      puVar3 = puVar101;
      puVar101 = puVar101 + (uint)bVar116 * -2 + 1;
      *puVar5 = *puVar3;
    }
  }
  else {
    *(undefined2 *)((int)puVar44 + -2) = 0x300;
    FUN_1000_1c44();
  }
  *(undefined2 *)((int)puVar44 + -2) = 0x309;
  FUN_1000_080e();
  *(undefined2 *)((int)puVar44 + -2) = 0x31b;
  FUN_1000_088b();
  *(undefined2 *)((int)puVar44 + -2) = 0x31e;
  FUN_1000_0d49();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar44 + -2) = 0x1000;
  puVar48 = (uint *)((int)puVar44 + -4);
  *(undefined2 *)((int)puVar44 + -4) = 0x325;
  (*pcVar14)();
  puVar101 = (undefined1 *)0x3e40;
  puVar103 = (undefined1 *)0x3e41;
  *(undefined1 *)0x3e40 = 0xff;
  for (iVar15 = 0x400; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar5 = puVar103;
    puVar103 = puVar103 + (uint)bVar116 * -2 + 1;
    puVar3 = puVar101;
    puVar101 = puVar101 + (uint)bVar116 * -2 + 1;
    *puVar5 = *puVar3;
  }
  uVar12 = 0;
  goto switchD_1000_04fc_caseD_2f;
switchD_1000_04fc_caseD_fa:
  puVar48 = puVar97 + 1;
  puVar97[1] = unaff_DS;
  *(byte *)0x8222 = *(byte *)0x8222 | bVar9;
  goto LAB_1000_0434;
switchD_1000_04fc_caseD_9b:
  do {
    bVar115 = pbVar102[1];
    bVar9 = pbVar102[3];
    *pbVar104 = *(byte *)((byte)(((char)bVar9 < '\0') << 1 | (char)bVar115 < '\0') + 0x1c3c) |
                *(byte *)((byte)(((char)(bVar9 << 2) < '\0') << 1 | (char)(bVar115 << 2) < '\0') +
                         0x1c40);
    pbVar104[1] = *(byte *)((byte)(((char)(bVar9 << 4) < '\0') << 1 | (char)(bVar115 << 4) < '\0') +
                           0x1c3c) |
                  *(byte *)((byte)(((char)(bVar9 << 6) < '\0') << 1 | (char)(bVar115 << 6) < '\0') +
                           0x1c40);
    pbVar104 = pbVar104 + 2;
    pbVar102 = pbVar102 + 4;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) {
      if (puVar97[2] + -1 == 0) {
        return (code *)(uint)(byte)(bVar115 << 7);
      }
      puVar97[2] = puVar97[2] + -1;
      uVar12 = 8;
    }
    bVar115 = *pbVar102;
code_r0x00011ea8:
    bVar9 = pbVar102[2];
    *pbVar104 = *(byte *)((byte)(((char)bVar9 < '\0') << 1 | (char)bVar115 < '\0') + 0x1c3c) |
                *(byte *)((byte)(((char)(bVar9 << 2) < '\0') << 1 | (char)(bVar115 << 2) < '\0') +
                         0x1c40);
    pbVar104[1] = *(byte *)((byte)(((char)(bVar9 << 4) < '\0') << 1 | (char)(bVar115 << 4) < '\0') +
                           0x1c3c) |
                  *(byte *)((byte)(((char)(bVar9 << 6) < '\0') << 1 | (char)(bVar115 << 6) < '\0') +
                           0x1c40);
    pbVar104 = pbVar104 + 2;
  } while( true );
switchD_1000_04fc_caseD_8c:
  do {
    pbVar104 = pbVar102 + 1;
    if (*pbVar104 != 0x2f) {
      uVar106 = ((undefined2 *)0x508)[1];
      pcVar14 = (code *)*(undefined2 *)0x508;
      DAT_1000_0e1c = pbVar20;
      *(undefined2 *)((int)puVar95 + -2) = 0x1000;
      puVar96 = (undefined2 *)((int)puVar95 + -4);
      puVar95 = (uint *)((int)puVar95 + -4);
      *puVar96 = 0x10a5;
      (*pcVar14)();
      pbVar104 = pbVar102 + 2;
      if (*pbVar104 != 0x2f) {
        return (code *)(uint)*pbVar104;
      }
    }
    pbVar20 = DAT_1000_0e1c + 0x100;
    pbVar102 = pbVar104;
  } while( true );
switchD_1000_04fc_caseD_7d:
  goto LAB_1000_02c4;
switchD_1000_04fc_caseD_77:
  do {
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)((int)puVar84 + -2) = 0x1000;
    puVar85 = (undefined2 *)((int)puVar84 + -4);
    puVar84 = (uint *)((int)puVar84 + -4);
    *puVar85 = 0xd0d;
    pcVar14 = (code *)(*pcVar14)();
    while( true ) {
      do {
        pbVar102 = pbVar102 + 1;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          DAT_1000_0c7b = DAT_1000_0c7b + -1;
          if (DAT_1000_0c7b == '\0') {
            DAT_1000_0c78 = 0;
          }
          return pcVar14;
        }
        bVar115 = *pbVar102;
        pcVar14 = (code *)(uint)bVar115;
      } while (bVar115 == 0);
      if ('\a' < (char)bVar115) break;
      *pbVar102 = bVar115 + 8;
      uVar106 = ((undefined2 *)0x508)[1];
      pcVar14 = (code *)*(undefined2 *)0x508;
      *(undefined2 *)((int)puVar84 + -2) = 0x1000;
      puVar83 = (undefined2 *)((int)puVar84 + -4);
      puVar84 = (uint *)((int)puVar84 + -4);
      *puVar83 = 0xcfb;
      pcVar14 = (code *)(*pcVar14)();
    }
    *pbVar102 = 0;
  } while( true );
switchD_1000_04fc_caseD_39:
  pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
switchD_1000_04fc_caseD_5c:
  pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
  pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
  pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
  pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
  pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
  *(char *)0x8222 = *(char *)0x8222 + bVar9;
  *(code **)(pbVar20 + -0x7dde) = in_AX + *(int *)(pbVar20 + -0x7dde);
  puVar38 = puVar97 + 2;
code_r0x0001020d:
  iVar11 = CONCAT11((char)((uint)(in_AX + 0x101) >> 8),
                    (char)(in_AX + 0x101) + pbVar105[0x2f] + pbVar105[0x2f] + pbVar105[0x2f] +
                    pbVar105[0x2f]);
  *(int *)(pbVar20 + (int)pbVar102) = *(int *)(pbVar20 + (int)pbVar102) + iVar11;
  iVar15 = (uint)bVar18 << 8;
  puVar24 = (uint *)((int)puVar38 + -2);
  *(undefined2 *)((int)puVar38 + -2) = unaff_DS;
code_r0x0001021d:
  pbVar105[0x2f] = pbVar105[0x2f] - (char)((uint)iVar15 >> 8);
  *(int *)((int)puVar24 + -2) = iVar11;
  *(char *)0xda2 = *(char *)0xda2 + (char)(uVar12 >> 8);
  goto code_r0x0001022d;
switchD_1000_04fc_caseD_2d:
  puVar97[1] = 0x1000;
  *puVar97 = unaff_DS;
  puVar56 = puVar97;
switchD_1000_04fc_caseD_29:
  *(byte *)0x8222 = *(byte *)0x8222 | bVar9;
LAB_1000_03f0:
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar56 + -2) = 0x1000;
  puVar54 = (undefined1 *)((int)puVar56 + -4);
  *(undefined2 *)((int)puVar56 + -4) = 0x3fb;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar54 + -2) = 0x1000;
  puVar55 = puVar54 + -4;
  *(undefined2 *)(puVar54 + -4) = 0x406;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar55 + -2) = 0x1000;
  puVar48 = (uint *)(puVar55 + -4);
  *(undefined2 *)(puVar55 + -4) = 0x411;
  (*pcVar14)();
  goto LAB_1000_0411;
switchD_1000_04fc_caseD_2:
  puVar97[1] = 0x8222;
  *puVar97 = iVar15;
  puVar71 = puVar97;
switchD_1000_04fc_caseD_e0:
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar71 + -2) = 0x1000;
  puVar72 = (undefined1 *)((int)puVar71 + -4);
  *(undefined2 *)((int)puVar71 + -4) = 0x577;
  (*pcVar14)();
  puVar73 = (uint *)(puVar72 + 4);
LAB_1000_0585:
  do {
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)((int)puVar73 + -2) = 0x1000;
    puVar74 = (uint *)((int)puVar73 + -4);
    *(undefined2 *)((int)puVar73 + -4) = 0x58c;
    cVar8 = (*pcVar14)();
    puVar73 = puVar74;
  } while (cVar8 != '\x01');
code_r0x00010598:
  *(undefined2 *)((int)puVar74 + -2) = 0x59b;
  FUN_1000_05d5();
  *(undefined2 *)((int)puVar74 + -2) = 0x59e;
  FUN_1000_05a1();
  goto LAB_1000_049c;
switchD_1000_04fc_caseD_67:
  while ((char)in_AX != '\0') {
    in_AX = (code *)(uint)DAT_1000_0c78;
  }
  return in_AX;
switchD_1000_04fc_caseD_a2:
  do {
    puVar97[1] = 0xadc;
    pcVar14 = (code *)FUN_1000_0b40();
    if (!(bool)uVar107) {
      return pcVar14;
    }
    puVar97[1] = uVar12;
    *puVar97 = 0xad5;
    pcVar14 = (code *)FUN_1000_0ac4();
    uVar12 = puVar97[1];
  } while (!(bool)uVar107);
  return pcVar14;
switchD_1000_04fc_caseD_2f:
  uVar107 = (undefined1)uVar12;
  *(undefined2 *)((int)puVar48 + -2) = 0x341;
  FUN_1000_0d25();
  pbVar104 = (byte *)0x4640;
  uVar12 = CONCAT11(0x30,uVar107);
  pbVar102 = (byte *)0x1cb;
LAB_1000_0349:
  pbVar105 = pbVar102;
  *(undefined2 *)((int)puVar48 + -2) = 0x34c;
  FUN_1000_0b90();
  pbVar102 = pbVar105 + 1;
  if (*pbVar105 == 0) {
    *(undefined1 *)0x562 = 0x12;
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)((int)puVar48 + -2) = 0x1000;
    puVar49 = (undefined1 *)((int)puVar48 + -4);
    *(undefined2 *)((int)puVar48 + -4) = 0x367;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar49 + -2) = 0x1000;
    puVar50 = puVar49 + -4;
    *(undefined2 *)(puVar49 + -4) = 0x372;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar50 + -2) = 0x1000;
    puVar48 = (uint *)(puVar50 + -4);
    *(undefined2 *)(puVar50 + -4) = 0x37d;
    (*pcVar14)();
  }
  else {
    *(uint *)((int)puVar48 + -2) = uVar12;
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)((int)puVar48 + -4) = 0x1000;
    puVar51 = (undefined1 *)((int)puVar48 + -6);
    *(undefined2 *)((int)puVar48 + -6) = 0x395;
    cVar8 = (*pcVar14)();
    pbVar20 = (byte *)0x3e40;
    if ((*(char *)0x558 == '\0') && (cVar8 != '\x01')) {
      pbVar20 = (byte *)0x4040;
    }
    *(byte **)(puVar51 + -2) = pbVar20;
    iVar15 = 0x200;
    do {
      bVar9 = *pbVar104;
      if (bVar9 == *pbVar20) {
        bVar9 = 0;
      }
      *pbVar20 = bVar9;
      pbVar20 = pbVar20 + 1;
      pbVar104 = pbVar104 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    *(byte **)(puVar51 + -2) = pbVar104;
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar51 + -4) = 0x1000;
    puVar52 = (undefined2 *)(puVar51 + -6);
    *(undefined2 *)(puVar51 + -6) = 0x3c4;
    (*pcVar14)();
    pbVar104 = (byte *)*puVar52;
    uVar12 = puVar52[1];
    puVar56 = puVar52 + 2;
    if (!(bool)((byte)(uVar12 >> 8) & 1)) goto LAB_1000_03f0;
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar52[1] = 0x1000;
    *puVar52 = 0x3d7;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)((int)puVar52 + -2) = 0x1000;
    puVar53 = (undefined1 *)((int)puVar52 + -4);
    *(undefined2 *)((int)puVar52 + -4) = 0x3e2;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar53 + -2) = 0x1000;
    puVar48 = (uint *)(puVar53 + -4);
    *(undefined2 *)(puVar53 + -4) = 0x3ed;
    (*pcVar14)();
  }
LAB_1000_0411:
  *(undefined2 *)((int)puVar48 + -2) = 0x414;
  cVar8 = FUN_1000_0a4a();
  if (cVar8 == '\0') {
    *(uint *)((int)puVar48 + -2) = uVar12;
    *(undefined2 *)((int)puVar48 + -4) = 0x41f;
    cVar8 = FUN_1000_0ba7();
    if (cVar8 != '\x01') {
      cVar8 = (char)((uint)*(undefined2 *)((int)puVar48 + -2) >> 8) + -1;
      uVar12 = CONCAT11(cVar8,(char)*(undefined2 *)((int)puVar48 + -2));
      if (cVar8 != '\0') goto LAB_1000_0349;
      *(undefined2 *)((int)puVar48 + -2) = 0x434;
      FUN_1000_0b4a();
    }
  }
LAB_1000_0434:
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar48 + -2) = 0x1000;
  puVar57 = (undefined1 *)((int)puVar48 + -4);
  *(undefined2 *)((int)puVar48 + -4) = 0x43f;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar57 + -2) = 0x1000;
  puVar58 = puVar57 + -4;
  *(undefined2 *)(puVar57 + -4) = 0x44a;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar58 + -2) = 0x1000;
  puVar59 = puVar58 + -4;
  *(undefined2 *)(puVar58 + -4) = 0x455;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar59 + -2) = 0x1000;
  puVar60 = puVar59 + -4;
  *(undefined2 *)(puVar59 + -4) = 0x45c;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar60 + -2) = 0x1000;
  puVar61 = puVar60 + -4;
  *(undefined2 *)(puVar60 + -4) = 0x465;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar61 + -2) = 0x1000;
  puVar62 = puVar61 + -4;
  *(undefined2 *)(puVar61 + -4) = 0x46f;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar62 + -2) = 0x1000;
  puVar63 = puVar62 + -4;
  *(undefined2 *)(puVar62 + -4) = 0x47f;
  (*pcVar14)();
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)(puVar63 + -2) = 0x1000;
  puVar64 = puVar63 + -4;
  *(undefined2 *)(puVar63 + -4) = 0x490;
  (*pcVar14)();
  *(undefined2 *)(puVar64 + -2) = 0x496;
  FUN_1000_0d25();
  puVar56 = (uint *)puVar64;
LAB_1000_0496:
  puVar74 = puVar56;
  UINT_1000_01fb._1_1_ = 0;
LAB_1000_049c:
  bVar9 = 0;
  bVar117 = 0;
  bVar113 = 0;
  bVar111 = 1;
  bVar109 = 1;
  UINT_1000_01fd._0_1_ = 0;
  uVar12 = 3000;
  *(undefined2 *)((int)puVar74 + -2) = CONCAT11(UINT_1000_01fb._1_1_,3);
  pbVar104 = (byte *)0x8222;
  *(undefined2 *)((int)puVar74 + -4) = 0x8222;
  unaff_BP = 0x2e;
  uVar106 = ((undefined2 *)0x508)[1];
  pcVar14 = (code *)*(undefined2 *)0x508;
  *(undefined2 *)((int)puVar74 + -6) = 0x1000;
  puVar65 = (uint *)((int)puVar74 + -8);
  *(undefined2 *)((int)puVar74 + -8) = 0x4bf;
  (*pcVar14)();
  puVar65[1] = 0x4c4;
  pcVar119 = (code *)FUN_1000_06bd();
  iVar15 = (int)((ulong)pcVar119 >> 0x10);
  in_AX = (code *)pcVar119;
  puVar65[1] = (uint)in_AX;
  *puVar65 = (uint)(in_NT & 1) * 0x4000 | (uint)(bVar117 & 1) * 0x800 | (uint)bVar116 * 0x400 |
             (uint)(bVar115 & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(bVar113 & 1) * 0x80 |
             (uint)(bVar111 & 1) * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)(bVar109 & 1) * 4 |
             (uint)(bVar9 & 1);
  puVar77 = puVar65;
switchD_1000_04fc_caseD_ed:
  puVar97 = puVar77;
  UINT_1000_01fb._1_1_ = (byte)in_AX & 0x7f;
  UINT_1000_01fd._0_1_ = -1;
  uVar118 = *puVar97;
  in_NT = (uVar118 & 0x4000) != 0;
  bVar116 = (uVar118 & 0x400) != 0;
  bVar115 = (uVar118 & 0x200) != 0;
  in_TF = (uVar118 & 0x100) != 0;
  in_AF = (uVar118 & 0x10) != 0;
  in_AX = (code *)puVar97[1];
  puVar24 = puVar97 + 2;
  puVar98 = puVar97 + 2;
  puVar26 = puVar97 + 2;
  puVar27 = puVar97 + 2;
  puVar48 = puVar97 + 2;
  puVar37 = puVar97 + 2;
  puVar33 = puVar97 + 2;
  puVar84 = puVar97 + 2;
  puVar95 = puVar97 + 2;
  puVar29 = puVar97 + 2;
  puVar70 = puVar97 + 2;
  puVar79 = puVar97 + 2;
  puVar35 = puVar97 + 2;
  puVar31 = puVar97 + 2;
  puVar36 = puVar97 + 2;
  puVar92 = puVar97 + 2;
  puVar78 = puVar97 + 2;
  puVar74 = puVar97 + 2;
  puVar44 = puVar97 + 2;
  puVar73 = puVar97 + 2;
  puVar99 = puVar97 + 2;
  puVar32 = puVar97 + 2;
  if ((uVar118 & 1) != 0) {
    puVar66 = puVar97 + 1;
    puVar97[1] = 0x4d9;
    switchD_1000:04fc::caseD_69();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)((int)puVar66 + -2) = 0x1000;
    puVar67 = (undefined1 *)((int)puVar66 + -4);
    *(undefined2 *)((int)puVar66 + -4) = 0x4e0;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    *(undefined2 *)(puVar67 + -2) = 0x1000;
    puVar68 = puVar67 + -4;
    *(undefined2 *)(puVar67 + -4) = 0x4e7;
    (*pcVar14)();
    puVar44 = (uint *)(puVar68 + -2);
    *(undefined2 *)(puVar68 + -2) = 0x4ea;
    FUN_1000_0d22();
    *(undefined2 *)((int)puVar44 + -2) = 0x4ed;
    FUN_1000_0d78();
    goto LAB_1000_02c4;
  }
  bVar9 = (byte)in_AX;
  puVar56 = puVar97 + 2;
  if (bVar9 == 0xff) goto LAB_1000_0496;
  uVar118 = (uint)in_AX & 0xff;
  uVar107 = false;
  pbVar20 = (byte *)(uVar118 * 2);
  bVar109 = 0;
  bVar114 = 0;
  bVar112 = uVar118 == 0;
  bVar110 = (POPCOUNT((uint)pbVar20 & 0xff) & 1U) == 0;
  bVar117 = (byte)((ulong)pcVar119 >> 0x10);
  bVar18 = (byte)((ulong)pcVar119 >> 0x18);
  bVar111 = (byte)((uint)in_AX >> 8);
  bVar113 = (byte)uVar12;
  cVar8 = (char)((uint)pbVar20 >> 8);
  pbVar19 = pbVar20;
  puVar71 = puVar97 + 2;
  puVar69 = puVar97 + 2;
  puVar56 = puVar97 + 2;
  puVar38 = puVar97 + 2;
  puVar34 = puVar97 + 2;
  puVar30 = puVar97 + 2;
  puVar28 = puVar97 + 2;
  puVar25 = puVar97 + 2;
  puVar77 = puVar97 + 2;
  iVar11 = unaff_BP;
  pbVar100 = pbVar102;
  switch(uVar118) {
  case 0:
    puVar97[1] = 0x519;
    FUN_1000_07c4();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar97[1] = 0x1000;
    *puVar97 = 0x52a;
    (*pcVar14)();
    in_AX = (code *)CONCAT11(extraout_AH,1);
    puVar69 = puVar97;
    break;
  case 1:
    puVar97[1] = 0x550;
    FUN_1000_07c4();
    pbVar104 = (byte *)0x8619;
  case 0x7a:
    pbVar20 = (byte *)0x0;
switchD_1000_04fc_caseD_84:
    pbVar4 = pbVar104 + 0x2e;
    cVar8 = (char)((uint)pbVar20 >> 8);
    bVar109 = SCARRY1(*pbVar4,cVar8);
    *pbVar4 = *pbVar4 + cVar8;
    bVar114 = (char)*pbVar4 < '\0';
    bVar112 = *pbVar4 == 0;
    bVar110 = (POPCOUNT(*pbVar4) & 1U) == 0;
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar97[1] = 0x1000;
    *puVar97 = 0x561;
    (*pcVar14)();
    in_AX = (code *)CONCAT11(extraout_AH_01,3);
    puVar69 = puVar97;
    break;
  case 2:
    goto switchD_1000_04fc_caseD_2;
  case 3:
  case 0xf:
  case 0x11:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x31:
  case 0x51:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0xac:
    goto code_r0x00010000;
  case 4:
  case 7:
    *pbVar102 = *pbVar102 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    puVar98 = puVar97 + 3;
    out(iVar15,3);
  case 6:
    out(iVar15 + 1,0);
    *(undefined2 *)((int)puVar98 + -2) = 0x2033;
    FUN_1000_21c8();
    *(uint *)((int)puVar98 + -2) = uVar12;
    *(undefined2 *)((int)puVar98 + -4) = 0x203a;
    pcVar14 = (code *)FUN_1000_2042();
    return pcVar14;
  case 8:
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x7e:
  case 0x97:
  case 0xb0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
  case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
  case 0x1b:
    bRam00018295 = bRam00018295 + bVar117;
    goto code_r0x000100f3;
  case 0x15:
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
    goto switchD_1000_04fc_caseD_22;
  case 0x25:
    goto switchD_1000_04fc_caseD_25;
  case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
    goto switchD_1000_04fc_caseD_28;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x32:
    goto switchD_1000_04fc_caseD_29;
  case 0x2d:
  case 0x2e:
  case 0x35:
  case 0xef:
    goto switchD_1000_04fc_caseD_2d;
  case 0x2f:
  case 0x33:
    goto switchD_1000_04fc_caseD_2f;
  case 0x30:
  case 0x34:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x36:
    puVar56 = puVar97 + 1;
    puVar77 = puVar97 + 1;
    puVar97[1] = 0x2e;
    puVar6 = (undefined2 *)0x2e;
    cVar8 = '\x0f';
    do {
      puVar6 = puVar6 + -1;
      puVar56 = puVar56 + -1;
      *puVar56 = *puVar6;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    puVar97[-0xf] = (uint)(puVar97 + 1);
    puVar56 = puVar97 + -0x1f49;
    puVar97[-0x1f49] = (uint)(puVar97 + 1);
    cVar8 = '\a';
    do {
      puVar77 = puVar77 + -1;
      puVar56 = puVar56 + -1;
      *puVar56 = *puVar77;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    puVar97[-0x1f51] = (uint)(puVar97 + -0x1f49);
    puVar78 = puVar97 + 0x3976;
code_r0x0001070e:
    *(undefined2 *)((int)puVar78 + -2) = 0x711;
    uVar106 = FUN_1000_0a4a();
    cVar8 = (char)uVar106;
    if (cVar8 != '\0') {
      *(undefined2 *)((int)puVar78 + -2) = uVar106;
      *(uint *)((int)puVar78 + -4) =
           (uint)(in_NT & 1) * 0x4000 | (uint)bVar116 * 0x400 | (uint)(bVar115 & 1) * 0x200 |
           (uint)(in_TF & 1) * 0x100 | (uint)(cVar8 < '\0') * 0x80 | (uint)(cVar8 == '\0') * 0x40 |
           (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(cVar8) & 1U) == 0) * 4;
      *(undefined2 *)((int)puVar78 + -6) = 0x72f;
      FUN_1000_0772();
      if ((*(uint *)((int)puVar78 + -2) & 2) != 0) {
        return (code *)0xff;
      }
      if ((*(byte *)0x575 & 8) == 0) {
        return (code *)(extraout_DH | 0x80);
      }
      return (code *)(uint)extraout_DH;
    }
    bVar108 = false;
    if ((char)UINT_1000_01fd == '\0') {
      *(undefined2 *)((int)puVar78 + -2) = 0x723;
      pcVar14 = (code *)FUN_1000_0b40();
      if (!bVar108) {
        return pcVar14;
      }
    }
LAB_1000_06f5:
    *(undefined2 *)((int)puVar78 + -2) = 0x6f8;
    FUN_1000_065d();
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000106ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar14 = (code *)(*(code *)(ulong)*(uint *)0x58b)();
      return pcVar14;
    }
    *(undefined2 *)((int)puVar78 + -2) = 0x706;
    bVar9 = FUN_1000_09e0();
    if ((bool)(bVar9 & 1)) {
      *(undefined2 *)((int)puVar78 + -2) = 0x74e;
      FUN_1000_0772();
    }
    else {
      if (!(bool)(bVar9 >> 1 & 1)) goto code_r0x0001070e;
      *(undefined2 *)((int)puVar78 + -2) = 0x762;
      FUN_1000_0772();
    }
    *(undefined2 *)((int)puVar78 + -2) = 0x6c8;
    FUN_1000_0772();
    do {
      do {
        *(undefined2 *)((int)puVar78 + -2) = 0x6cb;
        FUN_1000_065d();
        if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000106d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar14 = (code *)(*(code *)(ulong)*(uint *)0x58b)();
          return pcVar14;
        }
LAB_1000_06d6:
        *(undefined2 *)((int)puVar78 + -2) = 0x6dc;
        FUN_1000_0b4a();
        *(undefined2 *)((int)puVar78 + -2) = 0x6df;
        cVar8 = FUN_1000_09e0();
      } while (cVar8 != '\0');
      *(undefined2 *)((int)puVar78 + -2) = 0x6e6;
      cVar8 = FUN_1000_0a4a();
    } while (cVar8 != '\0');
    if ((char)UINT_1000_01fd == '\0') {
      *(undefined2 *)((int)puVar78 + -2) = 0x6f5;
      FUN_1000_0b90();
    }
    goto LAB_1000_06f5;
  case 0x37:
  case 0x38:
  case 0xd7:
    break;
  case 0x39:
  case 0x3c:
  case 0x3f:
  case 0x42:
  case 0x45:
  case 0x48:
  case 0x4b:
  case 0x4e:
    goto switchD_1000_04fc_caseD_39;
  default:
    goto switchD_1000_04fc_caseD_3a;
  case 0x52:
    goto switchD_1000_04fc_caseD_52;
  case 0x5a:
    goto switchD_1000_04fc_caseD_5a;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0xa5:
    goto switchD_1000_04fc_caseD_5c;
  case 0x5f:
  case 0x78:
    iVar15 = CONCAT11(bVar18,bVar117 - pbVar105[0x74]);
    puVar34 = puVar97 + 2;
    goto switchD_1000_04fc_caseD_5a;
  case 0x60:
    *(char *)0x8224 = *(char *)0x8224 + bVar18;
    goto code_r0x00010a03;
  case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
    in_AX = in_AX + -1;
    puVar28 = puVar97 + 2;
    goto switchD_1000_04fc_caseD_28;
  case 0x66:
    pbVar104 = (byte *)0x444;
    if (uVar12 != 1) {
      pbVar20[0x444] = pbVar20[0x444] + bVar9;
                    /* WARNING: Could not recover jumptable at 0x00012e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar14 = (code *)(*in_AX)();
      return pcVar14;
    }
    *(int *)(pbVar20 + (int)pbVar102) = *(int *)(pbVar20 + (int)pbVar102) + 1;
    uVar12 = 0;
  case 0xf9:
    pbVar104 = (byte *)((int)pbVar104 * 2);
    uVar12 = uVar12 - 1;
LAB_1000_2e0c:
    *pbVar20 = *pbVar20 + (char)pbVar20;
    uVar106 = *puVar99;
    pbVar104[0x2e] = pbVar104[0x2e] + bVar9;
    *puVar99 = (uint)in_AX;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + 1;
    *(int *)(pbVar20 + (int)pbVar102 + -0xf1) = *(int *)(pbVar20 + (int)pbVar102 + -0xf1) + 1;
    *(char *)((int)pbVar104 * 2) = *(char *)((int)pbVar104 * 2) + bVar117;
    iVar15 = (int)pbVar104 * 4;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102];
    if (uVar12 - 1 != 0 && iVar15 != 0) {
      *(char *)(iVar15 + 0x2e) = *(char *)(iVar15 + 0x2e) + (char)(uVar12 - 1);
                    /* WARNING: Could not recover jumptable at 0x00012e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar14 = (code *)(*(code *)CONCAT11(bVar111,bVar9 + 3))();
      return pcVar14;
    }
    *(int *)(pbVar20 + (int)pbVar102) = *(int *)(pbVar20 + (int)pbVar102) + 1;
    *pbVar20 = *pbVar20 + cVar8;
    *(char *)(iVar15 + 0x2e) = *(char *)(iVar15 + 0x2e) + bVar9 + 3;
    *pbVar20 = *pbVar20 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x67:
    goto switchD_1000_04fc_caseD_67;
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    DAT_1000_0e22 = puVar97 + 2;
    puVar97[1] = 0x1000;
    *puVar97 = 0xe36;
    (*pcVar14)();
    uVar106 = ((undefined2 *)0x5ab)[1];
    pcVar14 = (code *)*(undefined2 *)0x5ab;
    *(undefined2 *)((int)puVar97 + -2) = 0x1000;
    puVar88 = (undefined1 *)((int)puVar97 + -4);
    *(undefined2 *)((int)puVar97 + -4) = 0xe3e;
    (*pcVar14)();
    puVar89 = puVar88 + -2;
    *(undefined2 *)(puVar88 + -2) = 0xe41;
    FUN_1000_0d22();
    if (*(char *)0x558 == '\0') {
      DAT_1000_0e1e = 0x5968;
      puVar91 = puVar89 + -2;
      *(undefined2 *)(puVar89 + -2) = 0xe99;
      FUN_1000_0867();
      DAT_1000_0e20 = 0x7c90;
      puVar92 = (uint *)(puVar91 + -2);
      *(undefined2 *)(puVar91 + -2) = 0xeac;
      FUN_1000_0867();
    }
    else {
      puVar90 = puVar89 + -2;
      *(undefined2 *)(puVar89 + -2) = 0xe54;
      FUN_1000_0867();
      *(undefined2 *)(puVar90 + -2) = 0xe5f;
      FUN_1000_1c44();
      DAT_1000_0e1e = 0x3640;
      puVar92 = (uint *)(puVar90 + -2);
      *(undefined2 *)(puVar90 + -2) = 0xe72;
      FUN_1000_0867();
      *(undefined2 *)((int)puVar92 + -2) = 0xe7d;
      FUN_1000_1c44();
      DAT_1000_0e20 = 0x5580;
    }
    *(undefined2 *)((int)puVar92 + -2) = 0xeb5;
    FUN_1000_0f7b();
    if (*(char *)0x558 != '\0') {
      *(undefined2 *)((int)puVar92 + -2) = 0xeef;
      FUN_1000_0fdc();
      *(undefined2 *)((int)puVar92 + -2) = 0xef2;
      FUN_1000_0feb();
      *(undefined2 *)((int)puVar92 + -2) = 0xef5;
      FUN_1000_0ffa();
      goto LAB_1000_0ef5;
    }
    goto code_r0x00010ec1;
  case 0x6a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6c:
    goto LAB_1000_0585;
  case 0x6d:
    uVar106 = ((undefined2 *)0x500)[1];
    pcVar14 = (code *)*(undefined2 *)0x500;
    puVar97[1] = 0x1000;
    *puVar97 = 0xabe;
    (*pcVar14)();
    return (code *)*(undefined2 *)((int)puVar97 + 2);
  case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
    puVar71 = puVar97 + 3;
    goto switchD_1000_04fc_caseD_e0;
  case 0x70:
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + 1;
    *pbVar20 = *pbVar20 | 0xfe;
    *(char *)0xff03 = *(char *)0xff03 + bVar117;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x71:
  case 0x79:
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
  case 0xaa:
    goto code_r0x0001020d;
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
    unaff_DS = (undefined2)((ulong)*(byte **)(pbVar105 + 0x2f) >> 0x10);
    pbVar102 = (byte *)*(byte **)(pbVar105 + 0x2f);
    uVar10 = in(0x32);
    in_AX = (code *)CONCAT11(bVar111,uVar10);
    *(int *)(pbVar102 + -0x7f9) = *(int *)(pbVar102 + -0x7f9) + -1;
    iVar11 = 0;
    if (uVar12 == 0) goto code_r0x00011d78;
    *(undefined2 *)0x1c20 = in_AX;
    goto code_r0x00011d47;
  case 0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
    goto switchD_1000_04fc_caseD_77;
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
    goto switchD_1000_04fc_caseD_7d;
  case 0x7f:
    puVar97[1] = (uint)pbVar20;
    *puVar97 = (uint)(puVar97 + 1);
    puVar25 = puVar97;
    goto switchD_1000_04fc_caseD_9a;
  case 0x80:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
    goto switchD_1000_04fc_caseD_84;
  case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x86:
  case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x87:
    LOCK();
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    UNLOCK();
    goto code_r0x0001017d;
  case 0x88:
    puVar97[1] = 0x20be;
    FUN_1000_1c44();
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar97[2] = 0x1000;
    puVar97[1] = 0x20de;
    pcVar14 = (code *)(*pcVar14)();
    return pcVar14;
  case 0x89:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8b:
    pbVar4 = pbVar20 + (int)pbVar102;
    *pbVar4 = *pbVar4 << 4 | *pbVar4 >> 4;
    goto code_r0x0001016d;
  case 0x8c:
    goto switchD_1000_04fc_caseD_8c;
  case 0x8d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8e:
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    *pbVar20 = *pbVar20 + (char)pbVar20;
    puVar97[1] = (uint)in_AX;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8f:
  case 0xcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x90:
  case 0xd0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x92:
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x93:
  case 0xf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x94:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
    goto switchD_1000_04fc_caseD_96;
  case 0x98:
  case 0xb1:
    puVar79 = puVar97 + 3;
  case 0xcb:
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    *puVar79 = unaff_DS;
    uVar106 = ((undefined2 *)0x59f)[1];
    pcVar14 = (code *)*(undefined2 *)0x59f;
    pbRam0001080a = pbVar20;
    uRam0001080c = unaff_DS;
    puVar79[-1] = 0x1000;
    puVar80 = puVar79 + -2;
    puVar79[-2] = 0x823;
    (*pcVar14)();
    pcVar119 = pcRam000105cf;
    *(undefined2 *)((int)puVar80 + -2) = 0x1000;
    *(undefined2 *)((int)puVar80 + -4) = 0x836;
    pcVar14 = (code *)(*pcVar119)();
    return pcVar14;
  case 0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9a:
  case 0xe3:
    goto switchD_1000_04fc_caseD_9a;
  case 0x9b:
  case 0x9e:
  case 0xad:
  case 0xe4:
    goto switchD_1000_04fc_caseD_9b;
  case 0x9c:
  case 0xae:
  case 0xe5:
    goto switchD_1000_04fc_caseD_9c;
  case 0x9d:
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar97[1] = 0x1000;
    *puVar97 = 0x7c0;
    pcVar14 = (code *)(*pcVar14)();
    return pcVar14;
  case 0x9f:
    in(iVar15);
    goto code_r0x00010598;
  case 0xa0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa2:
    goto switchD_1000_04fc_caseD_a2;
  case 0xa3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa4:
    puVar86 = puVar97 + 1;
    puVar97[1] = unaff_DS;
    *(byte *)0x8222 = *(byte *)0x8222 | bVar9;
    while (uVar12 = uVar12 - 1, uVar12 != 0) {
      *pbVar104 = *pbVar102;
      pbVar104 = pbVar104 + 1;
      pbVar102 = pbVar102 + 1;
      uVar106 = ((undefined2 *)0x508)[1];
      pcVar14 = (code *)*(undefined2 *)0x508;
      *(undefined2 *)((int)puVar86 + -2) = 0x1000;
      puVar87 = (undefined2 *)((int)puVar86 + -4);
      puVar86 = (uint *)((int)puVar86 + -4);
      *puVar87 = 0xd43;
      in_AX = (code *)(*pcVar14)();
    }
    return in_AX;
  case 0xa6:
    if (uVar12 == 1 || (bool)bVar112) {
      iVar11 = uVar12 - 2;
      if (iVar11 != 0 && !(bool)bVar112) {
        pcVar14 = (code *)CONCAT11(bVar111,pbVar20[0x1c24]);
        while( true ) {
          pbVar105 = pbVar104 + (uint)bVar116 * -2 + 1;
          *pbVar104 = (byte)pcVar14;
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) break;
          pbVar4 = pbVar102;
          pbVar102 = pbVar102 + (uint)bVar116 * -2 + 1;
          bVar115 = *pbVar4;
          uVar107 = (undefined1)((uint)pbVar20 >> 8);
          pbVar104 = pbVar105 + (uint)bVar116 * -2 + 1;
          *pbVar105 = *(byte *)(CONCAT11(uVar107,((char)(bVar115 << 1) < '\0') << 1 |
                                                 (char)(bVar115 << 3) < '\0') + 0x1c24);
          pbVar20 = (byte *)CONCAT11(uVar107,((char)(bVar115 << 5) < '\0') << 1 |
                                             (char)(bVar115 << 7) < '\0');
          pcVar14 = (code *)(uint)pbVar20[0x1c24];
        }
        return pcVar14;
      }
      in_AX = in_AX + *(int *)(pbVar20 + (int)pbVar102 + 0x7cb);
      goto LAB_1000_1d7d;
    }
code_r0x00011d47:
    iVar11 = (int)in_AX * (int)pbVar20;
    iVar15 = 0x6070;
    bVar115 = 6;
    iRam00011c20 = iVar11;
    do {
      bVar109 = 0;
      bVar9 = pbVar102[iRam00011c20];
      if ((char)(bVar9 << 1) < '\0') {
        bVar109 = (byte)iVar15;
      }
      pbVar102 = pbVar102 + iRam00011c20 + -iRam00011c20;
      if ((char)(*pbVar102 << 1) < '\0') {
        bVar109 = bVar109 | (byte)((uint)iVar15 >> 8);
      }
      pbVar20 = (byte *)CONCAT11(bVar115,bVar109);
      uVar107 = (char)(bVar9 << 3) < '\0';
      in_AX = (code *)CONCAT11(*pbVar102 << 2,bVar9 << 4);
code_r0x00011d78:
      if ((bool)uVar107) {
        pbVar20 = (byte *)((uint)pbVar20 | 7);
      }
LAB_1000_1d7d:
      cVar8 = (char)((uint)in_AX >> 8);
      if ((char)(cVar8 << 1) < '\0') {
        bVar115 = (byte)((uint)pbVar20 >> 8);
        pbVar20 = (byte *)CONCAT11(bVar115,(byte)pbVar20 | bVar115);
      }
      bVar115 = (byte)((uint)pbVar20 >> 8);
      pbVar105 = pbVar104 + (uint)bVar116 * -2 + 1;
      *pbVar104 = (byte)pbVar20;
      bVar9 = 0;
      if ((char)((char)in_AX << 1) < '\0') {
        bVar9 = (byte)iVar15;
      }
      if ((char)(cVar8 << 3) < '\0') {
        bVar9 = bVar9 | (byte)((uint)iVar15 >> 8);
      }
      if ((char)((char)in_AX << 3) < '\0') {
        bVar9 = bVar9 | 7;
      }
      if ((int)((uint)(byte)(cVar8 << 5) << 8) < 0) {
        bVar9 = bVar9 | bVar115;
      }
      pbVar104 = pbVar105 + (uint)bVar116 * -2 + 1;
      *pbVar105 = bVar9;
      pbVar102 = pbVar102 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    return (code *)(uint)bVar9;
  case 0xa7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa8:
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    unaff_DS = puVar97[2];
    puVar99 = puVar97 + 3;
    goto LAB_1000_2e0c;
  case 0xa9:
    bRam00018222 = bVar9;
    *(int *)(pbVar20 + (int)pbVar102 + 0x5b3e) = *(int *)(pbVar20 + (int)pbVar102 + 0x5b3e) + 1;
    goto LAB_1000_06d6;
  case 0xab:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xaf:
code_r0x00010ec1:
    *(undefined2 *)((int)puVar92 + -2) = 0xec7;
    FUN_1000_0fbe();
    *(undefined2 *)((int)puVar92 + -2) = 0xecd;
    FUN_1000_0fbe();
    *(undefined2 *)((int)puVar92 + -2) = 0xed3;
    FUN_1000_0fbe();
    *(undefined2 *)((int)puVar92 + -2) = 0xed9;
    FUN_1000_0fbe();
    *(undefined2 *)((int)puVar92 + -2) = 0xedf;
    FUN_1000_0fcd();
    *(undefined2 *)((int)puVar92 + -2) = 0xee5;
    FUN_1000_0fcd();
LAB_1000_0ef5:
    if (*(char *)0x558 == '\0') {
      *(undefined2 *)((int)puVar92 + -2) = 0xf33;
      FUN_1000_1009();
      *(undefined2 *)((int)puVar92 + -2) = 0xf39;
      FUN_1000_1009();
      *(undefined2 *)((int)puVar92 + -2) = 0xf3f;
      FUN_1000_1009();
      *(undefined2 *)((int)puVar92 + -2) = 0xf45;
      FUN_1000_1009();
      if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
        puVar94 = (undefined2 *)((int)puVar92 + -2);
        puVar92 = (uint *)((int)puVar92 + -2);
        *puVar94 = 0xf59;
        FUN_1000_0867();
      }
    }
    else {
      *(undefined2 *)((int)puVar92 + -2) = 0xf04;
      FUN_1000_1018();
      *(undefined2 *)((int)puVar92 + -2) = 0xf07;
      FUN_1000_1027();
      if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
        puVar93 = (undefined2 *)((int)puVar92 + -2);
        puVar92 = (uint *)((int)puVar92 + -2);
        *puVar93 = 0xf1b;
        FUN_1000_0867();
        *(undefined2 *)((int)puVar92 + -2) = 0xf26;
        FUN_1000_1c44();
      }
    }
    if ((char)switchD_1000:04fc::caseD_72 != '\x01') {
      DAT_1000_0e24 = 2000;
      *(undefined2 *)((int)puVar92 + -2) = 0xf71;
      FUN_1000_106e();
    }
    DAT_1000_0e24 = 1000;
    pcVar14 = (code *)FUN_1000_1036();
    return pcVar14;
  case 0xb2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb3:
    pcVar14 = in_AX + -0x14f;
    if (((uint)pcVar14 & 0x40) == 0) {
      pcVar14 = (code *)CONCAT11((byte)((uint)pcVar14 >> 8) & bVar113,(char)pcVar14);
    }
    if (((uint)pcVar14 & 0x80) == 0) {
      pcVar14 = (code *)((uint)((byte)((uint)pcVar14 >> 8) & 0xfd) << 8);
    }
    bVar115 = (byte)((uint)pcVar14 >> 8);
    if ((*(byte *)0x56c & 0x80) == 0) {
      bVar115 = bVar115 & 0xfe;
    }
    if ((*(byte *)0x573 & 0x40) == 0) {
      bVar115 = bVar115 & 0xfd;
    }
    iVar15 = CONCAT11(bVar115,*(byte *)0x573);
    if (*(char *)0x555 == '\x01') {
      puVar97[1] = iVar15;
      *puVar97 = 0x2e;
      uVar106 = ((undefined2 *)0x500)[1];
      pcVar14 = (code *)*(undefined2 *)0x500;
      puVar97[-1] = 0x1000;
      puVar82 = puVar97 + -2;
      puVar97[-2] = 0xa98;
      bVar115 = (*pcVar14)();
      iVar15 = (uint)(byte)((byte)((uint)*(undefined2 *)((int)puVar82 + 2) >> 8) & ~(bVar115 >> 6))
               << 8;
    }
    return (code *)((byte)~(byte)((uint)iVar15 >> 8) & 0xff03);
  case 0xb4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb6:
    *(int *)(pbVar105 + 0x55) = *(int *)(pbVar105 + 0x55) + iVar15;
    pbVar19 = pbVar20 + 1;
    pbVar20[-0x7ddd] = pbVar20[-0x7ddd] + bVar9;
    *(int *)((int)puVar97 + 1) = (int)puVar97 + 3;
    puVar35 = (uint *)((int)puVar97 + -1);
    *(int *)((int)puVar97 + -1) = (int)puVar97 + 1;
  case 0xd4:
    *(int *)(pbVar105 + 0x55) = *(int *)(pbVar105 + 0x55) + iVar15;
    puVar36 = (uint *)((int)puVar35 + -3);
    puVar24 = (uint *)((int)puVar35 + -3);
    *(undefined2 *)((int)puVar35 + -3) = pbVar19;
    pbVar4 = pbVar19 + -0x7dde;
    bVar115 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar9;
    pbVar20 = pbVar19;
    if (!CARRY1(bVar115,bVar9)) {
code_r0x000101a9:
      puVar37 = (uint *)((int)puVar36 + -2);
      *(undefined2 *)((int)puVar36 + -2) = 0x400;
      bVar9 = (char)in_AX + 0x4a;
      bVar115 = 9 < (bVar9 & 0xf) | in_AF;
      bVar9 = bVar9 + bVar115 * -6 & 0xf;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
      bVar9 = bVar9 + 4;
      in_AF = 9 < (bVar9 & 0xf) | bVar115;
      bVar9 = bVar9 + in_AF * -6;
      *pbVar102 = *pbVar102 + (bVar9 & 0xf);
      in_AX = (code *)((CONCAT11(((char)((uint)in_AX >> 8) - bVar115) - in_AF,bVar9) & 0xff0f) +
                      0xa0c);
      cVar8 = (char)in_AX;
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      *(code **)(pbVar105 + 0x2f) = in_AX + *(int *)(pbVar105 + 0x2f);
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      *(int *)(pbVar20 + (int)pbVar102) = *(int *)(pbVar20 + (int)pbVar102) + 1;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
switchD_1000_04fc_caseD_3a:
      cVar8 = (char)in_AX;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
      puVar38 = puVar37;
      goto code_r0x0001020d;
    }
    pbVar4 = pbVar105 + 0x2f;
    bVar115 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar113;
    iVar11 = CONCAT11(bVar111,bVar9 + 0x1e + CARRY1(bVar115,bVar113));
    goto code_r0x0001021d;
  case 0xb7:
  case 0xd5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb9:
    pcVar1 = (char *)0x8250;
    bVar109 = SCARRY1(*pcVar1,cVar8);
    *pcVar1 = *pcVar1 + cVar8;
    bVar114 = *pcVar1 < '\0';
    bVar112 = *pcVar1 == '\0';
    bVar110 = (POPCOUNT(*pcVar1) & 1U) == 0;
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar97[1] = 0x1000;
    *puVar97 = 0x549;
    (*pcVar14)();
    in_AX = (code *)CONCAT11(extraout_AH_00,2);
    puVar69 = puVar97;
    break;
  case 0xba:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbc:
    (pbVar20 + (int)pbVar102)[0x49] = (pbVar20 + (int)pbVar102)[0x49] & bVar113;
    puVar97[1] = iVar15;
    pbVar20[0x48] = pbVar20[0x48] & bVar113 - 1;
    iVar16 = iVar15 + 1;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar9;
    bVar116 = 9 < (bVar9 & 0xf) || (bool)in_AF;
    bVar9 = bVar9 + bVar116 * -6;
    bVar115 = 0x9f < bVar9 | bVar116 * (bVar9 < 6);
    bVar9 = bVar9 + bVar115 * -0x60;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar111;
    *(byte *)0x8262 = *(byte *)0x8262 & bVar113;
    *puVar97 = (uint)pbVar20;
    pbVar104 = pbVar20 + -1;
    pbVar20[-0x7d92] = pbVar20[-0x7d92] & (byte)pbVar104;
    puVar97[-1] = (uint)pbVar104;
    iVar11 = CONCAT11(bVar111,bVar9 + (0x9f < bVar9 | bVar115 | bVar116 * (bVar9 < 6)) * -0x60) + -2
    ;
    puVar97[-2] = 0x2c;
    puVar97[-3] = iVar16;
    bVar109 = (byte)((uint)iVar11 >> 8);
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    bVar9 = (byte)iVar11;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar9;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    bVar115 = 0x9f < bVar9 | bVar116 * (bVar9 < 6);
    bVar9 = bVar9 + bVar115 * -0x60;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    bVar9 = bVar9 + (0x9f < bVar9 | bVar115 | bVar116 * (bVar9 < 6)) * -0x60;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    pbVar104[(int)pbVar102] = pbVar104[(int)pbVar102] & bVar109;
    *(byte *)0x8265 = *(byte *)0x8265 & bVar113;
    pbVar20[-0x7d8e] = pbVar20[-0x7d8e] & bVar9;
    puVar97[-4] = (uint)pbVar20;
    pbVar20 = pbVar20 + 1;
    puVar97[-5] = (uint)(puVar97 + -4);
    puVar97[-6] = (uint)pbVar20;
    pbVar20[(int)pbVar105] = pbVar20[(int)pbVar105] & bVar109;
    pbVar20[(int)pbVar105] = pbVar20[(int)pbVar105] & bVar109;
    pbVar20[(int)pbVar105] = pbVar20[(int)pbVar105] & bVar109;
    pbVar20[(int)pbVar105] = pbVar20[(int)pbVar105] & bVar109;
    pbVar20[(int)pbVar105] = pbVar20[(int)pbVar105] & bVar109;
    pbVar102 = (byte *)CONCAT11((char)((uint)pbVar20 >> 8) * '\x02',(char)pbVar20);
    pbVar102[(int)pbVar105] = pbVar102[(int)pbVar105] & bVar109;
    pbVar102[(int)pbVar105] = pbVar102[(int)pbVar105] & bVar109;
    puVar97[-7] = CONCAT11(bVar109,bVar9);
    pbVar105[0x45] = pbVar105[0x45] & bVar9;
    puVar97[-8] = (uint)pbVar102;
    puVar97[-9] = iVar16;
    bVar9 = bVar9 - 0x20;
    pbVar102[-0x7d8e] = pbVar102[-0x7d8e] & bVar9;
    puVar97[-10] = iVar16;
    pbVar104 = pbVar105 + -3;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar4 = pbVar102;
    bVar115 = *pbVar4;
    bVar111 = (byte)(uVar12 + 2 >> 8);
    *pbVar4 = *pbVar4 + bVar111;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    bVar9 = bVar9 + (0x9f < bVar9 | CARRY1(bVar115,bVar111) | bVar116 * (bVar9 < 6)) * -0x60;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    puVar97[-0xb] = (uint)pbVar102;
    puVar97[-0xc] = 0x2c;
    (pbVar102 + (int)pbVar104)[0x41] = (pbVar102 + (int)pbVar104)[0x41] & bVar113 + 3;
    puVar97[-0xd] = iVar16;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] + bVar109;
    pbVar102[(int)pbVar104] = pbVar102[(int)pbVar104] & bVar109;
    pbVar102[-0x7d9b] = pbVar102[-0x7d9b] & bVar9;
    puVar97[-0xd] = (uint)(puVar97 + -0xc);
    pbVar102[0x52] = pbVar102[0x52] & bVar9;
    *(int *)((int)puVar97 + -0x1d) = CONCAT11(bVar109,bVar9);
    iVar11 = CONCAT11(bVar109,bVar9) + -1;
    pbVar104 = pbVar102 + 1;
    bVar9 = (byte)iVar11;
    pbVar105[0x41] = pbVar105[0x41] & bVar9;
    *(undefined2 *)((int)puVar97 + -0x1f) = pbVar104;
    pbVar20 = pbVar105 + -5;
    *(int *)((int)puVar97 + -0x21) = iVar16;
    *(undefined2 *)((int)puVar97 + -0x23) = pbVar104;
    bVar109 = (byte)((uint)iVar11 >> 8);
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar4 = pbVar104;
    bVar115 = *pbVar4;
    bVar113 = (byte)(uVar12 + 3 >> 8);
    *pbVar4 = *pbVar4 + bVar113;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    bVar111 = (byte)(uVar12 + 3);
    *(byte *)0x8262 = *(byte *)0x8262 & bVar111;
    *(undefined2 *)((int)puVar97 + -0x25) = pbVar104;
    iVar13 = CONCAT11(bVar109,bVar9 + (0x9f < bVar9 |
                                      CARRY1(bVar115,bVar113) | bVar116 * (bVar9 < 6)) * -0x60) + -1
    ;
    pbVar102[-0x7d95] = pbVar102[-0x7d95] & bVar111;
    iVar11 = *(int *)((int)puVar97 + -0x25);
    cVar8 = (char)iVar11;
    bVar109 = (byte)((uint)iVar13 >> 8);
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    bVar9 = (byte)iVar13;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar9;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    bVar115 = 0x9f < bVar9 | bVar116 * (bVar9 < 6);
    bVar9 = bVar9 + bVar115 * -0x60;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    *(byte *)0x8261 = *(byte *)0x8261 & cVar8 + 1U;
    *(undefined2 *)((int)puVar97 + -0x25) = pbVar102;
    *(int *)((int)puVar97 + -0x27) = (int)puVar97 + -0x25;
    *(undefined2 *)((int)puVar97 + -0x29) = pbVar102;
    iVar13 = CONCAT11(bVar109,bVar9 + (0x9f < bVar9 | bVar115 | bVar116 * (bVar9 < 6)) * -0x60) + -1
    ;
    bVar9 = (byte)iVar13;
    pbVar102[-0x7d87] = pbVar102[-0x7d87] & bVar9;
    *(undefined2 *)((int)puVar97 + -0x2b) = 0x2e;
    bVar109 = (byte)((uint)iVar13 >> 8);
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] + bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    *(int *)((int)puVar97 + -0x2b) = (int)puVar97 + -0x29;
    pbVar20 = pbVar105 + -6;
    (pbVar102 + (int)pbVar20)[0x52] = (pbVar102 + (int)pbVar20)[0x52] & (byte)iVar16;
    puVar97[-0x17] = iVar16;
    puVar97[-0x18] = iVar16;
    puVar97[-0x19] = (uint)pbVar102;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar9;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    bVar115 = 0x9f < bVar9 | bVar116 * (bVar9 < 6);
    bVar9 = bVar9 + bVar115 * -0x60;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    bVar9 = bVar9 + (0x9f < bVar9 | bVar115 | bVar116 * (bVar9 < 6)) * -0x60;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    puVar97[-0x1a] = (uint)pbVar102;
    puVar97[-0x1b] = 0x2b;
    (pbVar102 + (int)pbVar20)[0x41] = (pbVar102 + (int)pbVar20)[0x41] & cVar8 + 2U;
    puVar97[-0x1c] = iVar16;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar4 = pbVar102;
    bVar115 = *pbVar4;
    bVar111 = (byte)((uint)(iVar11 + 4) >> 8);
    *pbVar4 = *pbVar4 + bVar111;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar109;
    *(int *)((int)puVar97 + -0x39) = (int)puVar97 + -0x37;
    *(undefined2 *)((int)puVar97 + -0x3b) = pbVar102;
    *(byte *)0x825d = *(byte *)0x825d & cVar8 + 1U;
    *(undefined2 *)((int)puVar97 + -0x3d) = pbVar104;
    *(undefined2 *)((int)puVar97 + -0x3f) = 0x2a;
    iVar16 = iVar15 + 2;
    *(undefined2 *)((int)puVar97 + -0x41) = 0x2a;
    pbVar104 = pbVar102 + 2;
    iVar13 = CONCAT11(bVar109,bVar9 + (0x9f < bVar9 |
                                      CARRY1(bVar115,bVar111) | bVar116 * (bVar9 < 6)) * -0x60) + -3
    ;
    bVar109 = (byte)((uint)iVar13 >> 8);
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] + bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    *(undefined2 *)((int)puVar97 + -0x43) = 0x29;
    *(undefined2 *)((int)puVar97 + -0x45) = pbVar104;
    bVar9 = (byte)iVar13;
    *(byte *)0x8260 = *(byte *)0x8260 & bVar9;
    *(int *)((int)puVar97 + -0x47) = (int)puVar97 + -0x45;
    pbVar20 = pbVar105 + -7;
    *(byte *)0x5320 = *(byte *)0x5320 & bVar109;
    *(undefined2 *)((int)puVar97 + -0x49) = 0x29;
    *(byte *)0x8262 = *(byte *)0x8262 & bVar9;
    pbVar104 = pbVar102 + 4;
    puVar97[-0x25] = (uint)(puVar97 + -0x24);
    puVar97[-0x26] = (uint)pbVar104;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar4 = pbVar104;
    bVar115 = *pbVar4;
    bVar111 = (byte)((uint)(iVar11 + -3) >> 8);
    *pbVar4 = *pbVar4 + bVar111;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * -6;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    pbVar105[0x3a] = pbVar105[0x3a] & (byte)iVar16;
    *(undefined2 *)((int)puVar97 + -0x4d) = pbVar104;
    iVar13 = CONCAT11(bVar109,bVar9 + (0x9f < bVar9 |
                                      CARRY1(bVar115,bVar111) | bVar116 * (bVar9 < 6)) * -0x60) + -1
    ;
    bRam0001828e = bRam0001828e & (byte)iVar16;
    iVar11 = *(int *)((int)puVar97 + -0x4d);
    bVar111 = (byte)((uint)iVar13 >> 8);
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] + bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    *(undefined2 *)((int)puVar97 + -0x4d) = 0x27;
    *(undefined2 *)((int)puVar97 + -0x4f) = pbVar104;
    bVar9 = (byte)iVar11;
    pbVar104 = pbVar102 + 5;
    *(byte *)0x8265 = *(byte *)0x8265 & bVar9 + 1;
    bVar109 = (byte)iVar13;
    bRam00018292 = bRam00018292 & bVar109;
    puVar97[-0x28] = (uint)(pbVar105 + -8);
    puVar97[-0x29] = iVar16;
    puVar97[-0x2a] = (uint)pbVar104;
    pbVar20 = pbVar105 + -9;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar4 = pbVar104;
    bVar115 = *pbVar4;
    bVar113 = (byte)((uint)(iVar11 + -1) >> 8);
    *pbVar4 = *pbVar4 + bVar113;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    bVar109 = bVar109 + (0x9f < bVar109 | CARRY1(bVar115,bVar113) | bVar116 * (bVar109 < 6)) * -0x60
    ;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    puVar97[-0x2b] = iVar16;
    iVar17 = iVar15 + 3;
    pbVar102[-0x7d8d] = pbVar102[-0x7d8d] & bVar109;
    *(undefined2 *)((int)puVar97 + -0x59) = pbVar104;
    *(undefined2 *)((int)puVar97 + -0x5b) = CONCAT11(bVar111,bVar109);
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    bVar115 = 0x9f < bVar109 | bVar116 * (bVar109 < 6);
    bVar109 = bVar109 + bVar115 * -0x60;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    bVar109 = bVar109 + (0x9f < bVar109 | bVar115 | bVar116 * (bVar109 < 6)) * -0x60;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    bRam00018288 = bRam00018288 & bVar9;
    pbVar102[-0x7d95] = pbVar102[-0x7d95] & bVar109;
    pbVar20 = pbVar105 + -0xb;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] + bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    *(byte *)0x8268 = *(byte *)0x8268 & bVar109;
    *(undefined2 *)((int)puVar97 + -0x5f) = pbVar104;
    bVar117 = (byte)iVar17;
    pbVar105[0x3a] = pbVar105[0x3a] & bVar117;
    uVar106 = *(undefined2 *)((int)puVar97 + -0x5f);
    *(int *)((int)puVar97 + -0x5f) = (int)puVar97 + -0x5d;
    pbVar105[0x47] = pbVar105[0x47] & bVar117;
    *(undefined2 *)((int)puVar97 + -0x61) = pbVar104;
    puVar97[-0x32] = (uint)(puVar97 + -0x31);
    pbVar20 = pbVar105 + -0xd;
    bVar111 = (byte)((uint)uVar106 >> 8);
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar4 = pbVar104;
    bVar115 = *pbVar4;
    bVar113 = (byte)((uint)iVar11 >> 8);
    *pbVar4 = *pbVar4 + bVar113;
    bVar109 = (byte)uVar106;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    bVar109 = bVar109 + (0x9f < bVar109 | CARRY1(bVar115,bVar113) | bVar116 * (bVar109 < 6)) * -0x60
    ;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104 = pbVar102 + 3;
    bRam0001828e = bRam0001828e & bVar117;
    iVar13 = iVar15 + 2;
    puVar97[-0x34] = iVar13;
    puVar97[-0x35] = 0x2c;
    puVar97[-0x36] = CONCAT11(bVar111,bVar109);
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar4 = pbVar104;
    bVar115 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar113;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    bVar109 = bVar109 + (0x9f < bVar109 | CARRY1(bVar115,bVar113) | bVar116 * (bVar109 < 6)) * -0x60
    ;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    *(byte *)0x8262 = *(byte *)0x8262 & bVar9;
    pbVar104 = pbVar102 + 3;
    pbVar105[0x38] = pbVar105[0x38] & bVar9 - 1;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar109;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    bVar115 = 0x9f < bVar109 | bVar116 * (bVar109 < 6);
    bVar109 = bVar109 + bVar115 * -0x60;
    bVar116 = 9 < (bVar109 & 0xf) || bVar116;
    bVar109 = bVar109 + bVar116 * -6;
    cVar8 = bVar109 + (0x9f < bVar109 | bVar115 | bVar116 * (bVar109 < 6)) * -0x60;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar104[(int)pbVar20] = pbVar104[(int)pbVar20] & bVar111;
    pbVar102 = pbVar102 + 2;
    (pbVar102 + (int)pbVar20)[0x41] = (pbVar102 + (int)pbVar20)[0x41] & (byte)puVar97[-0x36];
    uVar106 = puVar97[-0x35];
    puVar97[-0x35] = (uint)pbVar102;
    bVar115 = (byte)((uint)(CONCAT11(bVar111,cVar8) + -1) >> 8);
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar115;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar115;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar115;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar115;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar115;
    pbVar102[(int)pbVar20] = pbVar102[(int)pbVar20] & bVar115;
    iVar23 = CONCAT11((char)((uint)pbVar102 >> 8) * '\x02',(char)pbVar102);
    puVar97[-0x36] = (uint)(puVar97 + -0x35);
    bVar9 = (byte)iVar13;
    bRam0001828b = bRam0001828b & bVar9;
    bVar115 = (byte)uVar106;
    bRam00010074 = bRam00010074 & bVar115;
    *(byte *)(iVar23 + -0x7d9b) = *(byte *)(iVar23 + -0x7d9b) & bVar115;
    pcVar21 = (char *)(iVar23 + 2);
    *(int *)((int)puVar97 + -0x6b) = (int)puVar97 + -0x69;
    (pcVar21 + (int)pbVar105)[0x32] = (pcVar21 + (int)pbVar105)[0x32] & bVar115 - 1;
    *(undefined2 *)((int)puVar97 + -0x6d) = pcVar21;
    *(byte *)0x8264 = *(byte *)0x8264 & cVar8 - 2U;
    *(char *)(iVar23 + 0x4b) = *(char *)(iVar23 + 0x4b) + bVar9;
    *(int *)((int)puVar97 + -0x6d) = (int)puVar97 + -0x6b;
    *(byte *)(iVar23 + 0x50) = *(byte *)(iVar23 + 0x50) & bVar115 - 1;
    iVar11 = puVar97[-0x37];
    bVar115 = (byte)iVar11;
    *(byte *)0x825f = *(byte *)0x825f & bVar115;
    puVar97[-0x37] = 0x30;
    puVar97[-0x38] = (uint)(puVar97 + -0x37);
    puVar97[-0x39] = (uint)pcVar21;
    pbVar105[0x35] = pbVar105[0x35] & bVar115;
    puVar97[-0x3a] = (uint)(puVar97 + -0x39);
    pbVar105[0x40] = pbVar105[0x40] & bVar9;
    bRam00018297 = bRam00018297 & bVar9;
    puVar97[-0x3b] = iVar13;
    bVar116 = 9 < (cVar8 - 3U & 0xf) || bVar116;
    bVar9 = (cVar8 - 3U) + bVar116 * -6;
    bVar115 = 0x9f < bVar9 | bVar116 * (bVar9 < 6);
    bVar9 = bVar9 + bVar115 * -0x60;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * '\x06';
    bVar9 = bVar9 + (0x90 < (bVar9 & 0xf0) | bVar115 | bVar116 * (0xf9 < bVar9)) * '`';
    *(undefined2 *)((int)puVar97 + -0x77) = pcVar21;
    bRam0001828d = bRam0001828d & bVar9;
    *(int *)((int)puVar97 + -0x79) = (int)puVar97 + -0x77;
    *(int *)((int)puVar97 + -0x7b) = iVar13;
    pbVar105[0x73] = pbVar105[0x73] & bVar9;
    iVar11 = iVar11 + 3;
    *(byte *)0x8257 = *(byte *)0x8257 & (byte)iVar11;
    puVar97[-0x3f] = (uint)(puVar97 + -0x3e);
    *pcVar21 = *pcVar21 + (char)((uint)iVar11 >> 8);
    iVar11 = puVar97[-0x3f];
    puVar97[-0x3f] = iVar17;
    pbVar105[0x36] = pbVar105[0x36] & bVar117;
    uVar106 = *(undefined2 *)((int)puVar97 + -0x7d);
    puVar97[-0x3e] = iVar17;
    cVar8 = (char)uVar106;
    bVar115 = cVar8 - 0x20;
    iVar16 = CONCAT11((char)((uint)uVar106 >> 8),bVar115);
    puVar97[-0x3f] = 0x8215;
    puVar97[-0x40] = (uint)pcVar21;
    *(byte *)(iVar23 + -0x7d9b) = *(byte *)(iVar23 + -0x7d9b) & bVar115;
    pbVar104 = pbVar105 + -0x13;
    iVar13 = iVar16 + -1;
    *(int *)((int)puVar97 + -0x83) = (int)puVar97 + -0x81;
    bVar115 = (byte)((uint)iVar13 >> 8);
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & bVar115;
    *pcVar21 = *pcVar21 + (char)((uint)(iVar11 + -1) >> 8);
    pcVar21[(int)pbVar104] = pcVar21[(int)pbVar104] & (byte)iVar13;
    pcVar21 = (char *)(iVar23 + 3);
    puVar97[-0x42] = 0x33;
    puVar97[-0x43] = (uint)(puVar97 + -0x42);
    *(byte *)(iVar23 + -0x7d99) = *(byte *)(iVar23 + -0x7d99) & (char)(iVar11 + -1) + 1U;
    pbVar105[0x35] = pbVar105[0x35] & bVar117;
    *(byte *)0x8257 = *(byte *)0x8257 & cVar8 - 0x22U;
    puVar97[-0x44] = iVar17;
    puVar97[-0x45] = (uint)(puVar97 + -0x44);
    iVar16 = iVar16 + -3;
    bVar115 = (byte)iVar16;
    bVar116 = 9 < (bVar115 & 0xf) || bVar116;
    bVar115 = bVar115 + bVar116 * '\x06';
    bVar115 = bVar115 + (0x90 < (bVar115 & 0xf0) | bVar116 * (0xf9 < bVar115)) * '`';
    puVar97[-0x46] = (uint)pcVar21;
    *(byte *)(iVar23 + 0x55) = *(byte *)(iVar23 + 0x55) & bVar115;
    puVar97[-0x47] = (uint)pbVar104;
    puVar97[-0x48] = (uint)(puVar97 + -0x47);
    iVar11 = puVar97[-0x48];
    bVar115 = bVar115 - 0x20;
    cVar8 = (char)((uint)iVar11 >> 8);
    *pcVar21 = *pcVar21 + cVar8;
    *(undefined2 *)((int)puVar97 + -0x8f) = 0x8215;
    bVar109 = (byte)iVar11;
    *(byte *)(iVar23 + 0x55) = *(byte *)(iVar23 + 0x55) & bVar109;
    iVar17 = iVar15 + 4;
    *(int *)((int)puVar97 + -0x91) = (int)puVar97 + -0x8f;
    *(undefined2 *)((int)puVar97 + -0x93) = pcVar21;
    pbVar105[0x33] = pbVar105[0x33] & (byte)iVar17;
    *(byte *)0x8256 = *(byte *)0x8256 & bVar115;
    *(int *)((int)puVar97 + -0x95) = iVar17;
    *(int *)((int)puVar97 + -0x97) = (int)puVar97 + -0x95;
    iVar13 = CONCAT11((char)((uint)iVar16 >> 8),bVar115) + -1;
    bVar115 = (byte)iVar13;
    *(byte *)(iVar23 + -0x7d95) = *(byte *)(iVar23 + -0x7d95) & bVar115;
    *(byte *)(iVar23 + -0x7dc8) = *(byte *)(iVar23 + -0x7dc8) & bVar115;
    *(undefined2 *)((int)puVar97 + -0x99) = pcVar21;
    pcVar21 = (char *)(iVar23 + 4);
    bVar111 = (byte)(iVar11 + -1);
    *(byte *)0x8263 = *(byte *)0x8263 & bVar111;
    *pcVar21 = *pcVar21 + (char)((uint)(iVar11 + -1) >> 8);
    pcVar21[(int)(pbVar105 + -0x17)] = pcVar21[(int)(pbVar105 + -0x17)] & bVar115;
    puVar97[-0x4d] = 0x36;
    puVar97[-0x4e] = iVar17;
    *(byte *)(iVar23 + -0x7da5) = *(byte *)(iVar23 + -0x7da5) & (byte)pcVar21;
    puVar97[-0x4f] = iVar17;
    puVar97[-0x50] = (uint)pcVar21;
    *(byte *)0x8253 = *(byte *)0x8253 & bVar115;
    puVar97[-0x51] = iVar17;
    *(int *)((int)puVar97 + -0xa5) = iVar17;
    bVar116 = 9 < (bVar115 - 0x20 & 0xf) || bVar116;
    bVar9 = (bVar115 - 0x20) + bVar116 * '\x06';
    bVar9 = bVar9 + (0x90 < (bVar9 & 0xf0) | bVar115 < 0x20 | bVar116 * (0xf9 < bVar9)) * '`';
    iVar13 = CONCAT11((char)((uint)iVar13 >> 8),bVar9);
    puVar97[-0x53] = (uint)pcVar21;
    bRam0001828e = bRam0001828e & bVar9;
    puVar97[-0x54] = (uint)(puVar97 + -0x53);
    puVar97[-0x55] = iVar17;
    *pcVar21 = *pcVar21 + cVar8;
    iVar16 = iVar15 + 5;
    *(int *)((int)puVar97 + -0xad) = iVar16;
    bVar111 = bVar111 + 1;
    (pcVar21 + (int)pbVar105)[0x28] = (pcVar21 + (int)pbVar105)[0x28] & bVar111;
    pbVar105[0x36] = pbVar105[0x36] & bVar111;
    puVar97[-0x57] = (uint)(puVar97 + -0x56);
    *(byte *)(iVar23 + -0x7d9b) = *(byte *)(iVar23 + -0x7d9b) & bVar9;
    bVar111 = (byte)iVar16;
    pbVar105[100] = pbVar105[100] & bVar111;
    puVar97[-0x57] = iVar23 + 5;
    pcVar21 = (char *)(iVar23 + 6);
    puVar97[-0x58] = 0x38;
    *(byte *)(iVar23 + -0x7d96) = *(byte *)(iVar23 + -0x7d96) & bVar9;
    *(int *)((int)puVar97 + -0xb1) = (int)puVar97 + -0xaf;
    *(undefined2 *)((int)puVar97 + -0xb3) = 0x39;
    *(int *)((int)puVar97 + -0xb5) = iVar16;
    cVar8 = (char)((uint)(iVar11 + 1) >> 8);
    *pcVar21 = *pcVar21 + cVar8;
    bVar115 = bVar9 - 2;
    *(undefined2 *)((int)puVar97 + -0xb7) = pcVar21;
    pbVar105[0x2c] = pbVar105[0x2c] & bVar115;
    *(undefined2 *)((int)puVar97 + -0xb9) = pcVar21;
    *(int *)((int)puVar97 + -0xbb) = iVar16;
    pbVar105[0x36] = pbVar105[0x36] & bVar111;
    bRam00018291 = bRam00018291 & bVar111;
    pbVar105[0x71] = pbVar105[0x71] & (char)(iVar11 + 1) - 2U;
    *(byte *)(iVar23 + 0x54) = *(byte *)(iVar23 + 0x54) & bVar109 + 1;
    *(byte *)(iVar23 + -0x7da0) = *(byte *)(iVar23 + -0x7da0) & bVar115;
    *(char *)(iVar23 + 7) = *(char *)(iVar23 + 7) + cVar8;
    pcVar21 = (char *)(iVar23 + 8);
    *(undefined2 *)((int)puVar97 + -0xbd) = 0x3c;
    *(undefined2 *)((int)puVar97 + -0xbf) = pcVar21;
    bRam00010082 = bRam00010082 & bVar109 + 2;
    pbVar105[0x33] = pbVar105[0x33] & bVar111;
    (pcVar21 + (int)pbVar105)[0x29] = (pcVar21 + (int)pbVar105)[0x29] & bVar109 + 2;
    pbVar105[0x33] = pbVar105[0x33] & bVar111;
    puVar97[-0x5f] = 0x8212;
    puVar97[-0x60] = iVar16;
    *(undefined2 *)((int)puVar97 + -0xc1) = pcVar21;
    *(byte *)0x8253 = *(byte *)0x8253 & bVar115;
    *(int *)((int)puVar97 + -0xc3) = iVar16;
    *(int *)((int)puVar97 + -0xc5) = (int)puVar97 + -0xc3;
    pbVar105[0x6f] = pbVar105[0x6f] + bVar109 + 4;
    (pcVar21 + (int)pbVar105)[0x23] = (pcVar21 + (int)pbVar105)[0x23] & bVar109 + 6;
    *(undefined2 *)((int)puVar97 + -199) = pcVar21;
    bRam0001008b = bRam0001008b & bVar109 + 6;
    *(undefined2 *)((int)puVar97 + -0xc9) = 0x8212;
    pbVar105[99] = pbVar105[99] & bVar9 - 3;
    pbVar105[99] = pbVar105[99] & bVar111;
    *(undefined2 *)((int)puVar97 + -0xcb) = 0x3d;
    *(int *)((int)puVar97 + -0xcd) = (int)puVar97 + -0xcb;
    *(byte *)(iVar23 + 0x51) = *(byte *)(iVar23 + 0x51) & bVar111;
    puVar97[-0x67] = (uint)(puVar97 + -0x66);
    bVar115 = (byte)((uint)(iVar13 + -4) >> 8);
    pcVar21[(int)(pbVar105 + -0x20)] = pcVar21[(int)(pbVar105 + -0x20)] & bVar115;
    pcVar21[(int)(pbVar105 + -0x20)] = pcVar21[(int)(pbVar105 + -0x20)] & bVar115;
    *pcVar21 = *pcVar21 + (char)((uint)(iVar11 + 5) >> 8);
    puVar97[-0x68] = iVar16;
    puVar97[-0x69] = (uint)(puVar97 + -0x68);
    iVar13 = iVar13 + -5;
    puVar97[-0x6a] = 0x3e;
    puVar97[-0x6b] = iVar16;
    *(byte *)(iVar23 + 0x51) = *(byte *)(iVar23 + 0x51) & bVar111;
    *(int *)((int)puVar97 + -0xd7) = (int)puVar97 + -0xd5;
    iVar13 = CONCAT11((char)((uint)iVar13 >> 8),(char)iVar13 + -0x20) + -1;
    pbVar105[0x27] = pbVar105[0x27] & bVar111;
    bRam00010084 = bRam00010084 & bVar109 + 7;
    bVar115 = (byte)iVar13;
    bVar116 = 9 < (bVar115 & 0xf) || bVar116;
    bVar115 = bVar115 + bVar116 * '\x06';
    bVar115 = bVar115 + (0x90 < (bVar115 & 0xf0) | bVar116 * (0xf9 < bVar115)) * '`';
    puVar97[-0x6c] = (uint)pcVar21;
    pbVar105[0x20] = pbVar105[0x20] & bVar115;
    puVar97[-0x6d] = (uint)(puVar97 + -0x6c);
    *pcVar21 = *pcVar21 + (char)((uint)(iVar11 + 8) >> 8);
    iVar17 = iVar15 + 6;
    pbVar104 = pbVar105 + -0x22;
    pcVar22 = (char *)(iVar23 + 7);
    puVar97[-0x6e] = (uint)pcVar22;
    puVar97[-0x6f] = (uint)(puVar97 + -0x6e);
    bVar111 = (byte)iVar17;
    pbVar105[0x35] = pbVar105[0x35] & bVar111;
    (pcVar22 + (int)pbVar104)[0x41] = (pcVar22 + (int)pbVar104)[0x41] & bVar109 + 9;
    puVar97[-0x70] = (uint)pbVar104;
    pbVar105[99] = pbVar105[99] & bVar111;
    puVar97[-0x71] = (uint)(puVar97 + -0x70);
    puVar97[-0x72] = 0x40;
    puVar97[-0x73] = iVar17;
    bRam00018293 = bRam00018293 & bVar111;
    *pcVar22 = *pcVar22 + (char)(puVar97[-0x73] >> 8);
    puVar97[-0x73] = (uint)(puVar97 + -0x72);
    *(byte *)0x8251 = *(byte *)0x8251 & bVar115 - 0x21;
    puVar97[-0x74] = iVar17;
    puVar97[-0x75] = (uint)(puVar97 + -0x74);
    iVar11 = CONCAT11((char)((uint)iVar13 >> 8),bVar115 - 0x20) + -2;
    bVar9 = (byte)((uint)iVar11 >> 8);
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar9;
    bVar115 = (byte)iVar11;
    pcVar22[(int)pbVar104] = pcVar22[(int)pbVar104] & bVar115;
    bVar116 = 9 < (bVar115 & 0xf) || bVar116;
    bVar115 = bVar115 + bVar116 * '\x06';
    bVar115 = bVar115 + (0x90 < (bVar115 & 0xf0) | bVar116 * (0xf9 < bVar115)) * '`';
    iVar16 = CONCAT11(bVar9,bVar115);
    *(undefined2 *)((int)puVar97 + -0xeb) = pcVar22;
    *(byte *)0x8268 = *(byte *)0x8268 & bVar115;
    *(int *)((int)puVar97 + -0xed) = (int)puVar97 + -0xeb;
    *(int *)((int)puVar97 + -0xef) = iVar17;
    *(int *)((int)puVar97 + -0xf1) = iVar17;
    puVar97[-0x79] = iVar17;
    pbVar105[0x21] = pbVar105[0x21] & bVar111;
    iVar13 = iVar16 + -1;
    iVar11 = *(int *)((int)puVar97 + -0xf1);
    bVar115 = (byte)iVar13;
    bRam00018291 = bRam00018291 & bVar115;
    bVar109 = (byte)((uint)iVar11 >> 8);
    *pcVar21 = *pcVar21 + bVar109;
    *(undefined2 *)((int)puVar97 + -0xf1) = 0x820d;
    pbVar105[0x60] = pbVar105[0x60] & bVar115;
    pbVar105[0x1a] = pbVar105[0x1a] & bVar111;
    *(int *)((int)puVar97 + -0xf3) = iVar13;
    *(int *)((int)puVar97 + -0xf5) = iVar13;
    pbVar105[0x75] = pbVar105[0x75] & bVar115;
    *(byte *)0x824e = *(byte *)0x824e & bVar115;
    puVar97[-0x7b] = iVar17;
    puVar97[-0x7c] = (uint)(puVar97 + -0x7b);
    iVar16 = iVar16 + -2;
    bRam00018293 = bRam00018293 & bVar111;
    puVar97[-0x7d] = (uint)(puVar97 + -0x7c);
    puVar97[-0x7e] = (uint)pcVar21;
    puVar97[-0x7f] = (uint)(puVar97 + -0x7e);
    puVar97[-0x80] = (uint)pcVar21;
    bVar115 = (byte)iVar16;
    bRam00010093 = bRam00010093 & bVar115;
    puVar97[-0x81] = iVar17;
    pcVar21[(int)(pbVar105 + -0x28)] = pcVar21[(int)(pbVar105 + -0x28)] & bVar115;
    bVar116 = 9 < (bVar115 & 0xf) || bVar116;
    bVar115 = bVar115 + bVar116 * -6;
    bVar115 = bVar115 + (0x9f < bVar115 | bVar116 * (bVar115 < 6)) * -0x60;
    puVar97[-0x82] = 0x44;
    puVar97[-0x83] = (uint)(puVar97 + -0x82);
    puVar97[-0x84] = 0x44;
    puVar97[-0x85] = iVar17;
    bRam000182a2 = bRam000182a2 & bVar111;
    *(byte *)0x8265 = *(byte *)0x8265 & bVar115;
    puVar97[-0x86] = CONCAT11((char)((uint)iVar16 >> 8),bVar115);
    *(int *)((int)puVar97 + -0x10f) = iVar17;
    *(int *)((int)puVar97 + -0x111) = (int)puVar97 + -0x10f;
    pbVar105[0x20] = pbVar105[0x20] + bVar111;
    iVar13 = iVar23 + 8;
    *(int *)((int)puVar97 + -0x113) = iVar13;
    pbVar105[0x26] = pbVar105[0x26] & bVar111;
    *(byte *)(iVar23 + -0x7d9e) = *(byte *)(iVar23 + -0x7d9e) & (byte)iVar13;
    *(undefined2 *)((int)puVar97 + -0x115) = 0x46;
    *(int *)((int)puVar97 + -0x117) = iVar17;
    *(byte *)(iVar23 + 0x5d) = *(byte *)(iVar23 + 0x5d) & (byte)iVar11;
    *(int *)((int)puVar97 + -0x119) = (int)puVar97 + -0x117;
    *(int *)((int)puVar97 + -0x11b) = iVar13;
    *(int *)((int)puVar97 + -0x11d) = (int)puVar97 + -0x11b;
    *(byte *)0x8252 = *(byte *)0x8252 & bVar115;
    puVar97[-0x8f] = iVar17;
    puVar97[-0x90] = (uint)(puVar97 + -0x8f);
    puVar97[-0x91] = iVar13;
    bVar116 = 9 < (bVar115 & 0xf) || bVar116;
    bVar115 = bVar115 + bVar116 * -6;
    cVar8 = bVar115 + (0x9f < bVar115 | bVar116 * (bVar115 < 6)) * -0x60;
    puVar97[-0x92] = (uint)(puVar97 + -0x91);
    *(byte *)0x8259 = *(byte *)0x8259 & cVar8 - 1U;
    puVar97[-0x93] = (uint)(puVar97 + -0x92);
    puVar97[-0x94] = iVar17;
    pbVar104[iVar23 + 0x55] = pbVar104[iVar23 + 0x55] & (byte)iVar11 - 1;
    pbVar105[0x5d] = pbVar105[0x5d] & bVar111;
    puVar97[-0x95] = (uint)(iVar23 + 9);
    puVar97[-0x96] = (uint)(pbVar105 + -0x2b);
    bRam0001009b = bRam0001009b & cVar8 - 0x21U;
    pcVar1 = (char *)(iVar23 + 9);
    *pcVar1 = *pcVar1 + (char)((uint)(iVar11 + 1) >> 8);
    iVar15 = iVar15 + 7;
    puVar97[-0x97] = (uint)(puVar97 + -0x96);
    puVar97[-0x98] = iVar15;
    puVar97[-0x99] = (uint)(puVar97 + -0x98);
    bVar9 = cVar8 + 0xbf;
    pbVar105[0x61] = pbVar105[0x61] & bVar9;
    puVar97[-0x9a] = (uint)(puVar97 + -0x99);
    bRam0001009c = bRam0001009c & bVar9;
    pbVar4 = (byte *)(iVar23 + 10);
    bVar115 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar109;
    bVar116 = 9 < (bVar9 & 0xf) || bVar116;
    bVar9 = bVar9 + bVar116 * '\x06';
    cVar8 = bVar9 + (0x90 < (bVar9 & 0xf0) | CARRY1(bVar115,bVar109) | bVar116 * (0xf9 < bVar9)) *
                    '`';
    *(undefined2 *)((int)puVar97 + -0x135) = (byte *)(iVar23 + 10);
    bRam00018295 = bRam00018295 & (byte)iVar15;
    iVar23 = iVar23 + 0xb;
    *(int *)((int)puVar97 + -0x137) = iVar15;
    *(int *)((int)puVar97 + -0x139) = (int)puVar97 + -0x137;
    *(int *)((int)puVar97 + -0x13b) = iVar23;
    iVar15 = CONCAT11((char)((uint)iVar23 >> 8) * '\x02',(char)iVar23);
    pbVar105[iVar15 + -0x2e] = pbVar105[iVar15 + -0x2e] + cVar8;
    pbVar105[iVar15 + -0x2e] = pbVar105[iVar15 + -0x2e] + cVar8;
    pbVar105[iVar15 + -0x2e] = pbVar105[iVar15 + -0x2e] + cVar8;
    pbVar105[iVar15 + -0x2e] = pbVar105[iVar15 + -0x2e] + cVar8;
    pbVar105[iVar15 + -0x2e] = pbVar105[iVar15 + -0x2e] + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc0:
    in_AX = (code *)puVar97[2];
    *(int *)((int)puVar97 + 5) = iVar15;
    pbVar105[0x49] = pbVar105[0x49] & bVar117;
    unaff_BP = 0x31;
    puVar25 = (uint *)((int)puVar97 + 5);
switchD_1000_04fc_caseD_9a:
    *(byte *)(unaff_BP + -0x7d99) = *(byte *)(unaff_BP + -0x7d99) & bVar117;
    pbVar104 = (byte *)0x8221;
    *(byte *)(unaff_BP + -0x7d90) = *(byte *)(unaff_BP + -0x7d90) & (byte)in_AX;
    pbVar102 = pbVar105 + -1;
    *(undefined1 **)(undefined1 *)((int)puVar25 + -1) = (undefined1 *)((int)puVar25 + 1);
    *(undefined1 **)(undefined1 *)((int)puVar25 + -3) = (undefined1 *)((int)puVar25 + -1);
    *(char *)(unaff_BP + -0x7d8b) = *(char *)(unaff_BP + -0x7d8b) + bVar117;
    *(int *)((int)puVar25 + -5) = iVar15;
    *(undefined1 **)(undefined1 *)((int)puVar25 + -7) = (undefined1 *)((int)puVar25 + -5);
    iVar11 = *(int *)((int)puVar25 + -7);
    *(undefined2 *)(iVar11 + -2) = in_AX;
    *(int *)(iVar11 + -4) = iVar15;
    *(int *)(iVar11 + -6) = iVar11 + -4;
    iVar11 = *(int *)(iVar11 + -6);
    *(int *)(iVar11 + -2) = unaff_BP;
    *(undefined2 *)(iVar11 + -4) = pbVar20 + 4;
    uVar12 = uVar12 + 1;
    pbVar19 = pbVar20 + 5;
    pbVar20[-0x7d8c] = pbVar20[-0x7d8c] + (char)uVar12;
    *(int *)(iVar11 + -6) = iVar11 + -4;
    *(byte *)(unaff_BP + -0x7d8b) = *(byte *)(unaff_BP + -0x7d8b) & bVar117;
    *(int *)(iVar11 + -9) = iVar15;
    *(int *)(iVar11 + -0xb) = iVar11 + -9;
    *(uint *)(pbVar19 + (int)pbVar102) = *(uint *)(pbVar19 + (int)pbVar102) & (uint)in_AX;
    puVar26 = (uint *)(iVar11 + -0xd);
    *(undefined2 *)(iVar11 + -0xd) = in_AX;
switchD_1000_04fc_caseD_22:
    *(int *)((int)puVar26 + -2) = iVar15;
    *(undefined1 **)(undefined1 *)((int)puVar26 + -4) = (undefined1 *)((int)puVar26 + -2);
    pbVar20 = pbVar19 + 2;
    pbVar104[unaff_BP + 0x55] = pbVar104[unaff_BP + 0x55] & bVar117;
    uVar12 = uVar12 + 1;
    *(int *)((int)puVar26 + -6) = iVar15;
    puVar27 = (uint *)((int)puVar26 + -8);
    *(undefined1 **)(undefined1 *)((int)puVar26 + -8) = (undefined1 *)((int)puVar26 + -6);
    *(uint *)(pbVar20 + (int)pbVar102) = *(uint *)(pbVar20 + (int)pbVar102) & (uint)in_AX;
    unaff_BP = unaff_BP + 2;
switchD_1000_04fc_caseD_25:
    in_AX = (code *)*puVar27;
    *puVar27 = (uint)(puVar27 + 1);
    iVar11 = *puVar27;
    *(int *)(iVar11 + -2) = iVar15;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    *(int *)(iVar11 + -6) = iVar11 + -4;
    pbVar104 = pbVar104 + -1;
    *(int *)(iVar11 + -8) = iVar15;
    iVar11 = *(int *)(iVar11 + -8);
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar102;
    iVar11 = *(int *)(iVar11 + -4);
    unaff_BP = unaff_BP + 2;
    *(int *)(iVar11 + -2) = unaff_BP;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    uVar12 = uVar12 - 1;
    puVar28 = (uint *)(iVar11 + -4);
switchD_1000_04fc_caseD_28:
    pbVar20 = pbVar20 + 1;
    pbVar104[0x58] = pbVar104[0x58] + (char)in_AX;
    *(uint **)(undefined1 *)((int)puVar28 + -2) = puVar28;
    iVar11 = *(int *)((int)puVar28 + -2);
    *(undefined2 *)(iVar11 + -2) = in_AX;
    pbVar102[0x46] = pbVar102[0x46] & bVar117;
    iVar11 = *(int *)(iVar11 + -2);
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    pbVar20[(int)(pbVar104 + -1)] = pbVar20[(int)(pbVar104 + -1)] & bVar18;
    iVar11 = *(int *)(iVar11 + -4);
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    pbVar102[unaff_BP + -4] = pbVar102[unaff_BP + -4] & bVar18;
    iVar11 = *(int *)(iVar11 + -4);
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    pbVar104[unaff_BP + -4] = pbVar104[unaff_BP + -4] & bVar18;
    iVar11 = *(int *)(iVar11 + -4);
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    pbVar102[-6] = pbVar102[-6] & bVar18;
    iVar11 = *(int *)(iVar11 + -4);
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    pbVar104[-5] = pbVar104[-5] & bVar18;
    iVar11 = *(int *)(iVar11 + -4);
    unaff_BP = unaff_BP + -4;
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(undefined2 *)(iVar11 + -4) = pbVar20;
    pbVar104 = pbVar104 + -6;
    pbVar102 = pbVar102 + -8;
    *(byte *)0x4d5c = *(byte *)0x4d5c & bVar18;
    uVar12 = uVar12 - 0xf;
    *(undefined2 *)(iVar11 + -6) = pbVar20;
    puVar29 = (uint *)(iVar11 + -8);
    *(undefined2 *)(iVar11 + -8) = pbVar20;
switchD_1000_04fc_caseD_96:
    uVar12 = uVar12 - 1;
    pbVar104 = pbVar104 + -1;
    puVar30 = puVar29;
switchD_1000_04fc_caseD_c5:
    pbVar102 = pbVar102 + -1;
    *pbVar20 = *pbVar20 & bVar18;
    iVar11 = unaff_BP + -1;
    uVar12 = uVar12 - 1;
    puVar31 = (uint *)(*puVar30 + -2);
    *(undefined2 *)(*puVar30 + -2) = pbVar20;
switchD_1000_04fc_caseD_e8:
    *(undefined2 *)((int)puVar31 + -2) = pbVar20;
    bVar115 = (byte)((uint)pbVar20 >> 8);
    pbVar20[(int)(pbVar102 + -1)] = pbVar20[(int)(pbVar102 + -1)] & bVar115;
    iVar13 = *(int *)((int)puVar31 + -2);
    *(undefined2 *)(iVar13 + -2) = pbVar20;
    *(undefined2 *)(iVar13 + -4) = pbVar20;
    pbVar20[(int)(pbVar104 + -2)] = pbVar20[(int)(pbVar104 + -2)] & bVar115;
    iVar13 = *(int *)(iVar13 + -4);
    unaff_BP = iVar11 + -2;
    pbVar102[0x46] = pbVar102[0x46] & (char)uVar12 - 3U;
    pbVar104 = pbVar104 + -3;
    *(int *)(iVar13 + -2) = iVar13;
    pbVar104[iVar11 + 0x4d] = pbVar104[iVar11 + 0x4d] & bVar117;
    pbVar102 = pbVar102 + -4;
    *(int *)(iVar13 + -4) = iVar13 + -2;
    pbVar102[unaff_BP] = pbVar102[unaff_BP] + (char)(uVar12 - 1 >> 8);
    *(int *)(iVar13 + -6) = iVar11 + -3;
    *(undefined2 *)(iVar13 + -8) = pbVar20;
    uVar12 = uVar12 - 2;
    pbVar20 = pbVar20 + 1;
    in_AX = (code *)CONCAT11((char)((uint)(in_AX + -1) >> 8),
                             (char)(in_AX + -1) - pbVar20[(int)pbVar102]);
    puVar32 = (uint *)(iVar13 + -10);
    *(undefined2 *)(iVar13 + -10) = pbVar20;
code_r0x000100f3:
    unaff_BP = unaff_BP + 1;
    pbVar20 = pbVar20 + 1;
    *(undefined1 **)(undefined1 *)((int)puVar32 + -3) = (undefined1 *)((int)puVar32 + -1);
    (pbVar20 + (int)pbVar104)[0x20] = (pbVar20 + (int)pbVar104)[0x20] & (byte)in_AX;
    pbVar102 = pbVar102 + -1;
    puVar33 = (uint *)((int)puVar32 + -5);
    *(int *)((int)puVar32 + -5) = unaff_BP;
    iVar15 = iVar15 + 1;
switchD_1000_04fc_caseD_52:
    *(int *)((int)puVar33 + -2) = iVar15;
    pbVar102[unaff_BP] = pbVar102[unaff_BP] + (char)(uVar12 >> 8);
    *(int *)((int)puVar33 + -4) = iVar15;
    unaff_BP = unaff_BP + 1;
    puVar34 = (uint *)((int)puVar33 + -4);
    pbVar100 = pbVar102;
switchD_1000_04fc_caseD_5a:
    *(undefined2 *)((int)puVar34 + -2) = pbVar20;
    *(undefined1 **)(undefined1 *)((int)puVar34 + -4) = (undefined1 *)((int)puVar34 + -2);
    *(int *)((int)puVar34 + -6) = iVar15;
    bVar115 = pbVar20[(int)pbVar100];
    bVar113 = (byte)((uint)iVar15 >> 8);
    bVar111 = (char)iVar15 - pbVar104[unaff_BP + 0x41];
    iVar15 = CONCAT11(bVar113,bVar111);
    *(undefined2 *)((int)puVar34 + -8) = pbVar100;
    bVar9 = pbVar20[(int)pbVar100];
    *(undefined2 *)((int)puVar34 + -10) = pbVar20;
    *(undefined2 *)((int)puVar34 + -0xc) = pbVar20;
    pbVar104 = pbVar104 + -2;
    pbVar102 = pbVar100 + -1;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar113;
    pbVar104[unaff_BP + 0x55] = pbVar104[unaff_BP + 0x55] & bVar111;
    *(int *)((int)puVar34 + -0xe) = iVar15;
    *(undefined1 **)(undefined1 *)((int)puVar34 + -0x10) = (undefined1 *)((int)puVar34 + -0xe);
    *(uint *)(pbVar20 + (int)pbVar102) =
         *(uint *)(pbVar20 + (int)pbVar102) &
         CONCAT11((char)((uint)in_AX >> 8),((char)in_AX - bVar115) - bVar9);
    uVar106 = *(undefined2 *)((int)puVar34 + -0x10);
    *(undefined1 **)(undefined1 *)((int)puVar34 + -0x10) = (undefined1 *)((int)puVar34 + -0xe);
    puVar6 = (undefined2 *)*(undefined2 *)((int)puVar34 + -0x10);
    pbVar20[(int)pbVar104] = pbVar20[(int)pbVar104] - bVar113;
    *(int *)(pbVar100 + 0x27) = *(int *)(pbVar100 + 0x27) - (int)pbVar20;
    bVar109 = (byte)(uVar12 - 2 >> 8) ^ pbVar20[(int)pbVar104];
    piVar39 = (int *)*puVar6;
    pbVar104[unaff_BP + 2] = pbVar104[unaff_BP + 2] - bVar113;
    *(int *)(pbVar100 + 0x27) = *(int *)(pbVar100 + 0x27) - (int)pbVar20;
    bVar115 = (byte)uVar106 ^ 0x29;
    iVar11 = *piVar39;
    *pbVar104 = *pbVar104 - bVar113;
    *(int *)(pbVar100 + 0x27) = *(int *)(pbVar100 + 0x27) - (int)pbVar20;
    *(int *)(pbVar100 + 0x27) = *(int *)(pbVar100 + 0x27) - (int)pbVar20;
    bVar116 = 9 < (bVar115 & 0xf) || (bool)in_AF;
    bVar115 = bVar115 + bVar116 * '\x06' & 0xf;
    *(int *)(pbVar100 + 0x27) = *(int *)(pbVar100 + 0x27) - (int)pbVar20;
    *(undefined2 *)(iVar11 + -2) = pbVar20;
    *(int *)(iVar11 + -4) = unaff_BP + 2;
    *(int *)(iVar11 + -6) = iVar15;
    bVar108 = 9 < bVar115 || bVar116;
    bVar9 = ((char)((uint)uVar106 >> 8) + bVar116) - bVar108;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar9;
    (pbVar20 + (int)pbVar104)[0x45] = (pbVar20 + (int)pbVar104)[0x45] & (byte)pbVar20;
    *(undefined2 *)(iVar11 + -8) = pbVar20;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & bVar9;
    *(byte *)(unaff_BP + 0x52) = *(byte *)(unaff_BP + 0x52) & (byte)(uVar12 - 2);
    *(char *)0x4d05 = *(char *)0x4d05 + bVar111;
    iVar11 = (CONCAT11(bVar9,bVar115 + bVar108 * -6) & 0xff0f) + 0x565;
    cVar8 = (char)iVar11;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
    pbVar102[unaff_BP + 3] = pbVar102[unaff_BP + 3] & bVar109;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] & (byte)((uint)iVar11 >> 8);
    pbVar102[unaff_BP + 3] = pbVar102[unaff_BP + 3] & bVar109;
    in_AX = (code *)(uint)(byte)(cVar8 * '\x02');
code_r0x0001016d:
    pbVar20 = (byte *)((uint)pbVar20 & 0xff);
    cVar8 = ((char)in_AX + '\x01') * '\x02';
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + cVar8;
    bVar115 = cVar8 + (char)((uint)iVar15 >> 8);
    in_AX = (code *)(uint)bVar115;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar115;
code_r0x0001017d:
    LOCK();
    pbVar102[CONCAT11((char)((uint)pbVar20 >> 8) * '\x02',(char)pbVar20)] =
         pbVar102[CONCAT11((char)((uint)pbVar20 >> 8) * '\x02',(char)pbVar20)] + (char)in_AX;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc1:
    uVar106 = ((undefined2 *)0x508)[1];
    pcVar14 = (code *)*(undefined2 *)0x508;
    puVar97[1] = 0x1000;
    *puVar97 = 0x117c;
    (*pcVar14)();
    return (code *)*puVar97;
  case 0xc2:
    in_AF = 9 < (bVar9 & 0xf) || (bool)in_AF;
    in_AX = (code *)(CONCAT11(bVar111 - in_AF,bVar9 + in_AF * -6) & 0xff0f);
    goto code_r0x000101a9;
  case 0xc4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc5:
    goto switchD_1000_04fc_caseD_c5;
  case 0xc6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 199:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 200:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xca:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcc:
  case 0xe6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xce:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd1:
    puVar97[1] = unaff_DS;
    *(byte *)0x8222 = *(byte *)0x8222 | bVar9;
    puVar75 = puVar97 + 3;
    do {
      uVar106 = ((undefined2 *)0x508)[1];
      pcVar14 = (code *)*(undefined2 *)0x508;
      *(undefined2 *)((int)puVar75 + -2) = 0x1000;
      puVar76 = (undefined2 *)((int)puVar75 + -4);
      puVar75 = (uint *)((int)puVar75 + -4);
      *puVar76 = 0x5c8;
      cVar8 = (*pcVar14)();
    } while (cVar8 != '\x01');
    return (code *)0x0;
  case 0xd2:
  case 0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd8:
    in(0xd0);
    uVar107 = in(0xd0);
    bVar115 = (bVar113 & 0x1f) % 0x11;
    uVar7 = (ulong)CONCAT11(bVar111,uVar107) << bVar115;
    bVar115 = (byte)uVar7 | (byte)(CONCAT11(bVar111,uVar107) >> 0x11 - bVar115);
    uVar118 = uVar12 - 1;
    if (uVar118 == 0 || (bool)bVar112) {
      uVar118 = uVar12 - 2;
      if (uVar118 == 0 || (bool)bVar112) {
        puVar2 = (uint *)0x970a;
        bVar9 = (byte)uVar118 & 0x1f;
        uVar12 = *puVar2;
        *puVar2 = *puVar2 >> bVar9;
        bVar116 = (uVar118 & 0x1f) != 0;
        bVar115 = (bVar115 - 0x25) -
                  (!bVar116 && (uVar7 & 0x10000) != 0 || bVar116 && (uVar12 >> bVar9 - 1 & 1) != 0);
        *(byte *)0x8222 = bVar117;
        uVar12 = uVar118;
        goto code_r0x00011ea8;
      }
    }
    else {
      uVar12 = 0;
      if (uVar118 == 0) goto code_r0x00011ea8;
    }
    while( true ) {
      bVar115 = pbVar20[0x1c2c];
      pbVar105 = pbVar104 + (uint)bVar116 * -2 + 1;
      *pbVar104 = bVar115;
      uVar118 = uVar118 - 1;
      if (uVar118 == 0) break;
      pbVar4 = pbVar102;
      pbVar102 = pbVar102 + (uint)bVar116 * -2 + 1;
      bVar115 = *pbVar4;
      pbVar104 = pbVar105 + (uint)bVar116 * -2 + 1;
      *pbVar105 = *(byte *)((bVar115 >> 4) + 0x1c2c);
      pbVar20 = (byte *)(uint)(bVar115 & 0xf);
    }
    return (code *)(uint)bVar115;
  case 0xd9:
  case 0xdd:
    puVar97[1] = (uint)in_AX;
    *puVar97 = 0x1000;
    puVar97[-1] = (uint)in_AX;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 0xda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xde:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe0:
    goto switchD_1000_04fc_caseD_e0;
  case 0xe1:
    *pbVar20 = *pbVar20 + bVar113;
    *(int *)(pbVar20 + (int)pbVar102) = *(int *)(pbVar20 + (int)pbVar102) + 1;
    cRam00018250 = cRam00018250 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe8:
    goto switchD_1000_04fc_caseD_e8;
  case 0xe9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xea:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xeb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xec:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xed:
    goto switchD_1000_04fc_caseD_ed;
  case 0xee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf3:
    in_AX = in_AX + 0x6b1;
    if (((uint)in_AX & 2) == 0) {
      in_AX = (code *)CONCAT11((byte)((uint)in_AX >> 8) ^ bVar113,(char)in_AX);
    }
    if (((uint)in_AX & 4) == 0) {
      in_AX = (code *)((uint)in_AX ^ 0x200);
    }
    if (((uint)in_AX & 8) == 0) {
      in_AX = (code *)((uint)in_AX ^ 0xa00);
    }
    uVar12 = 4;
    if (((uint)in_AX & 0x10) != 0) goto LAB_1000_0a05;
code_r0x00010a03:
    in_AX = (code *)CONCAT11((byte)((uint)in_AX >> 8) ^ (byte)uVar12,(char)in_AX);
LAB_1000_0a05:
    if (((uint)in_AX & 0x40) == 0) {
      in_AX = (code *)((uint)in_AX ^ 0x800);
    }
    if (((uint)in_AX & 0x80) == 0) {
      in_AX = (code *)((uint)(byte)((byte)((uint)in_AX >> 8) ^ 5) << 8);
    }
    bVar115 = *(byte *)0x56c;
    bVar9 = (byte)((uint)in_AX >> 8);
    if ((bVar115 & 1) == 0) {
      bVar9 = bVar9 ^ 1;
    }
    if ((bVar115 & 2) == 0) {
      bVar9 = bVar9 ^ 9;
    }
    iVar15 = CONCAT11(bVar9,bVar115);
    if (*(char *)0x555 == '\x01') {
      puVar97[1] = iVar15;
      *puVar97 = 0x2e;
      uVar106 = ((undefined2 *)0x500)[1];
      pcVar14 = (code *)*(undefined2 *)0x500;
      puVar97[-1] = 0x1000;
      puVar81 = puVar97 + -2;
      puVar97[-2] = 0xa38;
      bVar115 = (*pcVar14)();
      iVar15 = (uint)(byte)((byte)((uint)*(undefined2 *)((int)puVar81 + 2) >> 8) & ~(bVar115 & 0xf))
               << 8;
    }
    bVar115 = ~(byte)((uint)iVar15 >> 8);
    return (code *)(CONCAT11(bVar115,bVar115) & 0xff0f);
  case 0xf4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf7:
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    *(code **)(pbVar20 + (int)pbVar102) = in_AX + *(int *)(pbVar20 + (int)pbVar102);
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    uVar106 = LocalDescriptorTableRegister();
    *(undefined2 *)(pbVar20 + (int)pbVar102) = uVar106;
    pbVar105[0x2f] = pbVar105[0x2f] + cVar8;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
    *pbVar20 = *pbVar20 + cVar8;
    pbVar20[(int)pbVar102] = pbVar20[(int)pbVar102] + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfa:
    goto switchD_1000_04fc_caseD_fa;
  case 0xfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)((int)puVar69 + -2) =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar109 & 1) * 0x800 | (uint)bVar116 * 0x400 |
       (uint)(bVar115 & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)(bVar114 & 1) * 0x80 |
       (uint)(bVar112 & 1) * 0x40 | (uint)(in_AF & 1) * 0x10 | (uint)(bVar110 & 1) * 4;
  puVar70 = (uint *)((int)puVar69 + -4);
  *(undefined2 *)((int)puVar69 + -4) = in_AX;
switchD_1000_04fc_caseD_9c:
  *(undefined2 *)0x580 = 0;
  *(undefined2 *)0x57e = 0;
  return (code *)*puVar70;
}



// ============================================================================
// Function: FUN_1000_0226
// Entry:    1000:0226
// Body:     1000:0005 -> 1000:3649
// Size:     3049 bytes
// Prototype: undefined __cdecl16far FUN_1000_0226()
// ============================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001048a) overlaps instruction at (ram,0x00010489)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

code * __cdecl16far FUN_1000_0226(undefined2 param_1,undefined2 param_2,code *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  char cVar10;
  byte bVar11;
  undefined1 uVar12;
  byte bVar16;
  code *in_AX;
  uint uVar13;
  byte bVar17;
  int iVar14;
  code *pcVar15;
  int iVar18;
  char cVar20;
  byte *pbVar19;
  byte bVar21;
  byte bVar22;
  byte bVar24;
  byte extraout_DH;
  byte *pbVar25;
  byte *pbVar26;
  int iVar27;
  char *pcVar28;
  char *pcVar29;
  undefined2 *puVar30;
  undefined1 *puVar31;
  undefined2 *puVar32;
  int iVar33;
  int unaff_BP;
  byte *pbVar34;
  undefined1 *puVar35;
  byte *pbVar36;
  undefined1 *puVar37;
  byte *pbVar38;
  byte *pbVar39;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte bVar40;
  undefined1 uVar41;
  bool bVar42;
  byte in_AF;
  bool bVar43;
  bool bVar44;
  code *pcVar45;
  byte in_stack_00000000;
  byte in_stack_00000001;
  byte bVar46;
  code *pcStack0008;
  code *pcStack000a;
  int iStack_ed;
  char cStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 auStack_88 [3];
  undefined1 auStack_85 [3];
  undefined1 auStack_82 [9];
  char cStack_79;
  undefined1 uStack_78;
  byte bStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_67;
  char cStack_66;
  char cStack_65;
  byte bStack_47;
  undefined1 uStack_1b;
  undefined2 *puStack_1a;
  undefined1 uStack_18;
  undefined1 auStack_e [6];
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined1 uStack_4;
  undefined1 uStack_3;
  byte bStack_2;
  byte bStack_1;
  int *piVar23;
  
  bVar42 = false;
  uVar5 = uStack_8;
  uVar9 = uStack_6;
code_r0x00010226:
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  puVar31 = (undefined1 *)((uint)(byte)param_2 << 8);
  switchD_1000:04fc::caseD_72._0_1_ = (char)in_AX;
  uVar5 = uStack_8;
  uVar9 = uStack_6;
  uStack_8._1_1_ = uVar41;
  uStack_6._1_1_ = uVar12;
code_r0x0001022d:
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  *(undefined2 *)0x580 = 0x1000;
  *(undefined2 *)0x57e = 0xb0a;
  uVar5 = uStack_8;
  uVar9 = uStack_6;
  if ((char)switchD_1000:04fc::caseD_72 == '\0') {
    bStack_2 = 0x45;
    bStack_1 = 2;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
    FUN_1000_1f85();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    switchD_1000:04fc::caseD_72._0_1_ = '\x01';
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    if (*(char *)0x555 == '\x01') {
      do {
        uStack_8 = uVar5;
        uVar41 = uStack_8._1_1_;
        bStack_2 = (byte)unaff_BP;
        bStack_1 = (byte)((uint)unaff_BP >> 8);
        uStack_4 = 0;
        uStack_3 = 0x10;
        uStack_6 = 0x25a;
        uStack_6._1_1_ = 2;
        uVar5 = uStack_8;
        uStack_8._1_1_ = uVar41;
        uVar13 = (*(code *)*(undefined2 *)0x500)();
        uVar9 = uStack_6;
        uVar5 = uStack_8;
        unaff_BP = CONCAT11(bStack_1,bStack_2);
        uVar41 = uStack_8._1_1_;
        uVar12 = uStack_6._1_1_;
      } while ((uVar13 & 0x40) != 0);
    }
  }
  uStack_6._1_1_ = uVar12;
  uStack_8._1_1_ = uVar41;
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  if (*(char *)0x558 == '\0') {
    puVar35 = (undefined1 *)0x16a;
    iVar18 = 0x10;
  }
  else {
    puVar35 = (undefined1 *)0x17a;
    iVar18 = 0x20;
  }
  puVar37 = (undefined1 *)0x2620;
  for (; iVar18 != 0; iVar18 = iVar18 + -1) {
    puVar4 = puVar37;
    puVar37 = puVar37 + (uint)bVar42 * -2 + 1;
    puVar2 = puVar35;
    puVar35 = puVar35 + (uint)bVar42 * -2 + 1;
    *puVar4 = *puVar2;
  }
  bStack_2 = 0;
  bStack_1 = 0x10;
  uStack_4 = 0x8c;
  uStack_3 = 2;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0;
  bStack_1 = 0x10;
  uStack_4 = 0x93;
  uStack_3 = 2;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0;
  bStack_1 = 0x10;
  uStack_4 = 0x99;
  uStack_3 = 2;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x597)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  param_2._0_1_ = (byte)((uint)puVar31 >> 8);
  bStack_2 = 0x9c;
  bStack_1 = 2;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_0d22();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0x9f;
  bStack_1 = 2;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_0d78();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
    bStack_2 = 0xaa;
    bStack_1 = 2;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    switchD_1000:04fc::caseD_69();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    switchD_1000:04fc::caseD_72._0_1_ = '\x01';
    bStack_2 = 0xb7;
    bStack_1 = 2;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xbe;
    bStack_1 = 2;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    in_stack_00000000 = 0xc1;
    in_stack_00000001 = 2;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0d22();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xc4;
    bStack_1 = 2;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0d78();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
  }
LAB_1000_02c4:
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  bStack_2 = 0xcd;
  bStack_1 = 2;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_080e();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  param_2._0_1_ = (byte)((uint)puVar31 >> 8);
  bStack_2 = 0xd6;
  bStack_1 = 2;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_080e();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  if (*(char *)0x558 == '\0') {
    puVar35 = (undefined1 *)0x2640;
    puVar37 = (undefined1 *)0xa400;
    for (iVar18 = 0x801; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar4 = puVar37;
      puVar37 = puVar37 + (uint)bVar42 * -2 + 1;
      puVar2 = puVar35;
      puVar35 = puVar35 + (uint)bVar42 * -2 + 1;
      *puVar4 = *puVar2;
    }
  }
  else {
    bStack_2 = 0;
    bStack_1 = 3;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_1c44();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
  }
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  bStack_2 = 9;
  bStack_1 = 3;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_080e();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0x1b;
  bStack_1 = 3;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_088b();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0x1e;
  bStack_1 = 3;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_0d49();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0;
  bStack_1 = 0x10;
  uStack_4 = 0x25;
  uStack_3 = 3;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  puVar35 = (undefined1 *)0x3e40;
  puVar37 = (undefined1 *)0x3e41;
  *(undefined1 *)0x3e40 = 0xff;
  for (iVar18 = 0x400; iVar18 != 0; iVar18 = iVar18 + -1) {
    puVar4 = puVar37;
    puVar37 = puVar37 + (uint)bVar42 * -2 + 1;
    puVar2 = puVar35;
    puVar35 = puVar35 + (uint)bVar42 * -2 + 1;
    *puVar4 = *puVar2;
  }
switchD_1000_04fc_caseD_2f:
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  param_2._0_1_ = (byte)((uint)puVar31 >> 8);
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_0d25();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  pbVar38 = (byte *)0x4640;
  pbVar39 = (byte *)0x3000;
  pbVar36 = (byte *)0x1cb;
  uVar41 = uStack_8._1_1_;
  uVar12 = uStack_6._1_1_;
LAB_1000_0349:
  uStack_6._1_1_ = uVar12;
  uStack_8._1_1_ = uVar41;
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  pbVar19 = pbVar36;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_0b90();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  pbVar36 = pbVar19 + 1;
  uStack_8 = uVar5;
  uStack_6 = uVar9;
  if (*pbVar19 == 0) {
    *(undefined1 *)0x562 = 0x12;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
  }
  else {
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    cVar10 = (*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    pbVar26 = (byte *)0x3e40;
    if ((*(char *)0x558 == '\0') && (cVar10 != '\x01')) {
      pbVar26 = (byte *)0x4040;
    }
    iVar18 = 0x200;
    pbVar39 = pbVar38;
    do {
      bVar11 = *pbVar39;
      if (bVar11 == *pbVar26) {
        bVar11 = 0;
      }
      *pbVar26 = bVar11;
      pbVar26 = pbVar26 + 1;
      pbVar39 = pbVar39 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    bStack_2 = 0xc4;
    bStack_1 = 3;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    pbVar38 = (byte *)0x1000;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    if (!(bool)((byte)((uint)pbVar39 >> 8) & 1)) goto LAB_1000_03f0;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    in_stack_00000000 = 0xed;
    in_stack_00000001 = 3;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
  }
LAB_1000_0411:
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  cVar20 = (char)((uint)pbVar39 >> 8);
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  cVar10 = FUN_1000_0a4a();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uVar12 = uStack_6._1_1_;
  if ((cVar10 == '\0') &&
     (uStack_8 = uVar5, uStack_6 = uVar9, uVar5 = uStack_8, uStack_8._1_1_ = uVar41,
     uVar9 = uStack_6, uStack_6._1_1_ = uVar12, cVar10 = FUN_1000_0ba7(), uVar12 = uStack_6._1_1_,
     uVar41 = uStack_8._1_1_, uVar5 = uStack_8, uVar9 = uStack_6, cVar10 != '\x01')) {
    pbVar39 = (byte *)((uint)(byte)(cVar20 - 1U) << 8);
    if ((byte)(cVar20 - 1U) != 0) goto LAB_1000_0349;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0b4a();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
  }
LAB_1000_0434:
  uStack_6._1_1_ = uVar12;
  uStack_8._1_1_ = uVar41;
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0x96;
  bStack_1 = 4;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_0d25();
LAB_1000_0496:
  UINT_1000_01fb._1_1_ = 0;
  bVar44 = bVar42;
LAB_1000_049c:
  puVar30 = (undefined2 *)CONCAT11(in_stack_00000001,in_stack_00000000);
  bVar40 = 0;
  UINT_1000_01fd._0_1_ = 0;
  pbVar39 = (byte *)0xbb8;
  bStack_2 = 3;
  bStack_1 = UINT_1000_01fb._1_1_;
  pbVar38 = (byte *)0x8222;
  uStack_4 = 0x22;
  uStack_3 = 0x82;
  unaff_BP = 0x2e;
  uStack_6 = 0x1000;
  uStack_6._1_1_ = 0x10;
  uStack_8 = 0x4bf;
  uStack_8._1_1_ = 4;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  param_2._0_1_ = 0xc4;
  param_2._1_1_ = 4;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  pcVar45 = (code *)FUN_1000_06bd();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  iVar18 = (int)((ulong)pcVar45 >> 0x10);
  in_AX = (code *)pcVar45;
  param_2._0_1_ = (byte)pcVar45;
  bVar16 = (byte)param_2;
  param_2._1_1_ = (byte)((ulong)pcVar45 >> 8);
  bVar11 = in_AF & 1;
  puVar31 = (undefined1 *)((int)in_AX << 8);
switchD_1000_04fc_caseD_ed:
  UINT_1000_01fb._1_1_ = (byte)param_2 & 0x7f;
  UINT_1000_01fd._0_1_ = -1;
  bVar42 = bVar44 != false;
  in_AF = bVar11 != 0;
  uStack_8 = uVar5;
  uStack_6 = uVar9;
  if ((bVar40 & 1) != 0) {
    param_2._0_1_ = 0xd9;
    param_2._1_1_ = 4;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    switchD_1000:04fc::caseD_69();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    param_2._0_1_ = 0xe0;
    param_2._1_1_ = 4;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    param_2._0_1_ = 0xe7;
    param_2._1_1_ = 4;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    _pcStack0008 = (code *)CONCAT22(pcStack000a,(code *)0x4ea);
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0d22();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xed;
    bStack_1 = 4;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0d78();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    puVar31 = (undefined1 *)((uint)(byte)param_2 << 8);
    goto LAB_1000_02c4;
  }
  if ((byte)param_2 == 0xff) goto LAB_1000_0496;
  uVar41 = false;
  pbVar26 = (byte *)(((uint)in_AX & 0xff) * 2);
  bVar43 = ((ulong)pcVar45 & 0xff) == 0;
  bVar24 = (byte)((ulong)pcVar45 >> 0x10);
  bVar17 = (byte)((ulong)pcVar45 >> 0x18);
  bVar21 = (byte)pbVar39;
  cVar10 = (char)((uint)pbVar26 >> 8);
  bVar22 = (byte)unaff_DS;
  bVar46 = (byte)((uint)unaff_DS >> 8);
  pbVar25 = pbVar26;
  iVar33 = unaff_BP;
  pbVar34 = pbVar36;
  switch((uint)in_AX & 0xff) {
  case 0:
    param_2._0_1_ = 0x19;
    param_2._1_1_ = 5;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_07c4();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    in_AX = (code *)0x1;
    break;
  case 1:
    param_2._0_1_ = 0x50;
    param_2._1_1_ = 5;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_07c4();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    pbVar38 = (byte *)0x8619;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
  case 0x7a:
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    pbVar26 = (byte *)0x0;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
switchD_1000_04fc_caseD_84:
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    pbVar38[0x2e] = pbVar38[0x2e] + (char)((uint)pbVar26 >> 8);
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    in_AX = (code *)0x3;
    break;
  case 2:
    goto switchD_1000_04fc_caseD_2;
  case 3:
  case 0xf:
  case 0x11:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x31:
  case 0x51:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0xac:
    goto entry;
  case 4:
  case 7:
    *pbVar36 = *pbVar36 + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    out(iVar18,3);
  case 6:
    out(iVar18 + 1,0);
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_21c8();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    param_2._0_1_ = 0x3a;
    param_2._1_1_ = 0x20;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    pcVar15 = (code *)FUN_1000_2042();
    return pcVar15;
  case 8:
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x7e:
  case 0x97:
  case 0xb0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
  case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
  case 0x1b:
    *(char *)0x8295 = *(char *)0x8295 + bVar24;
    goto code_r0x000100f3;
  case 0x15:
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
    goto switchD_1000_04fc_caseD_22;
  case 0x25:
    goto switchD_1000_04fc_caseD_25;
  case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
    goto switchD_1000_04fc_caseD_28;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x32:
    goto switchD_1000_04fc_caseD_29;
  case 0x2d:
  case 0x2e:
  case 0x35:
  case 0xef:
    goto switchD_1000_04fc_caseD_2d;
  case 0x2f:
  case 0x33:
    goto switchD_1000_04fc_caseD_2f;
  case 0x30:
  case 0x34:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x36:
    puVar30 = &param_2;
    puVar32 = &param_2;
    param_2._0_1_ = 0x2e;
    param_2._1_1_ = 0;
    puVar6 = (undefined2 *)0x2e;
    cVar10 = '\x0f';
    do {
      puVar6 = puVar6 + -1;
      puVar30 = puVar30 + -1;
      *puVar30 = *puVar6;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    _uStack_1b = CONCAT21(&param_2,uStack_1b);
    puVar30 = (undefined2 *)&stack0xc172;
    cVar10 = '\a';
    do {
      puVar32 = puVar32 + -1;
      puVar30 = puVar30 + -1;
      *puVar30 = *puVar32;
      cVar10 = cVar10 + -1;
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
    } while ('\0' < cVar10);
code_r0x0001070e:
    uStack_6._1_1_ = uVar12;
    uStack_8._1_1_ = uVar41;
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    bVar11 = FUN_1000_0a4a();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    uStack_8 = uVar5;
    uStack_6 = uVar9;
    if (bVar11 != 0) {
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0772();
      if ((bVar11 & 2) != 0) {
        return (code *)0xff;
      }
      if ((*(byte *)0x575 & 8) == 0) {
        return (code *)(extraout_DH | 0x80);
      }
      return (code *)(uint)extraout_DH;
    }
    bVar42 = false;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    if (((char)UINT_1000_01fd == '\0') &&
       (uVar5 = uStack_8, uStack_8._1_1_ = uVar41, uVar9 = uStack_6, uStack_6._1_1_ = uVar12,
       pcVar15 = (code *)FUN_1000_0b40(), uVar12 = uStack_6._1_1_, uVar41 = uStack_8._1_1_,
       uVar5 = uStack_8, uVar9 = uStack_6, !bVar42)) {
      return pcVar15;
    }
LAB_1000_06f5:
    uStack_6._1_1_ = uVar12;
    uStack_8._1_1_ = uVar41;
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_065d();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    uStack_8 = uVar5;
    uStack_6 = uVar9;
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000106ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      pcVar15 = (code *)(*(code *)(ulong)*(uint *)0x58b)();
      return pcVar15;
    }
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    bVar11 = FUN_1000_09e0();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
    if ((bool)(bVar11 & 1)) {
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      FUN_1000_0772();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
    }
    else {
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      if (!(bool)(bVar11 >> 1 & 1)) goto code_r0x0001070e;
      FUN_1000_0772();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
    }
    uStack_6._1_1_ = uVar12;
    uStack_8._1_1_ = uVar41;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0772();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    do {
      uStack_6._1_1_ = uVar12;
      uStack_8._1_1_ = uVar41;
      uStack_6 = uVar9;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_065d();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000106d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar41 = uStack_8._1_1_;
        uStack_8 = uVar5;
        uVar12 = uStack_6._1_1_;
        uStack_6 = uVar9;
        uVar5 = uStack_8;
        uStack_8._1_1_ = uVar41;
        uVar9 = uStack_6;
        uStack_6._1_1_ = uVar12;
        pcVar15 = (code *)(*(code *)(ulong)*(uint *)0x58b)();
        return pcVar15;
      }
LAB_1000_06d6:
      uStack_6 = uVar9;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0b4a();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      uVar41 = uStack_8._1_1_;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uStack_6 = uVar9;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      cVar10 = FUN_1000_09e0();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
    } while ((cVar10 != '\0') ||
            (uStack_8 = uVar5, uStack_6 = uVar9, uVar5 = uStack_8, uStack_8._1_1_ = uVar41,
            uVar9 = uStack_6, uStack_6._1_1_ = uVar12, cVar10 = FUN_1000_0a4a(),
            uVar12 = uStack_6._1_1_, uVar41 = uStack_8._1_1_, uVar5 = uStack_8, uVar9 = uStack_6,
            cVar10 != '\0'));
    if ((char)UINT_1000_01fd == '\0') {
      uStack_8._1_1_ = uVar41;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0b90();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
    }
    goto LAB_1000_06f5;
  case 0x37:
  case 0x38:
  case 0xd7:
    break;
  case 0x39:
  case 0x3c:
  case 0x3f:
  case 0x42:
  case 0x45:
  case 0x48:
  case 0x4b:
  case 0x4e:
    goto switchD_1000_04fc_caseD_39;
  default:
    goto switchD_1000_04fc_caseD_3a;
  case 0x52:
    goto switchD_1000_04fc_caseD_52;
  case 0x5a:
    goto switchD_1000_04fc_caseD_5a;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0xa5:
    goto switchD_1000_04fc_caseD_5c;
  case 0x5f:
  case 0x78:
    pcVar45 = (code *)CONCAT22(CONCAT11(bVar17,bVar24 - pbVar19[0x74]),in_AX);
    goto switchD_1000_04fc_caseD_5a;
  case 0x60:
    *(char *)0x8224 = *(char *)0x8224 + bVar17;
    goto code_r0x00010a03;
  case 0x61:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x62:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 100:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
    in_AX = in_AX + -1;
    goto switchD_1000_04fc_caseD_28;
  case 0x66:
    pbVar38 = (byte *)0x444;
    if (pbVar39 != (byte *)0x1) {
      pbVar26[0x444] = pbVar26[0x444] + (byte)param_2;
                    /* WARNING: Could not recover jumptable at 0x00012e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      pcVar15 = (code *)(*in_AX)();
      return pcVar15;
    }
    *(int *)(pbVar26 + (int)pbVar36) = *(int *)(pbVar26 + (int)pbVar36) + 1;
    pbVar39 = (byte *)0x0;
  case 0xf9:
    pbVar38 = (byte *)((int)pbVar38 * 2);
    pbVar39 = pbVar39 + -1;
LAB_1000_2e0c:
    *pbVar26 = *pbVar26 + (char)pbVar26;
    pbVar38[0x2e] = pbVar38[0x2e] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + 1;
    *(int *)(pbVar26 + (int)pbVar36 + -0xf1) = *(int *)(pbVar26 + (int)pbVar36 + -0xf1) + 1;
    *(char *)((int)pbVar38 * 2) = *(char *)((int)pbVar38 * 2) + bVar24;
    iVar18 = (int)pbVar38 * 4;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36];
    if (pbVar39 + -1 != (byte *)0x0 && iVar18 != 0) {
      *(char *)(iVar18 + 0x2e) = *(char *)(iVar18 + 0x2e) + (char)(pbVar39 + -1);
                    /* WARNING: Could not recover jumptable at 0x00012e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      pcVar15 = (code *)(*(code *)CONCAT11(param_2._1_1_,(byte)param_2 + 3))();
      return pcVar15;
    }
    *(int *)(pbVar26 + (int)pbVar36) = *(int *)(pbVar26 + (int)pbVar36) + 1;
    *pbVar26 = *pbVar26 + cVar10;
    *(char *)(iVar18 + 0x2e) = *(char *)(iVar18 + 0x2e) + (byte)param_2 + 3;
    *pbVar26 = *pbVar26 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x67:
    goto switchD_1000_04fc_caseD_67;
  case 0x68:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x69:
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    DAT_1000_0e22 = (undefined1 *)register0x00000010;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x5ab)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    param_2._0_1_ = 0x41;
    param_2._1_1_ = 0xe;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0d22();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
    if (*(char *)0x558 == '\0') {
      DAT_1000_0e1e = 0x5968;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      FUN_1000_0867();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      DAT_1000_0e20 = 0x7c90;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0867();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      uStack_8._1_1_ = uVar41;
      uStack_6._1_1_ = uVar12;
    }
    else {
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      FUN_1000_0867();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      uVar41 = uStack_8._1_1_;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uStack_6 = uVar9;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_1c44();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      DAT_1000_0e1e = 0x3640;
      uVar41 = uStack_8._1_1_;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uStack_6 = uVar9;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0867();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      bStack_2 = 0x7d;
      bStack_1 = 0xe;
      uVar41 = uStack_8._1_1_;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uStack_6 = uVar9;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_1c44();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      DAT_1000_0e20 = 0x5580;
    }
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    bStack_2 = 0xb5;
    bStack_1 = 0xe;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0f7b();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    if (*(char *)0x558 != '\0') {
      bStack_2 = 0xef;
      bStack_1 = 0xe;
      uVar41 = uStack_8._1_1_;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uStack_6 = uVar9;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0fdc();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      bStack_2 = 0xf2;
      bStack_1 = 0xe;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0feb();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      bStack_2 = 0xf5;
      bStack_1 = 0xe;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_0ffa();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      uStack_8._1_1_ = uVar41;
      uStack_6._1_1_ = uVar12;
      goto LAB_1000_0ef5;
    }
    goto code_r0x00010ec1;
  case 0x6a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6c:
    goto LAB_1000_0585;
  case 0x6d:
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x500)();
    return pcStack000a;
  case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
    goto switchD_1000_04fc_caseD_e0;
  case 0x70:
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + 1;
    *pbVar26 = *pbVar26 | 0xfe;
    *(char *)0xff03 = *(char *)0xff03 + bVar24;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x71:
  case 0x79:
  case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
  case 0xaa:
    goto code_r0x0001020d;
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
    unaff_DS = (undefined2)((ulong)*(byte **)(pbVar19 + 0x2f) >> 0x10);
    pbVar36 = (byte *)*(byte **)(pbVar19 + 0x2f);
    uVar12 = in(0x32);
    in_AX = (code *)CONCAT11(param_2._1_1_,uVar12);
    *(int *)(pbVar36 + -0x7f9) = *(int *)(pbVar36 + -0x7f9) + -1;
    pbVar19 = (byte *)0x0;
    if (pbVar39 == (byte *)0x0) goto code_r0x00011d78;
    *(undefined2 *)0x1c20 = in_AX;
    goto code_r0x00011d47;
  case 0x76:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x77:
    goto switchD_1000_04fc_caseD_77;
  case 0x7b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
    goto switchD_1000_04fc_caseD_7d;
  case 0x7f:
    goto switchD_1000_04fc_caseD_9a;
  case 0x80:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
    goto switchD_1000_04fc_caseD_84;
  case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x86:
  case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x87:
    LOCK();
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    UNLOCK();
    goto code_r0x0001017d;
  case 0x88:
    param_2._0_1_ = 0xbe;
    param_2._1_1_ = 0x20;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_1c44();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    param_2._0_1_ = 0xde;
    param_2._1_1_ = 0x20;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    pcVar15 = (code *)(*(code *)*(undefined2 *)0x508)();
    return pcVar15;
  case 0x89:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8b:
    pbVar3 = pbVar26 + (int)pbVar36;
    *pbVar3 = *pbVar3 << 4 | *pbVar3 >> 4;
    goto code_r0x0001016d;
  case 0x8c:
    goto switchD_1000_04fc_caseD_8c;
  case 0x8d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8e:
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    *pbVar26 = *pbVar26 + (char)pbVar26;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8f:
  case 0xcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x90:
  case 0xd0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x91:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x92:
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x93:
  case 0xf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x94:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
    goto switchD_1000_04fc_caseD_96;
  case 0x98:
  case 0xb1:
  case 0xcb:
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    param_2._0_1_ = 0x23;
    param_2._1_1_ = 8;
    pbRam0001080a = pbVar26;
    uRam0001080c = unaff_DS;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x59f)();
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    param_2._0_1_ = 0x36;
    param_2._1_1_ = 8;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    pcVar15 = (code *)(*pcRam000105cf)();
    return pcVar15;
  case 0x99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9a:
  case 0xe3:
    goto switchD_1000_04fc_caseD_9a;
  case 0x9b:
  case 0x9e:
  case 0xad:
  case 0xe4:
    goto switchD_1000_04fc_caseD_9b;
  case 0x9c:
  case 0xae:
  case 0xe5:
    goto switchD_1000_04fc_caseD_9c;
  case 0x9d:
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    pcVar15 = (code *)(*(code *)*(undefined2 *)0x508)();
    return pcVar15;
  case 0x9f:
    in(iVar18);
    goto code_r0x00010598;
  case 0xa0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa2:
    goto switchD_1000_04fc_caseD_a2;
  case 0xa3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa4:
    *(byte *)0x8222 = *(byte *)0x8222 | (byte)param_2;
    param_2._0_1_ = bVar22;
    param_2._1_1_ = bVar46;
    while (uStack_6 = uVar9, uStack_8 = uVar5, uVar12 = uStack_6._1_1_, uVar41 = uStack_8._1_1_,
          pbVar39 = pbVar39 + -1, pbVar39 != (byte *)0x0) {
      *pbVar38 = *pbVar36;
      pbVar38 = pbVar38 + 1;
      pbVar36 = pbVar36 + 1;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      in_AX = (code *)(*(code *)*(undefined2 *)0x508)();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      uStack_8._1_1_ = uVar41;
      uStack_6._1_1_ = uVar12;
    }
    return in_AX;
  case 0xa6:
    if (pbVar39 == (byte *)0x1 || bVar43) {
      pbVar19 = pbVar39 + -2;
      if (pbVar19 != (byte *)0x0 && !bVar43) {
        pcVar15 = (code *)CONCAT11(param_2._1_1_,pbVar26[0x1c24]);
        while( true ) {
          pbVar39 = pbVar38 + (uint)bVar42 * -2 + 1;
          *pbVar38 = (byte)pcVar15;
          pbVar19 = pbVar19 + -1;
          if (pbVar19 == (byte *)0x0) break;
          pbVar3 = pbVar36;
          pbVar36 = pbVar36 + (uint)bVar42 * -2 + 1;
          bVar11 = *pbVar3;
          uVar41 = (undefined1)((uint)pbVar26 >> 8);
          pbVar38 = pbVar39 + (uint)bVar42 * -2 + 1;
          *pbVar39 = *(byte *)(CONCAT11(uVar41,((char)(bVar11 << 1) < '\0') << 1 |
                                               (char)(bVar11 << 3) < '\0') + 0x1c24);
          pbVar26 = (byte *)CONCAT11(uVar41,((char)(bVar11 << 5) < '\0') << 1 |
                                            (char)(bVar11 << 7) < '\0');
          pcVar15 = (code *)(uint)pbVar26[0x1c24];
        }
        return pcVar15;
      }
      in_AX = in_AX + *(int *)(pbVar26 + (int)pbVar36 + 0x7cb);
      goto LAB_1000_1d7d;
    }
code_r0x00011d47:
    pbVar19 = (byte *)((int)in_AX * (int)pbVar26);
    iVar18 = 0x6070;
    bVar11 = 6;
    pbRam00011c20 = pbVar19;
    do {
      bVar40 = 0;
      bVar16 = pbVar36[(int)pbRam00011c20];
      if ((char)(bVar16 << 1) < '\0') {
        bVar40 = (byte)iVar18;
      }
      pbVar36 = pbVar36 + (int)pbRam00011c20 + -(int)pbRam00011c20;
      if ((char)(*pbVar36 << 1) < '\0') {
        bVar40 = bVar40 | (byte)((uint)iVar18 >> 8);
      }
      pbVar26 = (byte *)CONCAT11(bVar11,bVar40);
      uVar41 = (char)(bVar16 << 3) < '\0';
      in_AX = (code *)CONCAT11(*pbVar36 << 2,bVar16 << 4);
code_r0x00011d78:
      if ((bool)uVar41) {
        pbVar26 = (byte *)((uint)pbVar26 | 7);
      }
LAB_1000_1d7d:
      cVar10 = (char)((uint)in_AX >> 8);
      if ((char)(cVar10 << 1) < '\0') {
        bVar11 = (byte)((uint)pbVar26 >> 8);
        pbVar26 = (byte *)CONCAT11(bVar11,(byte)pbVar26 | bVar11);
      }
      bVar11 = (byte)((uint)pbVar26 >> 8);
      pbVar39 = pbVar38 + (uint)bVar42 * -2 + 1;
      *pbVar38 = (byte)pbVar26;
      bVar16 = 0;
      if ((char)((char)in_AX << 1) < '\0') {
        bVar16 = (byte)iVar18;
      }
      if ((char)(cVar10 << 3) < '\0') {
        bVar16 = bVar16 | (byte)((uint)iVar18 >> 8);
      }
      if ((char)((char)in_AX << 3) < '\0') {
        bVar16 = bVar16 | 7;
      }
      if ((int)((uint)(byte)(cVar10 << 5) << 8) < 0) {
        bVar16 = bVar16 | bVar11;
      }
      pbVar38 = pbVar39 + (uint)bVar42 * -2 + 1;
      *pbVar39 = bVar16;
      pbVar36 = pbVar36 + 1;
      pbVar19 = pbVar19 + -1;
    } while (pbVar19 != (byte *)0x0);
    return (code *)(uint)bVar16;
  case 0xa7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa8:
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    unaff_DS = CONCAT11(in_stack_00000001,in_stack_00000000);
    goto LAB_1000_2e0c;
  case 0xa9:
    bRam00018222 = (byte)param_2;
    *(int *)(pbVar26 + (int)pbVar36 + 0x5b3e) = *(int *)(pbVar26 + (int)pbVar36 + 0x5b3e) + 1;
    goto LAB_1000_06d6;
  case 0xab:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xaf:
code_r0x00010ec1:
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    bStack_2 = 199;
    bStack_1 = 0xe;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0fbe();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xcd;
    bStack_1 = 0xe;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0fbe();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xd3;
    bStack_1 = 0xe;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0fbe();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xd9;
    bStack_1 = 0xe;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0fbe();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xdf;
    bStack_1 = 0xe;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0fcd();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    bStack_2 = 0xe5;
    bStack_1 = 0xe;
    uVar41 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    FUN_1000_0fcd();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
LAB_1000_0ef5:
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
    if (*(char *)0x558 == '\0') {
      bStack_2 = 0x33;
      bStack_1 = 0xf;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      FUN_1000_1009();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      bStack_2 = 0x39;
      bStack_1 = 0xf;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_1009();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      bStack_2 = 0x3f;
      bStack_1 = 0xf;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_1009();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      bStack_2 = 0x45;
      bStack_1 = 0xf;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_1009();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
        bStack_2 = 0x59;
        bStack_1 = 0xf;
        uVar5 = uStack_8;
        uStack_8._1_1_ = uVar41;
        uVar9 = uStack_6;
        uStack_6._1_1_ = uVar12;
        FUN_1000_0867();
        uVar12 = uStack_6._1_1_;
        uVar41 = uStack_8._1_1_;
      }
    }
    else {
      bStack_2 = 4;
      bStack_1 = 0xf;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
      FUN_1000_1018();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      bStack_2 = 7;
      bStack_1 = 0xf;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      FUN_1000_1027();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
        bStack_2 = 0x1b;
        bStack_1 = 0xf;
        uVar5 = uStack_8;
        uStack_8._1_1_ = uVar41;
        uVar9 = uStack_6;
        uStack_6._1_1_ = uVar12;
        FUN_1000_0867();
        uVar12 = uStack_6._1_1_;
        uVar41 = uStack_8._1_1_;
        bStack_2 = 0x26;
        bStack_1 = 0xf;
        uVar5 = uStack_8;
        uStack_8._1_1_ = uVar41;
        uVar9 = uStack_6;
        uStack_6._1_1_ = uVar12;
        FUN_1000_1c44();
        uVar12 = uStack_6._1_1_;
        uVar41 = uStack_8._1_1_;
      }
    }
    uStack_6._1_1_ = uVar12;
    uStack_8._1_1_ = uVar41;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    if ((char)switchD_1000:04fc::caseD_72 != '\x01') {
      DAT_1000_0e24 = 2000;
      bStack_2 = 0x71;
      bStack_1 = 0xf;
      uStack_8._1_1_ = uVar41;
      uStack_6._1_1_ = uVar12;
      FUN_1000_106e();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
    }
    uStack_6._1_1_ = uVar12;
    uStack_8._1_1_ = uVar41;
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    DAT_1000_0e24 = 1000;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    pcVar15 = (code *)FUN_1000_1036();
    return pcVar15;
  case 0xb2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb3:
    pcVar15 = in_AX + -0x14f;
    if (((uint)pcVar15 & 0x40) == 0) {
      pcVar15 = (code *)CONCAT11((byte)((uint)pcVar15 >> 8) & bVar21,(char)pcVar15);
    }
    if (((uint)pcVar15 & 0x80) == 0) {
      pcVar15 = (code *)((uint)((byte)((uint)pcVar15 >> 8) & 0xfd) << 8);
    }
    param_2._1_1_ = (byte)((uint)pcVar15 >> 8);
    if ((*(byte *)0x56c & 0x80) == 0) {
      param_2._1_1_ = param_2._1_1_ & 0xfe;
    }
    param_2._0_1_ = *(byte *)0x573;
    if (((byte)param_2 & 0x40) == 0) {
      param_2._1_1_ = param_2._1_1_ & 0xfd;
    }
    if (*(char *)0x555 == '\x01') {
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      bVar11 = (*(code *)*(undefined2 *)0x500)();
      param_2._1_1_ = param_2._1_1_ & ~(bVar11 >> 6);
    }
    return (code *)((byte)~param_2._1_1_ & 0xff03);
  case 0xb4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb6:
    *(int *)(pbVar19 + 0x55) = *(int *)(pbVar19 + 0x55) + iVar18;
    puVar31 = (undefined1 *)((int)&param_2 + 1);
    pbVar25 = pbVar26 + 1;
    pbVar26[-0x7ddd] = pbVar26[-0x7ddd] + (byte)param_2;
  case 0xd4:
    *(int *)(pbVar19 + 0x55) = *(int *)(pbVar19 + 0x55) + iVar18;
    in_stack_00000000 = (byte)pbVar25;
    in_stack_00000001 = (byte)((uint)pbVar25 >> 8);
    pbVar3 = pbVar25 + -0x7dde;
    bVar11 = *pbVar3;
    *pbVar3 = *pbVar3 + (byte)param_2;
    pbVar26 = pbVar25;
    if (!CARRY1(bVar11,(byte)param_2)) {
code_r0x000101a9:
      bVar16 = (char)in_AX + 0x4a;
      bVar11 = 9 < (bVar16 & 0xf) | in_AF;
      bVar16 = bVar16 + bVar11 * -6 & 0xf;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + bVar16;
      bVar16 = bVar16 + 4;
      in_AF = 9 < (bVar16 & 0xf) | bVar11;
      bVar16 = bVar16 + in_AF * -6;
      *pbVar36 = *pbVar36 + (bVar16 & 0xf);
      in_AX = (code *)((CONCAT11(((char)((uint)in_AX >> 8) - bVar11) - in_AF,bVar16) & 0xff0f) +
                      0xa0c);
      cVar10 = (char)in_AX;
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      *(code **)(pbVar19 + 0x2f) = in_AX + *(int *)(pbVar19 + 0x2f);
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      *(int *)(pbVar26 + (int)pbVar36) = *(int *)(pbVar26 + (int)pbVar36) + 1;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
switchD_1000_04fc_caseD_3a:
      cVar10 = (char)in_AX;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
      goto code_r0x0001020d;
    }
    pbVar19[0x2f] = pbVar19[0x2f] + bVar21;
    goto code_r0x0001021d;
  case 0xb7:
  case 0xd5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb9:
    *(char *)0x8250 = *(char *)0x8250 + cVar10;
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    in_AX = (code *)0x2;
    break;
  case 0xba:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbc:
    (pbVar26 + (int)pbVar36)[0x49] = (pbVar26 + (int)pbVar36)[0x49] & bVar21;
    pbVar26[0x48] = pbVar26[0x48] & bVar21 - 1;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & (byte)param_2;
    bVar42 = 9 < ((byte)param_2 & 0xf) || (bool)in_AF;
    param_2._0_1_ = (byte)param_2 + bVar42 * -6;
    bVar11 = 0x9f < (byte)param_2 | bVar42 * ((byte)param_2 < 6);
    param_2._0_1_ = (byte)param_2 + bVar11 * -0x60;
    bVar42 = 9 < ((byte)param_2 & 0xf) || bVar42;
    param_2._0_1_ = (byte)param_2 + bVar42 * -6;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & param_2._1_1_;
    *(byte *)0x8262 = *(byte *)0x8262 & bVar21;
    pbVar38 = pbVar26 + -1;
    pbVar26[-0x7d92] = pbVar26[-0x7d92] & (byte)pbVar38;
    iVar33 = CONCAT11(param_2._1_1_,
                      (byte)param_2 +
                      (0x9f < (byte)param_2 | bVar11 | bVar42 * ((byte)param_2 < 6)) * -0x60) + -2;
    bStack_2 = (byte)(iVar18 + 1);
    bVar40 = (byte)((uint)iVar33 >> 8);
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    bVar16 = (byte)iVar33;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar16;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar11 = 0x9f < bVar16 | bVar42 * (bVar16 < 6);
    bVar16 = bVar16 + bVar11 * -0x60;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar16 = bVar16 + (0x9f < bVar16 | bVar11 | bVar42 * (bVar16 < 6)) * -0x60;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    pbVar38[(int)pbVar36] = pbVar38[(int)pbVar36] & bVar40;
    *(byte *)0x8265 = *(byte *)0x8265 & bVar21;
    pbVar26[-0x7d8e] = pbVar26[-0x7d8e] & bVar16;
    pbVar26 = pbVar26 + 1;
    pbVar26[(int)pbVar19] = pbVar26[(int)pbVar19] & bVar40;
    pbVar26[(int)pbVar19] = pbVar26[(int)pbVar19] & bVar40;
    pbVar26[(int)pbVar19] = pbVar26[(int)pbVar19] & bVar40;
    pbVar26[(int)pbVar19] = pbVar26[(int)pbVar19] & bVar40;
    pbVar26[(int)pbVar19] = pbVar26[(int)pbVar19] & bVar40;
    pbVar36 = (byte *)CONCAT11((char)((uint)pbVar26 >> 8) * '\x02',(char)pbVar26);
    pbVar36[(int)pbVar19] = pbVar36[(int)pbVar19] & bVar40;
    pbVar36[(int)pbVar19] = pbVar36[(int)pbVar19] & bVar40;
    pbVar19[0x45] = pbVar19[0x45] & bVar16;
    bVar16 = bVar16 - 0x20;
    pbVar36[-0x7d8e] = pbVar36[-0x7d8e] & bVar16;
    pbVar38 = pbVar19 + -3;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar3 = pbVar36;
    bVar11 = *pbVar3;
    bVar17 = (byte)((uint)(pbVar39 + 2) >> 8);
    *pbVar3 = *pbVar3 + bVar17;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar16 = bVar16 + (0x9f < bVar16 | CARRY1(bVar11,bVar17) | bVar42 * (bVar16 < 6)) * -0x60;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    (pbVar36 + (int)pbVar38)[0x41] = (pbVar36 + (int)pbVar38)[0x41] & bVar21 + 3;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] + bVar40;
    pbVar36[(int)pbVar38] = pbVar36[(int)pbVar38] & bVar40;
    pbVar36[-0x7d9b] = pbVar36[-0x7d9b] & bVar16;
    pbVar36[0x52] = pbVar36[0x52] & bVar16;
    iVar33 = CONCAT11(bVar40,bVar16) + -1;
    pbVar38 = pbVar36 + 1;
    bVar16 = (byte)iVar33;
    pbVar19[0x41] = pbVar19[0x41] & bVar16;
    pbVar26 = pbVar19 + -5;
    bVar40 = (byte)((uint)iVar33 >> 8);
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    pbVar3 = pbVar38;
    bVar11 = *pbVar3;
    bVar17 = (byte)((uint)(pbVar39 + 3) >> 8);
    *pbVar3 = *pbVar3 + bVar17;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    pbVar38[(int)pbVar26] = pbVar38[(int)pbVar26] & bVar40;
    bVar21 = (byte)(pbVar39 + 3);
    *(byte *)0x8262 = *(byte *)0x8262 & bVar21;
    iVar33 = CONCAT11(bVar40,bVar16 + (0x9f < bVar16 | CARRY1(bVar11,bVar17) | bVar42 * (bVar16 < 6)
                                      ) * -0x60) + -1;
    pbVar36[-0x7d95] = pbVar36[-0x7d95] & bVar21;
    cVar10 = (char)pbVar38;
    bVar40 = (byte)((uint)iVar33 >> 8);
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    bVar16 = (byte)iVar33;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar16;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar11 = 0x9f < bVar16 | bVar42 * (bVar16 < 6);
    bVar16 = bVar16 + bVar11 * -0x60;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    *(byte *)0x8261 = *(byte *)0x8261 & cVar10 + 1U;
    iVar33 = CONCAT11(bVar40,bVar16 + (0x9f < bVar16 | bVar11 | bVar42 * (bVar16 < 6)) * -0x60) + -1
    ;
    bVar16 = (byte)iVar33;
    pbVar36[-0x7d87] = pbVar36[-0x7d87] & bVar16;
    bVar40 = (byte)((uint)iVar33 >> 8);
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] + bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar36[(int)pbVar26] = pbVar36[(int)pbVar26] & bVar40;
    pbVar39 = pbVar19 + -6;
    (pbVar36 + (int)pbVar39)[0x52] = (pbVar36 + (int)pbVar39)[0x52] & bStack_2;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar16;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar11 = 0x9f < bVar16 | bVar42 * (bVar16 < 6);
    bVar16 = bVar16 + bVar11 * -0x60;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar16 = bVar16 + (0x9f < bVar16 | bVar11 | bVar42 * (bVar16 < 6)) * -0x60;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    (pbVar36 + (int)pbVar39)[0x41] = (pbVar36 + (int)pbVar39)[0x41] & cVar10 + 2U;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar3 = pbVar36;
    bVar11 = *pbVar3;
    bVar21 = (byte)((uint)(pbVar36 + 5) >> 8);
    *pbVar3 = *pbVar3 + bVar21;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar40;
    *(byte *)0x825d = *(byte *)0x825d & cVar10 + 1U;
    pbVar38 = pbVar36 + 2;
    iVar33 = CONCAT11(bVar40,bVar16 + (0x9f < bVar16 | CARRY1(bVar11,bVar21) | bVar42 * (bVar16 < 6)
                                      ) * -0x60) + -3;
    bVar40 = (byte)((uint)iVar33 >> 8);
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] + bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    bVar16 = (byte)iVar33;
    *(byte *)0x8260 = *(byte *)0x8260 & bVar16;
    pbVar39 = pbVar19 + -7;
    *(byte *)0x5320 = *(byte *)0x5320 & bVar40;
    *(byte *)0x8262 = *(byte *)0x8262 & bVar16;
    pbVar38 = pbVar36 + 4;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar3 = pbVar38;
    bVar11 = *pbVar3;
    bVar21 = (byte)((uint)(pbVar36 + -2) >> 8);
    *pbVar3 = *pbVar3 + bVar21;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    pbVar19[0x3a] = pbVar19[0x3a] & bVar24 + 2;
    bStack_47 = (byte)((uint)pbVar38 >> 8);
    iVar33 = CONCAT11(bVar40,bVar16 + (0x9f < bVar16 | CARRY1(bVar11,bVar21) | bVar42 * (bVar16 < 6)
                                      ) * -0x60) + -1;
    *(byte *)0x828e = *(byte *)0x828e & bVar24 + 2;
    bVar21 = (byte)((uint)iVar33 >> 8);
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] + bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    bVar16 = (byte)pbVar38;
    pbVar38 = pbVar36 + 5;
    *(byte *)0x8265 = *(byte *)0x8265 & bVar16 + 1;
    bVar40 = (byte)iVar33;
    *(byte *)0x8292 = *(byte *)0x8292 & bVar40;
    pbVar39 = pbVar19 + -9;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar3 = pbVar38;
    bVar11 = *pbVar3;
    bVar17 = (byte)((uint)(pbVar36 + 3) >> 8);
    *pbVar3 = *pbVar3 + bVar17;
    bVar42 = 9 < (bVar40 & 0xf) || bVar42;
    bVar40 = bVar40 + bVar42 * -6;
    bVar40 = bVar40 + (0x9f < bVar40 | CARRY1(bVar11,bVar17) | bVar42 * (bVar40 < 6)) * -0x60;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar36[-0x7d8d] = pbVar36[-0x7d8d] & bVar40;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar40;
    bVar42 = 9 < (bVar40 & 0xf) || bVar42;
    bVar40 = bVar40 + bVar42 * -6;
    bVar11 = 0x9f < bVar40 | bVar42 * (bVar40 < 6);
    bVar40 = bVar40 + bVar11 * -0x60;
    bVar42 = 9 < (bVar40 & 0xf) || bVar42;
    bVar40 = bVar40 + bVar42 * -6;
    bVar40 = bVar40 + (0x9f < bVar40 | bVar11 | bVar42 * (bVar40 < 6)) * -0x60;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    *(byte *)0x8288 = *(byte *)0x8288 & bVar16;
    pbVar36[-0x7d95] = pbVar36[-0x7d95] & bVar40;
    pbVar39 = pbVar19 + -0xb;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] + bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    *(byte *)0x8268 = *(byte *)0x8268 & bVar40;
    bVar22 = (byte)(iVar18 + 3);
    pbVar19[0x3a] = pbVar19[0x3a] & bVar22;
    pbVar19[0x47] = pbVar19[0x47] & bVar22;
    pbVar39 = pbVar19 + -0xd;
    bVar17 = (byte)((uint)pbVar38 >> 8);
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar3 = pbVar38;
    bVar11 = *pbVar3;
    *pbVar3 = *pbVar3 + bStack_47;
    bVar42 = 9 < ((byte)pbVar38 & 0xf) || bVar42;
    bVar40 = (byte)pbVar38 + bVar42 * -6;
    bVar40 = bVar40 + (0x9f < bVar40 | CARRY1(bVar11,bStack_47) | bVar42 * (bVar40 < 6)) * -0x60;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38 = pbVar36 + 3;
    *(byte *)0x828e = *(byte *)0x828e & bVar22;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar3 = pbVar38;
    bVar11 = *pbVar3;
    *pbVar3 = *pbVar3 + bStack_47;
    bVar42 = 9 < (bVar40 & 0xf) || bVar42;
    bVar21 = bVar40 + bVar42 * -6;
    bVar21 = bVar21 + (0x9f < bVar21 | CARRY1(bVar11,bStack_47) | bVar42 * (bVar21 < 6)) * -0x60;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    *(byte *)0x8262 = *(byte *)0x8262 & bVar16;
    pbVar38 = pbVar36 + 3;
    pbVar19[0x38] = pbVar19[0x38] & bVar16 - 1;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar21;
    bVar42 = 9 < (bVar21 & 0xf) || bVar42;
    bVar21 = bVar21 + bVar42 * -6;
    bVar11 = 0x9f < bVar21 | bVar42 * (bVar21 < 6);
    bVar21 = bVar21 + bVar11 * -0x60;
    bVar42 = 9 < (bVar21 & 0xf) || bVar42;
    bVar21 = bVar21 + bVar42 * -6;
    cVar10 = bVar21 + (0x9f < bVar21 | bVar11 | bVar42 * (bVar21 < 6)) * -0x60;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar38[(int)pbVar39] = pbVar38[(int)pbVar39] & bVar17;
    pbVar36 = pbVar36 + 2;
    (pbVar36 + (int)pbVar39)[0x41] = (pbVar36 + (int)pbVar39)[0x41] & bVar40;
    cStack_66 = (char)pbVar36;
    cStack_65 = (char)((uint)pbVar36 >> 8);
    bVar11 = (byte)((uint)(CONCAT11(bVar17,cVar10) + -1) >> 8);
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar11;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar11;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar11;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar11;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar11;
    pbVar36[(int)pbVar39] = pbVar36[(int)pbVar39] & bVar11;
    iVar27 = CONCAT11(cStack_65 * '\x02',cStack_66);
    bVar11 = (byte)(iVar18 + 2);
    *(byte *)0x828b = *(byte *)0x828b & bVar11;
    *(byte *)0x74 = *(byte *)0x74 & 0x2c;
    *(byte *)(iVar27 + -0x7d9b) = *(byte *)(iVar27 + -0x7d9b) & 0x2c;
    pcVar28 = (char *)(iVar27 + 2);
    (pcVar28 + (int)pbVar19)[0x32] = (pcVar28 + (int)pbVar19)[0x32] & 0x2b;
    *(byte *)0x8264 = *(byte *)0x8264 & cVar10 - 2U;
    *(char *)(iVar27 + 0x4b) = *(char *)(iVar27 + 0x4b) + bVar11;
    uStack_69 = SUB21(&uStack_67,0);
    *(byte *)(iVar27 + 0x50) = *(byte *)(iVar27 + 0x50) & 0x2b;
    *(byte *)0x825f = *(byte *)0x825f & bStack_6a;
    pbVar19[0x35] = pbVar19[0x35] & bStack_6a;
    pbVar19[0x40] = pbVar19[0x40] & bVar11;
    *(byte *)0x8297 = *(byte *)0x8297 & bVar11;
    bVar42 = 9 < (cVar10 - 3U & 0xf) || bVar42;
    bVar16 = (cVar10 - 3U) + bVar42 * -6;
    bVar11 = 0x9f < bVar16 | bVar42 * (bVar16 < 6);
    bVar16 = bVar16 + bVar11 * -0x60;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * '\x06';
    bVar16 = bVar16 + (0x90 < (bVar16 & 0xf0) | bVar11 | bVar42 * (0xf9 < bVar16)) * '`';
    *(byte *)0x828d = *(byte *)0x828d & bVar16;
    pbVar19[0x73] = pbVar19[0x73] & bVar16;
    iVar33 = CONCAT11(uStack_69,bStack_6a) + 3;
    *(byte *)0x8257 = *(byte *)0x8257 & (byte)iVar33;
    *pcVar28 = *pcVar28 + (char)((uint)iVar33 >> 8);
    cStack_79 = (char)((uint)(iVar18 + 3) >> 8);
    pbVar19[0x36] = pbVar19[0x36] & bVar22;
    iVar14 = CONCAT11(uStack_78,cStack_79 - 0x20U);
    *(byte *)(iVar27 + -0x7d9b) = *(byte *)(iVar27 + -0x7d9b) & cStack_79 - 0x20U;
    pbVar38 = pbVar19 + -0x13;
    iVar33 = iVar14 + -1;
    bVar11 = (byte)((uint)iVar33 >> 8);
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & bVar11;
    *pcVar28 = *pcVar28 + (char)((uint)&cStack_79 >> 8);
    pcVar28[(int)pbVar38] = pcVar28[(int)pbVar38] & (byte)iVar33;
    *(byte *)(iVar27 + -0x7d99) = *(byte *)(iVar27 + -0x7d99) & (char)&cStack_79 + 1U;
    pbVar19[0x35] = pbVar19[0x35] & bVar22;
    *(byte *)0x8257 = *(byte *)0x8257 & cStack_79 - 0x22U;
    iVar14 = iVar14 + -3;
    bVar11 = (byte)iVar14;
    bVar42 = 9 < (bVar11 & 0xf) || bVar42;
    bVar11 = bVar11 + bVar42 * '\x06';
    bVar11 = bVar11 + (0x90 < (bVar11 & 0xf0) | bVar42 * (0xf9 < bVar11)) * '`';
    *(byte *)(iVar27 + 0x55) = *(byte *)(iVar27 + 0x55) & bVar11;
    cStack_8b = (char)((uint)&uStack_8a >> 8);
    bVar11 = bVar11 - 0x20;
    *(char *)(iVar27 + 3) = *(char *)(iVar27 + 3) + cStack_8b;
    bVar40 = (byte)&uStack_8a;
    *(byte *)(iVar27 + 0x55) = *(byte *)(iVar27 + 0x55) & bVar40;
    pbVar19[0x33] = pbVar19[0x33] & (byte)(iVar18 + 4);
    *(byte *)0x8256 = *(byte *)0x8256 & bVar11;
    iVar33 = CONCAT11((char)((uint)iVar14 >> 8),bVar11) + -1;
    bVar11 = (byte)iVar33;
    *(byte *)(iVar27 + -0x7d95) = *(byte *)(iVar27 + -0x7d95) & bVar11;
    *(byte *)(iVar27 + -0x7dc8) = *(byte *)(iVar27 + -0x7dc8) & bVar11;
    pcVar28 = (char *)(iVar27 + 4);
    bVar21 = (byte)&cStack_8b;
    *(byte *)0x8263 = *(byte *)0x8263 & bVar21;
    *pcVar28 = *pcVar28 + (char)((uint)&cStack_8b >> 8);
    pcVar28[(int)(pbVar19 + -0x17)] = pcVar28[(int)(pbVar19 + -0x17)] & bVar11;
    *(byte *)(iVar27 + -0x7da5) = *(byte *)(iVar27 + -0x7da5) & (byte)pcVar28;
    *(byte *)0x8253 = *(byte *)0x8253 & bVar11;
    bVar42 = 9 < (bVar11 - 0x20 & 0xf) || bVar42;
    bVar16 = (bVar11 - 0x20) + bVar42 * '\x06';
    bVar16 = bVar16 + (0x90 < (bVar16 & 0xf0) | bVar11 < 0x20 | bVar42 * (0xf9 < bVar16)) * '`';
    iVar33 = CONCAT11((char)((uint)iVar33 >> 8),bVar16);
    *(byte *)0x828e = *(byte *)0x828e & bVar16;
    *pcVar28 = *pcVar28 + cStack_8b;
    bVar21 = bVar21 + 1;
    (pcVar28 + (int)pbVar19)[0x28] = (pcVar28 + (int)pbVar19)[0x28] & bVar21;
    pbVar19[0x36] = pbVar19[0x36] & bVar21;
    *(byte *)(iVar27 + -0x7d9b) = *(byte *)(iVar27 + -0x7d9b) & bVar16;
    bVar17 = (byte)(iVar18 + 5);
    pbVar19[100] = pbVar19[100] & bVar17;
    *(byte *)(iVar27 + -0x7d96) = *(byte *)(iVar27 + -0x7d96) & bVar16;
    cVar10 = (char)((uint)&uStack_89 >> 8);
    *(char *)(iVar27 + 6) = *(char *)(iVar27 + 6) + cVar10;
    bVar11 = bVar16 - 2;
    pbVar19[0x2c] = pbVar19[0x2c] & bVar11;
    pbVar19[0x36] = pbVar19[0x36] & bVar17;
    *(byte *)0x8291 = *(byte *)0x8291 & bVar17;
    pbVar19[0x71] = pbVar19[0x71] & (char)&uStack_89 - 2U;
    *(byte *)(iVar27 + 0x54) = *(byte *)(iVar27 + 0x54) & bVar40 + 1;
    *(byte *)(iVar27 + -0x7da0) = *(byte *)(iVar27 + -0x7da0) & bVar11;
    *(char *)(iVar27 + 7) = *(char *)(iVar27 + 7) + cVar10;
    pcVar28 = (char *)(iVar27 + 8);
    bVar21 = (byte)auStack_88;
    *(byte *)0x82 = *(byte *)0x82 & bVar21;
    pbVar19[0x33] = pbVar19[0x33] & bVar17;
    (pcVar28 + (int)pbVar19)[0x29] = (pcVar28 + (int)pbVar19)[0x29] & bVar21;
    pbVar19[0x33] = pbVar19[0x33] & bVar17;
    *(byte *)0x8253 = *(byte *)0x8253 & bVar11;
    pbVar19[0x6f] = pbVar19[0x6f] + bVar21 + 2;
    (pcVar28 + (int)pbVar19)[0x23] = (pcVar28 + (int)pbVar19)[0x23] & bVar40 + 6;
    *(byte *)0x8b = *(byte *)0x8b & bVar40 + 6;
    pbVar19[99] = pbVar19[99] & bVar16 - 3;
    pbVar19[99] = pbVar19[99] & bVar17;
    *(byte *)(iVar27 + 0x51) = *(byte *)(iVar27 + 0x51) & bVar17;
    bVar11 = (byte)((uint)(iVar33 + -4) >> 8);
    pcVar28[(int)(pbVar19 + -0x20)] = pcVar28[(int)(pbVar19 + -0x20)] & bVar11;
    pcVar28[(int)(pbVar19 + -0x20)] = pcVar28[(int)(pbVar19 + -0x20)] & bVar11;
    *pcVar28 = *pcVar28 + (char)((uint)auStack_85 >> 8);
    iVar33 = iVar33 + -5;
    *(byte *)(iVar27 + 0x51) = *(byte *)(iVar27 + 0x51) & bVar17;
    iVar33 = CONCAT11((char)((uint)iVar33 >> 8),(char)iVar33 + -0x20) + -1;
    pbVar19[0x27] = pbVar19[0x27] & bVar17;
    *(byte *)0x84 = *(byte *)0x84 & (char)&uStack_8a + 7U;
    bVar11 = (byte)iVar33;
    bVar42 = 9 < (bVar11 & 0xf) || bVar42;
    bVar11 = bVar11 + bVar42 * '\x06';
    bVar11 = bVar11 + (0x90 < (bVar11 & 0xf0) | bVar42 * (0xf9 < bVar11)) * '`';
    pbVar19[0x20] = pbVar19[0x20] & bVar11;
    *pcVar28 = *pcVar28 + (char)((uint)auStack_82 >> 8);
    iVar18 = iVar18 + 6;
    pbVar38 = pbVar19 + -0x22;
    pcVar29 = (char *)(iVar27 + 7);
    bVar21 = (byte)iVar18;
    pbVar19[0x35] = pbVar19[0x35] & bVar21;
    (pcVar29 + (int)pbVar38)[0x41] = (pcVar29 + (int)pbVar38)[0x41] & (char)&uStack_8a + 9U;
    pbVar19[99] = pbVar19[99] & bVar21;
    *(byte *)0x8293 = *(byte *)0x8293 & bVar21;
    bVar40 = (byte)((uint)iVar18 >> 8);
    *pcVar29 = *pcVar29 + bVar40;
    *(byte *)0x8251 = *(byte *)0x8251 & bVar11 - 0x21;
    iVar33 = CONCAT11((char)((uint)iVar33 >> 8),bVar11 - 0x20) + -2;
    bVar11 = (byte)((uint)iVar33 >> 8);
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar11;
    bVar16 = (byte)iVar33;
    pcVar29[(int)pbVar38] = pcVar29[(int)pbVar38] & bVar16;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * '\x06';
    bVar16 = bVar16 + (0x90 < (bVar16 & 0xf0) | bVar42 * (0xf9 < bVar16)) * '`';
    *(byte *)0x8268 = *(byte *)0x8268 & bVar16;
    pbVar19[0x21] = pbVar19[0x21] & bVar21;
    bVar11 = bVar16 - 1;
    iStack_ed = (int)(CONCAT12(bVar40,iVar18) >> 8);
    *(byte *)0x8291 = *(byte *)0x8291 & bVar11;
    *pcVar28 = *pcVar28 + bVar40;
    pbVar19[0x60] = pbVar19[0x60] & bVar11;
    pbVar19[0x1a] = pbVar19[0x1a] & bVar21;
    pbVar19[0x75] = pbVar19[0x75] & bVar11;
    *(byte *)0x824e = *(byte *)0x824e & bVar11;
    bVar16 = bVar16 - 2;
    *(byte *)0x8293 = *(byte *)0x8293 & bVar21;
    *(byte *)0x93 = *(byte *)0x93 & bVar16;
    pcVar28[(int)(pbVar19 + -0x28)] = pcVar28[(int)(pbVar19 + -0x28)] & bVar16;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    bVar16 = bVar16 + (0x9f < bVar16 | bVar42 * (bVar16 < 6)) * -0x60;
    *(byte *)0x82a2 = *(byte *)0x82a2 & bVar21;
    *(byte *)0x8265 = *(byte *)0x8265 & bVar16;
    pbVar19[0x20] = pbVar19[0x20] + bVar21;
    pbVar19[0x26] = pbVar19[0x26] & bVar21;
    *(byte *)(iVar27 + -0x7d9e) = *(byte *)(iVar27 + -0x7d9e) & cStack_66 + 8U;
    *(byte *)(iVar27 + 0x5d) = *(byte *)(iVar27 + 0x5d) & bVar40;
    *(byte *)0x8252 = *(byte *)0x8252 & bVar16;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * -6;
    cVar10 = bVar16 + (0x9f < bVar16 | bVar42 * (bVar16 < 6)) * -0x60;
    *(byte *)0x8259 = *(byte *)0x8259 & cVar10 - 1U;
    pbVar38[iVar27 + 0x55] = pbVar38[iVar27 + 0x55] & bVar40 - 1;
    pbVar19[0x5d] = pbVar19[0x5d] & bVar21;
    *(byte *)0x9b = *(byte *)0x9b & cVar10 - 0x21U;
    *(char *)(iVar27 + 9) = *(char *)(iVar27 + 9) + (char)((uint)(iStack_ed + 1) >> 8);
    bVar16 = cVar10 + 0xbf;
    pbVar19[0x61] = pbVar19[0x61] & bVar16;
    *(byte *)0x9c = *(byte *)0x9c & bVar16;
    pbVar3 = (byte *)(iVar27 + 10);
    bVar11 = *pbVar3;
    *pbVar3 = *pbVar3 + bVar40;
    bVar42 = 9 < (bVar16 & 0xf) || bVar42;
    bVar16 = bVar16 + bVar42 * '\x06';
    cVar10 = bVar16 + (0x90 < (bVar16 & 0xf0) | CARRY1(bVar11,bVar40) | bVar42 * (0xf9 < bVar16)) *
                      '`';
    *(byte *)0x8295 = *(byte *)0x8295 & bVar24 + 7;
    iVar18 = CONCAT11((char)((uint)(iVar27 + 0xb) >> 8) * '\x02',(char)(iVar27 + 0xb));
    pbVar19[iVar18 + -0x2e] = pbVar19[iVar18 + -0x2e] + cVar10;
    pbVar19[iVar18 + -0x2e] = pbVar19[iVar18 + -0x2e] + cVar10;
    pbVar19[iVar18 + -0x2e] = pbVar19[iVar18 + -0x2e] + cVar10;
    pbVar19[iVar18 + -0x2e] = pbVar19[iVar18 + -0x2e] + cVar10;
    pbVar19[iVar18 + -0x2e] = pbVar19[iVar18 + -0x2e] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc0:
    in_AX = (code *)CONCAT11(in_stack_00000001,in_stack_00000000);
    pbVar19[0x49] = pbVar19[0x49] & bVar24;
    unaff_BP = 0x31;
switchD_1000_04fc_caseD_9a:
    *(byte *)(unaff_BP + -0x7d99) = *(byte *)(unaff_BP + -0x7d99) & bVar24;
    pbVar38 = (byte *)0x8221;
    *(byte *)(unaff_BP + -0x7d90) = *(byte *)(unaff_BP + -0x7d90) & (byte)in_AX;
    pbVar36 = pbVar19 + -1;
    *(char *)(unaff_BP + -0x7d8b) = *(char *)(unaff_BP + -0x7d8b) + bVar24;
    pbVar39 = pbVar39 + 1;
    pbVar25 = pbVar26 + 5;
    pbVar26[-0x7d8c] = pbVar26[-0x7d8c] + (char)pbVar39;
    *(byte *)(unaff_BP + -0x7d8b) = *(byte *)(unaff_BP + -0x7d8b) & bVar24;
    *(uint *)(pbVar25 + (int)pbVar36) = *(uint *)(pbVar25 + (int)pbVar36) & (uint)in_AX;
switchD_1000_04fc_caseD_22:
    pbVar26 = pbVar25 + 2;
    pbVar38[unaff_BP + 0x55] = pbVar38[unaff_BP + 0x55] & bVar24;
    pbVar39 = pbVar39 + 1;
    puVar30 = &uStack_6;
    in_stack_00000000 = (byte)&uStack_6;
    *(uint *)(pbVar26 + (int)pbVar36) = *(uint *)(pbVar26 + (int)pbVar36) & (uint)in_AX;
    unaff_BP = unaff_BP + 2;
switchD_1000_04fc_caseD_25:
    in_AX = (code *)CONCAT11((char)((uint)puVar30 >> 8),in_stack_00000000);
    pbVar38 = pbVar38 + -1;
    *(undefined2 *)(iVar18 + -2) = pbVar26;
    *(undefined2 *)(iVar18 + -4) = pbVar36;
    unaff_BP = unaff_BP + 2;
    *(int *)(*(int *)(iVar18 + -4) + -2) = unaff_BP;
    pbVar39 = pbVar39 + -1;
switchD_1000_04fc_caseD_28:
    pbVar26 = pbVar26 + 1;
    pbVar38[0x58] = pbVar38[0x58] + (char)in_AX;
    pbVar36[0x46] = pbVar36[0x46] & bVar24;
    *(byte **)(in_AX + -2) = pbVar26;
    *(byte **)(in_AX + -4) = pbVar26;
    pbVar26[(int)(pbVar38 + -1)] = pbVar26[(int)(pbVar38 + -1)] & bVar17;
    iVar33 = *(int *)(in_AX + -4);
    *(undefined2 *)(iVar33 + -2) = pbVar26;
    *(undefined2 *)(iVar33 + -4) = pbVar26;
    pbVar36[unaff_BP + -4] = pbVar36[unaff_BP + -4] & bVar17;
    iVar33 = *(int *)(iVar33 + -4);
    *(undefined2 *)(iVar33 + -2) = pbVar26;
    *(undefined2 *)(iVar33 + -4) = pbVar26;
    pbVar38[unaff_BP + -4] = pbVar38[unaff_BP + -4] & bVar17;
    iVar33 = *(int *)(iVar33 + -4);
    *(undefined2 *)(iVar33 + -2) = pbVar26;
    *(undefined2 *)(iVar33 + -4) = pbVar26;
    pbVar36[-6] = pbVar36[-6] & bVar17;
    iVar33 = *(int *)(iVar33 + -4);
    *(undefined2 *)(iVar33 + -2) = pbVar26;
    *(undefined2 *)(iVar33 + -4) = pbVar26;
    pbVar38[-5] = pbVar38[-5] & bVar17;
    iVar33 = *(int *)(iVar33 + -4);
    unaff_BP = unaff_BP + -4;
    *(undefined2 *)(iVar33 + -2) = pbVar26;
    *(undefined2 *)(iVar33 + -4) = pbVar26;
    pbVar38 = pbVar38 + -6;
    pbVar36 = pbVar36 + -8;
    *(byte *)0x4d5c = *(byte *)0x4d5c & bVar17;
    pbVar39 = pbVar39 + -0xf;
    *(undefined2 *)(iVar33 + -6) = pbVar26;
switchD_1000_04fc_caseD_96:
    pbVar39 = pbVar39 + -1;
    pbVar38 = pbVar38 + -1;
switchD_1000_04fc_caseD_c5:
    pbVar36 = pbVar36 + -1;
    *pbVar26 = *pbVar26 & bVar17;
    iVar33 = unaff_BP + -1;
    pbVar39 = pbVar39 + -1;
switchD_1000_04fc_caseD_e8:
    bStack_1 = (byte)((uint)pbVar26 >> 8);
    pbVar26[(int)(pbVar36 + -1)] = pbVar26[(int)(pbVar36 + -1)] & bStack_1;
    *(byte **)(pbVar26 + -2) = pbVar26;
    *(byte **)(pbVar26 + -4) = pbVar26;
    pbVar26[(int)(pbVar38 + -2)] = pbVar26[(int)(pbVar38 + -2)] & bStack_1;
    iVar14 = *(int *)(pbVar26 + -4);
    unaff_BP = iVar33 + -2;
    pbVar36[0x46] = pbVar36[0x46] & (char)pbVar39 - 3U;
    pbVar38 = pbVar38 + -3;
    *(int *)(iVar14 + -2) = iVar14;
    pbVar38[iVar33 + 0x4d] = pbVar38[iVar33 + 0x4d] & bVar24;
    pbVar36 = pbVar36 + -4;
    *(int *)(iVar14 + -4) = iVar14 + -2;
    pbVar36[unaff_BP] = pbVar36[unaff_BP] + (char)((uint)(pbVar39 + -1) >> 8);
    *(int *)(iVar14 + -6) = iVar33 + -3;
    *(undefined2 *)(iVar14 + -8) = pbVar26;
    pbVar39 = pbVar39 + -2;
    pbVar26 = pbVar26 + 1;
    in_AX = (code *)CONCAT11((char)((uint)(in_AX + -1) >> 8),
                             (char)(in_AX + -1) - pbVar26[(int)pbVar36]);
code_r0x000100f3:
    unaff_BP = unaff_BP + 1;
    pbVar26 = pbVar26 + 1;
    (pbVar26 + (int)pbVar38)[0x20] = (pbVar26 + (int)pbVar38)[0x20] & (byte)in_AX;
    pbVar36 = pbVar36 + -1;
    pcVar45 = (code *)CONCAT22(iVar18 + 1,in_AX);
switchD_1000_04fc_caseD_52:
    pbVar36[unaff_BP] = pbVar36[unaff_BP] + (char)((uint)pbVar39 >> 8);
    unaff_BP = unaff_BP + 1;
    pbVar34 = pbVar36;
switchD_1000_04fc_caseD_5a:
    bStack_2 = (byte)pbVar26;
    bVar11 = pbVar26[(int)pbVar34];
    bVar24 = (byte)((ulong)pcVar45 >> 0x18);
    bVar21 = (char)((ulong)pcVar45 >> 0x10) - pbVar38[unaff_BP + 0x41];
    piVar23 = (int *)CONCAT11(bVar24,bVar21);
    bVar16 = pbVar26[(int)pbVar34];
    pbVar38 = pbVar38 + -2;
    pbVar36 = pbVar34 + -1;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & bVar24;
    pbVar38[unaff_BP + 0x55] = pbVar38[unaff_BP + 0x55] & bVar21;
    *(uint *)(pbVar26 + (int)pbVar36) =
         *(uint *)(pbVar26 + (int)pbVar36) &
         CONCAT11((char)((ulong)pcVar45 >> 8),((char)pcVar45 - bVar11) - bVar16);
    pbVar26[(int)pbVar38] = pbVar26[(int)pbVar38] - bVar24;
    *(int *)(pbVar34 + 0x27) = *(int *)(pbVar34 + 0x27) - (int)pbVar26;
    bVar40 = (byte)((uint)(pbVar39 + -2) >> 8) ^ pbVar26[(int)pbVar38];
    pbVar38[unaff_BP + 2] = pbVar38[unaff_BP + 2] - bVar24;
    *(int *)(pbVar34 + 0x27) = *(int *)(pbVar34 + 0x27) - (int)pbVar26;
    bVar11 = (byte)auStack_e ^ 0x29;
    iVar18 = *piVar23;
    *pbVar38 = *pbVar38 - bVar24;
    *(int *)(pbVar34 + 0x27) = *(int *)(pbVar34 + 0x27) - (int)pbVar26;
    *(int *)(pbVar34 + 0x27) = *(int *)(pbVar34 + 0x27) - (int)pbVar26;
    bVar42 = 9 < (bVar11 & 0xf) || (bool)in_AF;
    bVar11 = bVar11 + bVar42 * '\x06' & 0xf;
    *(int *)(pbVar34 + 0x27) = *(int *)(pbVar34 + 0x27) - (int)pbVar26;
    *(undefined2 *)(iVar18 + -2) = pbVar26;
    *(int *)(iVar18 + -4) = unaff_BP + 2;
    *(undefined2 *)(iVar18 + -6) = piVar23;
    bVar44 = 9 < bVar11 || bVar42;
    bVar16 = ((char)((uint)auStack_e >> 8) + bVar42) - bVar44;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & bVar16;
    (pbVar26 + (int)pbVar38)[0x45] = (pbVar26 + (int)pbVar38)[0x45] & bStack_2;
    *(undefined2 *)(iVar18 + -8) = pbVar26;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & bVar16;
    *(byte *)(unaff_BP + 0x52) = *(byte *)(unaff_BP + 0x52) & (byte)(pbVar39 + -2);
    *(char *)0x4d05 = *(char *)0x4d05 + bVar21;
    iVar18 = (CONCAT11(bVar16,bVar11 + bVar44 * -6) & 0xff0f) + 0x565;
    cVar10 = (char)iVar18;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
    pbVar36[unaff_BP + 3] = pbVar36[unaff_BP + 3] & bVar40;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] & (byte)((uint)iVar18 >> 8);
    pbVar36[unaff_BP + 3] = pbVar36[unaff_BP + 3] & bVar40;
    pcVar45 = (code *)CONCAT22(piVar23,(code *)(uint)(byte)(cVar10 * '\x02'));
code_r0x0001016d:
    pbVar26 = (byte *)((uint)pbVar26 & 0xff);
    cVar10 = ((char)pcVar45 + '\x01') * '\x02';
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + cVar10;
    bVar11 = cVar10 + (char)((ulong)pcVar45 >> 0x18);
    in_AX = (code *)(uint)bVar11;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + bVar11;
code_r0x0001017d:
    LOCK();
    pbVar36[CONCAT11((char)((uint)pbVar26 >> 8) * '\x02',(char)pbVar26)] =
         pbVar36[CONCAT11((char)((uint)pbVar26 >> 8) * '\x02',(char)pbVar26)] + (char)in_AX;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc1:
    param_2._0_1_ = 0;
    param_2._1_1_ = 0x10;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    (*(code *)*(undefined2 *)0x508)();
    return pcStack0008;
  case 0xc2:
    in_AF = 9 < ((byte)param_2 & 0xf) || (bool)in_AF;
    in_AX = (code *)(CONCAT11(param_2._1_1_ - in_AF,(byte)param_2 + in_AF * -6) & 0xff0f);
    goto code_r0x000101a9;
  case 0xc4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc5:
    goto switchD_1000_04fc_caseD_c5;
  case 0xc6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 199:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 200:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xca:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcc:
  case 0xe6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xce:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd1:
    *(byte *)0x8222 = *(byte *)0x8222 | (byte)param_2;
    do {
      uStack_6 = uVar9;
      uStack_8 = uVar5;
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      param_2._0_1_ = 200;
      param_2._1_1_ = 5;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      cVar10 = (*(code *)*(undefined2 *)0x508)();
      uVar9 = uStack_6;
      uVar5 = uStack_8;
    } while (cVar10 != '\x01');
    return (code *)0x0;
  case 0xd2:
  case 0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd8:
    in(0xd0);
    uVar41 = in(0xd0);
    bVar11 = (bVar21 & 0x1f) % 0x11;
    uVar7 = (ulong)CONCAT11(param_2._1_1_,uVar41) << bVar11;
    bVar11 = (byte)uVar7 | (byte)(CONCAT11(param_2._1_1_,uVar41) >> 0x11 - bVar11);
    pbVar19 = pbVar39 + -1;
    if (pbVar19 == (byte *)0x0 || bVar43) {
      pbVar19 = pbVar39 + -2;
      if (pbVar19 == (byte *)0x0 || bVar43) {
        puVar1 = (uint *)0x970a;
        bVar16 = (byte)pbVar19 & 0x1f;
        uVar13 = *puVar1;
        *puVar1 = *puVar1 >> bVar16;
        bVar42 = ((uint)pbVar19 & 0x1f) != 0;
        bVar11 = (bVar11 - 0x25) -
                 (!bVar42 && (uVar7 & 0x10000) != 0 || bVar42 && (uVar13 >> bVar16 - 1 & 1) != 0);
        *(byte *)0x8222 = bVar24;
        pbVar39 = pbVar19;
        goto code_r0x00011ea8;
      }
    }
    else {
      pbVar39 = (byte *)0x0;
      if (pbVar19 == (byte *)0x0) goto code_r0x00011ea8;
    }
    while( true ) {
      bVar11 = pbVar26[0x1c2c];
      pbVar39 = pbVar38 + (uint)bVar42 * -2 + 1;
      *pbVar38 = bVar11;
      pbVar19 = pbVar19 + -1;
      if (pbVar19 == (byte *)0x0) break;
      pbVar3 = pbVar36;
      pbVar36 = pbVar36 + (uint)bVar42 * -2 + 1;
      bVar11 = *pbVar3;
      pbVar38 = pbVar39 + (uint)bVar42 * -2 + 1;
      *pbVar39 = *(byte *)((bVar11 >> 4) + 0x1c2c);
      pbVar26 = (byte *)(uint)(bVar11 & 0xf);
    }
    return (code *)(uint)bVar11;
  case 0xd9:
  case 0xdd:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 0xda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xde:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe0:
    goto switchD_1000_04fc_caseD_e0;
  case 0xe1:
    *pbVar26 = *pbVar26 + bVar21;
    *(int *)(pbVar26 + (int)pbVar36) = *(int *)(pbVar26 + (int)pbVar36) + 1;
    *(char *)0x8250 = *(char *)0x8250 + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe8:
    goto switchD_1000_04fc_caseD_e8;
  case 0xe9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xea:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xeb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xec:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xed:
    goto switchD_1000_04fc_caseD_ed;
  case 0xee:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf3:
    in_AX = in_AX + 0x6b1;
    if (((uint)in_AX & 2) == 0) {
      in_AX = (code *)CONCAT11((byte)((uint)in_AX >> 8) ^ bVar21,(char)in_AX);
    }
    if (((uint)in_AX & 4) == 0) {
      in_AX = (code *)((uint)in_AX ^ 0x200);
    }
    if (((uint)in_AX & 8) == 0) {
      in_AX = (code *)((uint)in_AX ^ 0xa00);
    }
    pbVar39 = (byte *)0x4;
    if (((uint)in_AX & 0x10) != 0) goto LAB_1000_0a05;
code_r0x00010a03:
    in_AX = (code *)CONCAT11((byte)((uint)in_AX >> 8) ^ (byte)pbVar39,(char)in_AX);
LAB_1000_0a05:
    if (((uint)in_AX & 0x40) == 0) {
      in_AX = (code *)((uint)in_AX ^ 0x800);
    }
    if (((uint)in_AX & 0x80) == 0) {
      in_AX = (code *)((uint)(byte)((byte)((uint)in_AX >> 8) ^ 5) << 8);
    }
    param_2._0_1_ = *(byte *)0x56c;
    param_2._1_1_ = (byte)((uint)in_AX >> 8);
    if (((byte)param_2 & 1) == 0) {
      param_2._1_1_ = param_2._1_1_ ^ 1;
    }
    if (((byte)param_2 & 2) == 0) {
      param_2._1_1_ = param_2._1_1_ ^ 9;
    }
    if (*(char *)0x555 == '\x01') {
      uVar41 = uStack_8._1_1_;
      uVar12 = uStack_6._1_1_;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      bVar11 = (*(code *)*(undefined2 *)0x500)();
      param_2._1_1_ = param_2._1_1_ & ~(bVar11 & 0xf);
    }
    return (code *)(CONCAT11(~param_2._1_1_,~param_2._1_1_) & 0xff0f);
  case 0xf4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf7:
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    *(code **)(pbVar26 + (int)pbVar36) = in_AX + *(int *)(pbVar26 + (int)pbVar36);
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    uVar5 = LocalDescriptorTableRegister();
    *(undefined2 *)(pbVar26 + (int)pbVar36) = uVar5;
    pbVar19[0x2f] = pbVar19[0x2f] + cVar10;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
    *pbVar26 = *pbVar26 + cVar10;
    pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfa:
    goto switchD_1000_04fc_caseD_fa;
  case 0xfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_stack_00000000 = (byte)in_AX;
switchD_1000_04fc_caseD_9c:
  *(undefined2 *)0x580 = 0;
  *(undefined2 *)0x57e = 0;
  return (code *)(uint)in_stack_00000000;
switchD_1000_04fc_caseD_fa:
  *(byte *)0x8222 = *(byte *)0x8222 | (byte)param_2;
  param_2._0_1_ = bVar22;
  param_2._1_1_ = bVar46;
  uVar41 = uStack_8._1_1_;
  uVar12 = uStack_6._1_1_;
  goto LAB_1000_0434;
switchD_1000_04fc_caseD_9b:
  do {
    iVar18 = CONCAT11(in_stack_00000001,in_stack_00000000);
    bVar11 = pbVar36[1];
    bVar16 = pbVar36[3];
    *pbVar38 = *(byte *)((byte)(((char)bVar16 < '\0') << 1 | (char)bVar11 < '\0') + 0x1c3c) |
               *(byte *)((byte)(((char)(bVar16 << 2) < '\0') << 1 | (char)(bVar11 << 2) < '\0') +
                        0x1c40);
    pbVar38[1] = *(byte *)((byte)(((char)(bVar16 << 4) < '\0') << 1 | (char)(bVar11 << 4) < '\0') +
                          0x1c3c) |
                 *(byte *)((byte)(((char)(bVar16 << 6) < '\0') << 1 | (char)(bVar11 << 6) < '\0') +
                          0x1c40);
    pbVar38 = pbVar38 + 2;
    pbVar36 = pbVar36 + 4;
    pbVar39 = pbVar39 + -1;
    if (pbVar39 == (byte *)0x0) {
      iVar18 = CONCAT11(in_stack_00000001,in_stack_00000000) + -1;
      if (iVar18 == 0) {
        return (code *)(uint)(byte)(bVar11 << 7);
      }
      in_stack_00000000 = (byte)iVar18;
      pbVar39 = (byte *)0x8;
    }
    in_stack_00000001 = (byte)((uint)iVar18 >> 8);
    bVar11 = *pbVar36;
code_r0x00011ea8:
    bVar16 = pbVar36[2];
    *pbVar38 = *(byte *)((byte)(((char)bVar16 < '\0') << 1 | (char)bVar11 < '\0') + 0x1c3c) |
               *(byte *)((byte)(((char)(bVar16 << 2) < '\0') << 1 | (char)(bVar11 << 2) < '\0') +
                        0x1c40);
    pbVar38[1] = *(byte *)((byte)(((char)(bVar16 << 4) < '\0') << 1 | (char)(bVar11 << 4) < '\0') +
                          0x1c3c) |
                 *(byte *)((byte)(((char)(bVar16 << 6) < '\0') << 1 | (char)(bVar11 << 6) < '\0') +
                          0x1c40);
    pbVar38 = pbVar38 + 2;
  } while( true );
switchD_1000_04fc_caseD_8c:
  do {
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    pbVar38 = pbVar36 + 1;
    if (*pbVar38 != 0x2f) {
      bStack_2 = 0;
      bStack_1 = 0x10;
      uStack_4 = 0xa5;
      uStack_3 = 0x10;
      DAT_1000_0e1c = pbVar26;
      uVar5 = uStack_8;
      uStack_8._1_1_ = uVar41;
      uVar9 = uStack_6;
      uStack_6._1_1_ = uVar12;
      (*(code *)*(undefined2 *)0x508)();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      pbVar38 = pbVar36 + 2;
      if (*pbVar38 != 0x2f) {
        return (code *)(uint)*pbVar38;
      }
    }
    uStack_6._1_1_ = uVar12;
    uStack_8._1_1_ = uVar41;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    pbVar26 = DAT_1000_0e1c + 0x100;
    pbVar36 = pbVar38;
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar41;
    uStack_6._1_1_ = uVar12;
  } while( true );
switchD_1000_04fc_caseD_7d:
  goto LAB_1000_02c4;
switchD_1000_04fc_caseD_77:
  do {
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    bStack_2 = 0;
    bStack_1 = 0x10;
    uStack_4 = 0xd;
    uStack_3 = 0xd;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    pcVar15 = (code *)(*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    uVar41 = uStack_8._1_1_;
    uVar12 = uStack_6._1_1_;
    while( true ) {
      do {
        uStack_6._1_1_ = uVar12;
        uStack_8._1_1_ = uVar41;
        uStack_6 = uVar9;
        uStack_8 = uVar5;
        uVar12 = uStack_6._1_1_;
        uVar41 = uStack_8._1_1_;
        pbVar36 = pbVar36 + 1;
        pbVar39 = pbVar39 + -1;
        if (pbVar39 == (byte *)0x0) {
          DAT_1000_0c7b = DAT_1000_0c7b + -1;
          if (DAT_1000_0c7b == '\0') {
            DAT_1000_0c78 = 0;
          }
          return pcVar15;
        }
        bVar11 = *pbVar36;
        pcVar15 = (code *)(uint)bVar11;
        uVar5 = uStack_8;
        uVar9 = uStack_6;
      } while (bVar11 == 0);
      uStack_8._1_1_ = uVar41;
      uStack_6._1_1_ = uVar12;
      if ('\a' < (char)bVar11) break;
      *pbVar36 = bVar11 + 8;
      bStack_2 = 0;
      bStack_1 = 0x10;
      uStack_4 = 0xfb;
      uStack_3 = 0xc;
      pcVar15 = (code *)(*(code *)*(undefined2 *)0x508)();
      uVar12 = uStack_6._1_1_;
      uVar41 = uStack_8._1_1_;
      uVar5 = uStack_8;
      uVar9 = uStack_6;
    }
    *pbVar36 = 0;
  } while( true );
switchD_1000_04fc_caseD_39:
  pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
switchD_1000_04fc_caseD_5c:
  pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
  pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
  pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
  pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
  pbVar26[(int)pbVar36] = pbVar26[(int)pbVar36] + (byte)param_2;
  *(char *)0x8222 = *(char *)0x8222 + (byte)param_2;
  *(code **)(pbVar26 + -0x7dde) = in_AX + *(int *)(pbVar26 + -0x7dde);
code_r0x0001020d:
  *(int *)(pbVar26 + (int)pbVar36) =
       *(int *)(pbVar26 + (int)pbVar36) +
       CONCAT11((char)((uint)(in_AX + 0x101) >> 8),
                (char)(in_AX + 0x101) + pbVar19[0x2f] + pbVar19[0x2f] + pbVar19[0x2f] +
                pbVar19[0x2f]);
  iVar18 = (uint)bVar17 << 8;
  in_stack_00000001 = bVar46;
  in_stack_00000000 = bVar22;
code_r0x0001021d:
  pbVar19[0x2f] = pbVar19[0x2f] - (char)((uint)iVar18 >> 8);
  *(char *)0xda2 = *(char *)0xda2 + (char)((uint)pbVar39 >> 8);
  goto code_r0x0001022d;
switchD_1000_04fc_caseD_2d:
  param_2._0_1_ = 0;
  param_2._1_1_ = 0x10;
switchD_1000_04fc_caseD_29:
  *(byte *)0x8222 = *(byte *)0x8222 | bVar16;
  uVar41 = uStack_8._1_1_;
  uVar12 = uStack_6._1_1_;
LAB_1000_03f0:
  uStack_6._1_1_ = uVar12;
  uStack_8._1_1_ = uVar41;
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  in_stack_00000000 = 0x11;
  in_stack_00000001 = 4;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  goto LAB_1000_0411;
entry:
  goto code_r0x00010226;
switchD_1000_04fc_caseD_2:
  param_2._0_1_ = 0x22;
  param_2._1_1_ = 0x82;
switchD_1000_04fc_caseD_e0:
  in_stack_00000000 = 0x77;
  in_stack_00000001 = 5;
  uVar41 = uStack_8._1_1_;
  uVar12 = uStack_6._1_1_;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  (*(code *)*(undefined2 *)0x508)();
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  uVar5 = uStack_8;
  uVar9 = uStack_6;
  uStack_8._1_1_ = uVar41;
  uStack_6._1_1_ = uVar12;
LAB_1000_0585:
  do {
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar12 = uStack_6._1_1_;
    uVar41 = uStack_8._1_1_;
    bStack_2 = 0;
    bStack_1 = 0x10;
    uStack_4 = 0x8c;
    uStack_3 = 5;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar41;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar12;
    cVar10 = (*(code *)*(undefined2 *)0x508)();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
  } while (cVar10 != '\x01');
code_r0x00010598:
  uStack_6 = uVar9;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uVar41 = uStack_8._1_1_;
  bStack_2 = 0x9b;
  bStack_1 = 5;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_05d5();
  uVar9 = uStack_6;
  uVar5 = uStack_8;
  bStack_2 = 0x9e;
  bStack_1 = 5;
  uVar41 = uStack_8._1_1_;
  uStack_8 = uVar5;
  uVar12 = uStack_6._1_1_;
  uStack_6 = uVar9;
  uVar5 = uStack_8;
  uStack_8._1_1_ = uVar41;
  uVar9 = uStack_6;
  uStack_6._1_1_ = uVar12;
  FUN_1000_05a1();
  bVar44 = bVar42;
  goto LAB_1000_049c;
switchD_1000_04fc_caseD_67:
  while ((char)in_AX != '\0') {
    in_AX = (code *)(uint)DAT_1000_0c78;
  }
  return in_AX;
switchD_1000_04fc_caseD_a2:
  do {
    uStack_6 = uVar9;
    uStack_8 = uVar5;
    uVar8 = uStack_6._1_1_;
    uVar12 = uStack_8._1_1_;
    param_2._0_1_ = 0xdc;
    param_2._1_1_ = 10;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar12;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar8;
    pcVar15 = (code *)FUN_1000_0b40();
    uVar9 = uStack_6;
    uVar5 = uStack_8;
    if (!(bool)uVar41) {
      return pcVar15;
    }
    param_2._0_1_ = (byte)pbVar39;
    param_2._1_1_ = (byte)((uint)pbVar39 >> 8);
    uVar12 = uStack_8._1_1_;
    uStack_8 = uVar5;
    uVar8 = uStack_6._1_1_;
    uStack_6 = uVar9;
    uVar5 = uStack_8;
    uStack_8._1_1_ = uVar12;
    uVar9 = uStack_6;
    uStack_6._1_1_ = uVar8;
    pcVar15 = (code *)FUN_1000_0ac4();
    uVar8 = uStack_6._1_1_;
    uVar12 = uStack_8._1_1_;
    pbVar39 = (byte *)CONCAT11(param_2._1_1_,(byte)param_2);
    uVar5 = uStack_8;
    uVar9 = uStack_6;
    uStack_8._1_1_ = uVar12;
    uStack_6._1_1_ = uVar8;
  } while (!(bool)uVar41);
  return pcVar15;
}



// ============================================================================
// Function: FUN_1000_05a1
// Entry:    1000:05a1
// Body:     1000:05a1 -> 1000:05d4
// Size:     52 bytes
// Prototype: undefined __cdecl16near FUN_1000_05a1()
// ============================================================================

void __cdecl16near FUN_1000_05a1(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  do {
    cVar1 = (*(code *)*(undefined2 *)0x508)(0x1000);
  } while (cVar1 != '\x01');
  return;
}



// ============================================================================
// Function: FUN_1000_05d5
// Entry:    1000:05d5
// Body:     1000:05d5 -> 1000:065c
// Size:     135 bytes
// Prototype: undefined __cdecl16near FUN_1000_05d5()
// ============================================================================

void __cdecl16near FUN_1000_05d5(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  UINT_1000_020b._1_1_ = 0;
  while (bVar1 = FUN_1000_069c(), bVar1 != 0) {
    if ((bVar1 & 0x80) == 0) {
      UINT_1000_0223._1_1_ = 1;
      (*(code *)*(undefined2 *)0x5b3)(0x1000);
      (*(code *)*(undefined2 *)0x5bf)(0x1000);
      (*(code *)*(undefined2 *)0x5af)(0x1000);
      UINT_1000_020b._1_1_ = bVar1;
      DAT_1000_0225 = *(undefined1 *)((byte)(UINT_1000_020b._1_1_ - 1) + 0x219);
      (*(code *)*(undefined2 *)0x5ab)(0x1000);
    }
  }
  (*(code *)*(undefined2 *)0x5b3)(0x1000);
  (*(code *)*(undefined2 *)0x5bf)(0x1000);
  (*(code *)*(undefined2 *)0x5af)(0x1000);
  FUN_1000_07ad();
  UINT_1000_0223._1_1_ = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_065d
// Entry:    1000:065d
// Body:     1000:065d -> 1000:069b
// Size:     63 bytes
// Prototype: undefined __cdecl16near FUN_1000_065d()
// ============================================================================

uint __cdecl16near FUN_1000_065d(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (UINT_1000_0223._1_1_ != '\x01') {
    return in_AX;
  }
  bVar1 = UINT_1000_020b._1_1_ - 1;
  uVar3 = (uint)bVar1;
  if ((char)bVar1 < '\x01') {
    return uVar3;
  }
  if ('\t' < (char)bVar1) {
    return uVar3;
  }
  cVar2 = (*(code *)*(undefined2 *)0x5bb)(0x1000);
  if (cVar2 != -1) {
    return uVar3;
  }
  DAT_1000_0225 = DAT_1000_0225 ^ 1;
  uVar3 = (*(code *)*(undefined2 *)0x5ab)(0x1000);
  return uVar3;
}



// ============================================================================
// Function: FUN_1000_069c
// Entry:    1000:069c
// Body:     1000:069c -> 1000:06bc
// Size:     33 bytes
// Prototype: undefined __cdecl16near FUN_1000_069c()
// ============================================================================

uint __cdecl16near FUN_1000_069c(void)

{
  uint uVar1;
  uint unaff_DI;
  undefined2 unaff_DS;
  
  UINT_1000_015f = unaff_DI;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  uVar1 = FUN_1000_06bd();
  if ((char)uVar1 == -1) {
    uVar1 = uVar1 & 0xff00;
  }
  return uVar1;
}



// ============================================================================
// Function: FUN_1000_06bd
// Entry:    1000:06bd
// Body:     1000:06bd -> 1000:0771
// Size:     181 bytes
// Prototype: undefined __cdecl16near FUN_1000_06bd()
// ============================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16near FUN_1000_06bd(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 extraout_DH;
  undefined2 in_BX;
  undefined2 unaff_DS;
  bool bVar5;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  unique0x100000b3 = in_BX;
LAB_1000_06c2:
  do {
    FUN_1000_0772();
    do {
      FUN_1000_065d();
      if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000106d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(ulong)*(uint *)0x58b)();
        return uVar3;
      }
      FUN_1000_0b4a();
      cVar1 = FUN_1000_09e0();
    } while ((cVar1 != '\0') || (cVar1 = FUN_1000_0a4a(), cVar1 != '\0'));
    if ((char)UINT_1000_01fd == '\0') {
      FUN_1000_0b90();
    }
    while( true ) {
      FUN_1000_065d();
      if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000106ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(ulong)*(uint *)0x58b)();
        return uVar3;
      }
      bVar2 = FUN_1000_09e0();
      if ((bool)(bVar2 & 1)) {
        FUN_1000_0772();
        goto LAB_1000_06c2;
      }
      if ((bool)(bVar2 >> 1 & 1)) break;
      uVar3 = FUN_1000_0a4a();
      bVar2 = (byte)uVar3;
      if (bVar2 != 0) {
        FUN_1000_0772((uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                      (uint)(in_TF & 1) * 0x100 | (uint)((char)bVar2 < '\0') * 0x80 |
                      (uint)(bVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
                      (uint)((POPCOUNT(bVar2) & 1U) == 0) * 4);
        uVar4 = (undefined1)((uVar3 & 0xff02) >> 8);
        if ((uVar3 & 2) != 0) {
          return CONCAT11(uVar4,(bVar2 & 2 ^ (byte)(uVar3 & 0xff02)) - 1);
        }
        if ((*(byte *)0x575 & 8) == 0) {
          return CONCAT11(uVar4,extraout_DH) | 0x80;
        }
        return CONCAT11(uVar4,extraout_DH);
      }
      bVar5 = false;
      if (((char)UINT_1000_01fd == '\0') && (uVar3 = FUN_1000_0b40(), !bVar5)) {
        return uVar3;
      }
    }
    FUN_1000_0772();
  } while( true );
}



// ============================================================================
// Function: FUN_1000_0772
// Entry:    1000:0772
// Body:     1000:0772 -> 1000:07ac
// Size:     59 bytes
// Prototype: undefined __cdecl16near FUN_1000_0772()
// ============================================================================

void __cdecl16near FUN_1000_0772(void)

{
  char cVar1;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  cVar1 = (char)((uint)in_DX >> 8) + '\x01';
  do {
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  if (*(char *)0x558 == '\0') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  else {
    (*(code *)*(undefined2 *)0x508)(0x1000);
  }
  return;
}



// ============================================================================
// Function: FUN_1000_07ad
// Entry:    1000:07ad
// Body:     1000:07ad -> 1000:07c3
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_07ad()
// ============================================================================

void __cdecl16near FUN_1000_07ad(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_07c4
// Entry:    1000:07c4
// Body:     1000:07c4 -> 1000:07da
// Size:     23 bytes
// Prototype: undefined __cdecl16near FUN_1000_07c4()
// ============================================================================

void __cdecl16near FUN_1000_07c4(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_080e
// Entry:    1000:080e
// Body:     1000:080e -> 1000:0837
// Size:     42 bytes
// Prototype: undefined __cdecl16near FUN_1000_080e()
// ============================================================================

void __cdecl16near FUN_1000_080e(void)

{
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  uRam0001080a = in_BX;
  uRam0001080c = unaff_DS;
  (*(code *)*(undefined2 *)0x59f)(0x1000);
  (*pcRam000105cf)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0867
// Entry:    1000:0867
// Body:     1000:0867 -> 1000:0873
// Size:     13 bytes
// Prototype: undefined FUN_1000_0867()
// ============================================================================

void FUN_1000_0867(void)

{
  FUN_1000_080e();
  FUN_1000_088b();
  return;
}



// ============================================================================
// Function: FUN_1000_088b
// Entry:    1000:088b
// Body:     1000:088b -> 1000:08cb
// Size:     65 bytes
// Prototype: undefined __cdecl16near FUN_1000_088b()
// ============================================================================

void __cdecl16near FUN_1000_088b(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte *in_BX;
  byte *pbVar6;
  byte *unaff_DI;
  undefined2 unaff_DS;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          pbVar6 = in_BX + 1;
          bVar2 = *in_BX;
          bVar5 = (bVar2 & 0x3f) + 1;
          uVar4 = (uint)bVar5;
          if ((bVar2 & 0xc0) != 0) break;
          for (; in_BX = pbVar6, uVar4 != 0; uVar4 = uVar4 - 1) {
            pbVar1 = unaff_DI;
            unaff_DI = unaff_DI + 1;
            *pbVar1 = 0;
          }
        }
        if ((char)(bVar2 & 0xc0) < '\0') break;
        for (; in_BX = pbVar6, uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar1 = unaff_DI;
          unaff_DI = unaff_DI + 1;
          *pbVar1 = 0xff;
        }
      }
      if ((bVar2 & 0x40) == 0) break;
      for (; in_BX = pbVar6, uVar4 != 0; uVar4 = uVar4 - 1) {
        pbVar3 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        pbVar1 = pbVar6;
        pbVar6 = pbVar6 + 1;
        *pbVar3 = *pbVar1;
      }
    }
    if (bVar5 == 1) break;
    in_BX = in_BX + 2;
    bVar2 = *pbVar6;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      pbVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *pbVar1 = bVar2;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_08cc
// Entry:    1000:08cc
// Body:     1000:08cc -> 1000:08e8
// Size:     29 bytes
// Prototype: undefined __cdecl16near FUN_1000_08cc()
// ============================================================================

void __cdecl16near FUN_1000_08cc(void)

{
  byte bVar1;
  
  bVar1 = DAT_1000_0b08 + DAT_1000_0b06 * '\t';
  DAT_1000_0b06 = bVar1 >> 1 | bVar1 * -0x80;
  return;
}



// ============================================================================
// Function: FUN_1000_09e0
// Entry:    1000:09e0
// Body:     1000:09e0 -> 1000:0a49
// Size:     106 bytes
// Prototype: undefined __cdecl16near FUN_1000_09e0()
// ============================================================================

uint __cdecl16near FUN_1000_09e0(void)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 unaff_DS;
  
  bVar4 = *(byte *)0x56b;
  uVar2 = CONCAT11(0xff,bVar4);
  if ((bVar4 & 2) == 0) {
    uVar2 = CONCAT11(0xff,bVar4) ^ 0x600;
  }
  if ((uVar2 & 4) == 0) {
    uVar2 = uVar2 ^ 0x200;
  }
  if ((uVar2 & 8) == 0) {
    uVar2 = uVar2 ^ 0xa00;
  }
  if ((uVar2 & 0x10) == 0) {
    uVar2 = uVar2 ^ 0x400;
  }
  if ((uVar2 & 0x40) == 0) {
    uVar2 = uVar2 ^ 0x800;
  }
  if ((uVar2 & 0x80) == 0) {
    uVar2 = (uint)(byte)((byte)(uVar2 >> 8) ^ 5) << 8;
  }
  bVar4 = *(byte *)0x56c;
  uVar3 = (undefined1)(uVar2 >> 8);
  uVar2 = CONCAT11(uVar3,bVar4);
  if ((bVar4 & 1) == 0) {
    uVar2 = CONCAT11(uVar3,bVar4) ^ 0x100;
  }
  if ((uVar2 & 2) == 0) {
    uVar2 = uVar2 ^ 0x900;
  }
  bVar4 = (byte)(uVar2 >> 8);
  if (*(char *)0x555 == '\x01') {
    bVar1 = (*(code *)*(undefined2 *)0x500)(0x1000);
    bVar4 = bVar4 & ~(bVar1 & 0xf);
  }
  return CONCAT11(~bVar4,~bVar4) & 0xff0f;
}



// ============================================================================
// Function: FUN_1000_0a4a
// Entry:    1000:0a4a
// Body:     1000:0a4a -> 1000:0ab2
// Size:     105 bytes
// Prototype: undefined __cdecl16near FUN_1000_0a4a()
// ============================================================================

uint __cdecl16near FUN_1000_0a4a(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 unaff_DS;
  
  bVar5 = *(byte *)0x570;
  uVar3 = CONCAT11(0xff,bVar5);
  if ((bVar5 & 1) == 0) {
    uVar3 = CONCAT11(0xff,bVar5) & 0xfeff;
  }
  if ((uVar3 & 4) == 0) {
    uVar3 = (uint)((byte)(uVar3 >> 8) & 0xfd) << 8;
  }
  bVar5 = *(byte *)0x574;
  uVar4 = (undefined1)(uVar3 >> 8);
  uVar3 = CONCAT11(uVar4,bVar5);
  if ((bVar5 & 0x40) == 0) {
    uVar3 = CONCAT11(uVar4,bVar5) & 0xfeff;
  }
  if ((uVar3 & 0x80) == 0) {
    uVar3 = (uint)((byte)(uVar3 >> 8) & 0xfd) << 8;
  }
  bVar5 = (byte)(uVar3 >> 8);
  if ((*(byte *)0x56c & 0x80) == 0) {
    bVar5 = bVar5 & 0xfe;
  }
  bVar1 = *(byte *)0x573;
  if ((bVar1 & 0x40) == 0) {
    bVar5 = bVar5 & 0xfd;
  }
  if (*(char *)0x555 == '\x01') {
    bVar2 = (*(code *)*(undefined2 *)0x500)(0x1000);
    bVar5 = bVar5 & ~(bVar2 >> 6);
  }
  return CONCAT11(bVar1,~bVar5) & 0xff03;
}



// ============================================================================
// Function: FUN_1000_0ac4
// Entry:    1000:0ac4
// Body:     1000:0ac4 -> 1000:0acd
// Size:     10 bytes
// Prototype: undefined __cdecl16near FUN_1000_0ac4()
// ============================================================================

void __cdecl16near FUN_1000_0ac4(void)

{
  char cVar1;
  
  cVar1 = FUN_1000_0a4a();
  if (cVar1 == '\0') {
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_0b40
// Entry:    1000:0b40
// Body:     1000:0b40 -> 1000:0b49
// Size:     10 bytes
// Prototype: undefined __cdecl16near FUN_1000_0b40()
// ============================================================================

void __cdecl16near FUN_1000_0b40(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_0b4a
// Entry:    1000:0b4a
// Body:     1000:0b4a -> 1000:0b5f
// Size:     22 bytes
// Prototype: undefined __cdecl16near FUN_1000_0b4a()
// ============================================================================

void __cdecl16near FUN_1000_0b4a(void)

{
  uint in_CX;
  undefined2 unaff_DS;
  
  FUN_1000_0b90();
  do {
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
  } while (DAT_1000_0b00 < in_CX);
  return;
}



// ============================================================================
// Function: FUN_1000_0b90
// Entry:    1000:0b90
// Body:     1000:0b90 -> 1000:0b99
// Size:     10 bytes
// Prototype: undefined __cdecl16near FUN_1000_0b90()
// ============================================================================

void __cdecl16near FUN_1000_0b90(void)

{
  DAT_1000_0b00 = 0;
  return;
}



// ============================================================================
// Function: FUN_1000_0ba7
// Entry:    1000:0ba7
// Body:     1000:0ba7 -> 1000:0bc7
// Size:     32 bytes
// Prototype: undefined __cdecl16near FUN_1000_0ba7()
// ============================================================================

undefined1 __cdecl16near FUN_1000_0ba7(void)

{
  undefined1 uVar1;
  uint in_CX;
  undefined2 unaff_DS;
  
  while( true ) {
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)*(uint *)0x58b)();
      return uVar1;
    }
    if ((*(byte *)0x56c & 0x80) == 0) break;
    if (in_CX <= DAT_1000_0b00) {
      return 0;
    }
  }
  return 1;
}



// ============================================================================
// Function: FUN_1000_0d22
// Entry:    1000:0d22
// Body:     1000:0d22 -> 1000:0d24
// Size:     3 bytes
// Prototype: undefined FUN_1000_0d22()
// ============================================================================

void FUN_1000_0d22(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  puVar2 = (undefined1 *)0xc70;
  puVar3 = (undefined1 *)0xc7e;
  iVar1 = 8;
  do {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    (*(code *)*(undefined2 *)0x508)(0x1000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_0d25
// Entry:    1000:0d25
// Body:     1000:0d25 -> 1000:0d48
// Size:     36 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d25()
// ============================================================================

void __cdecl16near FUN_1000_0d25(void)

{
  int iVar1;
  undefined1 *in_BX;
  undefined1 *puVar2;
  undefined2 unaff_DS;
  
  puVar2 = (undefined1 *)0xc7e;
  iVar1 = 8;
  do {
    *puVar2 = *in_BX;
    puVar2 = puVar2 + 1;
    in_BX = in_BX + 1;
    (*(code *)*(undefined2 *)0x508)(0x1000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_0d49
// Entry:    1000:0d49
// Body:     1000:0d49 -> 1000:0d68
// Size:     30 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d49()
// ============================================================================

void __cdecl16near FUN_1000_0d49(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  uVar2 = 0;
  puVar3 = (undefined1 *)0xc7e;
  iVar1 = 8;
  do {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_0d78
// Entry:    1000:0d78
// Body:     1000:0d78 -> 1000:0d94
// Size:     29 bytes
// Prototype: undefined __cdecl16near FUN_1000_0d78()
// ============================================================================

void __cdecl16near FUN_1000_0d78(void)

{
  DAT_1000_0c7a = 0x14;
  DAT_1000_0c78 = 2;
  DAT_1000_0c7b = 8;
  DAT_1000_0c79 = 0x14;
  return;
}



// ============================================================================
// Function: caseD_69
// Entry:    1000:0e26
// Body:     1000:0e26 -> 1000:0f7a
// Size:     341 bytes
// Prototype: undefined caseD_69()
// ============================================================================

void switchD_1000:04fc::caseD_69(void)

{
  undefined2 unaff_DS;
  
  DAT_1000_0e22 = (undefined1 *)register0x00000010;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x5ab)(0x1000);
  FUN_1000_0d22();
  if (*(char *)0x558 == '\0') {
    DAT_1000_0e1e = 0x5968;
    FUN_1000_0867();
    DAT_1000_0e20 = 0x7c90;
    FUN_1000_0867();
  }
  else {
    FUN_1000_0867();
    FUN_1000_1c44();
    DAT_1000_0e1e = 0x3640;
    FUN_1000_0867();
    FUN_1000_1c44();
    DAT_1000_0e20 = 0x5580;
  }
  FUN_1000_0f7b();
  if (*(char *)0x558 == '\0') {
    FUN_1000_0fbe();
    FUN_1000_0fbe();
    FUN_1000_0fbe();
    FUN_1000_0fbe();
    FUN_1000_0fcd();
    FUN_1000_0fcd();
  }
  else {
    FUN_1000_0fdc();
    FUN_1000_0feb();
    FUN_1000_0ffa();
  }
  if (*(char *)0x558 == '\0') {
    FUN_1000_1009();
    FUN_1000_1009();
    FUN_1000_1009();
    FUN_1000_1009();
    if ((char)caseD_72 == '\x02') {
      FUN_1000_0867();
    }
  }
  else {
    FUN_1000_1018();
    FUN_1000_1027();
    if ((char)caseD_72 == '\x02') {
      FUN_1000_0867();
      FUN_1000_1c44();
    }
  }
  if ((char)caseD_72 != '\x01') {
    DAT_1000_0e24 = 2000;
    FUN_1000_106e();
  }
  DAT_1000_0e24 = 1000;
  FUN_1000_1036();
  return;
}



// ============================================================================
// Function: FUN_1000_0f7b
// Entry:    1000:0f7b
// Body:     1000:0f7b -> 1000:0fbd
// Size:     67 bytes
// Prototype: undefined __cdecl16near FUN_1000_0f7b()
// ============================================================================

void __cdecl16near FUN_1000_0f7b(void)

{
  char in_AL;
  byte bVar1;
  undefined2 in_CX;
  undefined1 extraout_DL;
  undefined1 extraout_DH;
  uint uVar2;
  uint extraout_DX;
  undefined2 unaff_DS;
  
LAB_1000_0f7d:
  do {
    FUN_1000_08cc(in_CX);
    do {
      bVar1 = FUN_1000_08cc(in_CX);
    } while ((bVar1 & 3) == 3);
    uVar2 = CONCAT11(bVar1,extraout_DL) & 0x3ff;
    if (1 < (bVar1 & 3)) {
      do {
        bVar1 = FUN_1000_08cc();
      } while (0x7f < bVar1);
      uVar2 = CONCAT11(extraout_DH,bVar1);
    }
    do {
      if (600 < (int)uVar2) goto LAB_1000_0f7d;
      bVar1 = FUN_1000_08cc();
      uVar2 = extraout_DX;
    } while (0x77 < bVar1);
    (*(code *)*(undefined2 *)0x508)(0x1000);
    in_AL = in_AL + -1;
    if (in_AL == '\0') {
      return;
    }
  } while( true );
}



// ============================================================================
// Function: FUN_1000_0fbe
// Entry:    1000:0fbe
// Body:     1000:0fbe -> 1000:0fcc
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_0fbe()
// ============================================================================

void __cdecl16near FUN_1000_0fbe(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0fcd
// Entry:    1000:0fcd
// Body:     1000:0fcd -> 1000:0fdb
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_0fcd()
// ============================================================================

void __cdecl16near FUN_1000_0fcd(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0fdc
// Entry:    1000:0fdc
// Body:     1000:0fdc -> 1000:0fea
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_0fdc()
// ============================================================================

void __cdecl16near FUN_1000_0fdc(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0feb
// Entry:    1000:0feb
// Body:     1000:0feb -> 1000:0ff9
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_0feb()
// ============================================================================

void __cdecl16near FUN_1000_0feb(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_0ffa
// Entry:    1000:0ffa
// Body:     1000:0ffa -> 1000:1008
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_0ffa()
// ============================================================================

void __cdecl16near FUN_1000_0ffa(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_1009
// Entry:    1000:1009
// Body:     1000:1009 -> 1000:1017
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_1009()
// ============================================================================

void __cdecl16near FUN_1000_1009(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_1018
// Entry:    1000:1018
// Body:     1000:1018 -> 1000:1026
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_1018()
// ============================================================================

void __cdecl16near FUN_1000_1018(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_1027
// Entry:    1000:1027
// Body:     1000:1027 -> 1000:1035
// Size:     15 bytes
// Prototype: undefined __cdecl16near FUN_1000_1027()
// ============================================================================

void __cdecl16near FUN_1000_1027(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_1036
// Entry:    1000:1036
// Body:     1000:1036 -> 1000:106c
// Size:     55 bytes
// Prototype: undefined FUN_1000_1036()
// ============================================================================

void FUN_1000_1036(void)

{
  FUN_1000_1185();
  FUN_1000_112e();
  FUN_1000_1185();
  FUN_1000_106e();
  FUN_1000_1185();
  if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
    FUN_1000_106e();
  }
  FUN_1000_1185();
  FUN_1000_10c4();
  return;
}



// ============================================================================
// Function: FUN_1000_106e
// Entry:    1000:106e
// Body:     1000:106e -> 1000:1092
// Size:     37 bytes
// Prototype: undefined __cdecl16near FUN_1000_106e()
// ============================================================================

void __cdecl16near FUN_1000_106e(void)

{
  undefined2 in_BX;
  char *unaff_SI;
  
  while (*unaff_SI != -1) {
    FUN_1000_112e(in_BX);
    FUN_1000_1185();
    FUN_1000_1093();
    FUN_1000_1159();
    FUN_1000_1185();
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1093
// Entry:    1000:1093
// Body:     1000:1093 -> 1000:10c2
// Size:     46 bytes
// Prototype: undefined __cdecl16near FUN_1000_1093()
// ============================================================================

void __cdecl16near FUN_1000_1093(void)

{
  int in_BX;
  char *unaff_SI;
  undefined2 unaff_DS;
  
  while( true ) {
    DAT_1000_0e1c = in_BX;
    (*(code *)*(undefined2 *)0x508)(0x1000);
    unaff_SI = unaff_SI + 1;
    if (*unaff_SI != '/') break;
    do {
      in_BX = DAT_1000_0e1c + 0x100;
      unaff_SI = unaff_SI + 1;
    } while (*unaff_SI == '/');
  }
  return;
}



// ============================================================================
// Function: FUN_1000_10c4
// Entry:    1000:10c4
// Body:     1000:10c4 -> 1000:112d
// Size:     106 bytes
// Prototype: undefined __cdecl16near FUN_1000_10c4()
// ============================================================================

void __cdecl16near FUN_1000_10c4(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_112e();
  FUN_1000_1185();
  if ((char)switchD_1000:04fc::caseD_72 == '\x02') {
    (*(code *)*(undefined2 *)0x508)(0x1000);
    FUN_1000_1159();
    FUN_1000_1185();
  }
  FUN_1000_1185();
  FUN_1000_1093();
  FUN_1000_1093();
  FUN_1000_1185();
  (*(code *)*(undefined2 *)0x5b3)(0x1000);
  (*(code *)*(undefined2 *)0x5bf)(0x1000);
  (*(code *)*(undefined2 *)0x5af)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_112e
// Entry:    1000:112e
// Body:     1000:112e -> 1000:1158
// Size:     43 bytes
// Prototype: undefined __cdecl16near FUN_1000_112e()
// ============================================================================

undefined4 __cdecl16near FUN_1000_112e(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return CONCAT22(in_DX,in_AX);
}



// ============================================================================
// Function: FUN_1000_1159
// Entry:    1000:1159
// Body:     1000:1159 -> 1000:1159
// Size:     1 bytes
// Prototype: undefined __cdecl16near FUN_1000_1159()
// ============================================================================

void __cdecl16near FUN_1000_1159(void)

{
  return;
}



// ============================================================================
// Function: FUN_1000_1185
// Entry:    1000:1185
// Body:     1000:1185 -> 1000:11bb
// Size:     55 bytes
// Prototype: undefined __cdecl16near FUN_1000_1185()
// ============================================================================

void __cdecl16near FUN_1000_1185(void)

{
  uint uVar1;
  uint in_CX;
  undefined2 unaff_BP;
  undefined2 unaff_DS;
  
  FUN_1000_0b90();
  while( true ) {
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001118f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    if (((*(byte *)0x56c & 0x80) == 0) ||
       ((*(char *)0x555 == '\x01' &&
        (uVar1 = (*(code *)*(undefined2 *)0x500)(0x1000,unaff_BP), (uVar1 & 0x40) != 0)))) break;
    if (in_CX <= DAT_1000_0b00) {
      return;
    }
  }
  (*(code *)*(undefined2 *)0x5b3)(0x1000);
  (*(code *)*(undefined2 *)0x5bf)(0x1000);
  (*(code *)*(undefined2 *)0x5af)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_1c44
// Entry:    1000:1c44
// Body:     1000:1c44 -> 1000:1cb7
// Size:     112 bytes
// Prototype: undefined __cdecl16near FUN_1000_1c44()
// ============================================================================

void __cdecl16near FUN_1000_1c44(void)

{
  char in_AL;
  
  if (in_AL == '\0') {
    FUN_1000_1e3a();
    FUN_1000_1cb8();
    FUN_1000_1d3f();
    return;
  }
  if (in_AL == '\x01') {
    FUN_1000_1e3a();
    FUN_1000_1cb8();
    return;
  }
  if (in_AL == '\x02') {
    FUN_1000_1db4();
    return;
  }
  if (in_AL == '\x03') {
    FUN_1000_1ea2();
    return;
  }
  if (in_AL == '\x04') {
    FUN_1000_1df4();
    return;
  }
  if (in_AL == '\x05') {
    FUN_1000_1e7a();
    return;
  }
  return;
}



// ============================================================================
// Function: FUN_1000_1cb8
// Entry:    1000:1cb8
// Body:     1000:1cb8 -> 1000:1d3e
// Size:     135 bytes
// Prototype: undefined __cdecl16near FUN_1000_1cb8()
// ============================================================================

void __cdecl16near FUN_1000_1cb8(void)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint in_CX;
  int iVar6;
  char *unaff_SI;
  char *pcVar7;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar6 = (in_CX >> 8) * (in_CX & 0xff);
  iRam00011c22 = iVar6 * 2;
  iRam00011c20 = iVar6;
  do {
    pcVar7 = unaff_SI + iRam00011c22;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + -iRam00011c20;
    cVar3 = *pcVar7;
    iVar5 = -iRam00011c20;
    cVar4 = pcVar7[iVar5];
    pbVar1 = unaff_DI + 1;
    *unaff_DI = ((((((char)(cVar2 << 1) < '\0') << 1 | (char)(cVar3 << 1) < '\0') << 1 |
                  (char)(cVar4 << 1) < '\0') << 2 | (char)(cVar2 << 3) < '\0') << 1 |
                (char)(cVar3 << 3) < '\0') << 1 | (char)(cVar4 << 3) < '\0';
    unaff_DI = unaff_DI + 2;
    *pbVar1 = ((((((char)(cVar2 << 5) < '\0') << 1 | (char)(cVar3 << 5) < '\0') << 1 |
                (char)(cVar4 << 5) < '\0') << 2 | (char)(cVar2 << 7) < '\0') << 1 |
              (int)((uint)(byte)(cVar3 << 7) << 8) < 0) << 1 | (char)(cVar4 << 7) < '\0';
    unaff_SI = pcVar7 + iVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_1d3f
// Entry:    1000:1d3f
// Body:     1000:1d3f -> 1000:1db3
// Size:     117 bytes
// Prototype: undefined __cdecl16near FUN_1000_1d3f()
// ============================================================================

void __cdecl16near FUN_1000_1d3f(void)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint in_CX;
  int iVar5;
  byte bVar6;
  char *unaff_SI;
  char *pcVar7;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar5 = (in_CX >> 8) * (in_CX & 0xff);
  iRam00011c20 = iVar5;
  do {
    pcVar7 = unaff_SI + iRam00011c20;
    cVar2 = *pcVar7;
    bVar6 = 0;
    if ((char)(cVar2 << 1) < '\0') {
      bVar6 = 0x70;
    }
    iVar4 = -iRam00011c20;
    cVar3 = pcVar7[iVar4];
    if ((char)(cVar3 << 1) < '\0') {
      bVar6 = bVar6 | 0x60;
    }
    if ((char)(cVar2 << 3) < '\0') {
      bVar6 = bVar6 | 7;
    }
    if ((char)(cVar3 << 3) < '\0') {
      bVar6 = bVar6 | 6;
    }
    pbVar1 = unaff_DI + 1;
    *unaff_DI = bVar6;
    bVar6 = 0;
    if ((char)(cVar2 << 5) < '\0') {
      bVar6 = 0x70;
    }
    if ((char)(cVar3 << 5) < '\0') {
      bVar6 = bVar6 | 0x60;
    }
    if ((char)(cVar2 << 7) < '\0') {
      bVar6 = bVar6 | 7;
    }
    if ((int)((uint)(byte)(cVar3 << 7) << 8) < 0) {
      bVar6 = bVar6 | 6;
    }
    unaff_DI = unaff_DI + 2;
    *pbVar1 = bVar6;
    unaff_SI = pcVar7 + iVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_1db4
// Entry:    1000:1db4
// Body:     1000:1db4 -> 1000:1df3
// Size:     64 bytes
// Prototype: undefined __cdecl16near FUN_1000_1db4()
// ============================================================================

void __cdecl16near FUN_1000_1db4(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  uint in_CX;
  int iVar4;
  char *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = (in_CX >> 8) * (in_CX & 0xff);
  iRam00011c20 = iVar4;
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar2 = *pcVar1;
    puVar3 = unaff_DI + 1;
    *unaff_DI = *(undefined1 *)
                 ((byte)(((char)(cVar2 << 1) < '\0') << 1 | (char)(cVar2 << 3) < '\0') + 0x1c24);
    unaff_DI = unaff_DI + 2;
    *puVar3 = *(undefined1 *)
               ((byte)(((char)(cVar2 << 5) < '\0') << 1 | (char)(cVar2 << 7) < '\0') + 0x1c24);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_1df4
// Entry:    1000:1df4
// Body:     1000:1df4 -> 1000:1e39
// Size:     70 bytes
// Prototype: undefined __cdecl16near FUN_1000_1df4()
// ============================================================================

void __cdecl16near FUN_1000_1df4(void)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  uint in_DX;
  byte in_BL;
  byte bVar5;
  char *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = (in_DX >> 8) * (in_DX & 0xff);
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar2 = *pcVar1;
    bVar5 = 0;
    if ((char)(cVar2 << 1) < '\0') {
      bVar5 = in_BL << 4;
    }
    if ((char)(cVar2 << 3) < '\0') {
      bVar5 = bVar5 | in_BL;
    }
    pbVar3 = unaff_DI + 1;
    *unaff_DI = bVar5;
    bVar5 = 0;
    if ((char)(cVar2 << 5) < '\0') {
      bVar5 = in_BL << 4;
    }
    if ((char)(cVar2 << 7) < '\0') {
      bVar5 = bVar5 | in_BL;
    }
    unaff_DI = unaff_DI + 2;
    *pbVar3 = bVar5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_1e3a
// Entry:    1000:1e3a
// Body:     1000:1e3a -> 1000:1e79
// Size:     64 bytes
// Prototype: undefined __cdecl16near FUN_1000_1e3a()
// ============================================================================

void __cdecl16near FUN_1000_1e3a(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  uint in_CX;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar3 = (in_CX >> 8) * (in_CX & 0xff);
  iRam00011c20 = iVar3;
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar4 = *pcVar1 << 1 | *pcVar1 < '\0';
    bVar5 = bVar4 << 1 | (char)bVar4 < '\0';
    bVar5 = bVar5 << 1 | (char)bVar5 < '\0';
    bVar6 = bVar5 << 1 | (char)bVar5 < '\0';
    puVar2 = unaff_DI + 1;
    *unaff_DI = *(undefined1 *)((byte)(((char)bVar4 < '\0') << 1 | (char)bVar5 < '\0') + 0x1c24);
    bVar4 = bVar6 << 1 | (char)bVar6 < '\0';
    bVar5 = bVar4 << 1 | (char)bVar4 < '\0';
    unaff_DI = unaff_DI + 2;
    *puVar2 = *(undefined1 *)
               ((byte)(((char)bVar4 < '\0') << 1 | (char)(bVar5 << 1 | (char)bVar5 < '\0') < '\0') +
               0x1c24);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_1e7a
// Entry:    1000:1e7a
// Body:     1000:1e7a -> 1000:1ea1
// Size:     40 bytes
// Prototype: undefined __cdecl16near FUN_1000_1e7a()
// ============================================================================

void __cdecl16near FUN_1000_1e7a(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  int in_CX;
  byte *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  do {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar2 = *pbVar1;
    puVar3 = unaff_DI + 1;
    *unaff_DI = *(undefined1 *)((bVar2 >> 4) + 0x1c2c);
    unaff_DI = unaff_DI + 2;
    *puVar3 = *(undefined1 *)((bVar2 & 0xf) + 0x1c2c);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}



// ============================================================================
// Function: FUN_1000_1ea2
// Entry:    1000:1ea2
// Body:     1000:1ea2 -> 1000:1f69
// Size:     200 bytes
// Prototype: undefined __cdecl16near FUN_1000_1ea2()
// ============================================================================

undefined2 __cdecl16near FUN_1000_1ea2(void)

{
  char cVar1;
  char cVar2;
  int in_CX;
  int iVar3;
  char *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  do {
    iVar3 = 8;
    do {
      cVar1 = *unaff_SI;
      cVar2 = unaff_SI[2];
      *unaff_DI = *(byte *)((byte)((cVar2 < '\0') << 1 | cVar1 < '\0') + 0x1c3c) |
                  *(byte *)((byte)(((char)(cVar2 << 2) < '\0') << 1 | (char)(cVar1 << 2) < '\0') +
                           0x1c40);
      unaff_DI[1] = *(byte *)((byte)(((char)(cVar2 << 4) < '\0') << 1 | (char)(cVar1 << 4) < '\0') +
                             0x1c3c) |
                    *(byte *)((byte)(((char)(cVar2 << 6) < '\0') << 1 | (char)(cVar1 << 6) < '\0') +
                             0x1c40);
      cVar1 = unaff_SI[1];
      cVar2 = unaff_SI[3];
      unaff_DI[2] = *(byte *)((byte)((cVar2 < '\0') << 1 | cVar1 < '\0') + 0x1c3c) |
                    *(byte *)((byte)(((char)(cVar2 << 2) < '\0') << 1 | (char)(cVar1 << 2) < '\0') +
                             0x1c40);
      unaff_DI[3] = *(byte *)((byte)(((char)(cVar2 << 4) < '\0') << 1 | (char)(cVar1 << 4) < '\0') +
                             0x1c3c) |
                    *(byte *)((byte)(((char)(cVar2 << 6) < '\0') << 1 | (char)(cVar1 << 6) < '\0') +
                             0x1c40);
      unaff_DI = unaff_DI + 4;
      unaff_SI = unaff_SI + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return CONCAT11(cVar2 << 7,cVar1 << 7);
}



// ============================================================================
// Function: FUN_1000_1f85
// Entry:    1000:1f85
// Body:     1000:1f85 -> 1000:2041
// Size:     189 bytes
// Prototype: undefined __cdecl16near FUN_1000_1f85()
// ============================================================================

void __cdecl16near FUN_1000_1f85(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  DAT_1000_1f83 = &stack0xfffe;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  if (*(char *)0x558 == '\0') {
    out(0x3ce,3);
    out(0x3cf,0);
  }
  iVar1 = 0x5a;
  iVar2 = 0x2350;
  do {
    FUN_1000_0b90();
    FUN_1000_2078(iVar2);
    iVar2 = iVar2 + 1;
    FUN_1000_2045();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x5a;
  do {
    FUN_1000_0b90(iVar2);
    FUN_1000_2078();
    iVar2 = iVar2 + -1;
    FUN_1000_2045();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_1000_20e2();
  (*(code *)*(undefined2 *)0x508)(0x1000);
  FUN_1000_2042();
  FUN_1000_2134();
  FUN_1000_2042();
  FUN_1000_217e();
  FUN_1000_2042();
  FUN_1000_225f();
  FUN_1000_2042();
  if (*(char *)0x558 == '\0') {
    out(0x3ce,3);
    out(0x3cf,0);
  }
  FUN_1000_21c8();
  FUN_1000_2042();
  return;
}



// ============================================================================
// Function: FUN_1000_2042
// Entry:    1000:2042
// Body:     1000:2042 -> 1000:2044
// Size:     3 bytes
// Prototype: undefined FUN_1000_2042()
// ============================================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_1000_2042(void)

{
  byte bVar1;
  uint in_CX;
  undefined2 unaff_BP;
  undefined2 unaff_DS;
  
  FUN_1000_0b90();
  while( true ) {
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    if (((*(byte *)0x56c & 0x80) == 0) ||
       ((*(char *)0x555 == '\x01' &&
        (bVar1 = (*(code *)*(undefined2 *)0x500)(0x1000,unaff_BP), (bVar1 & 0x40) != 0)))) break;
    if (in_CX <= DAT_1000_0b00) {
      return;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2045
// Entry:    1000:2045
// Body:     1000:2045 -> 1000:2076
// Size:     50 bytes
// Prototype: undefined __cdecl16near FUN_1000_2045()
// ============================================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __cdecl16near FUN_1000_2045(void)

{
  byte bVar1;
  uint in_CX;
  undefined2 unaff_BP;
  undefined2 unaff_DS;
  
  while( true ) {
    if (*(char *)0x55b == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*(uint *)0x58b)();
      return;
    }
    if (((*(byte *)0x56c & 0x80) == 0) ||
       ((*(char *)0x555 == '\x01' &&
        (bVar1 = (*(code *)*(undefined2 *)0x500)(0x1000,unaff_BP), (bVar1 & 0x40) != 0)))) break;
    if (in_CX <= DAT_1000_0b00) {
      return;
    }
  }
  return;
}



// ============================================================================
// Function: FUN_1000_2078
// Entry:    1000:2078
// Body:     1000:2078 -> 1000:20e1
// Size:     106 bytes
// Prototype: undefined __cdecl16near FUN_1000_2078()
// ============================================================================

void __cdecl16near FUN_1000_2078(void)

{
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  
  if (DAT_1000_2077 == '\0') {
    DAT_1000_2077 = 1;
    FUN_1000_2212();
    DAT_1000_2077 = '\x01';
    if (*(char *)0x558 != '\0') {
      FUN_1000_1c44(unaff_DI);
    }
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_20e2
// Entry:    1000:20e2
// Body:     1000:20e2 -> 1000:2133
// Size:     82 bytes
// Prototype: undefined __cdecl16near FUN_1000_20e2()
// ============================================================================

void __cdecl16near FUN_1000_20e2(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_2212();
  if (*(char *)0x558 != '\0') {
    FUN_1000_1c44();
    FUN_1000_231c();
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_2134
// Entry:    1000:2134
// Body:     1000:2134 -> 1000:217d
// Size:     74 bytes
// Prototype: undefined __cdecl16near FUN_1000_2134()
// ============================================================================

void __cdecl16near FUN_1000_2134(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_2212();
  if (*(char *)0x558 != '\0') {
    FUN_1000_1c44(0x3640);
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_217e
// Entry:    1000:217e
// Body:     1000:217e -> 1000:21c7
// Size:     74 bytes
// Prototype: undefined __cdecl16near FUN_1000_217e()
// ============================================================================

void __cdecl16near FUN_1000_217e(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_2212();
  if (*(char *)0x558 != '\0') {
    FUN_1000_1c44(0x3640);
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_21c8
// Entry:    1000:21c8
// Body:     1000:21c8 -> 1000:220f
// Size:     72 bytes
// Prototype: undefined __cdecl16near FUN_1000_21c8()
// ============================================================================

void __cdecl16near FUN_1000_21c8(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_2212();
  if (*(char *)0x558 != '\0') {
    FUN_1000_1c44();
  }
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return;
}



// ============================================================================
// Function: FUN_1000_2212
// Entry:    1000:2212
// Body:     1000:2212 -> 1000:225e
// Size:     76 bytes
// Prototype: undefined __cdecl16near FUN_1000_2212()
// ============================================================================

void __cdecl16near FUN_1000_2212(void)

{
  byte bVar1;
  byte bVar2;
  uint in_AX;
  char cVar3;
  int in_CX;
  int iVar4;
  byte *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  DAT_1000_2210 = in_CX;
  (*(code *)*(undefined2 *)0x508)(0x1000);
  iVar4 = DAT_1000_2210;
  do {
    bVar2 = *unaff_SI;
    if ((bVar2 & 0x80) == 0) {
      in_AX = CONCAT11(bVar2 + 1,(char)in_AX);
      do {
        unaff_SI = unaff_SI + 1;
        *unaff_DI = *unaff_SI;
        unaff_DI = unaff_DI + 1;
        cVar3 = (char)(in_AX >> 8) + -1;
        in_AX = CONCAT11(cVar3,(char)in_AX);
      } while (cVar3 != '\0');
    }
    else {
      bVar2 = -bVar2;
      in_AX = CONCAT11(bVar2 + 1,(char)in_AX);
      unaff_SI = unaff_SI + 1;
      bVar1 = *unaff_SI;
      do {
        *unaff_DI = bVar1;
        unaff_DI = unaff_DI + 1;
        cVar3 = (char)(in_AX >> 8) + -1;
        in_AX = CONCAT11(cVar3,(char)in_AX);
      } while (cVar3 != '\0');
    }
    unaff_SI = unaff_SI + 1;
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8),(char)iVar4 - bVar2) + -1;
  } while ((iVar4 != 0) ||
          (bVar2 = (char)in_AX - 1, in_AX = (uint)bVar2, iVar4 = DAT_1000_2210, bVar2 != 0));
  return;
}



// ============================================================================
// Function: FUN_1000_225f
// Entry:    1000:225f
// Body:     1000:225f -> 1000:2300
// Size:     162 bytes
// Prototype: undefined __cdecl16near FUN_1000_225f()
// ============================================================================

undefined2 __cdecl16near FUN_1000_225f(void)

{
  char *pcVar1;
  undefined2 in_AX;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 uVar6;
  
  if (*(char *)0x558 != '\0') {
    FUN_1000_1c44();
  }
  iVar5 = 0x4118;
  pcVar4 = (char *)0x3b9a;
  iVar2 = 8;
  do {
    iVar3 = 0x10;
    do {
      uVar6 = 0x1000;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      if (-1 < *pcVar1) {
        FUN_1000_2301(iVar5);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar5 = iVar5 + 0x800;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(char *)0x558 != '\0') {
    uVar6 = unaff_DS;
    FUN_1000_1c44();
    unaff_DS = uVar6;
  }
  (*(code *)*(undefined2 *)0x508)(0x1000,unaff_DS);
  return in_AX;
}



// ============================================================================
// Function: FUN_1000_2301
// Entry:    1000:2301
// Body:     1000:2301 -> 1000:231b
// Size:     27 bytes
// Prototype: undefined __cdecl16near FUN_1000_2301()
// ============================================================================

undefined4 __cdecl16near FUN_1000_2301(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0x508)(0x1000);
  return CONCAT22(in_DX,in_AX);
}



// ============================================================================
// Function: FUN_1000_231c
// Entry:    1000:231c
// Body:     1000:231c -> 1000:234e
// Size:     51 bytes
// Prototype: undefined __cdecl16near FUN_1000_231c()
// ============================================================================

void __cdecl16near FUN_1000_231c(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  
  pbVar7 = (byte *)0x46b8;
  pbVar6 = (byte *)0x51f8;
  iVar3 = 0x2c;
  do {
    iVar4 = 0x24;
    do {
      pbVar8 = pbVar7;
      pbVar1 = pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
      bVar5 = *pbVar8;
      if ((bVar2 & 0xf) != 0) {
        bVar5 = bVar5 & 0xf0;
      }
      if ((bVar2 & 0xf0) != 0) {
        bVar5 = bVar5 & 0xf;
      }
      *pbVar8 = bVar2 | bVar5;
      iVar4 = iVar4 + -1;
      pbVar7 = pbVar8 + 1;
    } while (iVar4 != 0);
    pbVar7 = pbVar8 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}




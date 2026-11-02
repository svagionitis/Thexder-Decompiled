; ============================================================================
; Linear Disassembly for: GAME.EXE
; Architecture: 16-bit x86 Real Mode
; ============================================================================


entry:
  1000:0000     EB 14            JMP 0x1000:0016

FUN_1000_0016:
  1000:0016     A2 26 16         MOV [0x1626],AL
  1000:0019     B8 64 04         MOV AX,0x464
  1000:001c     B8 01 2A         MOV AX,0x2a01
  1000:001f     E8 DF 29         CALL 0x1000:2a01
  1000:0022     8B C4            MOV AX,SP
  1000:0024     A3 83 F1         MOV [0xf183],AX
  1000:0027     8C D8            MOV AX,DS
  1000:0029     2E A3 14 00      MOV CS:[0x14],AX
  1000:002d     8E C0            MOV ES,AX
  1000:002f     BF 15 DC         MOV DI,0xdc15
  1000:0032     B8 00 00         MOV AX,0x0
  1000:0035     B9 17 00         MOV CX,0x17
  1000:0038     F3 AB            STOSW.REP ES:DI
  1000:003a     C6 06 82 05 01   MOV byte ptr [0x582],0x1
  1000:003f     FA               CLI
  1000:0040     C7 06 7E 05 D1 51   MOV word ptr [0x57e],0x51d1
  1000:0046     8C C8            MOV AX,CS
  1000:0048     A3 80 05         MOV [0x580],AX
  1000:004b     FB               STI
  1000:004c     8C C8            MOV AX,CS
  1000:004e     8E C0            MOV ES,AX
  1000:0050     BA 03 00         MOV DX,0x3
  1000:0053     BD 08 00         MOV BP,0x8
  1000:0056     FF 1E 08 05      CALLF [0x508]
  1000:005a     B0 03            MOV AL,0x3
  1000:005c     FF 1E 97 05      CALLF [0x597]
  1000:0060     8C D8            MOV AX,DS
  1000:0062     8E C0            MOV ES,AX
  1000:0064     E8 91 03         CALL 0x1000:03f8
  1000:0067     E8 31 03         CALL 0x1000:039b
  1000:006a     B5 00            MOV CH,0x0
  1000:006c     A0 73 05         MOV AL,[0x573]
  1000:006f     A8 20            TEST AL,0x20
  1000:0071     75 0B            JNZ 0x1000:007e
  1000:0073     B5 02            MOV CH,0x2
  1000:0075     A0 75 05         MOV AL,[0x575]
  1000:0078     A8 08            TEST AL,0x8
  1000:007a     75 02            JNZ 0x1000:007e
  1000:007c     B5 01            MOV CH,0x1

LAB_1000_007e:
  1000:007e     B5 00            MOV CH,0x0
  1000:0080     8A C5            MOV AL,CH
  1000:0082     A2 25 16         MOV [0x1625],AL
  1000:0085     BB 00 00         MOV BX,0x0
  1000:0088     89 1E 92 16      MOV word ptr [0x1692],BX
  1000:008c     50               PUSH AX
  1000:008d     06               PUSH ES
  1000:008e     1E               PUSH DS
  1000:008f     0E               PUSH CS
  1000:0090     8C D8            MOV AX,DS
  1000:0092     1F               POP DS
  1000:0093     8E C0            MOV ES,AX
  1000:0095     BF D1 16         MOV DI,0x16d1
  1000:0098     BE 71 52         MOV SI,0x5271
  1000:009b     B9 08 00         MOV CX,0x8
  1000:009e     F3 A5            MOVSW.REP ES:DI,SI
  1000:00a0     1F               POP DS
  1000:00a1     07               POP ES
  1000:00a2     58               POP AX
  1000:00a3     C6 06 D9 16 3E   MOV byte ptr [0x16d9],0x3e
  1000:00a8     C6 06 DD 16 3F   MOV byte ptr [0x16dd],0x3f
  1000:00ad     C6 06 43 16 01   MOV byte ptr [0x1643],0x1
  1000:00b2     BD 0E 00         MOV BP,0xe
  1000:00b5     FF 1E 08 05      CALLF [0x508]
  1000:00b9     80 3E 9B 05 FF   CMP byte ptr [0x59b],0xff
  1000:00be     74 03            JZ 0x1000:00c3
  1000:00c0     E8 24 8C         CALL 0x1000:8ce7

LAB_1000_00c3:
  1000:00c3     B0 0F            MOV AL,0xf
  1000:00c5     BD 42 00         MOV BP,0x42
  1000:00c8     FF 1E 08 05      CALLF [0x508]
  1000:00cc     E8 CC 02         CALL 0x1000:039b
  1000:00cf     E8 92 03         CALL 0x1000:0464
  1000:00d2     E8 DE 00         CALL 0x1000:01b3
  1000:00d5     E8 E4 02         CALL 0x1000:03bc
  1000:00d8     E8 7B 01         CALL 0x1000:0256
  1000:00db     BE BC DE         MOV SI,0xdebc
  1000:00de     BF EF 05         MOV DI,0x5ef
  1000:00e1     B9 10 00         MOV CX,0x10
  1000:00e4     F3 A4            MOVSB.REP ES:DI,SI
  1000:00e6     E8 9F 00         CALL 0x1000:0188
  1000:00e9     E8 D9 1B         CALL 0x1000:1cc5
  1000:00ec     E8 08 05         CALL 0x1000:05f7
  1000:00ef     E8 3B 3F         CALL 0x1000:402d
  1000:00f2     E8 86 3E         CALL 0x1000:3f7b
  1000:00f5     B0 23            MOV AL,0x23
  1000:00f7     BB 71 52         MOV BX,0x5271
  1000:00fa     BD 40 00         MOV BP,0x40
  1000:00fd     FF 1E 08 05      CALLF [0x508]
  1000:0101     C6 06 7E F1 00   MOV byte ptr [0xf17e],0x0
  1000:0106     BA 58 53         MOV DX,0x5358
  1000:0109     BB 43 3D         MOV BX,0x3d43
  1000:010c     E8 7C 20         CALL 0x1000:218b
  1000:010f     C6 06 7E F1 09   MOV byte ptr [0xf17e],0x9
  1000:0114     BA 10 03         MOV DX,0x310
  1000:0117     BB 03 6B         MOV BX,0x6b03
  1000:011a     E8 6E 20         CALL 0x1000:218b
  1000:011d     06               PUSH ES
  1000:011e     8C C8            MOV AX,CS
  1000:0120     8E C0            MOV ES,AX
  1000:0122     B7 12            MOV BH,0x12
  1000:0124     B3 06            MOV BL,0x6
  1000:0126     BA 1A 53         MOV DX,0x531a
  1000:0129     B0 37            MOV AL,0x37
  1000:012b     BD 38 00         MOV BP,0x38
  1000:012e     FF 1E 08 05      CALLF [0x508]
  1000:0132     07               POP ES
  1000:0133     E8 16 29         CALL 0x1000:2a4c

LAB_1000_0136:
  1000:0136     2E 80 3E D0 51 01   CMP byte ptr CS:[0x51d0],0x1
  1000:013c     75 03            JNZ 0x1000:0141
  1000:013e     E8 C0 50         CALL 0x1000:5201

LAB_1000_0141:
  1000:0141     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:0146     75 04            JNZ 0x1000:014c
  1000:0148     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_014c:
  1000:014c     A0 6C 05         MOV AL,[0x56c]
  1000:014f     D0 C0            ROL AL,0x1
  1000:0151     73 07            JNC 0x1000:015a
  1000:0153     E8 8C 47         CALL 0x1000:48e2
  1000:0156     24 C0            AND AL,0xc0
  1000:0158     74 DC            JZ 0x1000:0136

LAB_1000_015a:
  1000:015a     B0 19            MOV AL,0x19
  1000:015c     BD 42 00         MOV BP,0x42
  1000:015f     FF 1E 08 05      CALLF [0x508]
  1000:0163     BD 5C 00         MOV BP,0x5c
  1000:0166     FF 1E 08 05      CALLF [0x508]
  1000:016a     E8 BA 0A         CALL 0x1000:0c27
  1000:016d     E8 D9 44         CALL 0x1000:4649
  1000:0170     A0 EF 05         MOV AL,[0x5ef]
  1000:0173     B2 0A            MOV DL,0xa
  1000:0175     F6 E2            MUL DL
  1000:0177     8A E0            MOV AH,AL
  1000:0179     B0 01            MOV AL,0x1
  1000:017b     FF 1E AB 05      CALLF [0x5ab]
  1000:017f     E9 FD 45         JMP 0x1000:477f

FUN_1000_0188:
  1000:0188     A0 26 16         MOV AL,[0x1626]
  1000:018b     24 03            AND AL,0x3
  1000:018d     FE C8            DEC AL
  1000:018f     02 C0            ADD AL,AL
  1000:0191     32 E4            XOR AH,AH
  1000:0193     8B F8            MOV DI,AX

switchD:
  1000:0195     2E FF A5 82 01   JMP word ptr CS:[DI + 0x182]

caseD_1:
  1000:019a     32 C0            XOR AL,AL
  1000:019c     A2 26 16         MOV [0x1626],AL
  1000:019f     B0 01            MOV AL,0x1
  1000:01a1     A2 EF 05         MOV [0x5ef],AL
  1000:01a4     C3               RET

caseD_2:
  1000:01a5     A0 FF 05         MOV AL,[0x5ff]
  1000:01a8     0A C0            OR AL,AL
  1000:01aa     74 EE            JZ 0x1000:019a
  1000:01ac     E9 6D 2E         JMP 0x1000:301c

caseD_3:
  1000:01af     59               POP CX
  1000:01b0     E9 7A 01         JMP 0x1000:032d

FUN_1000_01b3:
  1000:01b3     BF 27 16         MOV DI,0x1627
  1000:01b6     B9 D0 16         MOV CX,0x16d0
  1000:01b9     2B CF            SUB CX,DI
  1000:01bb     32 C0            XOR AL,AL
  1000:01bd     F3 AA            STOSB.REP ES:DI
  1000:01bf     BF E1 16         MOV DI,0x16e1
  1000:01c2     B9 10 00         MOV CX,0x10
  1000:01c5     F3 A5            MOVSW.REP ES:DI,SI
  1000:01c7     32 C0            XOR AL,AL
  1000:01c9     80 3E 5A 05 02   CMP byte ptr [0x55a],0x2
  1000:01ce     75 02            JNZ 0x1000:01d2
  1000:01d0     B0 01            MOV AL,0x1

LAB_1000_01d2:
  1000:01d2     A2 83 16         MOV [0x1683],AL
  1000:01d5     2E A2 20 5C      MOV CS:[0x5c20],AL
  1000:01d9     8A E8            MOV CH,AL
  1000:01db     A0 74 05         MOV AL,[0x574]
  1000:01de     D0 C8            ROR AL,0x1
  1000:01e0     D0 C8            ROR AL,0x1
  1000:01e2     72 0E            JC 0x1000:01f2
  1000:01e4     8A C5            MOV AL,CH
  1000:01e6     34 01            XOR AL,0x1
  1000:01e8     A0 74 05         MOV AL,[0x574]
  1000:01eb     A2 83 16         MOV [0x1683],AL
  1000:01ee     2E A2 20 5C      MOV CS:[0x5c20],AL

LAB_1000_01f2:
  1000:01f2     BB 63 66         MOV BX,0x6663
  1000:01f5     89 1E 86 16      MOV word ptr [0x1686],BX
  1000:01f9     06               PUSH ES
  1000:01fa     8C C8            MOV AX,CS
  1000:01fc     8E C0            MOV ES,AX
  1000:01fe     B7 02            MOV BH,0x2
  1000:0200     B3 01            MOV BL,0x1
  1000:0202     BA 26 03         MOV DX,0x326
  1000:0205     B0 36            MOV AL,0x36
  1000:0207     BD 38 00         MOV BP,0x38
  1000:020a     FF 1E 08 05      CALLF [0x508]
  1000:020e     B7 03            MOV BH,0x3
  1000:0210     B3 01            MOV BL,0x1
  1000:0212     B0 30            MOV AL,0x30
  1000:0214     BD 60 00         MOV BP,0x60
  1000:0217     FF 1E 08 05      CALLF [0x508]
  1000:021b     B7 05            MOV BH,0x5
  1000:021d     B3 01            MOV BL,0x1
  1000:021f     B0 30            MOV AL,0x30
  1000:0221     BD 60 00         MOV BP,0x60
  1000:0224     FF 1E 08 05      CALLF [0x508]
  1000:0228     07               POP ES
  1000:0229     E8 18 3D         CALL 0x1000:3f44
  1000:022c     BB 4B 16         MOV BX,0x164b
  1000:022f     B0 30            MOV AL,0x30
  1000:0231     B5 08            MOV CH,0x8

LAB_1000_0233:
  1000:0233     88 07            MOV byte ptr [BX],AL
  1000:0235     43               INC BX
  1000:0236     FE CD            DEC CH
  1000:0238     75 F9            JNZ 0x1000:0233
  1000:023a     A0 24 16         MOV AL,[0x1624]
  1000:023d     0A C0            OR AL,AL
  1000:023f     75 01            JNZ 0x1000:0242
  1000:0241     C3               RET

LAB_1000_0242:
  1000:0242     B0 01            MOV AL,0x1
  1000:0244     A2 26 16         MOV [0x1626],AL
  1000:0247     E8 19 02         CALL 0x1000:0463
  1000:024a     BE EF 05         MOV SI,0x5ef
  1000:024d     BF FF 05         MOV DI,0x5ff
  1000:0250     B9 10 00         MOV CX,0x10
  1000:0253     F3 A4            MOVSB.REP ES:DI,SI
  1000:0255     C3               RET

FUN_1000_0256:
  1000:0256     B0 14            MOV AL,0x14
  1000:0258     A2 5B 16         MOV [0x165b],AL
  1000:025b     B0 19            MOV AL,0x19
  1000:025d     A2 5D 16         MOV [0x165d],AL
  1000:0260     B0 80            MOV AL,0x80
  1000:0262     A2 CF 16         MOV [0x16cf],AL
  1000:0265     32 C0            XOR AL,AL
  1000:0267     A2 D0 16         MOV [0x16d0],AL
  1000:026a     B0 01            MOV AL,0x1
  1000:026c     A2 89 16         MOV [0x1689],AL
  1000:026f     C6 06 8A 16 00   MOV byte ptr [0x168a],0x0
  1000:0274     C6 06 8B 16 00   MOV byte ptr [0x168b],0x0
  1000:0279     C6 06 8C 16 00   MOV byte ptr [0x168c],0x0
  1000:027e     C6 06 8D 16 00   MOV byte ptr [0x168d],0x0
  1000:0283     C6 06 8E 16 00   MOV byte ptr [0x168e],0x0
  1000:0288     C6 06 8F 16 00   MOV byte ptr [0x168f],0x0
  1000:028d     BB 83 27         MOV BX,0x2783
  1000:0290     89 1E 49 16      MOV word ptr [0x1649],BX
  1000:0294     89 1E CC 16      MOV word ptr [0x16cc],BX
  1000:0298     B0 04            MOV AL,0x4
  1000:029a     A2 79 16         MOV [0x1679],AL
  1000:029d     BB 94 16         MOV BX,0x1694
  1000:02a0     89 1E 77 16      MOV word ptr [0x1677],BX
  1000:02a4     BB F7 05         MOV BX,0x5f7
  1000:02a7     C6 07 00         MOV byte ptr [BX],0x0
  1000:02aa     43               INC BX
  1000:02ab     C6 07 00         MOV byte ptr [BX],0x0
  1000:02ae     43               INC BX
  1000:02af     C6 07 00         MOV byte ptr [BX],0x0
  1000:02b2     BB FA 05         MOV BX,0x5fa
  1000:02b5     C6 07 00         MOV byte ptr [BX],0x0
  1000:02b8     43               INC BX
  1000:02b9     C6 07 00         MOV byte ptr [BX],0x0
  1000:02bc     43               INC BX
  1000:02bd     C6 07 00         MOV byte ptr [BX],0x0
  1000:02c0     06               PUSH ES
  1000:02c1     8C D8            MOV AX,DS
  1000:02c3     8E C0            MOV ES,AX
  1000:02c5     BF 83 75         MOV DI,0x7583
  1000:02c8     B9 69 03         MOV CX,0x369
  1000:02cb     B8 F0 00         MOV AX,0xf0
  1000:02ce     F3 AA            STOSB.REP ES:DI
  1000:02d0     BF ED 78         MOV DI,0x78ed
  1000:02d3     B9 68 03         MOV CX,0x368
  1000:02d6     B0 00            MOV AL,0x0
  1000:02d8     F3 AA            STOSB.REP ES:DI
  1000:02da     BF 2B 83         MOV DI,0x832b
  1000:02dd     B9 69 03         MOV CX,0x369
  1000:02e0     B8 FF 00         MOV AX,0xff
  1000:02e3     F3 AA            STOSB.REP ES:DI
  1000:02e5     8C D8            MOV AX,DS
  1000:02e7     8E C0            MOV ES,AX
  1000:02e9     B8 FF 00         MOV AX,0xff
  1000:02ec     BF 53 75         MOV DI,0x7553
  1000:02ef     B9 4F 00         MOV CX,0x4f
  1000:02f2     B0 00            MOV AL,0x0
  1000:02f4     F3 AA            STOSB.REP ES:DI
  1000:02f6     07               POP ES
  1000:02f7     C3               RET

FUN_1000_032d:
  1000:032d     32 C0            XOR AL,AL
  1000:032f     A2 EF 05         MOV [0x5ef],AL
  1000:0332     FE C0            INC AL
  1000:0334     A2 76 16         MOV [0x1676],AL
  1000:0337     B0 30            MOV AL,0x30
  1000:0339     2E A2 77 53      MOV CS:[0x5377],AL
  1000:033d     B0 01            MOV AL,0x1
  1000:033f     A2 45 DC         MOV [0xdc45],AL
  1000:0342     A2 46 DC         MOV [0xdc46],AL
  1000:0345     BA 73 53         MOV DX,0x5373
  1000:0348     BB 63 30         MOV BX,0x3063
  1000:034b     E8 EA 1D         CALL 0x1000:2138
  1000:034e     2E C6 06 13 54 30   MOV byte ptr CS:[0x5413],0x30
  1000:0354     2E C6 06 14 54 31   MOV byte ptr CS:[0x5414],0x31
  1000:035a     BA 10 54         MOV DX,0x5410
  1000:035d     BB 53 74         MOV BX,0x7453
  1000:0360     E8 D5 1D         CALL 0x1000:2138
  1000:0363     B4 0A            MOV AH,0xa
  1000:0365     B0 01            MOV AL,0x1
  1000:0367     FF 1E AB 05      CALLF [0x5ab]
  1000:036b     C6 06 7E F1 06   MOV byte ptr [0xf17e],0x6
  1000:0370     BA FE 02         MOV DX,0x2fe
  1000:0373     BB 23 33         MOV BX,0x3323
  1000:0376     E8 12 1E         CALL 0x1000:218b
  1000:0379     C6 06 7E F1 00   MOV byte ptr [0xf17e],0x0
  1000:037e     BA 58 53         MOV DX,0x5358
  1000:0381     BB 43 3D         MOV BX,0x3d43
  1000:0384     E8 04 1E         CALL 0x1000:218b
  1000:0387     C6 06 7E F1 09   MOV byte ptr [0xf17e],0x9
  1000:038c     BA 10 03         MOV DX,0x310
  1000:038f     BB 03 6B         MOV BX,0x6b03
  1000:0392     E8 F6 1D         CALL 0x1000:218b
  1000:0395     E8 8F 08         CALL 0x1000:0c27
  1000:0398     E9 E4 43         JMP 0x1000:477f

FUN_1000_039b:
  1000:039b     A0 6E 05         MOV AL,[0x56e]
  1000:039e     3C BF            CMP AL,0xbf
  1000:03a0     74 01            JZ 0x1000:03a3
  1000:03a2     C3               RET

LAB_1000_03a3:
  1000:03a3     A0 6F 05         MOV AL,[0x56f]
  1000:03a6     3C F3            CMP AL,0xf3
  1000:03a8     74 01            JZ 0x1000:03ab
  1000:03aa     C3               RET

LAB_1000_03ab:
  1000:03ab     BB 24 16         MOV BX,0x1624
  1000:03ae     8A 07            MOV AL,byte ptr [BX]
  1000:03b0     C6 07 00         MOV byte ptr [BX],0x0
  1000:03b3     0A C0            OR AL,AL
  1000:03b5     74 01            JZ 0x1000:03b8
  1000:03b7     C3               RET

LAB_1000_03b8:
  1000:03b8     C6 07 01         MOV byte ptr [BX],0x1
  1000:03bb     C3               RET

FUN_1000_03bc:
  1000:03bc     A0 26 16         MOV AL,[0x1626]
  1000:03bf     0A C0            OR AL,AL
  1000:03c1     74 01            JZ 0x1000:03c4
  1000:03c3     C3               RET

LAB_1000_03c4:
  1000:03c4     B5 00            MOV CH,0x0
  1000:03c6     E8 09 00         CALL 0x1000:03d2
  1000:03c9     E8 21 00         CALL 0x1000:03ed
  1000:03cc     8A C5            MOV AL,CH
  1000:03ce     A2 57 16         MOV [0x1657],AL
  1000:03d1     C3               RET

FUN_1000_03d2:
  1000:03d2     A0 6E 05         MOV AL,[0x56e]
  1000:03d5     3C FD            CMP AL,0xfd
  1000:03d7     74 01            JZ 0x1000:03da
  1000:03d9     C3               RET

LAB_1000_03da:
  1000:03da     A0 6F 05         MOV AL,[0x56f]
  1000:03dd     3C 7F            CMP AL,0x7f
  1000:03df     74 01            JZ 0x1000:03e2
  1000:03e1     C3               RET

LAB_1000_03e2:
  1000:03e2     A0 6D 05         MOV AL,[0x56d]
  1000:03e5     3C FD            CMP AL,0xfd
  1000:03e7     74 01            JZ 0x1000:03ea
  1000:03e9     C3               RET

LAB_1000_03ea:
  1000:03ea     B5 01            MOV CH,0x1
  1000:03ec     C3               RET

FUN_1000_03ed:
  1000:03ed     A0 74 05         MOV AL,[0x574]
  1000:03f0     3C DF            CMP AL,0xdf
  1000:03f2     74 01            JZ 0x1000:03f5
  1000:03f4     C3               RET

LAB_1000_03f5:
  1000:03f5     B5 02            MOV CH,0x2
  1000:03f7     C3               RET

FUN_1000_03f8:
  1000:03f8     BF C2 E4         MOV DI,0xe4c2
  1000:03fb     C7 05 D4 04      MOV word ptr [DI],0x4d4
  1000:03ff     8C 4D 02         MOV word ptr [DI + 0x2],CS
  1000:0402     C7 45 04 B0 4D   MOV word ptr [DI + 0x4],0x4db0
  1000:0407     8C 4D 06         MOV word ptr [DI + 0x6],CS
  1000:040a     C7 45 08 E0 4D   MOV word ptr [DI + 0x8],0x4de0
  1000:040f     8C 4D 0A         MOV word ptr [DI + 0xa],CS
  1000:0412     C7 45 0C AA 58   MOV word ptr [DI + 0xc],0x58aa
  1000:0417     8C 4D 0E         MOV word ptr [DI + 0xe],CS
  1000:041a     C7 45 10 00 0E   MOV word ptr [DI + 0x10],0xe00
  1000:041f     8C 4D 12         MOV word ptr [DI + 0x12],CS
  1000:0422     C7 45 14 70 40   MOV word ptr [DI + 0x14],0x4070
  1000:0427     8C 4D 16         MOV word ptr [DI + 0x16],CS
  1000:042a     C7 45 18 7C 40   MOV word ptr [DI + 0x18],0x407c
  1000:042f     8C 4D 1A         MOV word ptr [DI + 0x1a],CS
  1000:0432     C7 45 1C 66 46   MOV word ptr [DI + 0x1c],0x4666
  1000:0437     8C 4D 1E         MOV word ptr [DI + 0x1e],CS
  1000:043a     C7 45 20 90 0D   MOV word ptr [DI + 0x20],0xd90
  1000:043f     8C 4D 22         MOV word ptr [DI + 0x22],CS
  1000:0442     C7 45 24 80 46   MOV word ptr [DI + 0x24],0x4680
  1000:0447     8C 4D 26         MOV word ptr [DI + 0x26],CS
  1000:044a     C7 45 28 C7 4D   MOV word ptr [DI + 0x28],0x4dc7
  1000:044f     8C 4D 2A         MOV word ptr [DI + 0x2a],CS
  1000:0452     C7 45 2C C0 04   MOV word ptr [DI + 0x2c],0x4c0
  1000:0457     8C 4D 2E         MOV word ptr [DI + 0x2e],CS
  1000:045a     C7 45 30 63 47   MOV word ptr [DI + 0x30],0x4763
  1000:045f     8C 4D 32         MOV word ptr [DI + 0x32],CS
  1000:0462     C3               RET

FUN_1000_0463:
  1000:0463     C3               RET

FUN_1000_0464:
  1000:0464     BA 04 03         MOV DX,0x304
  1000:0467     BB 23 33         MOV BX,0x3323
  1000:046a     E8 CB 1C         CALL 0x1000:2138
  1000:046d     BB 23 33         MOV BX,0x3323
  1000:0470     BD 5E 00         MOV BP,0x5e
  1000:0473     FF 1E 08 05      CALLF [0x508]
  1000:0477     BA 0A 03         MOV DX,0x30a
  1000:047a     BB 63 66         MOV BX,0x6663
  1000:047d     E8 B8 1C         CALL 0x1000:2138
  1000:0480     C6 06 7E F1 06   MOV byte ptr [0xf17e],0x6
  1000:0485     BA FE 02         MOV DX,0x2fe
  1000:0488     BB 23 33         MOV BX,0x3323
  1000:048b     E8 FD 1C         CALL 0x1000:218b
  1000:048e     BA 1C 03         MOV DX,0x31c
  1000:0491     BB 52 DC         MOV BX,0xdc52
  1000:0494     E8 A1 1C         CALL 0x1000:2138
  1000:0497     C6 06 7E F1 01   MOV byte ptr [0xf17e],0x1
  1000:049c     BA 28 53         MOV DX,0x5328
  1000:049f     BB F6 E4         MOV BX,0xe4f6
  1000:04a2     E8 E6 1C         CALL 0x1000:218b
  1000:04a5     C6 06 7E F1 02   MOV byte ptr [0xf17e],0x2
  1000:04aa     BA 2E 53         MOV DX,0x532e
  1000:04ad     BB 36 EB         MOV BX,0xeb36
  1000:04b0     E8 D8 1C         CALL 0x1000:218b
  1000:04b3     C6 06 45 DC 05   MOV byte ptr [0xdc45],0x5
  1000:04b8     C6 06 46 DC 05   MOV byte ptr [0xdc46],0x5
  1000:04bd     C3               RET

FUN_1000_04c0:
  1000:04c0     51               PUSH CX
  1000:04c1     52               PUSH DX
  1000:04c2     A1 22 16         MOV AX,[0x1622]
  1000:04c5     05 48 92         ADD AX,0x9248
  1000:04c8     D1 C8            ROR AX,0x1
  1000:04ca     D1 C8            ROR AX,0x1
  1000:04cc     D1 C8            ROR AX,0x1
  1000:04ce     A3 22 16         MOV [0x1622],AX
  1000:04d1     5A               POP DX
  1000:04d2     59               POP CX
  1000:04d3     CB               RETF

FUN_1000_0506:
  1000:0506     A0 E7 74         MOV AL,[0x74e7]
  1000:0509     3C 02            CMP AL,0x2
  1000:050b     74 31            JZ 0x1000:053e
  1000:050d     8B 3E 49 16      MOV DI,word ptr [0x1649]
  1000:0511     B9 08 00         MOV CX,0x8
  1000:0514     A0 60 16         MOV AL,[0x1660]
  1000:0517     0A C0            OR AL,AL
  1000:0519     74 23            JZ 0x1000:053e
  1000:051b     FE C0            INC AL

LAB_1000_051d:
  1000:051d     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:0521     F6 05 80         TEST byte ptr [DI],0x80
  1000:0524     75 04            JNZ 0x1000:052a
  1000:0526     8B 3E CC 16      MOV DI,word ptr [0x16cc]

LAB_1000_052a:
  1000:052a     F6 45 05 80      TEST byte ptr [DI + 0x5],0x80
  1000:052e     75 2F            JNZ 0x1000:055f

LAB_1000_0530:
  1000:0530     03 F9            ADD DI,CX
  1000:0532     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:0536     FE C8            DEC AL
  1000:0538     75 E3            JNZ 0x1000:051d
  1000:053a     89 3E 49 16      MOV word ptr [0x1649],DI

LAB_1000_053e:
  1000:053e     A0 35 16         MOV AL,[0x1635]
  1000:0541     8A E8            MOV CH,AL
  1000:0543     A0 2A 16         MOV AL,[0x162a]
  1000:0546     2A C5            SUB AL,CH
  1000:0548     02 C0            ADD AL,AL
  1000:054a     02 C0            ADD AL,AL
  1000:054c     02 C0            ADD AL,AL
  1000:054e     04 04            ADD AL,0x4
  1000:0550     8A F0            MOV DH,AL
  1000:0552     B2 FF            MOV DL,0xff
  1000:0554     A0 27 16         MOV AL,[0x1627]
  1000:0557     24 08            AND AL,0x8
  1000:0559     74 01            JZ 0x1000:055c
  1000:055b     C3               RET

LAB_1000_055c:
  1000:055c     B2 00            MOV DL,0x0
  1000:055e     C3               RET

LAB_1000_055f:
  1000:055f     A0 34 16         MOV AL,[0x1634]
  1000:0562     8A D0            MOV DL,AL
  1000:0564     8A 45 01         MOV AL,byte ptr [DI + 0x1]
  1000:0567     04 03            ADD AL,0x3
  1000:0569     2A C2            SUB AL,DL
  1000:056b     8A D0            MOV DL,AL
  1000:056d     A0 35 16         MOV AL,[0x1635]
  1000:0570     8A F0            MOV DH,AL
  1000:0572     8A 45 02         MOV AL,byte ptr [DI + 0x2]
  1000:0575     04 02            ADD AL,0x2
  1000:0577     2A C6            SUB AL,DH
  1000:0579     8A F0            MOV DH,AL
  1000:057b     A0 27 16         MOV AL,[0x1627]
  1000:057e     24 08            AND AL,0x8
  1000:0580     75 16            JNZ 0x1000:0598
  1000:0582     8A C2            MOV AL,DL
  1000:0584     3C 11            CMP AL,0x11
  1000:0586     73 A8            JNC 0x1000:0530
  1000:0588     03 F9            ADD DI,CX
  1000:058a     89 3E 49 16      MOV word ptr [0x1649],DI
  1000:058e     E8 1D 00         CALL 0x1000:05ae
  1000:0591     8A C2            MOV AL,DL
  1000:0593     04 08            ADD AL,0x8
  1000:0595     8A D0            MOV DL,AL
  1000:0597     C3               RET

LAB_1000_0598:
  1000:0598     8A C2            MOV AL,DL
  1000:059a     3C 12            CMP AL,0x12
  1000:059c     72 92            JC 0x1000:0530
  1000:059e     03 F9            ADD DI,CX
  1000:05a0     89 3E 49 16      MOV word ptr [0x1649],DI
  1000:05a4     E8 07 00         CALL 0x1000:05ae
  1000:05a7     8A C2            MOV AL,DL
  1000:05a9     04 07            ADD AL,0x7
  1000:05ab     8A D0            MOV DL,AL
  1000:05ad     C3               RET

FUN_1000_05ae:
  1000:05ae     8A C6            MOV AL,DH
  1000:05b0     2C 02            SUB AL,0x2
  1000:05b2     02 C0            ADD AL,AL
  1000:05b4     02 C0            ADD AL,AL
  1000:05b6     02 C0            ADD AL,AL
  1000:05b8     8A F0            MOV DH,AL
  1000:05ba     9A C0 04 00 10   CALLF 0x1000:04c0
  1000:05bf     24 03            AND AL,0x3
  1000:05c1     E8 94 4C         CALL 0x1000:5258
  1000:05c4     02 C6            ADD AL,DH
  1000:05c6     04 08            ADD AL,0x8
  1000:05c8     8A F0            MOV DH,AL
  1000:05ca     3C 98            CMP AL,0x98
  1000:05cc     72 02            JC 0x1000:05d0
  1000:05ce     B6 97            MOV DH,0x97

LAB_1000_05d0:
  1000:05d0     8A C2            MOV AL,DL
  1000:05d2     2C 03            SUB AL,0x3
  1000:05d4     02 C0            ADD AL,AL
  1000:05d6     02 C0            ADD AL,AL
  1000:05d8     02 C0            ADD AL,AL
  1000:05da     8A D0            MOV DL,AL
  1000:05dc     C3               RET

FUN_1000_05e9:
  1000:05e9     06               PUSH ES
  1000:05ea     8C C8            MOV AX,CS
  1000:05ec     8E C0            MOV ES,AX
  1000:05ee     BE E3 05         MOV SI,0x5e3
  1000:05f1     FF 1E 93 05      CALLF [0x593]
  1000:05f5     07               POP ES
  1000:05f6     C3               RET

FUN_1000_05f7:
  1000:05f7     06               PUSH ES
  1000:05f8     8C C8            MOV AX,CS
  1000:05fa     8E C0            MOV ES,AX
  1000:05fc     B7 15            MOV BH,0x15
  1000:05fe     B3 18            MOV BL,0x18
  1000:0600     BA 04 53         MOV DX,0x5304
  1000:0603     B0 36            MOV AL,0x36
  1000:0605     BD 38 00         MOV BP,0x38
  1000:0608     FF 1E 08 05      CALLF [0x508]
  1000:060c     07               POP ES
  1000:060d     C3               RET

FUN_1000_060e:
  1000:060e     06               PUSH ES
  1000:060f     50               PUSH AX
  1000:0610     8C D8            MOV AX,DS
  1000:0612     8E C0            MOV ES,AX
  1000:0614     BF 57 7C         MOV DI,0x7c57
  1000:0617     B9 6A 03         MOV CX,0x36a
  1000:061a     B0 00            MOV AL,0x0
  1000:061c     F3 AA            STOSB.REP ES:DI
  1000:061e     58               POP AX
  1000:061f     07               POP ES
  1000:0620     C3               RET

FUN_1000_0621:
  1000:0621     A0 82 16         MOV AL,[0x1682]
  1000:0624     0A C0            OR AL,AL
  1000:0626     75 01            JNZ 0x1000:0629
  1000:0628     C3               RET

LAB_1000_0629:
  1000:0629     EB 01            JMP 0x1000:062c

LAB_1000_062c:
  1000:062c     BD 44 00         MOV BP,0x44
  1000:062f     FF 1E 08 05      CALLF [0x508]
  1000:0633     C3               RET

FUN_1000_0634:
  1000:0634     BE 83 27         MOV SI,0x2783
  1000:0637     8A 0E 34 16      MOV CL,byte ptr [0x1634]
  1000:063b     8A 2E 35 16      MOV CH,byte ptr [0x1635]

LAB_1000_063f:
  1000:063f     8A 04            MOV AL,byte ptr [SI]
  1000:0641     24 80            AND AL,0x80
  1000:0643     74 11            JZ 0x1000:0656
  1000:0645     8A 44 03         MOV AL,byte ptr [SI + 0x3]
  1000:0648     0A C0            OR AL,AL
  1000:064a     74 03            JZ 0x1000:064f
  1000:064c     E8 50 00         CALL 0x1000:069f

LAB_1000_064f:
  1000:064f     BA 08 00         MOV DX,0x8
  1000:0652     03 F2            ADD SI,DX
  1000:0654     EB E9            JMP 0x1000:063f

LAB_1000_0656:
  1000:0656     BA 07 76         MOV DX,0x7607
  1000:0659     E8 1E 48         CALL 0x1000:4e7a
  1000:065c     B0 FF            MOV AL,0xff
  1000:065e     88 07            MOV byte ptr [BX],AL
  1000:0660     BA 26 00         MOV DX,0x26
  1000:0663     03 DA            ADD BX,DX
  1000:0665     88 07            MOV byte ptr [BX],AL
  1000:0667     A0 6B 16         MOV AL,[0x166b]
  1000:066a     0A C0            OR AL,AL
  1000:066c     75 01            JNZ 0x1000:066f
  1000:066e     C3               RET

LAB_1000_066f:
  1000:066f     8B 16 6D 16      MOV DX,word ptr [0x166d]
  1000:0673     8A C2            MOV AL,DL
  1000:0675     04 03            ADD AL,0x3
  1000:0677     2A C1            SUB AL,CL
  1000:0679     8A D0            MOV DL,AL
  1000:067b     8A C6            MOV AL,DH
  1000:067d     04 02            ADD AL,0x2
  1000:067f     2A C5            SUB AL,CH
  1000:0681     8A F0            MOV DH,AL
  1000:0683     BB 83 75         MOV BX,0x7583

caseD_7:
  1000:0686     9A E0 4D 00 10   CALLF 0x1000:4de0
  1000:068b     B6 FF            MOV DH,0xff
  1000:068d     8A 07            MOV AL,byte ptr [BX]
  1000:068f     0A C0            OR AL,AL
  1000:0691     75 02            JNZ 0x1000:0695
  1000:0693     88 37            MOV byte ptr [BX],DH

LAB_1000_0695:
  1000:0695     43               INC BX
  1000:0696     8A 07            MOV AL,byte ptr [BX]
  1000:0698     0A C0            OR AL,AL
  1000:069a     75 02            JNZ 0x1000:069e
  1000:069c     88 37            MOV byte ptr [BX],DH

LAB_1000_069e:
  1000:069e     C3               RET

FUN_1000_069f:
  1000:069f     8A 44 01         MOV AL,byte ptr [SI + 0x1]
  1000:06a2     04 03            ADD AL,0x3
  1000:06a4     2A C1            SUB AL,CL
  1000:06a6     73 01            JNC 0x1000:06a9
  1000:06a8     C3               RET

LAB_1000_06a9:
  1000:06a9     3C 25            CMP AL,0x25
  1000:06ab     72 01            JC 0x1000:06ae
  1000:06ad     C3               RET

LAB_1000_06ae:
  1000:06ae     8A D0            MOV DL,AL
  1000:06b0     8A 44 02         MOV AL,byte ptr [SI + 0x2]
  1000:06b3     04 02            ADD AL,0x2
  1000:06b5     2A C5            SUB AL,CH
  1000:06b7     73 01            JNC 0x1000:06ba
  1000:06b9     C3               RET

LAB_1000_06ba:
  1000:06ba     3C 17            CMP AL,0x17
  1000:06bc     72 01            JC 0x1000:06bf
  1000:06be     C3               RET

LAB_1000_06bf:
  1000:06bf     BB 83 75         MOV BX,0x7583
  1000:06c2     B6 00            MOV DH,0x0
  1000:06c4     03 DA            ADD BX,DX

caseD_9:
  1000:06c6     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:06cb     03 DA            ADD BX,DX
  1000:06cd     BA 26 00         MOV DX,0x26
  1000:06d0     8A 04            MOV AL,byte ptr [SI]
  1000:06d2     24 70            AND AL,0x70
  1000:06d4     B0 FF            MOV AL,0xff
  1000:06d6     74 0D            JZ 0x1000:06e5
  1000:06d8     88 07            MOV byte ptr [BX],AL
  1000:06da     43               INC BX
  1000:06db     88 07            MOV byte ptr [BX],AL
  1000:06dd     03 DA            ADD BX,DX
  1000:06df     88 07            MOV byte ptr [BX],AL
  1000:06e1     4B               DEC BX
  1000:06e2     88 07            MOV byte ptr [BX],AL
  1000:06e4     C3               RET

LAB_1000_06e5:
  1000:06e5     88 07            MOV byte ptr [BX],AL
  1000:06e7     43               INC BX
  1000:06e8     88 07            MOV byte ptr [BX],AL
  1000:06ea     43               INC BX
  1000:06eb     88 07            MOV byte ptr [BX],AL
  1000:06ed     03 DA            ADD BX,DX
  1000:06ef     88 07            MOV byte ptr [BX],AL
  1000:06f1     4B               DEC BX
  1000:06f2     88 07            MOV byte ptr [BX],AL
  1000:06f4     4B               DEC BX
  1000:06f5     88 07            MOV byte ptr [BX],AL
  1000:06f7     03 DA            ADD BX,DX
  1000:06f9     88 07            MOV byte ptr [BX],AL
  1000:06fb     43               INC BX
  1000:06fc     88 07            MOV byte ptr [BX],AL
  1000:06fe     43               INC BX
  1000:06ff     88 07            MOV byte ptr [BX],AL
  1000:0701     C3               RET

FUN_1000_0702:
  1000:0702     BA 4A 79         MOV DX,0x794a
  1000:0705     E8 72 47         CALL 0x1000:4e7a
  1000:0708     87 D3            XCHG BX,DX
  1000:070a     A0 27 16         MOV AL,[0x1627]
  1000:070d     3C 1A            CMP AL,0x1a
  1000:070f     73 1B            JNC 0x1000:072c
  1000:0711     B7 00            MOV BH,0x0
  1000:0713     8A D8            MOV BL,AL
  1000:0715     03 DB            ADD BX,BX
  1000:0717     03 DB            ADD BX,BX
  1000:0719     8B CB            MOV CX,BX
  1000:071b     03 DB            ADD BX,BX
  1000:071d     03 D9            ADD BX,CX
  1000:071f     B9 D9 DF         MOV CX,0xdfd9
  1000:0722     03 D9            ADD BX,CX
  1000:0724     87 D3            XCHG BX,DX
  1000:0726     B9 03 04         MOV CX,0x403
  1000:0729     EB 1E            JMP 0x1000:0749

LAB_1000_072c:
  1000:072c     04 E6            ADD AL,0xe6
  1000:072e     B7 00            MOV BH,0x0
  1000:0730     8A D8            MOV BL,AL
  1000:0732     8B CB            MOV CX,BX
  1000:0734     03 DB            ADD BX,BX
  1000:0736     03 DB            ADD BX,BX
  1000:0738     03 DB            ADD BX,BX
  1000:073a     03 D9            ADD BX,CX
  1000:073c     B9 11 E1         MOV CX,0xe111
  1000:073f     03 D9            ADD BX,CX
  1000:0741     87 D3            XCHG BX,DX
  1000:0743     B9 03 03         MOV CX,0x303
  1000:0746     EB 01            JMP 0x1000:0749

LAB_1000_0749:
  1000:0749     8B FA            MOV DI,DX
  1000:074b     B9 24 00         MOV CX,0x24
  1000:074e     53               PUSH BX
  1000:074f     8A 05            MOV AL,byte ptr [DI]
  1000:0751     0A C0            OR AL,AL
  1000:0753     74 02            JZ 0x1000:0757
  1000:0755     88 07            MOV byte ptr [BX],AL

LAB_1000_0757:
  1000:0757     47               INC DI
  1000:0758     43               INC BX
  1000:0759     8A 05            MOV AL,byte ptr [DI]
  1000:075b     0A C0            OR AL,AL
  1000:075d     74 02            JZ 0x1000:0761
  1000:075f     88 07            MOV byte ptr [BX],AL

LAB_1000_0761:
  1000:0761     47               INC DI
  1000:0762     43               INC BX
  1000:0763     8A 05            MOV AL,byte ptr [DI]
  1000:0765     0A C0            OR AL,AL
  1000:0767     74 02            JZ 0x1000:076b
  1000:0769     88 07            MOV byte ptr [BX],AL

LAB_1000_076b:
  1000:076b     47               INC DI
  1000:076c     03 D9            ADD BX,CX
  1000:076e     8A 05            MOV AL,byte ptr [DI]
  1000:0770     0A C0            OR AL,AL
  1000:0772     74 02            JZ 0x1000:0776
  1000:0774     88 07            MOV byte ptr [BX],AL

LAB_1000_0776:
  1000:0776     47               INC DI
  1000:0777     43               INC BX
  1000:0778     8A 05            MOV AL,byte ptr [DI]
  1000:077a     0A C0            OR AL,AL
  1000:077c     74 02            JZ 0x1000:0780
  1000:077e     88 07            MOV byte ptr [BX],AL

LAB_1000_0780:
  1000:0780     47               INC DI
  1000:0781     43               INC BX
  1000:0782     8A 05            MOV AL,byte ptr [DI]
  1000:0784     0A C0            OR AL,AL
  1000:0786     74 02            JZ 0x1000:078a
  1000:0788     88 07            MOV byte ptr [BX],AL

LAB_1000_078a:
  1000:078a     47               INC DI
  1000:078b     03 D9            ADD BX,CX
  1000:078d     8A 05            MOV AL,byte ptr [DI]
  1000:078f     0A C0            OR AL,AL
  1000:0791     74 02            JZ 0x1000:0795
  1000:0793     88 07            MOV byte ptr [BX],AL

LAB_1000_0795:
  1000:0795     47               INC DI
  1000:0796     43               INC BX
  1000:0797     8A 05            MOV AL,byte ptr [DI]
  1000:0799     0A C0            OR AL,AL
  1000:079b     74 02            JZ 0x1000:079f
  1000:079d     88 07            MOV byte ptr [BX],AL

LAB_1000_079f:
  1000:079f     47               INC DI
  1000:07a0     43               INC BX
  1000:07a1     8A 05            MOV AL,byte ptr [DI]
  1000:07a3     0A C0            OR AL,AL
  1000:07a5     74 02            JZ 0x1000:07a9
  1000:07a7     88 07            MOV byte ptr [BX],AL

LAB_1000_07a9:
  1000:07a9     47               INC DI
  1000:07aa     A0 27 16         MOV AL,[0x1627]
  1000:07ad     3C 1A            CMP AL,0x1a
  1000:07af     73 1E            JNC 0x1000:07cf
  1000:07b1     03 D9            ADD BX,CX
  1000:07b3     8A 05            MOV AL,byte ptr [DI]
  1000:07b5     0A C0            OR AL,AL
  1000:07b7     74 02            JZ 0x1000:07bb
  1000:07b9     88 07            MOV byte ptr [BX],AL

LAB_1000_07bb:
  1000:07bb     47               INC DI
  1000:07bc     43               INC BX
  1000:07bd     8A 05            MOV AL,byte ptr [DI]
  1000:07bf     0A C0            OR AL,AL
  1000:07c1     74 02            JZ 0x1000:07c5
  1000:07c3     88 07            MOV byte ptr [BX],AL

LAB_1000_07c5:
  1000:07c5     47               INC DI
  1000:07c6     43               INC BX
  1000:07c7     8A 05            MOV AL,byte ptr [DI]
  1000:07c9     0A C0            OR AL,AL
  1000:07cb     74 02            JZ 0x1000:07cf
  1000:07cd     88 07            MOV byte ptr [BX],AL

LAB_1000_07cf:
  1000:07cf     5B               POP BX
  1000:07d0     BA 3E 0A         MOV DX,0xa3e
  1000:07d3     03 DA            ADD BX,DX
  1000:07d5     B6 C4            MOV DH,0xc4
  1000:07d7     8A 07            MOV AL,byte ptr [BX]
  1000:07d9     0A C6            OR AL,DH
  1000:07db     88 07            MOV byte ptr [BX],AL
  1000:07dd     43               INC BX
  1000:07de     8A 07            MOV AL,byte ptr [BX]
  1000:07e0     0A C6            OR AL,DH
  1000:07e2     88 07            MOV byte ptr [BX],AL
  1000:07e4     43               INC BX
  1000:07e5     8A 07            MOV AL,byte ptr [BX]
  1000:07e7     0A C6            OR AL,DH
  1000:07e9     88 07            MOV byte ptr [BX],AL
  1000:07eb     03 D9            ADD BX,CX
  1000:07ed     8A 07            MOV AL,byte ptr [BX]
  1000:07ef     0A C6            OR AL,DH
  1000:07f1     88 07            MOV byte ptr [BX],AL
  1000:07f3     43               INC BX
  1000:07f4     8A 07            MOV AL,byte ptr [BX]
  1000:07f6     0A C6            OR AL,DH
  1000:07f8     88 07            MOV byte ptr [BX],AL
  1000:07fa     43               INC BX
  1000:07fb     8A 07            MOV AL,byte ptr [BX]
  1000:07fd     0A C6            OR AL,DH
  1000:07ff     88 07            MOV byte ptr [BX],AL
  1000:0801     03 D9            ADD BX,CX
  1000:0803     8A 07            MOV AL,byte ptr [BX]
  1000:0805     0A C6            OR AL,DH
  1000:0807     88 07            MOV byte ptr [BX],AL
  1000:0809     43               INC BX
  1000:080a     8A 07            MOV AL,byte ptr [BX]
  1000:080c     0A C6            OR AL,DH
  1000:080e     88 07            MOV byte ptr [BX],AL
  1000:0810     43               INC BX
  1000:0811     8A 07            MOV AL,byte ptr [BX]
  1000:0813     0A C6            OR AL,DH
  1000:0815     88 07            MOV byte ptr [BX],AL
  1000:0817     A0 27 16         MOV AL,[0x1627]
  1000:081a     3C 1A            CMP AL,0x1a
  1000:081c     72 01            JC 0x1000:081f
  1000:081e     C3               RET

LAB_1000_081f:
  1000:081f     03 D9            ADD BX,CX
  1000:0821     8A 07            MOV AL,byte ptr [BX]
  1000:0823     0A C6            OR AL,DH
  1000:0825     88 07            MOV byte ptr [BX],AL
  1000:0827     43               INC BX
  1000:0828     8A 07            MOV AL,byte ptr [BX]
  1000:082a     0A C6            OR AL,DH
  1000:082c     88 07            MOV byte ptr [BX],AL
  1000:082e     43               INC BX
  1000:082f     8A 07            MOV AL,byte ptr [BX]
  1000:0831     0A C6            OR AL,DH
  1000:0833     88 07            MOV byte ptr [BX],AL
  1000:0835     C3               RET

FUN_1000_0836:
  1000:0836     A0 B6 16         MOV AL,[0x16b6]
  1000:0839     0A C0            OR AL,AL
  1000:083b     74 01            JZ 0x1000:083e
  1000:083d     C3               RET

LAB_1000_083e:
  1000:083e     A0 B9 16         MOV AL,[0x16b9]
  1000:0841     0A C0            OR AL,AL
  1000:0843     74 01            JZ 0x1000:0846
  1000:0845     C3               RET

LAB_1000_0846:
  1000:0846     BE BA 16         MOV SI,0x16ba
  1000:0849     A0 90 16         MOV AL,[0x1690]
  1000:084c     24 40            AND AL,0x40
  1000:084e     0A C0            OR AL,AL
  1000:0850     75 01            JNZ 0x1000:0853
  1000:0852     C3               RET

LAB_1000_0853:
  1000:0853     A0 27 16         MOV AL,[0x1627]
  1000:0856     3C 10            CMP AL,0x10
  1000:0858     72 03            JC 0x1000:085d
  1000:085a     E9 94 00         JMP 0x1000:08f1

LAB_1000_085d:
  1000:085d     24 08            AND AL,0x8
  1000:085f     75 48            JNZ 0x1000:08a9
  1000:0861     C6 04 01         MOV byte ptr [SI],0x1
  1000:0864     A0 35 16         MOV AL,[0x1635]
  1000:0867     8A E8            MOV CH,AL
  1000:0869     A0 2A 16         MOV AL,[0x162a]
  1000:086c     2A C5            SUB AL,CH
  1000:086e     50               PUSH AX
  1000:086f     02 C0            ADD AL,AL
  1000:0871     02 C0            ADD AL,AL
  1000:0873     02 C0            ADD AL,AL
  1000:0875     04 04            ADD AL,0x4
  1000:0877     8A F8            MOV BH,AL
  1000:0879     B3 77            MOV BL,0x77
  1000:087b     88 5C 01         MOV byte ptr [SI + 0x1],BL
  1000:087e     88 7C 02         MOV byte ptr [SI + 0x2],BH
  1000:0881     E8 82 FC         CALL 0x1000:0506
  1000:0884     88 54 03         MOV byte ptr [SI + 0x3],DL
  1000:0887     88 74 04         MOV byte ptr [SI + 0x4],DH
  1000:088a     B5 05            MOV CH,0x5
  1000:088c     8A C7            MOV AL,BH
  1000:088e     3A C6            CMP AL,DH
  1000:0890     73 02            JNC 0x1000:0894
  1000:0892     B5 04            MOV CH,0x4

LAB_1000_0894:
  1000:0894     88 6C 05         MOV byte ptr [SI + 0x5],CH
  1000:0897     58               POP AX
  1000:0898     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:089d     BB 88 83         MOV BX,0x8388
  1000:08a0     03 DA            ADD BX,DX
  1000:08a2     88 5C 06         MOV byte ptr [SI + 0x6],BL
  1000:08a5     88 7C 07         MOV byte ptr [SI + 0x7],BH
  1000:08a8     C3               RET

LAB_1000_08a9:
  1000:08a9     C6 04 01         MOV byte ptr [SI],0x1
  1000:08ac     A0 35 16         MOV AL,[0x1635]
  1000:08af     8A E8            MOV CH,AL
  1000:08b1     A0 2A 16         MOV AL,[0x162a]
  1000:08b4     2A C5            SUB AL,CH
  1000:08b6     50               PUSH AX
  1000:08b7     02 C0            ADD AL,AL
  1000:08b9     02 C0            ADD AL,AL
  1000:08bb     02 C0            ADD AL,AL
  1000:08bd     04 04            ADD AL,0x4
  1000:08bf     8A F8            MOV BH,AL
  1000:08c1     B3 80            MOV BL,0x80
  1000:08c3     88 5C 01         MOV byte ptr [SI + 0x1],BL
  1000:08c6     88 7C 02         MOV byte ptr [SI + 0x2],BH
  1000:08c9     E8 3A FC         CALL 0x1000:0506
  1000:08cc     88 54 03         MOV byte ptr [SI + 0x3],DL
  1000:08cf     88 74 04         MOV byte ptr [SI + 0x4],DH
  1000:08d2     B5 05            MOV CH,0x5
  1000:08d4     8A C7            MOV AL,BH
  1000:08d6     3A C6            CMP AL,DH
  1000:08d8     73 02            JNC 0x1000:08dc
  1000:08da     B5 04            MOV CH,0x4

LAB_1000_08dc:
  1000:08dc     88 6C 05         MOV byte ptr [SI + 0x5],CH
  1000:08df     58               POP AX
  1000:08e0     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:08e5     BB 8A 83         MOV BX,0x838a
  1000:08e8     03 DA            ADD BX,DX
  1000:08ea     88 5C 06         MOV byte ptr [SI + 0x6],BL
  1000:08ed     88 7C 07         MOV byte ptr [SI + 0x7],BH
  1000:08f0     C3               RET

LAB_1000_08f1:
  1000:08f1     3C 20            CMP AL,0x20
  1000:08f3     73 01            JNC 0x1000:08f6
  1000:08f5     C3               RET

LAB_1000_08f6:
  1000:08f6     24 0F            AND AL,0xf
  1000:08f8     B5 00            MOV CH,0x0
  1000:08fa     02 C0            ADD AL,AL
  1000:08fc     8A C8            MOV CL,AL
  1000:08fe     02 C0            ADD AL,AL
  1000:0900     02 C0            ADD AL,AL
  1000:0902     02 C0            ADD AL,AL
  1000:0904     32 E4            XOR AH,AH
  1000:0906     8B F8            MOV DI,AX
  1000:0908     03 FF            ADD DI,DI
  1000:090a     03 F9            ADD DI,CX
  1000:090c     81 C7 49 E2      ADD DI,0xe249
  1000:0910     C6 04 01         MOV byte ptr [SI],0x1
  1000:0913     A0 35 16         MOV AL,[0x1635]
  1000:0916     8A E8            MOV CH,AL
  1000:0918     A0 2A 16         MOV AL,[0x162a]
  1000:091b     2A C5            SUB AL,CH
  1000:091d     8A E8            MOV CH,AL
  1000:091f     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:0924     8A 1D            MOV BL,byte ptr [DI]
  1000:0926     8A 7D 01         MOV BH,byte ptr [DI + 0x1]
  1000:0929     81 EB 96 D8      SUB BX,0xd896
  1000:092d     81 C3 2B 83      ADD BX,0x832b
  1000:0931     03 DA            ADD BX,DX
  1000:0933     88 5C 06         MOV byte ptr [SI + 0x6],BL
  1000:0936     88 7C 07         MOV byte ptr [SI + 0x7],BH
  1000:0939     8A 45 02         MOV AL,byte ptr [DI + 0x2]
  1000:093c     88 44 05         MOV byte ptr [SI + 0x5],AL
  1000:093f     8A C5            MOV AL,CH
  1000:0941     02 C0            ADD AL,AL
  1000:0943     02 C0            ADD AL,AL
  1000:0945     02 C0            ADD AL,AL
  1000:0947     02 45 04         ADD AL,byte ptr [DI + 0x4]
  1000:094a     8A F8            MOV BH,AL
  1000:094c     8A 5D 03         MOV BL,byte ptr [DI + 0x3]
  1000:094f     8A C5            MOV AL,CH
  1000:0951     02 C0            ADD AL,AL
  1000:0953     32 E4            XOR AH,AH
  1000:0955     03 F8            ADD DI,AX
  1000:0957     8A 55 03         MOV DL,byte ptr [DI + 0x3]
  1000:095a     8A 75 04         MOV DH,byte ptr [DI + 0x4]
  1000:095d     88 5C 01         MOV byte ptr [SI + 0x1],BL
  1000:0960     88 7C 02         MOV byte ptr [SI + 0x2],BH
  1000:0963     88 54 03         MOV byte ptr [SI + 0x3],DL
  1000:0966     88 74 04         MOV byte ptr [SI + 0x4],DH
  1000:0969     C3               RET

FUN_1000_096a:
  1000:096a     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:096e     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:0972     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:0976     8A 5C 08         MOV BL,byte ptr [SI + 0x8]
  1000:0979     8A 7C 09         MOV BH,byte ptr [SI + 0x9]
  1000:097c     B9 58 F2         MOV CX,0xf258
  1000:097f     03 D9            ADD BX,CX
  1000:0981     8A 2F            MOV CH,byte ptr [BX]
  1000:0983     A0 E4 74         MOV AL,[0x74e4]
  1000:0986     8A C8            MOV CL,AL
  1000:0988     8A C5            MOV AL,CH
  1000:098a     3C 10            CMP AL,0x10
  1000:098c     72 26            JC 0x1000:09b4
  1000:098e     C6 06 62 05 04   MOV byte ptr [0x562],0x4
  1000:0993     51               PUSH CX
  1000:0994     B9 D4 06         MOV CX,0x6d4
  1000:0997     03 D9            ADD BX,CX
  1000:0999     8A 07            MOV AL,byte ptr [BX]
  1000:099b     0A C0            OR AL,AL
  1000:099d     74 13            JZ 0x1000:09b2
  1000:099f     3C ED            CMP AL,0xed
  1000:09a1     73 0F            JNC 0x1000:09b2
  1000:09a3     B9 95 FC         MOV CX,0xfc95
  1000:09a6     03 D9            ADD BX,CX
  1000:09a8     87 D3            XCHG BX,DX
  1000:09aa     59               POP CX
  1000:09ab     8A E8            MOV CH,AL
  1000:09ad     8A C1            MOV AL,CL
  1000:09af     E9 D3 4C         JMP 0x1000:5685

LAB_1000_09b2:
  1000:09b2     59               POP CX
  1000:09b3     C3               RET

LAB_1000_09b4:
  1000:09b4     8A 07            MOV AL,byte ptr [BX]
  1000:09b6     3C 0E            CMP AL,0xe
  1000:09b8     74 01            JZ 0x1000:09bb
  1000:09ba     C3               RET

LAB_1000_09bb:
  1000:09bb     B9 83 75         MOV CX,0x7583
  1000:09be     2B D9            SUB BX,CX
  1000:09c0     B6 00            MOV DH,0x0
  1000:09c2     B9 26 00         MOV CX,0x26
  1000:09c5     0A C0            OR AL,AL

LAB_1000_09c7:
  1000:09c7     1B D9            SBB BX,CX
  1000:09c9     FE C6            INC DH
  1000:09cb     73 FA            JNC 0x1000:09c7
  1000:09cd     03 D9            ADD BX,CX
  1000:09cf     FE CE            DEC DH
  1000:09d1     8A D3            MOV DL,BL
  1000:09d3     FE CE            DEC DH
  1000:09d5     FE CE            DEC DH
  1000:09d7     FE CA            DEC DL
  1000:09d9     FE CA            DEC DL
  1000:09db     FE CA            DEC DL
  1000:09dd     A0 34 16         MOV AL,[0x1634]
  1000:09e0     02 C2            ADD AL,DL
  1000:09e2     8A D0            MOV DL,AL
  1000:09e4     A0 35 16         MOV AL,[0x1635]
  1000:09e7     02 C6            ADD AL,DH
  1000:09e9     8A F0            MOV DH,AL
  1000:09eb     E8 3D 44         CALL 0x1000:4e2b
  1000:09ee     BB 95 86         MOV BX,0x8695
  1000:09f1     9C               PUSHF
  1000:09f2     03 DA            ADD BX,DX
  1000:09f4     9D               POPF
  1000:09f5     75 16            JNZ 0x1000:0a0d
  1000:09f7     A0 EE 74         MOV AL,[0x74ee]
  1000:09fa     D0 C0            ROL AL,0x1
  1000:09fc     D0 C0            ROL AL,0x1
  1000:09fe     D0 C0            ROL AL,0x1
  1000:0a00     D0 C0            ROL AL,0x1
  1000:0a02     8A E8            MOV CH,AL
  1000:0a04     8A 07            MOV AL,byte ptr [BX]
  1000:0a06     24 0F            AND AL,0xf
  1000:0a08     0A C5            OR AL,CH
  1000:0a0a     88 07            MOV byte ptr [BX],AL
  1000:0a0c     C3               RET

LAB_1000_0a0d:
  1000:0a0d     A0 EE 74         MOV AL,[0x74ee]
  1000:0a10     8A E8            MOV CH,AL
  1000:0a12     8A 07            MOV AL,byte ptr [BX]
  1000:0a14     24 F0            AND AL,0xf0
  1000:0a16     0A C5            OR AL,CH
  1000:0a18     88 07            MOV byte ptr [BX],AL
  1000:0a1a     C3               RET

FUN_1000_0a1b:
  1000:0a1b     A0 B6 16         MOV AL,[0x16b6]
  1000:0a1e     0A C0            OR AL,AL
  1000:0a20     74 01            JZ 0x1000:0a23
  1000:0a22     C3               RET

LAB_1000_0a23:
  1000:0a23     8B 3E 77 16      MOV DI,word ptr [0x1677]
  1000:0a27     A0 79 16         MOV AL,[0x1679]
  1000:0a2a     8A E8            MOV CH,AL

LAB_1000_0a2c:
  1000:0a2c     51               PUSH CX
  1000:0a2d     F6 05 01         TEST byte ptr [DI],0x1
  1000:0a30     74 03            JZ 0x1000:0a35
  1000:0a32     E8 0B 00         CALL 0x1000:0a40

LAB_1000_0a35:
  1000:0a35     BA 08 00         MOV DX,0x8
  1000:0a38     03 FA            ADD DI,DX
  1000:0a3a     59               POP CX
  1000:0a3b     FE CD            DEC CH
  1000:0a3d     75 ED            JNZ 0x1000:0a2c
  1000:0a3f     C3               RET

FUN_1000_0a40:
  1000:0a40     A0 34 16         MOV AL,[0x1634]
  1000:0a43     B5 00            MOV CH,0x0
  1000:0a45     8A FD            MOV BH,CH
  1000:0a47     8A D8            MOV BL,AL
  1000:0a49     03 DB            ADD BX,BX
  1000:0a4b     87 D3            XCHG BX,DX
  1000:0a4d     8A 5D 01         MOV BL,byte ptr [DI + 0x1]
  1000:0a50     8A 7D 02         MOV BH,byte ptr [DI + 0x2]
  1000:0a53     B1 06            MOV CL,0x6
  1000:0a55     03 D9            ADD BX,CX
  1000:0a57     2B DA            SUB BX,DX
  1000:0a59     8A C3            MOV AL,BL
  1000:0a5b     3C 06            CMP AL,0x6
  1000:0a5d     73 03            JNC 0x1000:0a62
  1000:0a5f     E9 FA 00         JMP 0x1000:0b5c

LAB_1000_0a62:
  1000:0a62     3C 46            CMP AL,0x46
  1000:0a64     72 03            JC 0x1000:0a69
  1000:0a66     E9 F3 00         JMP 0x1000:0b5c

LAB_1000_0a69:
  1000:0a69     8A D0            MOV DL,AL
  1000:0a6b     A0 35 16         MOV AL,[0x1635]
  1000:0a6e     02 C0            ADD AL,AL
  1000:0a70     8A E8            MOV CH,AL
  1000:0a72     8A 45 03         MOV AL,byte ptr [DI + 0x3]
  1000:0a75     04 04            ADD AL,0x4
  1000:0a77     2A C5            SUB AL,CH
  1000:0a79     3C 04            CMP AL,0x4
  1000:0a7b     73 03            JNC 0x1000:0a80
  1000:0a7d     E9 DC 00         JMP 0x1000:0b5c

LAB_1000_0a80:
  1000:0a80     3C 28            CMP AL,0x28
  1000:0a82     72 03            JC 0x1000:0a87
  1000:0a84     E9 D5 00         JMP 0x1000:0b5c

LAB_1000_0a87:
  1000:0a87     8A F0            MOV DH,AL
  1000:0a89     F6 05 02         TEST byte ptr [DI],0x2
  1000:0a8c     75 6B            JNZ 0x1000:0af9
  1000:0a8e     8A 45 06         MOV AL,byte ptr [DI + 0x6]
  1000:0a91     0A C0            OR AL,AL
  1000:0a93     74 2F            JZ 0x1000:0ac4
  1000:0a95     FE 4D 06         DEC byte ptr [DI + 0x6]
  1000:0a98     75 2A            JNZ 0x1000:0ac4
  1000:0a9a     8A 45 07         MOV AL,byte ptr [DI + 0x7]
  1000:0a9d     88 45 06         MOV byte ptr [DI + 0x6],AL
  1000:0aa0     A0 35 16         MOV AL,[0x1635]
  1000:0aa3     02 C0            ADD AL,AL
  1000:0aa5     8A E8            MOV CH,AL
  1000:0aa7     8A 45 03         MOV AL,byte ptr [DI + 0x3]
  1000:0aaa     02 45 05         ADD AL,byte ptr [DI + 0x5]
  1000:0aad     88 45 03         MOV byte ptr [DI + 0x3],AL
  1000:0ab0     04 04            ADD AL,0x4
  1000:0ab2     2A C5            SUB AL,CH
  1000:0ab4     3C 04            CMP AL,0x4
  1000:0ab6     73 03            JNC 0x1000:0abb
  1000:0ab8     E9 A1 00         JMP 0x1000:0b5c

LAB_1000_0abb:
  1000:0abb     3C 28            CMP AL,0x28
  1000:0abd     72 03            JC 0x1000:0ac2
  1000:0abf     E9 9A 00         JMP 0x1000:0b5c

LAB_1000_0ac2:
  1000:0ac2     8A F0            MOV DH,AL

LAB_1000_0ac4:
  1000:0ac4     52               PUSH DX
  1000:0ac5     A0 34 16         MOV AL,[0x1634]
  1000:0ac8     B5 00            MOV CH,0x0
  1000:0aca     8A FD            MOV BH,CH
  1000:0acc     8A D8            MOV BL,AL
  1000:0ace     03 DB            ADD BX,BX
  1000:0ad0     87 D3            XCHG BX,DX
  1000:0ad2     8A 5D 01         MOV BL,byte ptr [DI + 0x1]
  1000:0ad5     8A 7D 02         MOV BH,byte ptr [DI + 0x2]
  1000:0ad8     8A 4D 04         MOV CL,byte ptr [DI + 0x4]
  1000:0adb     03 D9            ADD BX,CX
  1000:0add     88 5D 01         MOV byte ptr [DI + 0x1],BL
  1000:0ae0     88 7D 02         MOV byte ptr [DI + 0x2],BH
  1000:0ae3     B1 06            MOV CL,0x6
  1000:0ae5     03 D9            ADD BX,CX
  1000:0ae7     2B DA            SUB BX,DX
  1000:0ae9     5A               POP DX
  1000:0aea     8A C3            MOV AL,BL
  1000:0aec     3C 06            CMP AL,0x6
  1000:0aee     72 6C            JC 0x1000:0b5c
  1000:0af0     3C 46            CMP AL,0x46
  1000:0af2     73 68            JNC 0x1000:0b5c
  1000:0af4     8A D0            MOV DL,AL
  1000:0af6     EB 68            JMP 0x1000:0b60

LAB_1000_0af9:
  1000:0af9     8A 45 06         MOV AL,byte ptr [DI + 0x6]
  1000:0afc     0A C0            OR AL,AL
  1000:0afe     74 3B            JZ 0x1000:0b3b
  1000:0b00     FE 4D 06         DEC byte ptr [DI + 0x6]
  1000:0b03     75 36            JNZ 0x1000:0b3b
  1000:0b05     8A 45 07         MOV AL,byte ptr [DI + 0x7]
  1000:0b08     88 45 06         MOV byte ptr [DI + 0x6],AL
  1000:0b0b     A0 34 16         MOV AL,[0x1634]
  1000:0b0e     B5 00            MOV CH,0x0
  1000:0b10     8A FD            MOV BH,CH
  1000:0b12     8A D8            MOV BL,AL
  1000:0b14     03 DB            ADD BX,BX
  1000:0b16     87 D3            XCHG BX,DX
  1000:0b18     8A 5D 01         MOV BL,byte ptr [DI + 0x1]
  1000:0b1b     8A 7D 02         MOV BH,byte ptr [DI + 0x2]
  1000:0b1e     8A 4D 04         MOV CL,byte ptr [DI + 0x4]
  1000:0b21     03 D9            ADD BX,CX
  1000:0b23     88 5D 01         MOV byte ptr [DI + 0x1],BL
  1000:0b26     88 7D 02         MOV byte ptr [DI + 0x2],BH
  1000:0b29     B1 06            MOV CL,0x6
  1000:0b2b     03 D9            ADD BX,CX
  1000:0b2d     2B DA            SUB BX,DX
  1000:0b2f     8A C3            MOV AL,BL
  1000:0b31     3C 06            CMP AL,0x6
  1000:0b33     72 27            JC 0x1000:0b5c
  1000:0b35     3C 46            CMP AL,0x46
  1000:0b37     73 23            JNC 0x1000:0b5c
  1000:0b39     8A D0            MOV DL,AL

LAB_1000_0b3b:
  1000:0b3b     A0 35 16         MOV AL,[0x1635]
  1000:0b3e     02 C0            ADD AL,AL
  1000:0b40     8A E8            MOV CH,AL
  1000:0b42     8A 45 03         MOV AL,byte ptr [DI + 0x3]
  1000:0b45     02 45 05         ADD AL,byte ptr [DI + 0x5]
  1000:0b48     88 45 03         MOV byte ptr [DI + 0x3],AL
  1000:0b4b     04 04            ADD AL,0x4
  1000:0b4d     2A C5            SUB AL,CH
  1000:0b4f     3C 04            CMP AL,0x4
  1000:0b51     72 09            JC 0x1000:0b5c
  1000:0b53     3C 28            CMP AL,0x28
  1000:0b55     73 05            JNC 0x1000:0b5c
  1000:0b57     8A F0            MOV DH,AL
  1000:0b59     EB 05            JMP 0x1000:0b60

LAB_1000_0b5c:
  1000:0b5c     80 25 FE         AND byte ptr [DI],0xfe
  1000:0b5f     C3               RET

LAB_1000_0b60:
  1000:0b60     8B CA            MOV CX,DX
  1000:0b62     BB 2B 83         MOV BX,0x832b
  1000:0b65     8A C2            MOV AL,DL
  1000:0b67     D0 E8            SHR AL,0x1
  1000:0b69     32 E4            XOR AH,AH
  1000:0b6b     03 D8            ADD BX,AX
  1000:0b6d     8A C6            MOV AL,DH
  1000:0b6f     D0 E8            SHR AL,0x1
  1000:0b71     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:0b76     03 DA            ADD BX,DX
  1000:0b78     8A 07            MOV AL,byte ptr [BX]
  1000:0b7a     BA 58 F2         MOV DX,0xf258
  1000:0b7d     03 DA            ADD BX,DX
  1000:0b7f     D0 C0            ROL AL,0x1
  1000:0b81     72 15            JC 0x1000:0b98
  1000:0b83     8A 07            MOV AL,byte ptr [BX]
  1000:0b85     0A C0            OR AL,AL
  1000:0b87     74 23            JZ 0x1000:0bac
  1000:0b89     3C 10            CMP AL,0x10
  1000:0b8b     72 11            JC 0x1000:0b9e
  1000:0b8d     3C C0            CMP AL,0xc0
  1000:0b8f     72 1B            JC 0x1000:0bac
  1000:0b91     3C FE            CMP AL,0xfe
  1000:0b93     74 17            JZ 0x1000:0bac
  1000:0b95     EB 07            JMP 0x1000:0b9e

LAB_1000_0b98:
  1000:0b98     E8 DB 49         CALL 0x1000:5576
  1000:0b9b     EB 0B            JMP 0x1000:0ba8

LAB_1000_0b9e:
  1000:0b9e     8A 07            MOV AL,byte ptr [BX]
  1000:0ba0     3C FF            CMP AL,0xff
  1000:0ba2     74 04            JZ 0x1000:0ba8
  1000:0ba4     3C 10            CMP AL,0x10
  1000:0ba6     73 04            JNC 0x1000:0bac

LAB_1000_0ba8:
  1000:0ba8     80 25 FE         AND byte ptr [DI],0xfe
  1000:0bab     C3               RET

LAB_1000_0bac:
  1000:0bac     C6 07 FF         MOV byte ptr [BX],0xff
  1000:0baf     8B D9            MOV BX,CX
  1000:0bb1     D0 E7            SHL BH,0x1
  1000:0bb3     D0 E7            SHL BH,0x1
  1000:0bb5     80 EF 08         SUB BH,0x8
  1000:0bb8     80 C3 02         ADD BL,0x2
  1000:0bbb     BD 58 00         MOV BP,0x58
  1000:0bbe     FF 1E 08 05      CALLF [0x508]
  1000:0bc2     C3               RET

FUN_1000_0bc3:
  1000:0bc3     A0 7F 16         MOV AL,[0x167f]
  1000:0bc6     0A C0            OR AL,AL
  1000:0bc8     75 01            JNZ 0x1000:0bcb
  1000:0bca     C3               RET

LAB_1000_0bcb:
  1000:0bcb     BF 0F 93         MOV DI,0x930f
  1000:0bce     A0 80 16         MOV AL,[0x1680]
  1000:0bd1     8A E8            MOV CH,AL
  1000:0bd3     B0 32            MOV AL,0x32
  1000:0bd5     2A C5            SUB AL,CH
  1000:0bd7     8A C8            MOV CL,AL
  1000:0bd9     51               PUSH CX
  1000:0bda     B0 7E            MOV AL,0x7e
  1000:0bdc     B6 02            MOV DH,0x2
  1000:0bde     8A D5            MOV DL,CH
  1000:0be0     BB 06 07         MOV BX,0x706
  1000:0be3     57               PUSH DI
  1000:0be4     80 FA 00         CMP DL,0x0
  1000:0be7     74 07            JZ 0x1000:0bf0
  1000:0be9     BD 48 00         MOV BP,0x48
  1000:0bec     FF 1E 08 05      CALLF [0x508]

LAB_1000_0bf0:
  1000:0bf0     5F               POP DI
  1000:0bf1     59               POP CX
  1000:0bf2     B6 02            MOV DH,0x2
  1000:0bf4     8A D1            MOV DL,CL
  1000:0bf6     80 FA 00         CMP DL,0x0
  1000:0bf9     75 01            JNZ 0x1000:0bfc
  1000:0bfb     C3               RET

LAB_1000_0bfc:
  1000:0bfc     86 CD            XCHG CH,CL
  1000:0bfe     32 ED            XOR CH,CH
  1000:0c00     03 F9            ADD DI,CX
  1000:0c02     BB 02 07         MOV BX,0x702
  1000:0c05     B0 7E            MOV AL,0x7e
  1000:0c07     BD 48 00         MOV BP,0x48
  1000:0c0a     FF 1E 08 05      CALLF [0x508]
  1000:0c0e     C3               RET

FUN_1000_0c0f:
  1000:0c0f     B0 FF            MOV AL,0xff
  1000:0c11     B7 07            MOV BH,0x7
  1000:0c13     B3 00            MOV BL,0x0
  1000:0c15     B6 20            MOV DH,0x20
  1000:0c17     B2 14            MOV DL,0x14
  1000:0c19     B5 A0            MOV CH,0xa0
  1000:0c1b     B1 30            MOV CL,0x30
  1000:0c1d     8B F9            MOV DI,CX
  1000:0c1f     BD 48 00         MOV BP,0x48
  1000:0c22     FF 1E 08 05      CALLF [0x508]
  1000:0c26     C3               RET

FUN_1000_0c27:
  1000:0c27     BB 63 73         MOV BX,0x7363
  1000:0c2a     89 1E 86 16      MOV word ptr [0x1686],BX
  1000:0c2e     A0 2D 16         MOV AL,[0x162d]
  1000:0c31     0A C0            OR AL,AL
  1000:0c33     75 3E            JNZ 0x1000:0c73
  1000:0c35     06               PUSH ES
  1000:0c36     8C C8            MOV AX,CS
  1000:0c38     8E C0            MOV ES,AX
  1000:0c3a     B7 14            MOV BH,0x14
  1000:0c3c     B3 12            MOV BL,0x12
  1000:0c3e     BA DD 0C         MOV DX,0xcdd
  1000:0c41     B0 33            MOV AL,0x33
  1000:0c43     BD 38 00         MOV BP,0x38
  1000:0c46     FF 1E 08 05      CALLF [0x508]
  1000:0c4a     B7 16            MOV BH,0x16
  1000:0c4c     B3 12            MOV BL,0x12
  1000:0c4e     BA E7 0C         MOV DX,0xce7
  1000:0c51     B0 22            MOV AL,0x22
  1000:0c53     BD 38 00         MOV BP,0x38
  1000:0c56     FF 1E 08 05      CALLF [0x508]
  1000:0c5a     B7 17            MOV BH,0x17
  1000:0c5c     B3 12            MOV BL,0x12
  1000:0c5e     BA E9 0C         MOV DX,0xce9
  1000:0c61     B0 44            MOV AL,0x44
  1000:0c63     BD 38 00         MOV BP,0x38
  1000:0c66     FF 1E 08 05      CALLF [0x508]
  1000:0c6a     07               POP ES
  1000:0c6b     BB 63 66         MOV BX,0x6663
  1000:0c6e     89 1E 86 16      MOV word ptr [0x1686],BX
  1000:0c72     C3               RET

LAB_1000_0c73:
  1000:0c73     06               PUSH ES
  1000:0c74     8C C8            MOV AX,CS
  1000:0c76     8E C0            MOV ES,AX
  1000:0c78     B7 14            MOV BH,0x14
  1000:0c7a     B3 12            MOV BL,0x12
  1000:0c7c     BA EE 0C         MOV DX,0xcee
  1000:0c7f     B0 33            MOV AL,0x33
  1000:0c81     BD 38 00         MOV BP,0x38
  1000:0c84     FF 1E 08 05      CALLF [0x508]
  1000:0c88     B7 16            MOV BH,0x16
  1000:0c8a     B3 12            MOV BL,0x12
  1000:0c8c     BA F8 0C         MOV DX,0xcf8
  1000:0c8f     B0 22            MOV AL,0x22
  1000:0c91     BD 38 00         MOV BP,0x38
  1000:0c94     FF 1E 08 05      CALLF [0x508]
  1000:0c98     B7 17            MOV BH,0x17
  1000:0c9a     B3 12            MOV BL,0x12
  1000:0c9c     BA FA 0C         MOV DX,0xcfa
  1000:0c9f     B0 44            MOV AL,0x44
  1000:0ca1     BD 38 00         MOV BP,0x38
  1000:0ca4     FF 1E 08 05      CALLF [0x508]
  1000:0ca8     07               POP ES
  1000:0ca9     BB 63 66         MOV BX,0x6663
  1000:0cac     89 1E 86 16      MOV word ptr [0x1686],BX
  1000:0cb0     C3               RET

FUN_1000_0cb1:
  1000:0cb1     06               PUSH ES
  1000:0cb2     8C C8            MOV AX,CS
  1000:0cb4     8E C0            MOV ES,AX
  1000:0cb6     B7 14            MOV BH,0x14
  1000:0cb8     B3 12            MOV BL,0x12
  1000:0cba     BA FF 0C         MOV DX,0xcff
  1000:0cbd     B0 00            MOV AL,0x0
  1000:0cbf     BD 38 00         MOV BP,0x38
  1000:0cc2     FF 1E 08 05      CALLF [0x508]
  1000:0cc6     B7 A7            MOV BH,0xa7
  1000:0cc8     B3 27            MOV BL,0x27
  1000:0cca     8B FB            MOV DI,BX
  1000:0ccc     B7 00            MOV BH,0x0
  1000:0cce     B2 02            MOV DL,0x2
  1000:0cd0     B6 01            MOV DH,0x1
  1000:0cd2     B0 FF            MOV AL,0xff
  1000:0cd4     BD 48 00         MOV BP,0x48
  1000:0cd7     FF 1E 08 05      CALLF [0x508]
  1000:0cdb     07               POP ES
  1000:0cdc     C3               RET

FUN_1000_0d10:
  1000:0d10     8A FE            MOV BH,DH
  1000:0d12     B3 00            MOV BL,0x0
  1000:0d14     8A F3            MOV DH,BL
  1000:0d16     D0 EF            SHR BH,0x1
  1000:0d18     D0 DB            RCR BL,0x1
  1000:0d1a     D0 EF            SHR BH,0x1
  1000:0d1c     D0 DB            RCR BL,0x1
  1000:0d1e     8B CB            MOV CX,BX
  1000:0d20     D0 EF            SHR BH,0x1
  1000:0d22     D0 DB            RCR BL,0x1
  1000:0d24     03 D9            ADD BX,CX
  1000:0d26     03 DA            ADD BX,DX
  1000:0d28     87 D3            XCHG BX,DX
  1000:0d2a     C3               RET

FUN_1000_0d30:
  1000:0d30     A0 FD 05         MOV AL,[0x5fd]
  1000:0d33     3C 05            CMP AL,0x5
  1000:0d35     73 01            JNC 0x1000:0d38
  1000:0d37     C3               RET

LAB_1000_0d38:
  1000:0d38     A0 5C 16         MOV AL,[0x165c]
  1000:0d3b     3C 0A            CMP AL,0xa
  1000:0d3d     72 01            JC 0x1000:0d40
  1000:0d3f     C3               RET

LAB_1000_0d40:
  1000:0d40     B0 01            MOV AL,0x1
  1000:0d42     A2 5E 16         MOV [0x165e],AL
  1000:0d45     B0 07            MOV AL,0x7
  1000:0d47     A2 62 05         MOV [0x562],AL
  1000:0d4a     E8 C2 31         CALL 0x1000:3f0f
  1000:0d4d     B5 0A            MOV CH,0xa

LAB_1000_0d4f:
  1000:0d4f     51               PUSH CX
  1000:0d50     9A 7C 40 00 10   CALLF 0x1000:407c
  1000:0d55     59               POP CX
  1000:0d56     FE CD            DEC CH
  1000:0d58     75 F5            JNZ 0x1000:0d4f
  1000:0d5a     32 C0            XOR AL,AL

LAB_1000_0d5c:
  1000:0d5c     50               PUSH AX
  1000:0d5d     B6 02            MOV DH,0x2
  1000:0d5f     3C 08            CMP AL,0x8
  1000:0d61     72 08            JC 0x1000:0d6b
  1000:0d63     B6 06            MOV DH,0x6
  1000:0d65     3C 0E            CMP AL,0xe
  1000:0d67     72 02            JC 0x1000:0d6b
  1000:0d69     B6 04            MOV DH,0x4

LAB_1000_0d6b:
  1000:0d6b     B5 00            MOV CH,0x0
  1000:0d6d     8A C8            MOV CL,AL
  1000:0d6f     B7 A0            MOV BH,0xa0
  1000:0d71     B3 1E            MOV BL,0x1e
  1000:0d73     0A C0            OR AL,AL
  1000:0d75     1B D9            SBB BX,CX
  1000:0d77     FE C3            INC BL
  1000:0d79     E8 C8 32         CALL 0x1000:4044
  1000:0d7c     58               POP AX
  1000:0d7d     FE C0            INC AL
  1000:0d7f     3C 14            CMP AL,0x14
  1000:0d81     75 D9            JNZ 0x1000:0d5c
  1000:0d83     A2 5C 16         MOV [0x165c],AL
  1000:0d86     C3               RET

FUN_1000_0e9d:
  1000:0e9d     C6 06 5F 16 01   MOV byte ptr [0x165f],0x1
  1000:0ea2     BE 83 27         MOV SI,0x2783
  1000:0ea5     8B 0E 34 16      MOV CX,word ptr [0x1634]
  1000:0ea9     8A D1            MOV DL,CL
  1000:0eab     80 C2 21         ADD DL,0x21
  1000:0eae     8A F5            MOV DH,CH
  1000:0eb0     80 C6 13         ADD DH,0x13

LAB_1000_0eb3:
  1000:0eb3     F6 04 80         TEST byte ptr [SI],0x80
  1000:0eb6     75 01            JNZ 0x1000:0eb9
  1000:0eb8     C3               RET

LAB_1000_0eb9:
  1000:0eb9     51               PUSH CX
  1000:0eba     52               PUSH DX
  1000:0ebb     80 4C 03 00      OR byte ptr [SI + 0x3],0x0
  1000:0ebf     74 67            JZ 0x1000:0f28
  1000:0ec1     F6 44 05 80      TEST byte ptr [SI + 0x5],0x80
  1000:0ec5     9C               PUSHF
  1000:0ec6     80 64 05 7F      AND byte ptr [SI + 0x5],0x7f
  1000:0eca     9D               POPF
  1000:0ecb     52               PUSH DX
  1000:0ecc     51               PUSH CX
  1000:0ecd     53               PUSH BX
  1000:0ece     74 03            JZ 0x1000:0ed3
  1000:0ed0     E8 A6 00         CALL 0x1000:0f79

LAB_1000_0ed3:
  1000:0ed3     5B               POP BX
  1000:0ed4     59               POP CX
  1000:0ed5     5A               POP DX
  1000:0ed6     8A 44 01         MOV AL,byte ptr [SI + 0x1]
  1000:0ed9     FE C0            INC AL
  1000:0edb     3A C1            CMP AL,CL
  1000:0edd     72 3E            JC 0x1000:0f1d
  1000:0edf     3A C2            CMP AL,DL
  1000:0ee1     73 3A            JNC 0x1000:0f1d
  1000:0ee3     8A C8            MOV CL,AL
  1000:0ee5     8A 44 02         MOV AL,byte ptr [SI + 0x2]
  1000:0ee8     FE C0            INC AL
  1000:0eea     3A C5            CMP AL,CH
  1000:0eec     72 2F            JC 0x1000:0f1d
  1000:0eee     3A C6            CMP AL,DH
  1000:0ef0     73 2B            JNC 0x1000:0f1d
  1000:0ef2     8A E8            MOV CH,AL
  1000:0ef4     8B 16 34 16      MOV DX,word ptr [0x1634]
  1000:0ef8     8A C1            MOV AL,CL
  1000:0efa     2A C2            SUB AL,DL
  1000:0efc     8A D0            MOV DL,AL
  1000:0efe     8A C5            MOV AL,CH
  1000:0f00     2A C6            SUB AL,DH
  1000:0f02     BB AB 75         MOV BX,0x75ab
  1000:0f05     32 F6            XOR DH,DH
  1000:0f07     03 DA            ADD BX,DX
  1000:0f09     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:0f0e     03 DA            ADD BX,DX
  1000:0f10     E8 B8 3F         CALL 0x1000:4ecb
  1000:0f13     A0 5F 16         MOV AL,[0x165f]
  1000:0f16     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:0f1a     E8 77 40         CALL 0x1000:4f94

LAB_1000_0f1d:
  1000:0f1d     FE 06 5F 16      INC byte ptr [0x165f]
  1000:0f21     83 C6 08         ADD SI,0x8
  1000:0f24     5A               POP DX
  1000:0f25     59               POP CX
  1000:0f26     EB 8B            JMP 0x1000:0eb3

LAB_1000_0f28:
  1000:0f28     F6 44 05 80      TEST byte ptr [SI + 0x5],0x80
  1000:0f2c     74 EF            JZ 0x1000:0f1d
  1000:0f2e     9C               PUSHF
  1000:0f2f     80 64 05 7F      AND byte ptr [SI + 0x5],0x7f
  1000:0f33     9D               POPF
  1000:0f34     9A B0 4D 00 10   CALLF 0x1000:4db0
  1000:0f39     32 FF            XOR BH,BH
  1000:0f3b     8A D9            MOV BL,CL
  1000:0f3d     81 C3 57 7C      ADD BX,0x7c57
  1000:0f41     8A C5            MOV AL,CH
  1000:0f43     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:0f48     03 DA            ADD BX,DX
  1000:0f4a     F6 04 70         TEST byte ptr [SI],0x70
  1000:0f4d     74 05            JZ 0x1000:0f54
  1000:0f4f     E8 58 41         CALL 0x1000:50aa
  1000:0f52     EB C9            JMP 0x1000:0f1d

LAB_1000_0f54:
  1000:0f54     E8 67 41         CALL 0x1000:50be
  1000:0f57     EB C4            JMP 0x1000:0f1d

FUN_1000_0f79:
  1000:0f79     A0 B4 16         MOV AL,[0x16b4]
  1000:0f7c     0A C0            OR AL,AL
  1000:0f7e     74 01            JZ 0x1000:0f81
  1000:0f80     C3               RET

LAB_1000_0f81:
  1000:0f81     A0 E7 74         MOV AL,[0x74e7]
  1000:0f84     0A C0            OR AL,AL
  1000:0f86     74 01            JZ 0x1000:0f89
  1000:0f88     C3               RET

LAB_1000_0f89:
  1000:0f89     8A 04            MOV AL,byte ptr [SI]
  1000:0f8b     24 0F            AND AL,0xf
  1000:0f8d     8A E8            MOV CH,AL
  1000:0f8f     02 C0            ADD AL,AL
  1000:0f91     32 E4            XOR AH,AH
  1000:0f93     8B F8            MOV DI,AX
  1000:0f95     2E FF 95 59 0F   CALL word ptr CS:[DI + 0xf59]
  1000:0f9a     C3               RET

caseD_d:
  1000:1663     46               INC SI
  1000:1664     01 75 16         ADD word ptr [DI + 0x16],SI
  1000:1667     FE 4C 02         DEC byte ptr [SI + 0x2]
  1000:166a     E8 84 01         CALL 0x1000:17f1
  1000:166d     75 13            JNZ 0x1000:1682
  1000:166f     FE 44 01         INC byte ptr [SI + 0x1]
  1000:1672     E8 BA 02         CALL 0x1000:192f
  1000:1675     75 01            JNZ 0x1000:1678
  1000:1677     C3               RET

LAB_1000_1678:
  1000:1678     B7 00            MOV BH,0x0
  1000:167a     EB 2D            JMP 0x1000:16a9

LAB_1000_1682:
  1000:1682     B7 10            MOV BH,0x10
  1000:1684     EB 23            JMP 0x1000:16a9

caseD_f:
  1000:1689     00 75 16         ADD byte ptr [DI + 0x16],DH

caseD_0:
  1000:168d     44               INC SP
  1000:168e     02 E8            ADD CH,AL
  1000:1690     5F               POP DI
  1000:1691     01 75 13         ADD word ptr [DI + 0x13],SI
  1000:1694     FE 44 01         INC byte ptr [SI + 0x1]
  1000:1697     E8 EB 01         CALL 0x1000:1885
  1000:169a     75 01            JNZ 0x1000:169d
  1000:169c     C3               RET

LAB_1000_169d:
  1000:169d     B7 10            MOV BH,0x10
  1000:169f     EB 08            JMP 0x1000:16a9

FUN_1000_16a9:
  1000:16a9     8A 44 05         MOV AL,byte ptr [SI + 0x5]
  1000:16ac     24 CF            AND AL,0xcf
  1000:16ae     0A C7            OR AL,BH
  1000:16b0     88 44 05         MOV byte ptr [SI + 0x5],AL
  1000:16b3     C3               RET

FUN_1000_17f1:
  1000:17f1     8A 04            MOV AL,byte ptr [SI]
  1000:17f3     24 70            AND AL,0x70
  1000:17f5     75 03            JNZ 0x1000:17fa
  1000:17f7     E9 DF 01         JMP 0x1000:19d9

LAB_1000_17fa:
  1000:17fa     BB 82 75         MOV BX,0x7582
  1000:17fd     9A B0 4D 00 10   CALLF 0x1000:4db0
  1000:1802     8A C1            MOV AL,CL
  1000:1804     0A C0            OR AL,AL
  1000:1806     75 03            JNZ 0x1000:180b
  1000:1808     E9 9A 38         JMP 0x1000:50a5

LAB_1000_180b:
  1000:180b     8A C1            MOV AL,CL
  1000:180d     32 E4            XOR AH,AH
  1000:180f     03 D8            ADD BX,AX
  1000:1811     8A C5            MOV AL,CH
  1000:1813     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:1818     03 DA            ADD BX,DX
  1000:181a     B9 26 00         MOV CX,0x26
  1000:181d     8A 07            MOV AL,byte ptr [BX]
  1000:181f     0A C0            OR AL,AL
  1000:1821     74 01            JZ 0x1000:1824
  1000:1823     C3               RET

LAB_1000_1824:
  1000:1824     03 D9            ADD BX,CX
  1000:1826     8A 07            MOV AL,byte ptr [BX]
  1000:1828     0A C0            OR AL,AL
  1000:182a     74 01            JZ 0x1000:182d
  1000:182c     C3               RET

LAB_1000_182d:
  1000:182d     B9 AF 06         MOV CX,0x6af
  1000:1830     03 D9            ADD BX,CX
  1000:1832     E8 75 38         CALL 0x1000:50aa
  1000:1835     FE 4C 01         DEC byte ptr [SI + 0x1]
  1000:1838     32 C0            XOR AL,AL
  1000:183a     C3               RET

FUN_1000_1885:
  1000:1885     BB 82 75         MOV BX,0x7582
  1000:1888     9A B0 4D 00 10   CALLF 0x1000:4db0
  1000:188d     8A C1            MOV AL,CL
  1000:188f     0A C0            OR AL,AL
  1000:1891     75 03            JNZ 0x1000:1896
  1000:1893     E9 0F 38         JMP 0x1000:50a5

LAB_1000_1896:
  1000:1896     8A C5            MOV AL,CH
  1000:1898     0A C0            OR AL,AL
  1000:189a     75 03            JNZ 0x1000:189f
  1000:189c     E9 06 38         JMP 0x1000:50a5

LAB_1000_189f:
  1000:189f     8A C1            MOV AL,CL
  1000:18a1     32 E4            XOR AH,AH
  1000:18a3     03 D8            ADD BX,AX
  1000:18a5     8A C5            MOV AL,CH
  1000:18a7     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:18ac     03 DA            ADD BX,DX
  1000:18ae     B9 DA FF         MOV CX,0xffda
  1000:18b1     8A 07            MOV AL,byte ptr [BX]
  1000:18b3     0A C0            OR AL,AL
  1000:18b5     74 01            JZ 0x1000:18b8
  1000:18b7     C3               RET

LAB_1000_18b8:
  1000:18b8     03 D9            ADD BX,CX
  1000:18ba     8A 07            MOV AL,byte ptr [BX]
  1000:18bc     0A C0            OR AL,AL
  1000:18be     74 01            JZ 0x1000:18c1
  1000:18c0     C3               RET

LAB_1000_18c1:
  1000:18c1     43               INC BX
  1000:18c2     8A 07            MOV AL,byte ptr [BX]
  1000:18c4     0A C0            OR AL,AL
  1000:18c6     74 01            JZ 0x1000:18c9
  1000:18c8     C3               RET

LAB_1000_18c9:
  1000:18c9     B9 FA 06         MOV CX,0x6fa
  1000:18cc     03 D9            ADD BX,CX
  1000:18ce     E8 D9 37         CALL 0x1000:50aa
  1000:18d1     FE 4C 01         DEC byte ptr [SI + 0x1]
  1000:18d4     FE 4C 02         DEC byte ptr [SI + 0x2]
  1000:18d7     32 C0            XOR AL,AL
  1000:18d9     C3               RET

FUN_1000_192f:
  1000:192f     BB A8 75         MOV BX,0x75a8
  1000:1932     9A B0 4D 00 10   CALLF 0x1000:4db0
  1000:1937     8A C1            MOV AL,CL
  1000:1939     0A C0            OR AL,AL
  1000:193b     75 03            JNZ 0x1000:1940
  1000:193d     E9 65 37         JMP 0x1000:50a5

LAB_1000_1940:
  1000:1940     8A C5            MOV AL,CH
  1000:1942     3C 14            CMP AL,0x14
  1000:1944     75 03            JNZ 0x1000:1949
  1000:1946     E9 5C 37         JMP 0x1000:50a5

LAB_1000_1949:
  1000:1949     8A C1            MOV AL,CL
  1000:194b     32 E4            XOR AH,AH
  1000:194d     03 D8            ADD BX,AX
  1000:194f     8A C5            MOV AL,CH
  1000:1951     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:1956     03 DA            ADD BX,DX
  1000:1958     B9 26 00         MOV CX,0x26
  1000:195b     8A 07            MOV AL,byte ptr [BX]
  1000:195d     0A C0            OR AL,AL
  1000:195f     74 01            JZ 0x1000:1962
  1000:1961     C3               RET

LAB_1000_1962:
  1000:1962     03 D9            ADD BX,CX
  1000:1964     8A 07            MOV AL,byte ptr [BX]
  1000:1966     0A C0            OR AL,AL
  1000:1968     74 01            JZ 0x1000:196b
  1000:196a     C3               RET

LAB_1000_196b:
  1000:196b     43               INC BX
  1000:196c     8A 07            MOV AL,byte ptr [BX]
  1000:196e     0A C0            OR AL,AL
  1000:1970     74 01            JZ 0x1000:1973
  1000:1972     C3               RET

LAB_1000_1973:
  1000:1973     B9 88 06         MOV CX,0x688
  1000:1976     03 D9            ADD BX,CX
  1000:1978     E8 2F 37         CALL 0x1000:50aa
  1000:197b     FE 4C 01         DEC byte ptr [SI + 0x1]
  1000:197e     FE 44 02         INC byte ptr [SI + 0x2]
  1000:1981     32 C0            XOR AL,AL
  1000:1983     C3               RET

FUN_1000_19d9:
  1000:19d9     9C               PUSHF
  1000:19da     80 64 05 F7      AND byte ptr [SI + 0x5],0xf7
  1000:19de     9D               POPF
  1000:19df     BB 82 75         MOV BX,0x7582
  1000:19e2     9A B0 4D 00 10   CALLF 0x1000:4db0
  1000:19e7     8A C1            MOV AL,CL
  1000:19e9     0A C0            OR AL,AL
  1000:19eb     75 03            JNZ 0x1000:19f0
  1000:19ed     E9 B5 36         JMP 0x1000:50a5

LAB_1000_19f0:
  1000:19f0     8A C1            MOV AL,CL
  1000:19f2     32 E4            XOR AH,AH
  1000:19f4     03 D8            ADD BX,AX
  1000:19f6     8A C5            MOV AL,CH
  1000:19f8     9A C7 4D 00 10   CALLF 0x1000:4dc7
  1000:19fd     03 DA            ADD BX,DX
  1000:19ff     B9 26 00         MOV CX,0x26
  1000:1a02     8A 07            MOV AL,byte ptr [BX]
  1000:1a04     0A C0            OR AL,AL
  1000:1a06     74 01            JZ 0x1000:1a09
  1000:1a08     C3               RET

LAB_1000_1a09:
  1000:1a09     03 D9            ADD BX,CX
  1000:1a0b     8A 07            MOV AL,byte ptr [BX]
  1000:1a0d     0A C0            OR AL,AL
  1000:1a0f     74 01            JZ 0x1000:1a12
  1000:1a11     C3               RET

LAB_1000_1a12:
  1000:1a12     03 D9            ADD BX,CX
  1000:1a14     8A 07            MOV AL,byte ptr [BX]
  1000:1a16     0A C0            OR AL,AL
  1000:1a18     74 01            JZ 0x1000:1a1b
  1000:1a1a     C3               RET

LAB_1000_1a1b:
  1000:1a1b     B9 89 06         MOV CX,0x689
  1000:1a1e     03 D9            ADD BX,CX
  1000:1a20     E8 9B 36         CALL 0x1000:50be
  1000:1a23     FE 4C 01         DEC byte ptr [SI + 0x1]
  1000:1a26     32 C0            XOR AL,AL
  1000:1a28     C3               RET

thunk_FUN_1000_1ced:
  1000:1cc5     90               NOP
  1000:1cc6     EB 25            JMP 0x1000:1ced

FUN_1000_1ced:
  1000:1ced     FF 1E B3 05      CALLF [0x5b3]
  1000:1cf1     FF 1E BF 05      CALLF [0x5bf]
  1000:1cf5     FF 1E AF 05      CALLF [0x5af]
  1000:1cf9     8C D8            MOV AX,DS
  1000:1cfb     8E C0            MOV ES,AX
  1000:1cfd     BF E1 16         MOV DI,0x16e1
  1000:1d00     B0 00            MOV AL,0x0
  1000:1d02     B9 20 00         MOV CX,0x20
  1000:1d05     F3 AA            STOSB.REP ES:DI
  1000:1d07     80 3E B9 16 00   CMP byte ptr [0x16b9],0x0
  1000:1d0c     75 05            JNZ 0x1000:1d13
  1000:1d0e     C6 06 76 16 01   MOV byte ptr [0x1676],0x1

LAB_1000_1d13:
  1000:1d13     80 3E 76 16 04   CMP byte ptr [0x1676],0x4
  1000:1d18     74 12            JZ 0x1000:1d2c
  1000:1d1a     80 3E EF 05 00   CMP byte ptr [0x5ef],0x0
  1000:1d1f     74 0B            JZ 0x1000:1d2c
  1000:1d21     BE EF 05         MOV SI,0x5ef
  1000:1d24     BF FF 05         MOV DI,0x5ff
  1000:1d27     B9 10 00         MOV CX,0x10
  1000:1d2a     F3 A4            MOVSB.REP ES:DI,SI

LAB_1000_1d2c:
  1000:1d2c     32 C0            XOR AL,AL
  1000:1d2e     A2 B4 16         MOV [0x16b4],AL
  1000:1d31     A2 B5 16         MOV [0x16b5],AL
  1000:1d34     A2 B6 16         MOV [0x16b6],AL
  1000:1d37     A2 B9 16         MOV [0x16b9],AL
  1000:1d3a     C7 06 28 16 24 08   MOV word ptr [0x1628],0x824
  1000:1d40     80 3E 76 16 04   CMP byte ptr [0x1676],0x4
  1000:1d45     74 05            JZ 0x1000:1d4c
  1000:1d47     C6 06 76 16 01   MOV byte ptr [0x1676],0x1

LAB_1000_1d4c:
  1000:1d4c     BB 61 16         MOV BX,0x1661
  1000:1d4f     B9 05 00         MOV CX,0x5

LAB_1000_1d52:
  1000:1d52     C6 07 0E         MOV byte ptr [BX],0xe
  1000:1d55     43               INC BX
  1000:1d56     C6 07 07         MOV byte ptr [BX],0x7
  1000:1d59     43               INC BX
  1000:1d5a     E2 F6            LOOP 0x1000:1d52
  1000:1d5c     2E C6 06 E1 4B 00   MOV byte ptr CS:[0x4be1],0x0

LAB_1000_1d62:
  1000:1d62     A0 5E 16         MOV AL,[0x165e]
  1000:1d65     0A C0            OR AL,AL
  1000:1d67     80 3E 5E 16 00   CMP byte ptr [0x165e],0x0
  1000:1d6c     74 03            JZ 0x1000:1d71
  1000:1d6e     E8 62 21         CALL 0x1000:3ed3

LAB_1000_1d71:
  1000:1d71     75 EF            JNZ 0x1000:1d62
  1000:1d73     32 C0            XOR AL,AL
  1000:1d75     A2 62 05         MOV [0x562],AL
  1000:1d78     A2 70 16         MOV [0x1670],AL
  1000:1d7b     A2 74 16         MOV [0x1674],AL
  1000:1d7e     A0 E6 74         MOV AL,[0x74e6]
  1000:1d81     A2 7A 16         MOV [0x167a],AL
  1000:1d84     32 C0            XOR AL,AL
  1000:1d86     E8 42 25         CALL 0x1000:42cb
  1000:1d89     B0 01            MOV AL,0x1
  1000:1d8b     E8 3D 25         CALL 0x1000:42cb
  1000:1d8e     B0 02            MOV AL,0x2
  1000:1d90     E8 38 25         CALL 0x1000:42cb
  1000:1d93     B0 01            MOV AL,0x1
  1000:1d95     A2 89 16         MOV [0x1689],AL
  1000:1d98     E8 3F 28         CALL 0x1000:45da
  1000:1d9b     E8 9C 27         CALL 0x1000:453a
  1000:1d9e     32 C0            XOR AL,AL
  1000:1da0     A2 2D 16         MOV [0x162d],AL
  1000:1da3     A2 31 16         MOV [0x1631],AL
  1000:1da6     A2 6F 16         MOV [0x166f],AL
  1000:1da9     8C D9            MOV CX,DS
  1000:1dab     8E C1            MOV ES,CX
  1000:1dad     BF 83 75         MOV DI,0x7583
  1000:1db0     B9 6A 03         MOV CX,0x36a
  1000:1db3     B0 F0            MOV AL,0xf0
  1000:1db5     F3 AA            STOSB.REP ES:DI
  1000:1db7     BF ED 78         MOV DI,0x78ed
  1000:1dba     B9 6A 03         MOV CX,0x36a
  1000:1dbd     32 C0            XOR AL,AL
  1000:1dbf     F3 AA            STOSB.REP ES:DI
  1000:1dc1     BF 2B 83         MOV DI,0x832b
  1000:1dc4     B9 6A 03         MOV CX,0x36a
  1000:1dc7     B0 FF            MOV AL,0xff
  1000:1dc9     F3 AA            STOSB.REP ES:DI
  1000:1dcb     8A 0E 79 16      MOV CL,byte ptr [0x1679]
  1000:1dcf     32 ED            XOR CH,CH
  1000:1dd1     D1 E1            SHL CX,0x1
  1000:1dd3     D1 E1            SHL CX,0x1
  1000:1dd5     D1 E1            SHL CX,0x1
  1000:1dd7     8B 3E 77 16      MOV DI,word ptr [0x1677]
  1000:1ddb     32 C0            XOR AL,AL
  1000:1ddd     F3 AA            STOSB.REP ES:DI
  1000:1ddf     BB 02 03         MOV BX,0x302
  1000:1de2     A0 EF 05         MOV AL,[0x5ef]
  1000:1de5     04 30            ADD AL,0x30
  1000:1de7     BD 60 00         MOV BP,0x60
  1000:1dea     FF 1E 08 05      CALLF [0x508]
  1000:1dee     BB 02 05         MOV BX,0x502
  1000:1df1     A0 76 16         MOV AL,[0x1676]
  1000:1df4     04 30            ADD AL,0x30
  1000:1df6     BD 60 00         MOV BP,0x60
  1000:1df9     FF 1E 08 05      CALLF [0x508]
  1000:1dfd     A0 EF 05         MOV AL,[0x5ef]
  1000:1e00     8A E0            MOV AH,AL
  1000:1e02     04 30            ADD AL,0x30
  1000:1e04     2E A2 13 54      MOV CS:[0x5413],AL
  1000:1e08     2E A2 77 53      MOV CS:[0x5377],AL
  1000:1e0c     2E A2 C9 1B      MOV CS:[0x1bc9],AL
  1000:1e10     47               INC DI
  1000:1e11     A0 76 16         MOV AL,[0x1676]
  1000:1e14     3C 01            CMP AL,0x1
  1000:1e16     75 03            JNZ 0x1000:1e1b
  1000:1e18     E8 5D 04         CALL 0x1000:2278

LAB_1000_1e1b:
  1000:1e1b     B5 31            MOV CH,0x31
  1000:1e1d     3C FF            CMP AL,0xff
  1000:1e1f     2E 88 2E 14 54   MOV byte ptr CS:[0x5414],CH
  1000:1e24     B0 03            MOV AL,0x3
  1000:1e26     80 3E EF 05 05   CMP byte ptr [0x5ef],0x5
  1000:1e2b     72 02            JC 0x1000:1e2f
  1000:1e2d     B0 04            MOV AL,0x4

LAB_1000_1e2f:
  1000:1e2f     80 0E 53 74 02   OR byte ptr [0x7453],0x2
  1000:1e34     80 3E 76 16 04   CMP byte ptr [0x1676],0x4
  1000:1e39     74 12            JZ 0x1000:1e4d
  1000:1e3b     A0 EF 05         MOV AL,[0x5ef]
  1000:1e3e     04 30            ADD AL,0x30
  1000:1e40     2E A2 13 54      MOV CS:[0x5413],AL
  1000:1e44     BA 10 54         MOV DX,0x5410
  1000:1e47     BB 53 74         MOV BX,0x7453
  1000:1e4a     E8 EB 02         CALL 0x1000:2138

LAB_1000_1e4d:
  1000:1e4d     A0 EA 74         MOV AL,[0x74ea]
  1000:1e50     A2 27 16         MOV [0x1627],AL
  1000:1e53     3C 20            CMP AL,0x20
  1000:1e55     73 04            JNC 0x1000:1e5b
  1000:1e57     B0 00            MOV AL,0x0
  1000:1e59     EB 02            JMP 0x1000:1e5d

LAB_1000_1e5b:
  1000:1e5b     B0 01            MOV AL,0x1

LAB_1000_1e5d:
  1000:1e5d     A2 2D 16         MOV [0x162d],AL
  1000:1e60     A0 EF 05         MOV AL,[0x5ef]
  1000:1e63     3C 09            CMP AL,0x9
  1000:1e65     74 09            JZ 0x1000:1e70
  1000:1e67     BA 73 53         MOV DX,0x5373
  1000:1e6a     BB 63 30         MOV BX,0x3063
  1000:1e6d     E8 C8 02         CALL 0x1000:2138

LAB_1000_1e70:
  1000:1e70     A0 EF 05         MOV AL,[0x5ef]
  1000:1e73     3C 02            CMP AL,0x2
  1000:1e75     7C 18            JL 0x1000:1e8f
  1000:1e77     3C 05            CMP AL,0x5
  1000:1e79     7D 14            JGE 0x1000:1e8f
  1000:1e7b     04 30            ADD AL,0x30
  1000:1e7d     2E A2 7D 53      MOV CS:[0x537d],AL
  1000:1e81     C6 06 7E F1 0A   MOV byte ptr [0xf17e],0xa
  1000:1e86     BA 79 53         MOV DX,0x5379
  1000:1e89     BB 13 37         MOV BX,0x3713
  1000:1e8c     E8 FC 02         CALL 0x1000:218b

LAB_1000_1e8f:
  1000:1e8f     A0 76 16         MOV AL,[0x1676]
  1000:1e92     3C 04            CMP AL,0x4
  1000:1e94     75 01            JNZ 0x1000:1e97
  1000:1e96     C3               RET

LAB_1000_1e97:
  1000:1e97     BB 4B 16         MOV BX,0x164b
  1000:1e9a     B0 30            MOV AL,0x30
  1000:1e9c     B9 08 00         MOV CX,0x8

LAB_1000_1e9f:
  1000:1e9f     88 07            MOV byte ptr [BX],AL
  1000:1ea1     43               INC BX
  1000:1ea2     E2 FB            LOOP 0x1000:1e9f
  1000:1ea4     C7 06 86 16 03 17   MOV word ptr [0x1686],0x1703
  1000:1eaa     BA 46 53         MOV DX,0x5346
  1000:1ead     BB 03 17         MOV BX,0x1703
  1000:1eb0     E8 85 02         CALL 0x1000:2138
  1000:1eb3     BD 5C 00         MOV BP,0x5c
  1000:1eb6     FF 1E 08 05      CALLF [0x508]
  1000:1eba     A0 EB 74         MOV AL,[0x74eb]
  1000:1ebd     E8 77 2C         CALL 0x1000:4b37
  1000:1ec0     8C C8            MOV AX,CS
  1000:1ec2     8E C0            MOV ES,AX
  1000:1ec4     BB 06 02         MOV BX,0x206
  1000:1ec7     BA E1 1B         MOV DX,0x1be1
  1000:1eca     B0 44            MOV AL,0x44
  1000:1ecc     BD 38 00         MOV BP,0x38
  1000:1ecf     FF 1E 08 05      CALLF [0x508]
  1000:1ed3     BB 06 11         MOV BX,0x1106
  1000:1ed6     BA FE 1B         MOV DX,0x1bfe
  1000:1ed9     B0 44            MOV AL,0x44
  1000:1edb     BD 38 00         MOV BP,0x38
  1000:1ede     FF 1E 08 05      CALLF [0x508]
  1000:1ee2     BB 06 03         MOV BX,0x306
  1000:1ee5     BA 1B 1C         MOV DX,0x1c1b
  1000:1ee8     B0 44            MOV AL,0x44
  1000:1eea     BD 38 00         MOV BP,0x38
  1000:1eed     FF 1E 08 05      CALLF [0x508]
  1000:1ef1     BB 21 03         MOV BX,0x321
  1000:1ef4     BA 1B 1C         MOV DX,0x1c1b
  1000:1ef7     B0 44            MOV AL,0x44
  1000:1ef9     BD 38 00         MOV BP,0x38
  1000:1efc     FF 1E 08 05      CALLF [0x508]
  1000:1f00     BB 0E 08         MOV BX,0x80e
  1000:1f03     BA 2E 1C         MOV DX,0x1c2e
  1000:1f06     B0 22            MOV AL,0x22
  1000:1f08     BD 38 00         MOV BP,0x38
  1000:1f0b     FF 1E 08 05      CALLF [0x508]
  1000:1f0f     BB 17 07         MOV BX,0x717
  1000:1f12     BA 8A 1C         MOV DX,0x1c8a
  1000:1f15     B0 22            MOV AL,0x22
  1000:1f17     BD 38 00         MOV BP,0x38
  1000:1f1a     FF 1E 08 05      CALLF [0x508]
  1000:1f1e     8B 1E 1C 75      MOV BX,word ptr [0x751c]
  1000:1f22     BA 7E 1C         MOV DX,0x1c7e
  1000:1f25     B0 00            MOV AL,0x0
  1000:1f27     BD 38 00         MOV BP,0x38
  1000:1f2a     FF 1E 08 05      CALLF [0x508]
  1000:1f2e     8B 1E 1C 75      MOV BX,word ptr [0x751c]
  1000:1f32     BA 84 1C         MOV DX,0x1c84
  1000:1f35     B0 77            MOV AL,0x77
  1000:1f37     BD 38 00         MOV BP,0x38
  1000:1f3a     FF 1E 08 05      CALLF [0x508]
  1000:1f3e     BB 09 05         MOV BX,0x509
  1000:1f41     BA A7 1C         MOV DX,0x1ca7
  1000:1f44     B0 44            MOV AL,0x44
  1000:1f46     BD 38 00         MOV BP,0x38
  1000:1f49     FF 1E 08 05      CALLF [0x508]
  1000:1f4d     C7 06 86 16 63 66   MOV word ptr [0x1686],0x6663
  1000:1f53     A0 EF 05         MOV AL,[0x5ef]
  1000:1f56     3C 08            CMP AL,0x8
  1000:1f58     7D 0B            JGE 0x1000:1f65
  1000:1f5a     BB 1A 07         MOV BX,0x71a
  1000:1f5d     BA 0C 75         MOV DX,0x750c
  1000:1f60     E8 75 20         CALL 0x1000:3fd8
  1000:1f63     EB 0F            JMP 0x1000:1f74

LAB_1000_1f65:
  1000:1f65     BB 1A 07         MOV BX,0x71a
  1000:1f68     BA BC 1B         MOV DX,0x1bbc
  1000:1f6b     B0 22            MOV AL,0x22
  1000:1f6d     BD 38 00         MOV BP,0x38
  1000:1f70     FF 1E 08 05      CALLF [0x508]

LAB_1000_1f74:
  1000:1f74     BB 1A 08         MOV BX,0x81a
  1000:1f77     BA 10 75         MOV DX,0x7510
  1000:1f7a     E8 5B 20         CALL 0x1000:3fd8
  1000:1f7d     BB 1A 09         MOV BX,0x91a
  1000:1f80     BA 14 75         MOV DX,0x7514
  1000:1f83     E8 52 20         CALL 0x1000:3fd8
  1000:1f86     BB 1A 0A         MOV BX,0xa1a
  1000:1f89     BA 18 75         MOV DX,0x7518
  1000:1f8c     E8 49 20         CALL 0x1000:3fd8
  1000:1f8f     B1 32            MOV CL,0x32
  1000:1f91     BA 92 1C         MOV DX,0x1c92
  1000:1f94     A0 FD 05         MOV AL,[0x5fd]
  1000:1f97     3C 09            CMP AL,0x9
  1000:1f99     7C 0E            JL 0x1000:1fa9
  1000:1f9b     B1 36            MOV CL,0x36
  1000:1f9d     BA 99 1C         MOV DX,0x1c99
  1000:1fa0     3C 0F            CMP AL,0xf
  1000:1fa2     7C 05            JL 0x1000:1fa9
  1000:1fa4     B1 34            MOV CL,0x34
  1000:1fa6     BA A0 1C         MOV DX,0x1ca0

LAB_1000_1fa9:
  1000:1fa9     8A C1            MOV AL,CL
  1000:1fab     BB 18 05         MOV BX,0x518
  1000:1fae     BD 38 00         MOV BP,0x38
  1000:1fb1     FF 1E 08 05      CALLF [0x508]
  1000:1fb5     BB 18 07         MOV BX,0x718
  1000:1fb8     BA B0 1B         MOV DX,0x1bb0
  1000:1fbb     B0 36            MOV AL,0x36
  1000:1fbd     BD 38 00         MOV BP,0x38
  1000:1fc0     FF 1E 08 05      CALLF [0x508]
  1000:1fc4     BB 08 03         MOV BX,0x308
  1000:1fc7     BA C1 1B         MOV DX,0x1bc1
  1000:1fca     B0 36            MOV AL,0x36
  1000:1fcc     BD 38 00         MOV BP,0x38
  1000:1fcf     FF 1E 08 05      CALLF [0x508]
  1000:1fd3     BB 14 06         MOV BX,0x614
  1000:1fd6     BA D4 1B         MOV DX,0x1bd4
  1000:1fd9     B0 36            MOV AL,0x36
  1000:1fdb     BD 38 00         MOV BP,0x38
  1000:1fde     FF 1E 08 05      CALLF [0x508]
  1000:1fe2     BB 09 0A         MOV BX,0xa09
  1000:1fe5     BA DB 1B         MOV DX,0x1bdb
  1000:1fe8     B0 36            MOV AL,0x36
  1000:1fea     BD 38 00         MOV BP,0x38
  1000:1fed     FF 1E 08 05      CALLF [0x508]
  1000:1ff1     BB 14 04         MOV BX,0x414
  1000:1ff4     BA CB 1B         MOV DX,0x1bcb
  1000:1ff7     B0 36            MOV AL,0x36
  1000:1ff9     BD 38 00         MOV BP,0x38
  1000:1ffc     FF 1E 08 05      CALLF [0x508]
  1000:2000     E8 F4 E5         CALL 0x1000:05f7
  1000:2003     E8 75 1F         CALL 0x1000:3f7b
  1000:2006     A0 EF 05         MOV AL,[0x5ef]
  1000:2009     3C 09            CMP AL,0x9
  1000:200b     74 01            JZ 0x1000:200e
  1000:200d     C3               RET

LAB_1000_200e:
  1000:200e     A0 76 16         MOV AL,[0x1676]
  1000:2011     3C 02            CMP AL,0x2
  1000:2013     74 01            JZ 0x1000:2016
  1000:2015     C3               RET

LAB_1000_2016:
  1000:2016     C3               RET

FUN_1000_2138:
  1000:2138     1E               PUSH DS
  1000:2139     8C D8            MOV AX,DS
  1000:213b     2E A3 54 20      MOV CS:[0x2054],AX
  1000:213f     2E A3 39 20      MOV CS:[0x2039],AX
  1000:2143     2E 89 1E 52 20   MOV word ptr CS:[0x2052],BX
  1000:2148     8C D8            MOV AX,DS
  1000:214a     8E C0            MOV ES,AX
  1000:214c     8C C8            MOV AX,CS
  1000:214e     8E D8            MOV DS,AX
  1000:2150     42               INC DX
  1000:2151     52               PUSH DX
  1000:2152     2E 83 3E 52 20 00   CMP word ptr CS:[0x2052],0x0
  1000:2158     74 06            JZ 0x1000:2160
  1000:215a     BB 52 20         MOV BX,0x2052
  1000:215d     EB 04            JMP 0x1000:2163

LAB_1000_2160:
  1000:2160     BB 00 00         MOV BX,0x0

LAB_1000_2163:
  1000:2163     E8 AC 01         CALL 0x1000:2312
  1000:2166     5A               POP DX
  1000:2167     1F               POP DS
  1000:2168     2E 8B 1E 54 20   MOV BX,word ptr CS:[0x2054]
  1000:216d     C3               RET

FUN_1000_216e:
  1000:216e     06               PUSH ES
  1000:216f     8C C8            MOV AX,CS
  1000:2171     8E C0            MOV ES,AX
  1000:2173     BF 56 20         MOV DI,0x2056
  1000:2176     8B F2            MOV SI,DX

LAB_1000_2178:
  1000:2178     A4               MOVSB ES:DI,SI
  1000:2179     80 3C 00         CMP byte ptr [SI],0x0
  1000:217c     75 FA            JNZ 0x1000:2178
  1000:217e     C6 05 00         MOV byte ptr [DI],0x0
  1000:2181     BA 56 20         MOV DX,0x2056
  1000:2184     07               POP ES
  1000:2185     E8 B0 FF         CALL 0x1000:2138
  1000:2188     C3               RET

FUN_1000_218b:
  1000:218b     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:2190     75 02            JNZ 0x1000:2194
  1000:2192     EB A4            JMP 0x1000:2138

FUN_1000_2194:
  1000:2194     2E 89 1E 35 20   MOV word ptr CS:[0x2035],BX
  1000:2199     2E C7 06 52 20 00 00   MOV word ptr CS:[0x2052],0x0
  1000:21a0     1E               PUSH DS
  1000:21a1     8C D8            MOV AX,DS
  1000:21a3     8E C0            MOV ES,AX
  1000:21a5     8C C8            MOV AX,CS
  1000:21a7     8E D8            MOV DS,AX
  1000:21a9     42               INC DX
  1000:21aa     52               PUSH DX
  1000:21ab     BB 00 00         MOV BX,0x0
  1000:21ae     E8 61 01         CALL 0x1000:2312
  1000:21b1     2E 8B 1E 54 20   MOV BX,word ptr CS:[0x2054]
  1000:21b6     5A               POP DX
  1000:21b7     1F               POP DS
  1000:21b8     73 03            JNC 0x1000:21bd
  1000:21ba     EB 58            JMP 0x1000:2214

LAB_1000_21bd:
  1000:21bd     2E 89 1E 89 21   MOV word ptr CS:[0x2189],BX
  1000:21c2     A0 7E F1         MOV AL,[0xf17e]
  1000:21c5     1E               PUSH DS
  1000:21c6     2E 8B 3E 35 20   MOV DI,word ptr CS:[0x2035]
  1000:21cb     8C DB            MOV BX,DS
  1000:21cd     8E C3            MOV ES,BX
  1000:21cf     2E 8E 1E 89 21   MOV DS,word ptr CS:[0x2189]
  1000:21d4     BE 00 00         MOV SI,0x0
  1000:21d7     E8 02 4C         CALL 0x1000:6ddc
  1000:21da     1F               POP DS
  1000:21db     06               PUSH ES
  1000:21dc     57               PUSH DI
  1000:21dd     52               PUSH DX
  1000:21de     51               PUSH CX
  1000:21df     53               PUSH BX
  1000:21e0     50               PUSH AX
  1000:21e1     2E 8B 1E 89 21   MOV BX,word ptr CS:[0x2189]
  1000:21e6     FF 1E DB 05      CALLF [0x5db]
  1000:21ea     58               POP AX
  1000:21eb     5B               POP BX
  1000:21ec     59               POP CX
  1000:21ed     5A               POP DX
  1000:21ee     5F               POP DI
  1000:21ef     07               POP ES
  1000:21f0     C3               RET

FUN_1000_21f1:
  1000:21f1     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:21f6     75 03            JNZ 0x1000:21fb
  1000:21f8     E9 73 FF         JMP 0x1000:216e

LAB_1000_21fb:
  1000:21fb     06               PUSH ES
  1000:21fc     8C C8            MOV AX,CS
  1000:21fe     8E C0            MOV ES,AX
  1000:2200     BF 56 20         MOV DI,0x2056
  1000:2203     8B F2            MOV SI,DX

LAB_1000_2205:
  1000:2205     A4               MOVSB ES:DI,SI
  1000:2206     80 3C 00         CMP byte ptr [SI],0x0
  1000:2209     75 FA            JNZ 0x1000:2205
  1000:220b     C6 05 00         MOV byte ptr [DI],0x0
  1000:220e     BA 56 20         MOV DX,0x2056
  1000:2211     07               POP ES
  1000:2212     EB 80            JMP 0x1000:2194

FUN_1000_2214:
  1000:2214     80 C1 30         ADD CL,0x30
  1000:2217     2E 88 0E C9 20   MOV byte ptr CS:[0x20c9],CL
  1000:221c     8B F2            MOV SI,DX
  1000:221e     50               PUSH AX
  1000:221f     0E               PUSH CS
  1000:2220     07               POP ES
  1000:2221     2E A1 14 00      MOV AX,CS:[0x14]
  1000:2225     8E D8            MOV DS,AX
  1000:2227     BF B9 20         MOV DI,0x20b9
  1000:222a     B9 0F 00         MOV CX,0xf

LAB_1000_222d:
  1000:222d     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:2230     B0 01            MOV AL,0x1
  1000:2232     46               INC SI
  1000:2233     AA               STOSB ES:DI
  1000:2234     E2 F7            LOOP 0x1000:222d
  1000:2236     58               POP AX
  1000:2237     50               PUSH AX
  1000:2238     FE C8            DEC AL
  1000:223a     D0 E0            SHL AL,0x1
  1000:223c     32 E4            XOR AH,AH
  1000:223e     05 1D 21         ADD AX,0x211d
  1000:2241     8B D8            MOV BX,AX
  1000:2243     2E 8B 07         MOV AX,word ptr CS:[BX]
  1000:2246     2E A3 7B 20      MOV CS:[0x207b],AX
  1000:224a     BE 75 20         MOV SI,0x2075
  1000:224d     2E A1 14 00      MOV AX,CS:[0x14]
  1000:2251     8E D8            MOV DS,AX
  1000:2253     FF 1E 93 05      CALLF [0x593]
  1000:2257     52               PUSH DX
  1000:2258     BA 27 21         MOV DX,0x2127
  1000:225b     BD 08 00         MOV BP,0x8
  1000:225e     FF 1E 08 05      CALLF [0x508]
  1000:2262     5A               POP DX
  1000:2263     58               POP AX
  1000:2264     3D 03 00         CMP AX,0x3
  1000:2267     74 04            JZ 0x1000:226d
  1000:2269     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_226d:
  1000:226d     B4 48            MOV AH,0x48
  1000:226f     BB FF FF         MOV BX,0xffff
  1000:2272     CD 21            INT 0x21
  1000:2274     FF 2E 8B 05      JMPF [0x58b]

FUN_1000_2278:
  1000:2278     1E               PUSH DS
  1000:2279     06               PUSH ES
  1000:227a     57               PUSH DI
  1000:227b     56               PUSH SI
  1000:227c     52               PUSH DX
  1000:227d     51               PUSH CX
  1000:227e     53               PUSH BX
  1000:227f     50               PUSH AX
  1000:2280     2E A1 14 00      MOV AX,CS:[0x14]
  1000:2284     8E D8            MOV DS,AX
  1000:2286     33 DB            XOR BX,BX
  1000:2288     8A 1E EF 05      MOV BL,byte ptr [0x5ef]
  1000:228c     81 C3 47 20      ADD BX,0x2047
  1000:2290     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:2293     2E 3A 06 46 20   CMP AL,byte ptr CS:[0x2046]
  1000:2298     75 09            JNZ 0x1000:22a3
  1000:229a     58               POP AX
  1000:229b     5B               POP BX
  1000:229c     59               POP CX
  1000:229d     5A               POP DX
  1000:229e     5E               POP SI
  1000:229f     5F               POP DI
  1000:22a0     07               POP ES
  1000:22a1     1F               POP DS
  1000:22a2     C3               RET

LAB_1000_22a3:
  1000:22a3     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:22a6     2E A2 46 20      MOV CS:[0x2046],AL
  1000:22aa     04 30            ADD AL,0x30
  1000:22ac     2E A2 23 20      MOV CS:[0x2023],AL
  1000:22b0     2E A2 2B 20      MOV CS:[0x202b],AL
  1000:22b4     1E               PUSH DS
  1000:22b5     50               PUSH AX
  1000:22b6     2E A1 14 00      MOV AX,CS:[0x14]
  1000:22ba     8E D8            MOV DS,AX
  1000:22bc     58               POP AX
  1000:22bd     2C 30            SUB AL,0x30
  1000:22bf     8A 26 EF 05      MOV AH,byte ptr [0x5ef]
  1000:22c3     FF 1E 9F 05      CALLF [0x59f]
  1000:22c7     1F               POP DS
  1000:22c8     2E 83 3E 44 20 00   CMP word ptr CS:[0x2044],0x0
  1000:22ce     74 09            JZ 0x1000:22d9
  1000:22d0     2E 8B 1E 44 20   MOV BX,word ptr CS:[0x2044]
  1000:22d5     FF 1E DB 05      CALLF [0x5db]

LAB_1000_22d9:
  1000:22d9     2E A1 14 00      MOV AX,CS:[0x14]
  1000:22dd     8E C0            MOV ES,AX
  1000:22df     1E               PUSH DS
  1000:22e0     8C C8            MOV AX,CS
  1000:22e2     8E D8            MOV DS,AX
  1000:22e4     BA 20 20         MOV DX,0x2020
  1000:22e7     33 DB            XOR BX,BX
  1000:22e9     26 FF 1E CF 05   CALLF [0x5cf]
  1000:22ee     1F               POP DS
  1000:22ef     73 13            JNC 0x1000:2304
  1000:22f1     58               POP AX
  1000:22f2     5B               POP BX
  1000:22f3     59               POP CX
  1000:22f4     5A               POP DX
  1000:22f5     5E               POP SI
  1000:22f6     5F               POP DI
  1000:22f7     07               POP ES
  1000:22f8     1F               POP DS
  1000:22f9     BA 20 20         MOV DX,0x2020
  1000:22fc     B8 01 00         MOV AX,0x1
  1000:22ff     73 03            JNC 0x1000:2304
  1000:2301     E9 10 FF         JMP 0x1000:2214

LAB_1000_2304:
  1000:2304     2E 89 1E 44 20   MOV word ptr CS:[0x2044],BX
  1000:2309     58               POP AX
  1000:230a     5B               POP BX
  1000:230b     59               POP CX
  1000:230c     5A               POP DX
  1000:230d     5E               POP SI
  1000:230e     5F               POP DI
  1000:230f     07               POP ES
  1000:2310     1F               POP DS
  1000:2311     C3               RET

FUN_1000_2312:
  1000:2312     1E               PUSH DS
  1000:2313     06               PUSH ES
  1000:2314     57               PUSH DI
  1000:2315     56               PUSH SI
  1000:2316     52               PUSH DX
  1000:2317     53               PUSH BX
  1000:2318     2E 83 3E 44 20 00   CMP word ptr CS:[0x2044],0x0
  1000:231e     75 12            JNZ 0x1000:2332
  1000:2320     1E               PUSH DS
  1000:2321     50               PUSH AX
  1000:2322     2E A1 14 00      MOV AX,CS:[0x14]
  1000:2326     8E D8            MOV DS,AX
  1000:2328     C6 06 EF 05 01   MOV byte ptr [0x5ef],0x1
  1000:232d     58               POP AX
  1000:232e     1F               POP DS
  1000:232f     E8 46 FF         CALL 0x1000:2278

LAB_1000_2332:
  1000:2332     E8 81 00         CALL 0x1000:23b6
  1000:2335     72 61            JC 0x1000:2398
  1000:2337     57               PUSH DI
  1000:2338     2E 8B 1E 52 20   MOV BX,word ptr CS:[0x2052]
  1000:233d     0B DB            OR BX,BX
  1000:233f     75 1C            JNZ 0x1000:235d
  1000:2341     26 8B 05         MOV AX,word ptr ES:[DI]
  1000:2344     1E               PUSH DS
  1000:2345     50               PUSH AX
  1000:2346     2E A1 14 00      MOV AX,CS:[0x14]
  1000:234a     8E D8            MOV DS,AX
  1000:234c     58               POP AX
  1000:234d     FF 1E D7 05      CALLF [0x5d7]
  1000:2351     33 DB            XOR BX,BX
  1000:2353     2E 89 1E 52 20   MOV word ptr CS:[0x2052],BX
  1000:2358     2E A3 54 20      MOV CS:[0x2054],AX
  1000:235c     1F               POP DS

LAB_1000_235d:
  1000:235d     E8 A9 00         CALL 0x1000:2409
  1000:2360     72 3C            JC 0x1000:239e
  1000:2362     5F               POP DI
  1000:2363     E8 EA 00         CALL 0x1000:2450
  1000:2366     72 3F            JC 0x1000:23a7
  1000:2368     8C D8            MOV AX,DS
  1000:236a     50               PUSH AX
  1000:236b     B8 00 00         MOV AX,0x0
  1000:236e     50               PUSH AX
  1000:236f     2E A1 54 20      MOV AX,CS:[0x2054]
  1000:2373     50               PUSH AX
  1000:2374     2E A1 52 20      MOV AX,CS:[0x2052]
  1000:2378     50               PUSH AX
  1000:2379     E8 4F 01         CALL 0x1000:24cb
  1000:237c     58               POP AX
  1000:237d     58               POP AX
  1000:237e     58               POP AX
  1000:237f     58               POP AX
  1000:2380     2E A1 33 20      MOV AX,CS:[0x2033]
  1000:2384     8E C0            MOV ES,AX
  1000:2386     B4 49            MOV AH,0x49
  1000:2388     CD 21            INT 0x21
  1000:238a     2E C7 06 33 20 00 00   MOV word ptr CS:[0x2033],0x0
  1000:2391     5B               POP BX
  1000:2392     5A               POP DX
  1000:2393     5E               POP SI
  1000:2394     5F               POP DI
  1000:2395     07               POP ES
  1000:2396     1F               POP DS
  1000:2397     C3               RET

LAB_1000_2398:
  1000:2398     8B C8            MOV CX,AX
  1000:239a     B0 02            MOV AL,0x2
  1000:239c     EB 0D            JMP 0x1000:23ab

LAB_1000_239e:
  1000:239e     8B C8            MOV CX,AX
  1000:23a0     8B C8            MOV CX,AX
  1000:23a2     5F               POP DI
  1000:23a3     B0 03            MOV AL,0x3
  1000:23a5     EB 04            JMP 0x1000:23ab

LAB_1000_23a7:
  1000:23a7     8B C8            MOV CX,AX
  1000:23a9     B0 04            MOV AL,0x4

LAB_1000_23ab:
  1000:23ab     5B               POP BX
  1000:23ac     5A               POP DX
  1000:23ad     5E               POP SI
  1000:23ae     5F               POP DI
  1000:23af     07               POP ES
  1000:23b0     1F               POP DS
  1000:23b1     8B F2            MOV SI,DX
  1000:23b3     E9 5E FE         JMP 0x1000:2214

FUN_1000_23b6:
  1000:23b6     8B F2            MOV SI,DX
  1000:23b8     2E A1 44 20      MOV AX,CS:[0x2044]
  1000:23bc     8E C0            MOV ES,AX
  1000:23be     BF 00 00         MOV DI,0x0
  1000:23c1     BB 3B 20         MOV BX,0x203b
  1000:23c4     B9 08 00         MOV CX,0x8

LAB_1000_23c7:
  1000:23c7     8A 04            MOV AL,byte ptr [SI]
  1000:23c9     3C 00            CMP AL,0x0
  1000:23cb     74 07            JZ 0x1000:23d4
  1000:23cd     2E 88 07         MOV byte ptr CS:[BX],AL
  1000:23d0     43               INC BX
  1000:23d1     46               INC SI
  1000:23d2     E2 F3            LOOP 0x1000:23c7

LAB_1000_23d4:
  1000:23d4     83 F9 00         CMP CX,0x0
  1000:23d7     74 0C            JZ 0x1000:23e5
  1000:23d9     B0 20            MOV AL,0x20

LAB_1000_23db:
  1000:23db     2E 88 07         MOV byte ptr CS:[BX],AL
  1000:23de     43               INC BX
  1000:23df     E2 FA            LOOP 0x1000:23db
  1000:23e1     2E C6 07 00      MOV byte ptr CS:[BX],0x0

LAB_1000_23e5:
  1000:23e5     8C C8            MOV AX,CS
  1000:23e7     8E D8            MOV DS,AX
  1000:23e9     B9 EC 00         MOV CX,0xec

LAB_1000_23ec:
  1000:23ec     51               PUSH CX
  1000:23ed     B9 08 00         MOV CX,0x8
  1000:23f0     BE 3B 20         MOV SI,0x203b
  1000:23f3     57               PUSH DI
  1000:23f4     F3 A6            CMPSB.REPE ES:DI,SI
  1000:23f6     74 0A            JZ 0x1000:2402
  1000:23f8     5F               POP DI
  1000:23f9     83 C7 12         ADD DI,0x12
  1000:23fc     59               POP CX
  1000:23fd     49               DEC CX
  1000:23fe     75 EC            JNZ 0x1000:23ec
  1000:2400     F9               STC
  1000:2401     C3               RET

LAB_1000_2402:
  1000:2402     5F               POP DI
  1000:2403     59               POP CX
  1000:2404     83 C7 0A         ADD DI,0xa
  1000:2407     F8               CLC
  1000:2408     C3               RET

FUN_1000_2409:
  1000:2409     BA 28 20         MOV DX,0x2028
  1000:240c     8C C8            MOV AX,CS
  1000:240e     8E D8            MOV DS,AX
  1000:2410     B4 3D            MOV AH,0x3d
  1000:2412     B0 00            MOV AL,0x0
  1000:2414     CD 21            INT 0x21
  1000:2416     2E A3 31 20      MOV CS:[0x2031],AX
  1000:241a     73 33            JNC 0x1000:244f
  1000:241c     3C 02            CMP AL,0x2
  1000:241e     75 2F            JNZ 0x1000:244f
  1000:2420     1E               PUSH DS
  1000:2421     2E A1 14 00      MOV AX,CS:[0x14]
  1000:2425     8E D8            MOV DS,AX
  1000:2427     33 DB            XOR BX,BX
  1000:2429     8A 1E EF 05      MOV BL,byte ptr [0x5ef]
  1000:242d     81 C3 47 20      ADD BX,0x2047
  1000:2431     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:2434     2E A2 46 20      MOV CS:[0x2046],AL
  1000:2438     04 30            ADD AL,0x30
  1000:243a     2E A2 23 20      MOV CS:[0x2023],AL
  1000:243e     2E A2 2B 20      MOV CS:[0x202b],AL
  1000:2442     2C 30            SUB AL,0x30
  1000:2444     8A 26 EF 05      MOV AH,byte ptr [0x5ef]
  1000:2448     FF 1E 9F 05      CALLF [0x59f]
  1000:244c     1F               POP DS
  1000:244d     EB BA            JMP 0x1000:2409

LAB_1000_244f:
  1000:244f     C3               RET

FUN_1000_2450:
  1000:2450     26 8B 5D 02      MOV BX,word ptr ES:[DI + 0x2]
  1000:2454     D1 EB            SHR BX,0x1
  1000:2456     D1 EB            SHR BX,0x1
  1000:2458     D1 EB            SHR BX,0x1
  1000:245a     D1 EB            SHR BX,0x1
  1000:245c     43               INC BX
  1000:245d     B4 48            MOV AH,0x48
  1000:245f     CD 21            INT 0x21
  1000:2461     72 03            JC 0x1000:2466
  1000:2463     EB 04            JMP 0x1000:2469

LAB_1000_2466:
  1000:2466     B4 01            MOV AH,0x1
  1000:2468     C3               RET

LAB_1000_2469:
  1000:2469     2E A3 33 20      MOV CS:[0x2033],AX
  1000:246d     8E D8            MOV DS,AX
  1000:246f     B4 42            MOV AH,0x42
  1000:2471     B0 00            MOV AL,0x0
  1000:2473     2E 8B 1E 31 20   MOV BX,word ptr CS:[0x2031]
  1000:2478     26 8B 55 04      MOV DX,word ptr ES:[DI + 0x4]
  1000:247c     26 8B 4D 06      MOV CX,word ptr ES:[DI + 0x6]
  1000:2480     CD 21            INT 0x21
  1000:2482     72 03            JC 0x1000:2487
  1000:2484     EB 04            JMP 0x1000:248a

LAB_1000_2487:
  1000:2487     B4 02            MOV AH,0x2
  1000:2489     C3               RET

LAB_1000_248a:
  1000:248a     33 D2            XOR DX,DX
  1000:248c     B4 3F            MOV AH,0x3f
  1000:248e     2E 8B 1E 31 20   MOV BX,word ptr CS:[0x2031]
  1000:2493     26 8B 4D 02      MOV CX,word ptr ES:[DI + 0x2]
  1000:2497     CD 21            INT 0x21
  1000:2499     72 03            JC 0x1000:249e
  1000:249b     EB 04            JMP 0x1000:24a1

LAB_1000_249e:
  1000:249e     B4 03            MOV AH,0x3
  1000:24a0     C3               RET

LAB_1000_24a1:
  1000:24a1     2E 8B 1E 31 20   MOV BX,word ptr CS:[0x2031]
  1000:24a6     B4 3E            MOV AH,0x3e
  1000:24a8     CD 21            INT 0x21
  1000:24aa     C3               RET

FUN_1000_24cb:
  1000:24cb     55               PUSH BP
  1000:24cc     8B EC            MOV BP,SP
  1000:24ce     1E               PUSH DS
  1000:24cf     06               PUSH ES
  1000:24d0     53               PUSH BX
  1000:24d1     51               PUSH CX
  1000:24d2     52               PUSH DX
  1000:24d3     56               PUSH SI
  1000:24d4     57               PUSH DI
  1000:24d5     1E               PUSH DS
  1000:24d6     07               POP ES
  1000:24d7     2E C7 06 B9 24 09 00   MOV word ptr CS:[0x24b9],0x9
  1000:24de     2E C7 06 B7 24 00 00   MOV word ptr CS:[0x24b7],0x0
  1000:24e5     2E C7 06 BB 24 00 02   MOV word ptr CS:[0x24bb],0x200
  1000:24ec     2E C7 06 C7 24 00 00   MOV word ptr CS:[0x24c7],0x0
  1000:24f3     2E C7 06 C9 24 00 00   MOV word ptr CS:[0x24c9],0x0
  1000:24fa     2E C7 06 AB 24 00 00   MOV word ptr CS:[0x24ab],0x0
  1000:2501     E8 27 00         CALL 0x1000:252b
  1000:2504     2E A1 AB 24      MOV AX,CS:[0x24ab]
  1000:2508     50               PUSH AX
  1000:2509     2E A1 C9 24      MOV AX,CS:[0x24c9]
  1000:250d     40               INC AX
  1000:250e     2E 8B 1E C7 24   MOV BX,word ptr CS:[0x24c7]
  1000:2513     2E 8B 0E B9 24   MOV CX,word ptr CS:[0x24b9]
  1000:2518     2B CB            SUB CX,BX
  1000:251a     83 F9 08         CMP CX,0x8
  1000:251d     7F 01            JG 0x1000:2520
  1000:251f     40               INC AX

LAB_1000_2520:
  1000:2520     58               POP AX
  1000:2521     5F               POP DI
  1000:2522     5E               POP SI
  1000:2523     5A               POP DX
  1000:2524     59               POP CX
  1000:2525     5B               POP BX
  1000:2526     07               POP ES
  1000:2527     1F               POP DS
  1000:2528     5D               POP BP
  1000:2529     FC               CLD
  1000:252a     C3               RET

FUN_1000_252b:
  1000:252b     BB 00 03         MOV BX,0x300
  1000:252e     B4 48            MOV AH,0x48
  1000:2530     CD 21            INT 0x21
  1000:2532     2E A3 AD 24      MOV CS:[0x24ad],AX

LAB_1000_2536:
  1000:2536     E8 CF 00         CALL 0x1000:2608
  1000:2539     3D 01 01         CMP AX,0x101
  1000:253c     75 0A            JNZ 0x1000:2548
  1000:253e     2E 8E 06 AD 24   MOV ES,word ptr CS:[0x24ad]
  1000:2543     B4 49            MOV AH,0x49
  1000:2545     CD 21            INT 0x21
  1000:2547     C3               RET

LAB_1000_2548:
  1000:2548     3D 00 01         CMP AX,0x100
  1000:254b     75 1F            JNZ 0x1000:256c
  1000:254d     E8 03 01         CALL 0x1000:2653
  1000:2550     E8 B5 00         CALL 0x1000:2608
  1000:2553     2E A3 AF 24      MOV CS:[0x24af],AX
  1000:2557     2E A3 B1 24      MOV CS:[0x24b1],AX
  1000:255b     2E A2 BE 24      MOV CS:[0x24be],AL
  1000:255f     2E A2 BD 24      MOV CS:[0x24bd],AL
  1000:2563     2E A0 BE 24      MOV AL,CS:[0x24be]
  1000:2567     E8 FF 00         CALL 0x1000:2669
  1000:256a     EB CA            JMP 0x1000:2536

LAB_1000_256c:
  1000:256c     2E A3 AF 24      MOV CS:[0x24af],AX
  1000:2570     2E A3 B3 24      MOV CS:[0x24b3],AX
  1000:2574     2E 8E 06 AD 24   MOV ES,word ptr CS:[0x24ad]
  1000:2579     2E 3B 06 B5 24   CMP AX,word ptr CS:[0x24b5]
  1000:257e     72 12            JC 0x1000:2592
  1000:2580     2E A1 B1 24      MOV AX,CS:[0x24b1]
  1000:2584     2E A3 AF 24      MOV CS:[0x24af],AX
  1000:2588     2E A0 BD 24      MOV AL,CS:[0x24bd]
  1000:258c     50               PUSH AX
  1000:258d     2E FF 06 B7 24   INC word ptr CS:[0x24b7]

LAB_1000_2592:
  1000:2592     2E 81 3E AF 24 FF 00   CMP word ptr CS:[0x24af],0xff
  1000:2599     76 1B            JBE 0x1000:25b6
  1000:259b     2E 8B 1E AF 24   MOV BX,word ptr CS:[0x24af]
  1000:25a0     E8 E0 00         CALL 0x1000:2683
  1000:25a3     26 8A 47 02      MOV AL,byte ptr ES:[BX + 0x2]
  1000:25a7     50               PUSH AX
  1000:25a8     2E FF 06 B7 24   INC word ptr CS:[0x24b7]
  1000:25ad     26 8B 07         MOV AX,word ptr ES:[BX]
  1000:25b0     2E A3 AF 24      MOV CS:[0x24af],AX
  1000:25b4     EB DC            JMP 0x1000:2592

LAB_1000_25b6:
  1000:25b6     1E               PUSH DS
  1000:25b7     07               POP ES
  1000:25b8     2E A1 AF 24      MOV AX,CS:[0x24af]
  1000:25bc     2E A2 BD 24      MOV CS:[0x24bd],AL
  1000:25c0     2E A2 BE 24      MOV CS:[0x24be],AL
  1000:25c4     50               PUSH AX
  1000:25c5     2E FF 06 B7 24   INC word ptr CS:[0x24b7]
  1000:25ca     2E 8B 0E B7 24   MOV CX,word ptr CS:[0x24b7]
  1000:25cf     E3 06            JCXZ 0x1000:25d7

LAB_1000_25d1:
  1000:25d1     58               POP AX
  1000:25d2     E8 94 00         CALL 0x1000:2669
  1000:25d5     E2 FA            LOOP 0x1000:25d1

LAB_1000_25d7:
  1000:25d7     2E 89 0E B7 24   MOV word ptr CS:[0x24b7],CX
  1000:25dc     E8 AD 00         CALL 0x1000:268c
  1000:25df     2E A1 B3 24      MOV AX,CS:[0x24b3]
  1000:25e3     2E A3 B1 24      MOV CS:[0x24b1],AX
  1000:25e7     2E 8B 1E B5 24   MOV BX,word ptr CS:[0x24b5]
  1000:25ec     2E 3B 1E BB 24   CMP BX,word ptr CS:[0x24bb]
  1000:25f1     72 12            JC 0x1000:2605
  1000:25f3     2E 83 3E B9 24 0C   CMP word ptr CS:[0x24b9],0xc
  1000:25f9     74 0A            JZ 0x1000:2605
  1000:25fb     2E FF 06 B9 24   INC word ptr CS:[0x24b9]
  1000:2600     2E D1 26 BB 24   SHL word ptr CS:[0x24bb],0x1

LAB_1000_2605:
  1000:2605     E9 2E FF         JMP 0x1000:2536

FUN_1000_2608:
  1000:2608     2E A1 C7 24      MOV AX,CS:[0x24c7]
  1000:260c     2E 03 06 B9 24   ADD AX,word ptr CS:[0x24b9]
  1000:2611     8B C8            MOV CX,AX
  1000:2613     83 E1 07         AND CX,0x7
  1000:2616     2E 87 0E C7 24   XCHG word ptr CS:[0x24c7],CX
  1000:261b     D1 E8            SHR AX,0x1
  1000:261d     D1 E8            SHR AX,0x1
  1000:261f     D1 E8            SHR AX,0x1
  1000:2621     2E 03 06 C9 24   ADD AX,word ptr CS:[0x24c9]
  1000:2626     2E 87 06 C9 24   XCHG word ptr CS:[0x24c9],AX
  1000:262b     03 46 08         ADD AX,word ptr [BP + 0x8]
  1000:262e     1E               PUSH DS
  1000:262f     8E 5E 0A         MOV DS,word ptr [BP + 0xa]
  1000:2632     8B F0            MOV SI,AX
  1000:2634     AD               LODSW SI
  1000:2635     8B D8            MOV BX,AX
  1000:2637     AC               LODSB SI
  1000:2638     1F               POP DS
  1000:2639     E3 06            JCXZ 0x1000:2641

LAB_1000_263b:
  1000:263b     D0 E8            SHR AL,0x1
  1000:263d     D1 DB            RCR BX,0x1
  1000:263f     E2 FA            LOOP 0x1000:263b

LAB_1000_2641:
  1000:2641     8B C3            MOV AX,BX
  1000:2643     2E 8B 1E B9 24   MOV BX,word ptr CS:[0x24b9]
  1000:2648     83 EB 09         SUB BX,0x9
  1000:264b     D1 E3            SHL BX,0x1
  1000:264d     2E 23 87 BF 24   AND AX,word ptr CS:[BX + 0x24bf]
  1000:2652     C3               RET

FUN_1000_2653:
  1000:2653     2E C7 06 B9 24 09 00   MOV word ptr CS:[0x24b9],0x9
  1000:265a     2E C7 06 BB 24 00 02   MOV word ptr CS:[0x24bb],0x200
  1000:2661     2E C7 06 B5 24 02 01   MOV word ptr CS:[0x24b5],0x102
  1000:2668     C3               RET

FUN_1000_2669:
  1000:2669     2E 8B 3E AB 24   MOV DI,word ptr CS:[0x24ab]
  1000:266e     06               PUSH ES
  1000:266f     8E 46 06         MOV ES,word ptr [BP + 0x6]
  1000:2672     03 7E 04         ADD DI,word ptr [BP + 0x4]
  1000:2675     AA               STOSB ES:DI
  1000:2676     2E 2B 3E AB 24   SUB DI,word ptr CS:[0x24ab]
  1000:267b     07               POP ES
  1000:267c     2E FF 06 AB 24   INC word ptr CS:[0x24ab]
  1000:2681     C3               RET

FUN_1000_2683:
  1000:2683     55               PUSH BP
  1000:2684     8B EB            MOV BP,BX
  1000:2686     D1 E3            SHL BX,0x1
  1000:2688     03 DD            ADD BX,BP
  1000:268a     5D               POP BP
  1000:268b     C3               RET

FUN_1000_268c:
  1000:268c     2E 8B 1E B5 24   MOV BX,word ptr CS:[0x24b5]
  1000:2691     E8 EF FF         CALL 0x1000:2683
  1000:2694     06               PUSH ES
  1000:2695     2E 8E 06 AD 24   MOV ES,word ptr CS:[0x24ad]
  1000:269a     2E A0 BE 24      MOV AL,CS:[0x24be]
  1000:269e     26 88 47 02      MOV byte ptr ES:[BX + 0x2],AL
  1000:26a2     2E A1 B1 24      MOV AX,CS:[0x24b1]
  1000:26a6     26 89 07         MOV word ptr ES:[BX],AX
  1000:26a9     07               POP ES
  1000:26aa     2E FF 06 B5 24   INC word ptr CS:[0x24b5]
  1000:26af     C3               RET

FUN_1000_26b0:
  1000:26b0     2E 83 3E 0A 27 00   CMP word ptr CS:[0x270a],0x0
  1000:26b6     74 09            JZ 0x1000:26c1
  1000:26b8     2E 8B 1E 0A 27   MOV BX,word ptr CS:[0x270a]
  1000:26bd     FF 1E DB 05      CALLF [0x5db]

LAB_1000_26c1:
  1000:26c1     2E 83 3E 44 20 00   CMP word ptr CS:[0x2044],0x0
  1000:26c7     74 09            JZ 0x1000:26d2
  1000:26c9     2E 8B 1E 44 20   MOV BX,word ptr CS:[0x2044]
  1000:26ce     FF 1E DB 05      CALLF [0x5db]

LAB_1000_26d2:
  1000:26d2     2E 83 3E 33 20 00   CMP word ptr CS:[0x2033],0x0
  1000:26d8     74 0A            JZ 0x1000:26e4
  1000:26da     2E A1 33 20      MOV AX,CS:[0x2033]
  1000:26de     8E C0            MOV ES,AX
  1000:26e0     B4 49            MOV AH,0x49
  1000:26e2     CD 21            INT 0x21

LAB_1000_26e4:
  1000:26e4     C3               RET

FUN_1000_270c:
  1000:270c     E8 3D 03         CALL 0x1000:2a4c
  1000:270f     A0 EF 05         MOV AL,[0x5ef]
  1000:2712     3C 09            CMP AL,0x9
  1000:2714     75 25            JNZ 0x1000:273b
  1000:2716     A0 76 16         MOV AL,[0x1676]
  1000:2719     3C 02            CMP AL,0x2
  1000:271b     75 1E            JNZ 0x1000:273b
  1000:271d     2E C6 06 80 2A 01   MOV byte ptr CS:[0x2a80],0x1
  1000:2723     A1 83 F1         MOV AX,[0xf183]
  1000:2726     8B E0            MOV SP,AX
  1000:2728     B0 FF            MOV AL,0xff
  1000:272a     A2 21 16         MOV [0x1621],AL
  1000:272d     E8 F1 34         CALL 0x1000:5c21
  1000:2730     B4 5B            MOV AH,0x5b
  1000:2732     B0 01            MOV AL,0x1
  1000:2734     FF 1E AB 05      CALLF [0x5ab]
  1000:2738     E9 85 03         JMP 0x1000:2ac0

LAB_1000_273b:
  1000:273b     A0 76 16         MOV AL,[0x1676]
  1000:273e     3C 04            CMP AL,0x4
  1000:2740     75 18            JNZ 0x1000:275a
  1000:2742     A0 EF 05         MOV AL,[0x5ef]
  1000:2745     B2 0A            MOV DL,0xa
  1000:2747     F6 E2            MUL DL
  1000:2749     FE C0            INC AL
  1000:274b     8A E0            MOV AH,AL
  1000:274d     B0 01            MOV AL,0x1
  1000:274f     FF 1E AB 05      CALLF [0x5ab]
  1000:2753     B0 FF            MOV AL,0xff
  1000:2755     A2 21 16         MOV [0x1621],AL
  1000:2758     B0 04            MOV AL,0x4

LAB_1000_275a:
  1000:275a     2E FE 06 0C 54   INC byte ptr CS:[0x540c]
  1000:275f     BB 14 54         MOV BX,0x5414
  1000:2762     2E FE 07         INC byte ptr CS:[BX]
  1000:2765     BB 10 54         MOV BX,0x5410
  1000:2768     8B D3            MOV DX,BX
  1000:276a     BB 53 74         MOV BX,0x7453
  1000:276d     E8 C8 F9         CALL 0x1000:2138
  1000:2770     A0 76 16         MOV AL,[0x1676]
  1000:2773     3C 04            CMP AL,0x4
  1000:2775     75 34            JNZ 0x1000:27ab
  1000:2777     32 C0            XOR AL,AL
  1000:2779     BE EF 05         MOV SI,0x5ef
  1000:277c     BF 0C 75         MOV DI,0x750c
  1000:277f     88 05            MOV byte ptr [DI],AL
  1000:2781     06               PUSH ES
  1000:2782     8C D8            MOV AX,DS
  1000:2784     8E C0            MOV ES,AX
  1000:2786     47               INC DI
  1000:2787     B9 10 00         MOV CX,0x10
  1000:278a     F3 A4            MOVSB.REP ES:DI,SI
  1000:278c     1E               PUSH DS
  1000:278d     8C C8            MOV AX,CS
  1000:278f     8E D8            MOV DS,AX
  1000:2791     BE 0B 54         MOV SI,0x540b
  1000:2794     B9 02 00         MOV CX,0x2
  1000:2797     F3 A4            MOVSB.REP ES:DI,SI
  1000:2799     1F               POP DS
  1000:279a     BE 4B 16         MOV SI,0x164b
  1000:279d     B9 08 00         MOV CX,0x8
  1000:27a0     F3 A4            MOVSB.REP ES:DI,SI
  1000:27a2     BE 3B 16         MOV SI,0x163b
  1000:27a5     B9 08 00         MOV CX,0x8
  1000:27a8     F3 A4            MOVSB.REP ES:DI,SI
  1000:27aa     07               POP ES

FUN_1000_27ab:
  1000:27ab     32 C0            XOR AL,AL
  1000:27ad     A2 71 16         MOV [0x1671],AL
  1000:27b0     B4 48            MOV AH,0x48
  1000:27b2     BB 00 06         MOV BX,0x600
  1000:27b5     CD 21            INT 0x21
  1000:27b7     73 05            JNC 0x1000:27be
  1000:27b9     E8 3A 02         CALL 0x1000:29f6
  1000:27bc     EB 11            JMP 0x1000:27cf

LAB_1000_27be:
  1000:27be     80 3E 9B 05 FF   CMP byte ptr [0x59b],0xff
  1000:27c3     74 04            JZ 0x1000:27c9
  1000:27c5     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_27c9:
  1000:27c9     50               PUSH AX
  1000:27ca     07               POP ES
  1000:27cb     B4 49            MOV AH,0x49
  1000:27cd     CD 21            INT 0x21

LAB_1000_27cf:
  1000:27cf     A0 53 74         MOV AL,[0x7453]
  1000:27d2     A8 01            TEST AL,0x1
  1000:27d4     74 2B            JZ 0x1000:2801
  1000:27d6     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:27da     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:27df     75 0E            JNZ 0x1000:27ef
  1000:27e1     BA 54 74         MOV DX,0x7454
  1000:27e4     BB 95 86         MOV BX,0x8695
  1000:27e7     E8 84 F9         CALL 0x1000:216e
  1000:27ea     E8 C0 20         CALL 0x1000:48ad
  1000:27ed     EB 0E            JMP 0x1000:27fd

LAB_1000_27ef:
  1000:27ef     C6 06 7E F1 04   MOV byte ptr [0xf17e],0x4
  1000:27f4     BA 54 74         MOV DX,0x7454
  1000:27f7     BB 95 AD         MOV BX,0xad95
  1000:27fa     E8 F4 F9         CALL 0x1000:21f1

LAB_1000_27fd:
  1000:27fd     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_2801:
  1000:2801     A8 10            TEST AL,0x10
  1000:2803     74 23            JZ 0x1000:2828
  1000:2805     50               PUSH AX
  1000:2806     BA 6C 74         MOV DX,0x746c
  1000:2809     BB 03 17         MOV BX,0x1703
  1000:280c     E8 5F F9         CALL 0x1000:216e
  1000:280f     BB 03 17         MOV BX,0x1703
  1000:2812     BA 95 86         MOV DX,0x8695
  1000:2815     8C D8            MOV AX,DS
  1000:2817     8E C0            MOV ES,AX
  1000:2819     FF 1E 8F 05      CALLF [0x58f]
  1000:281d     A0 83 16         MOV AL,[0x1683]
  1000:2820     0A C0            OR AL,AL
  1000:2822     74 03            JZ 0x1000:2827
  1000:2824     E8 39 01         CALL 0x1000:2960

LAB_1000_2827:
  1000:2827     58               POP AX

LAB_1000_2828:
  1000:2828     50               PUSH AX
  1000:2829     BF 83 27         MOV DI,0x2783
  1000:282c     B8 00 00         MOV AX,0x0
  1000:282f     B9 FF 02         MOV CX,0x2ff
  1000:2832     F3 AB            STOSW.REP ES:DI
  1000:2834     58               POP AX
  1000:2835     A8 20            TEST AL,0x20
  1000:2837     74 10            JZ 0x1000:2849
  1000:2839     50               PUSH AX
  1000:283a     BA 72 74         MOV DX,0x7472
  1000:283d     BB 83 27         MOV BX,0x2783
  1000:2840     E8 2B F9         CALL 0x1000:216e
  1000:2843     9A 66 46 00 10   CALLF 0x1000:4666
  1000:2848     58               POP AX

LAB_1000_2849:
  1000:2849     A8 04            TEST AL,0x4
  1000:284b     74 16            JZ 0x1000:2863
  1000:284d     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:2851     C6 06 7E F1 08   MOV byte ptr [0xf17e],0x8
  1000:2856     BA 60 74         MOV DX,0x7460
  1000:2859     BB 03 17         MOV BX,0x1703
  1000:285c     E8 92 F9         CALL 0x1000:21f1
  1000:285f     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_2863:
  1000:2863     A8 02            TEST AL,0x2
  1000:2865     74 16            JZ 0x1000:287d
  1000:2867     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:286b     C6 06 7E F1 05   MOV byte ptr [0xf17e],0x5
  1000:2870     BA 5A 74         MOV DX,0x745a
  1000:2873     BB 83 2D         MOV BX,0x2d83
  1000:2876     E8 78 F9         CALL 0x1000:21f1
  1000:2879     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_287d:
  1000:287d     A8 08            TEST AL,0x8
  1000:287f     74 11            JZ 0x1000:2892
  1000:2881     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:2885     BA 66 74         MOV DX,0x7466
  1000:2888     BB 0D 80         MOV BX,0x800d
  1000:288b     E8 E0 F8         CALL 0x1000:216e
  1000:288e     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_2892:
  1000:2892     A8 40            TEST AL,0x40
  1000:2894     74 5A            JZ 0x1000:28f0
  1000:2896     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:289a     2E 83 3E 0A 27 00   CMP word ptr CS:[0x270a],0x0
  1000:28a0     74 0E            JZ 0x1000:28b0
  1000:28a2     2E 8B 1E 0A 27   MOV BX,word ptr CS:[0x270a]
  1000:28a7     8C D8            MOV AX,DS
  1000:28a9     8E C0            MOV ES,AX
  1000:28ab     26 FF 1E DB 05   CALLF [0x5db]

LAB_1000_28b0:
  1000:28b0     BA 78 74         MOV DX,0x7478
  1000:28b3     BB 00 00         MOV BX,0x0
  1000:28b6     E8 B5 F8         CALL 0x1000:216e
  1000:28b9     73 03            JNC 0x1000:28be
  1000:28bb     E9 A5 01         JMP 0x1000:2a63

LAB_1000_28be:
  1000:28be     2E 89 1E 0A 27   MOV word ptr CS:[0x270a],BX
  1000:28c3     2E 89 1E E9 2B   MOV word ptr CS:[0x2be9],BX
  1000:28c8     2E 89 1E ED 2B   MOV word ptr CS:[0x2bed],BX
  1000:28cd     2E 89 1E F1 2B   MOV word ptr CS:[0x2bf1],BX
  1000:28d2     2E C7 06 E7 2B 00 00   MOV word ptr CS:[0x2be7],0x0
  1000:28d9     2E C7 06 EB 2B 03 00   MOV word ptr CS:[0x2beb],0x3
  1000:28e0     2E C7 06 EF 2B 06 00   MOV word ptr CS:[0x2bef],0x6
  1000:28e7     B0 01            MOV AL,0x1
  1000:28e9     A2 71 16         MOV [0x1671],AL
  1000:28ec     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_28f0:
  1000:28f0     E8 C4 00         CALL 0x1000:29b7
  1000:28f3     06               PUSH ES
  1000:28f4     8C D8            MOV AX,DS
  1000:28f6     8E C0            MOV ES,AX
  1000:28f8     BF 83 75         MOV DI,0x7583
  1000:28fb     B9 69 03         MOV CX,0x369
  1000:28fe     B0 F0            MOV AL,0xf0
  1000:2900     F3 AA            STOSB.REP ES:DI
  1000:2902     07               POP ES
  1000:2903     A0 71 16         MOV AL,[0x1671]
  1000:2906     0A C0            OR AL,AL
  1000:2908     74 05            JZ 0x1000:290f
  1000:290a     2E FF 1E EB 2B   CALLF [0x2beb]

LAB_1000_290f:
  1000:290f     BB DC 74         MOV BX,0x74dc
  1000:2912     8A 07            MOV AL,byte ptr [BX]
  1000:2914     8A D0            MOV DL,AL
  1000:2916     A2 34 16         MOV [0x1634],AL
  1000:2919     43               INC BX
  1000:291a     8A 07            MOV AL,byte ptr [BX]
  1000:291c     8A F0            MOV DH,AL
  1000:291e     A2 35 16         MOV [0x1635],AL
  1000:2921     43               INC BX
  1000:2922     8A 07            MOV AL,byte ptr [BX]
  1000:2924     A2 2A 16         MOV [0x162a],AL
  1000:2927     E8 35 43         CALL 0x1000:6c5f
  1000:292a     A0 E6 74         MOV AL,[0x74e6]
  1000:292d     A2 7A 16         MOV [0x167a],AL
  1000:2930     B5 01            MOV CH,0x1
  1000:2932     A0 83 16         MOV AL,[0x1683]
  1000:2935     0A C0            OR AL,AL
  1000:2937     75 03            JNZ 0x1000:293c
  1000:2939     A0 E9 74         MOV AL,[0x74e9]

LAB_1000_293c:
  1000:293c     A2 56 16         MOV [0x1656],AL
  1000:293f     B7 03            MOV BH,0x3
  1000:2941     B3 02            MOV BL,0x2
  1000:2943     A0 EF 05         MOV AL,[0x5ef]
  1000:2946     04 30            ADD AL,0x30
  1000:2948     BD 60 00         MOV BP,0x60
  1000:294b     FF 1E 08 05      CALLF [0x508]
  1000:294f     B7 05            MOV BH,0x5
  1000:2951     B3 02            MOV BL,0x2
  1000:2953     A0 76 16         MOV AL,[0x1676]
  1000:2956     04 30            ADD AL,0x30
  1000:2958     BD 60 00         MOV BP,0x60
  1000:295b     FF 1E 08 05      CALLF [0x508]
  1000:295f     C3               RET

FUN_1000_2960:
  1000:2960     B9 00 24         MOV CX,0x2400
  1000:2963     A0 76 16         MOV AL,[0x1676]
  1000:2966     3C 04            CMP AL,0x4
  1000:2968     75 03            JNZ 0x1000:296d
  1000:296a     B9 00 12         MOV CX,0x1200

LAB_1000_296d:
  1000:296d     BB 95 86         MOV BX,0x8695

LAB_1000_2970:
  1000:2970     8A 07            MOV AL,byte ptr [BX]
  1000:2972     8A F0            MOV DH,AL
  1000:2974     24 F0            AND AL,0xf0
  1000:2976     D0 C8            ROR AL,0x1
  1000:2978     D0 C8            ROR AL,0x1
  1000:297a     D0 C8            ROR AL,0x1
  1000:297c     D0 C8            ROR AL,0x1
  1000:297e     E8 2A 00         CALL 0x1000:29ab
  1000:2981     D0 C0            ROL AL,0x1
  1000:2983     D0 C0            ROL AL,0x1
  1000:2985     D0 C0            ROL AL,0x1
  1000:2987     D0 C0            ROL AL,0x1
  1000:2989     8A D0            MOV DL,AL
  1000:298b     8A C6            MOV AL,DH
  1000:298d     24 0F            AND AL,0xf
  1000:298f     0A C2            OR AL,DL
  1000:2991     8A F0            MOV DH,AL
  1000:2993     24 0F            AND AL,0xf
  1000:2995     E8 13 00         CALL 0x1000:29ab
  1000:2998     8A D0            MOV DL,AL
  1000:299a     8A C6            MOV AL,DH
  1000:299c     24 F0            AND AL,0xf0
  1000:299e     0A C2            OR AL,DL
  1000:29a0     88 07            MOV byte ptr [BX],AL
  1000:29a2     43               INC BX
  1000:29a3     49               DEC CX
  1000:29a4     8A C5            MOV AL,CH
  1000:29a6     0A C1            OR AL,CL
  1000:29a8     75 C6            JNZ 0x1000:2970
  1000:29aa     C3               RET

FUN_1000_29ab:
  1000:29ab     53               PUSH BX
  1000:29ac     32 E4            XOR AH,AH
  1000:29ae     05 FC 74         ADD AX,0x74fc
  1000:29b1     8B D8            MOV BX,AX
  1000:29b3     8A 07            MOV AL,byte ptr [BX]
  1000:29b5     5B               POP BX
  1000:29b6     C3               RET

FUN_1000_29b7:
  1000:29b7     A0 57 16         MOV AL,[0x1657]
  1000:29ba     0A C0            OR AL,AL
  1000:29bc     75 01            JNZ 0x1000:29bf
  1000:29be     C3               RET

LAB_1000_29bf:
  1000:29bf     BB E4 74         MOV BX,0x74e4
  1000:29c2     FE C8            DEC AL
  1000:29c4     24 01            AND AL,0x1
  1000:29c6     74 03            JZ 0x1000:29cb
  1000:29c8     EB 09            JMP 0x1000:29d3

LAB_1000_29cb:
  1000:29cb     B0 02            MOV AL,0x2
  1000:29cd     88 07            MOV byte ptr [BX],AL
  1000:29cf     43               INC BX
  1000:29d0     88 07            MOV byte ptr [BX],AL
  1000:29d2     C3               RET

LAB_1000_29d3:
  1000:29d3     B0 0A            MOV AL,0xa
  1000:29d5     88 07            MOV byte ptr [BX],AL
  1000:29d7     43               INC BX
  1000:29d8     88 07            MOV byte ptr [BX],AL
  1000:29da     C3               RET

FUN_1000_29f6:
  1000:29f6     06               PUSH ES
  1000:29f7     0E               PUSH CS
  1000:29f8     07               POP ES
  1000:29f9     BE DB 29         MOV SI,0x29db
  1000:29fc     FF 1E 93 05      CALLF [0x593]
  1000:2a00     C3               RET

FUN_1000_2a01:
  1000:2a01     50               PUSH AX
  1000:2a02     53               PUSH BX
  1000:2a03     BB FF FF         MOV BX,0xffff
  1000:2a06     B4 48            MOV AH,0x48
  1000:2a08     CD 21            INT 0x21
  1000:2a0a     5B               POP BX
  1000:2a0b     58               POP AX
  1000:2a0c     C3               RET

FUN_1000_2a4c:
  1000:2a4c     B4 02            MOV AH,0x2
  1000:2a4e     CD 16            INT 0x16
  1000:2a50     A8 20            TEST AL,0x20
  1000:2a52     75 01            JNZ 0x1000:2a55
  1000:2a54     C3               RET

LAB_1000_2a55:
  1000:2a55     06               PUSH ES
  1000:2a56     8C C8            MOV AX,CS
  1000:2a58     8E C0            MOV ES,AX
  1000:2a5a     BE 42 2A         MOV SI,0x2a42
  1000:2a5d     FF 1E 93 05      CALLF [0x593]
  1000:2a61     07               POP ES
  1000:2a62     C3               RET

FUN_1000_2a63:
  1000:2a63     2E A1 14 00      MOV AX,CS:[0x14]
  1000:2a67     8E D8            MOV DS,AX
  1000:2a69     8C C8            MOV AX,CS
  1000:2a6b     8E C0            MOV ES,AX
  1000:2a6d     BE F0 26         MOV SI,0x26f0
  1000:2a70     FF 1E 93 05      CALLF [0x593]
  1000:2a74     FF 2E 8B 05      JMPF [0x58b]

FUN_1000_2a81:
  1000:2a81     E8 C5 1B         CALL 0x1000:4649
  1000:2a84     E8 24 FD         CALL 0x1000:27ab
  1000:2a87     B0 02            MOV AL,0x2
  1000:2a89     E8 2C 1F         CALL 0x1000:49b8
  1000:2a8c     E8 EC 14         CALL 0x1000:3f7b
  1000:2a8f     32 C0            XOR AL,AL
  1000:2a91     E8 37 18         CALL 0x1000:42cb
  1000:2a94     B0 01            MOV AL,0x1
  1000:2a96     E8 32 18         CALL 0x1000:42cb
  1000:2a99     B0 02            MOV AL,0x2
  1000:2a9b     E8 2D 18         CALL 0x1000:42cb
  1000:2a9e     B7 11            MOV BH,0x11
  1000:2aa0     B3 01            MOV BL,0x1
  1000:2aa2     BA F6 05         MOV DX,0x5f6
  1000:2aa5     E8 60 15         CALL 0x1000:4008
  1000:2aa8     E8 4C DB         CALL 0x1000:05f7
  1000:2aab     E8 7F 15         CALL 0x1000:402d
  1000:2aae     E8 93 14         CALL 0x1000:3f44
  1000:2ab1     B0 01            MOV AL,0x1
  1000:2ab3     E8 24 1B         CALL 0x1000:45da
  1000:2ab6     C6 06 B6 16 01   MOV byte ptr [0x16b6],0x1
  1000:2abb     C6 06 7D 16 00   MOV byte ptr [0x167d],0x0

LAB_1000_2ac0:
  1000:2ac0     2E 80 3E 80 2A 00   CMP byte ptr CS:[0x2a80],0x0
  1000:2ac6     74 03            JZ 0x1000:2acb
  1000:2ac8     E9 A9 00         JMP 0x1000:2b74

LAB_1000_2acb:
  1000:2acb     8B 1E 34 16      MOV BX,word ptr [0x1634]
  1000:2acf     89 1E 7B 16      MOV word ptr [0x167b],BX
  1000:2ad3     E8 37 1D         CALL 0x1000:480d
  1000:2ad6     E8 48 DB         CALL 0x1000:0621
  1000:2ad9     E8 06 1E         CALL 0x1000:48e2
  1000:2adc     A2 90 16         MOV [0x1690],AL
  1000:2adf     E8 F6 40         CALL 0x1000:6bd8
  1000:2ae2     E8 97 41         CALL 0x1000:6c7c
  1000:2ae5     E8 8C 05         CALL 0x1000:3074
  1000:2ae8     E8 57 0F         CALL 0x1000:3a42
  1000:2aeb     E8 82 3D         CALL 0x1000:6870
  1000:2aee     E8 43 DB         CALL 0x1000:0634
  1000:2af1     E8 0C 01         CALL 0x1000:2c00
  1000:2af4     E8 17 DB         CALL 0x1000:060e
  1000:2af7     E8 E6 15         CALL 0x1000:40e0
  1000:2afa     E8 BF 41         CALL 0x1000:6cbc
  1000:2afd     E8 9D E3         CALL 0x1000:0e9d
  1000:2b00     E8 61 21         CALL 0x1000:4c64
  1000:2b03     2E FF 16 A0 49   CALL word ptr CS:[0x49a0]
  1000:2b08     E8 F7 DB         CALL 0x1000:0702
  1000:2b0b     E8 13 DB         CALL 0x1000:0621
  1000:2b0e     E8 4F 29         CALL 0x1000:5460
  1000:2b11     E8 40 3E         CALL 0x1000:6954
  1000:2b14     E8 2E 2C         CALL 0x1000:5745
  1000:2b17     E8 65 2A         CALL 0x1000:557f
  1000:2b1a     E8 FE DE         CALL 0x1000:0a1b
  1000:2b1d     E8 16 DD         CALL 0x1000:0836
  1000:2b20     E8 A7 41         CALL 0x1000:6cca
  1000:2b23     E8 9D E0         CALL 0x1000:0bc3
  1000:2b26     E8 70 42         CALL 0x1000:6d99
  1000:2b29     2E FF 16 A2 49   CALL word ptr CS:[0x49a2]
  1000:2b2e     E8 B5 20         CALL 0x1000:4be6
  1000:2b31     E8 5D 21         CALL 0x1000:4c91
  1000:2b34     A0 B6 16         MOV AL,[0x16b6]
  1000:2b37     0A C0            OR AL,AL
  1000:2b39     75 03            JNZ 0x1000:2b3e
  1000:2b3b     E8 95 13         CALL 0x1000:3ed3

LAB_1000_2b3e:
  1000:2b3e     E8 DF 41         CALL 0x1000:6d20
  1000:2b41     E8 37 14         CALL 0x1000:3f7b
  1000:2b44     A0 7D 16         MOV AL,[0x167d]
  1000:2b47     0A C0            OR AL,AL
  1000:2b49     75 03            JNZ 0x1000:2b4e
  1000:2b4b     E8 0D 00         CALL 0x1000:2b5b

LAB_1000_2b4e:
  1000:2b4e     A0 6F 05         MOV AL,[0x56f]
  1000:2b51     24 01            AND AL,0x1
  1000:2b53     75 03            JNZ 0x1000:2b58
  1000:2b55     E8 2A 1C         CALL 0x1000:4782

LAB_1000_2b58:
  1000:2b58     E9 65 FF         JMP 0x1000:2ac0

FUN_1000_2b5b:
  1000:2b5b     FE C0            INC AL
  1000:2b5d     A2 7D 16         MOV [0x167d],AL
  1000:2b60     32 C0            XOR AL,AL
  1000:2b62     A2 B6 16         MOV [0x16b6],AL
  1000:2b65     0A C0            OR AL,AL
  1000:2b67     B0 23            MOV AL,0x23
  1000:2b69     BB 00 00         MOV BX,0x0
  1000:2b6c     BD 40 00         MOV BP,0x40
  1000:2b6f     FF 1E 08 05      CALLF [0x508]
  1000:2b73     C3               RET

FUN_1000_2b74:
  1000:2b74     8B 1E 34 16      MOV BX,word ptr [0x1634]
  1000:2b78     89 1E 7B 16      MOV word ptr [0x167b],BX
  1000:2b7c     E8 8E 1C         CALL 0x1000:480d
  1000:2b7f     E8 9F DA         CALL 0x1000:0621
  1000:2b82     E8 5D 1D         CALL 0x1000:48e2
  1000:2b85     A2 90 16         MOV [0x1690],AL
  1000:2b88     E8 E9 04         CALL 0x1000:3074
  1000:2b8b     E8 B4 0E         CALL 0x1000:3a42
  1000:2b8e     E8 2F 2D         CALL 0x1000:58c0
  1000:2b91     E8 6C 00         CALL 0x1000:2c00
  1000:2b94     E8 49 15         CALL 0x1000:40e0
  1000:2b97     E8 FD 31         CALL 0x1000:5d97
  1000:2b9a     2E FF 16 A0 49   CALL word ptr CS:[0x49a0]
  1000:2b9f     E8 60 DB         CALL 0x1000:0702
  1000:2ba2     E8 7C DA         CALL 0x1000:0621
  1000:2ba5     E8 B8 28         CALL 0x1000:5460
  1000:2ba8     E8 A9 3D         CALL 0x1000:6954
  1000:2bab     E8 97 2B         CALL 0x1000:5745
  1000:2bae     E8 CE 29         CALL 0x1000:557f
  1000:2bb1     E8 67 DE         CALL 0x1000:0a1b
  1000:2bb4     E8 7F DC         CALL 0x1000:0836
  1000:2bb7     E8 41 2E         CALL 0x1000:59fb
  1000:2bba     E8 06 E0         CALL 0x1000:0bc3
  1000:2bbd     E8 D9 41         CALL 0x1000:6d99
  1000:2bc0     2E FF 16 A2 49   CALL word ptr CS:[0x49a2]
  1000:2bc5     E8 1E 20         CALL 0x1000:4be6
  1000:2bc8     E8 C6 20         CALL 0x1000:4c91
  1000:2bcb     A0 B6 16         MOV AL,[0x16b6]
  1000:2bce     0A C0            OR AL,AL
  1000:2bd0     75 03            JNZ 0x1000:2bd5
  1000:2bd2     E8 FE 12         CALL 0x1000:3ed3

LAB_1000_2bd5:
  1000:2bd5     E8 48 41         CALL 0x1000:6d20
  1000:2bd8     E8 A0 13         CALL 0x1000:3f7b
  1000:2bdb     A0 6F 05         MOV AL,[0x56f]
  1000:2bde     24 01            AND AL,0x1
  1000:2be0     75 03            JNZ 0x1000:2be5
  1000:2be2     E8 9D 1B         CALL 0x1000:4782

LAB_1000_2be5:
  1000:2be5     EB 8D            JMP 0x1000:2b74

FUN_1000_2c00:
  1000:2c00     8B 1E 69 16      MOV BX,word ptr [0x1669]
  1000:2c04     A0 34 16         MOV AL,[0x1634]
  1000:2c07     04 0E            ADD AL,0xe
  1000:2c09     8A D0            MOV DL,AL
  1000:2c0b     A0 2A 16         MOV AL,[0x162a]
  1000:2c0e     8A F0            MOV DH,AL
  1000:2c10     2B DA            SUB BX,DX
  1000:2c12     75 09            JNZ 0x1000:2c1d
  1000:2c14     8B 16 63 16      MOV DX,word ptr [0x1663]
  1000:2c18     32 C0            XOR AL,AL
  1000:2c1a     EB 49            JMP 0x1000:2c65

LAB_1000_2c1d:
  1000:2c1d     06               PUSH ES
  1000:2c1e     8C D8            MOV AX,DS
  1000:2c20     8E C0            MOV ES,AX
  1000:2c22     BE 63 16         MOV SI,0x1663
  1000:2c25     BF 61 16         MOV DI,0x1661
  1000:2c28     B9 08 00         MOV CX,0x8
  1000:2c2b     F3 A4            MOVSB.REP ES:DI,SI
  1000:2c2d     07               POP ES
  1000:2c2e     89 16 69 16      MOV word ptr [0x1669],DX
  1000:2c32     8B 16 61 16      MOV DX,word ptr [0x1661]
  1000:2c36     B5 01            MOV CH,0x1
  1000:2c38     A0 27 16         MOV AL,[0x1627]
  1000:2c3b     3C 08            CMP AL,0x8
  1000:2c3d     72 24            JC 0x1000:2c63
  1000:2c3f     FE C5            INC CH
  1000:2c41     3C 10            CMP AL,0x10
  1000:2c43     72 1E            JC 0x1000:2c63
  1000:2c45     B5 00            MOV CH,0x0
  1000:2c47     3C 20            CMP AL,0x20
  1000:2c49     72 18            JC 0x1000:2c63
  1000:2c4b     B5 01            MOV CH,0x1
  1000:2c4d     3C 24            CMP AL,0x24
  1000:2c4f     72 12            JC 0x1000:2c63
  1000:2c51     B5 00            MOV CH,0x0
  1000:2c53     3C 24            CMP AL,0x24
  1000:2c55     74 0C            JZ 0x1000:2c63
  1000:2c57     3C 2C            CMP AL,0x2c
  1000:2c59     74 08            JZ 0x1000:2c63
  1000:2c5b     B5 02            MOV CH,0x2
  1000:2c5d     3C 2C            CMP AL,0x2c
  1000:2c5f     72 02            JC 0x1000:2c63
  1000:2c61     B5 01            MOV CH,0x1

LAB_1000_2c63:
  1000:2c63     8A C5            MOV AL,CH

LAB_1000_2c65:
  1000:2c65     A2 6C 16         MOV [0x166c],AL
  1000:2c68     A0 6B 16         MOV AL,[0x166b]
  1000:2c6b     0A C0            OR AL,AL
  1000:2c6d     75 01            JNZ 0x1000:2c70
  1000:2c6f     C3               RET

LAB_1000_2c70:
  1000:2c70     FE C6            INC DH
  1000:2c72     89 16 6D 16      MOV word ptr [0x166d],DX
  1000:2c76     8B 0E 34 16      MOV CX,word ptr [0x1634]
  1000:2c7a     8A C2            MOV AL,DL
  1000:2c7c     04 03            ADD AL,0x3
  1000:2c7e     2A C1            SUB AL,CL
  1000:2c80     8A D0            MOV DL,AL
  1000:2c82     8A C6            MOV AL,DH
  1000:2c84     04 02            ADD AL,0x2
  1000:2c86     2A C5            SUB AL,CH
  1000:2c88     8A F0            MOV DH,AL
  1000:2c8a     BB ED 78         MOV BX,0x78ed
  1000:2c8d     9A E0 4D 00 10   CALLF 0x1000:4de0
  1000:2c92     A0 6C 16         MOV AL,[0x166c]
  1000:2c95     02 C0            ADD AL,AL
  1000:2c97     32 E4            XOR AH,AH
  1000:2c99     05 43 E2         ADD AX,0xe243
  1000:2c9c     8B F8            MOV DI,AX
  1000:2c9e     8A 05            MOV AL,byte ptr [DI]
  1000:2ca0     88 07            MOV byte ptr [BX],AL
  1000:2ca2     47               INC DI
  1000:2ca3     43               INC BX
  1000:2ca4     8A 05            MOV AL,byte ptr [DI]
  1000:2ca6     88 07            MOV byte ptr [BX],AL
  1000:2ca8     B9 3E 0A         MOV CX,0xa3e
  1000:2cab     03 D9            ADD BX,CX
  1000:2cad     B5 44            MOV CH,0x44
  1000:2caf     8A 07            MOV AL,byte ptr [BX]
  1000:2cb1     0A C5            OR AL,CH
  1000:2cb3     88 07            MOV byte ptr [BX],AL
  1000:2cb5     4B               DEC BX
  1000:2cb6     8A 07            MOV AL,byte ptr [BX]
  1000:2cb8     0A C5            OR AL,CH
  1000:2cba     88 07            MOV byte ptr [BX],AL
  1000:2cbc     C3               RET

FUN_1000_2d0d:
  1000:2d0d     5A               POP DX
  1000:2d0e     80 3E EF 05 00   CMP byte ptr [0x5ef],0x0
  1000:2d13     75 03            JNZ 0x1000:2d18
  1000:2d15     E9 59 01         JMP 0x1000:2e71

LAB_1000_2d18:
  1000:2d18     2E C6 06 08 2D 00   MOV byte ptr CS:[0x2d08],0x0
  1000:2d1e     32 C0            XOR AL,AL
  1000:2d20     A2 B6 16         MOV [0x16b6],AL
  1000:2d23     A2 B4 16         MOV [0x16b4],AL
  1000:2d26     A2 B5 16         MOV [0x16b5],AL
  1000:2d29     BD 5A 00         MOV BP,0x5a
  1000:2d2c     FF 1E 08 05      CALLF [0x508]
  1000:2d30     BB FF 05         MOV BX,0x5ff
  1000:2d33     8A 07            MOV AL,byte ptr [BX]
  1000:2d35     3C 0A            CMP AL,0xa
  1000:2d37     75 02            JNZ 0x1000:2d3b
  1000:2d39     FE 0F            DEC byte ptr [BX]

LAB_1000_2d3b:
  1000:2d3b     A0 71 16         MOV AL,[0x1671]
  1000:2d3e     0A C0            OR AL,AL
  1000:2d40     74 05            JZ 0x1000:2d47
  1000:2d42     2E FF 1E EF 2B   CALLF [0x2bef]

LAB_1000_2d47:
  1000:2d47     06               PUSH ES
  1000:2d48     8C C8            MOV AX,CS
  1000:2d4a     8E C0            MOV ES,AX
  1000:2d4c     B7 07            MOV BH,0x7
  1000:2d4e     B3 08            MOV BL,0x8
  1000:2d50     BA C0 2C         MOV DX,0x2cc0
  1000:2d53     B0 36            MOV AL,0x36
  1000:2d55     BD 38 00         MOV BP,0x38
  1000:2d58     FF 1E 08 05      CALLF [0x508]
  1000:2d5c     B7 0A            MOV BH,0xa
  1000:2d5e     B3 04            MOV BL,0x4
  1000:2d60     BA D3 2C         MOV DX,0x2cd3
  1000:2d63     B0 36            MOV AL,0x36
  1000:2d65     BD 38 00         MOV BP,0x38
  1000:2d68     FF 1E 08 05      CALLF [0x508]
  1000:2d6c     B7 0B            MOV BH,0xb
  1000:2d6e     B3 04            MOV BL,0x4
  1000:2d70     BA E4 2C         MOV DX,0x2ce4
  1000:2d73     B0 36            MOV AL,0x36
  1000:2d75     BD 38 00         MOV BP,0x38
  1000:2d78     FF 1E 08 05      CALLF [0x508]
  1000:2d7c     B7 0A            MOV BH,0xa
  1000:2d7e     B3 09            MOV BL,0x9
  1000:2d80     B0 3F            MOV AL,0x3f
  1000:2d82     B9 FF 02         MOV CX,0x2ff
  1000:2d85     BD 3C 00         MOV BP,0x3c
  1000:2d88     FF 1E 08 05      CALLF [0x508]
  1000:2d8c     07               POP ES

LAB_1000_2d8d:
  1000:2d8d     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:2d92     75 04            JNZ 0x1000:2d98
  1000:2d94     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_2d98:
  1000:2d98     E8 47 1B         CALL 0x1000:48e2
  1000:2d9b     0A C0            OR AL,AL
  1000:2d9d     74 EE            JZ 0x1000:2d8d
  1000:2d9f     50               PUSH AX

LAB_1000_2da0:
  1000:2da0     E8 3F 1B         CALL 0x1000:48e2
  1000:2da3     0A C0            OR AL,AL
  1000:2da5     75 F9            JNZ 0x1000:2da0
  1000:2da7     58               POP AX
  1000:2da8     A8 40            TEST AL,0x40
  1000:2daa     75 50            JNZ 0x1000:2dfc
  1000:2dac     2E 80 36 08 2D 01   XOR byte ptr CS:[0x2d08],0x1
  1000:2db2     75 24            JNZ 0x1000:2dd8
  1000:2db4     B7 0A            MOV BH,0xa
  1000:2db6     B3 09            MOV BL,0x9
  1000:2db8     B0 3F            MOV AL,0x3f
  1000:2dba     B9 FF 02         MOV CX,0x2ff
  1000:2dbd     BD 3C 00         MOV BP,0x3c
  1000:2dc0     FF 1E 08 05      CALLF [0x508]
  1000:2dc4     B6 58            MOV DH,0x58
  1000:2dc6     B2 12            MOV DL,0x12
  1000:2dc8     8B FA            MOV DI,DX
  1000:2dca     BA 02 08         MOV DX,0x802
  1000:2dcd     B3 07            MOV BL,0x7
  1000:2dcf     BD 10 00         MOV BP,0x10
  1000:2dd2     FF 1E 08 05      CALLF [0x508]
  1000:2dd6     EB B5            JMP 0x1000:2d8d

LAB_1000_2dd8:
  1000:2dd8     B7 0B            MOV BH,0xb
  1000:2dda     B3 09            MOV BL,0x9
  1000:2ddc     B0 3F            MOV AL,0x3f
  1000:2dde     B9 FF 02         MOV CX,0x2ff
  1000:2de1     BD 3C 00         MOV BP,0x3c
  1000:2de4     FF 1E 08 05      CALLF [0x508]
  1000:2de8     B6 50            MOV DH,0x50
  1000:2dea     B2 12            MOV DL,0x12
  1000:2dec     8B FA            MOV DI,DX
  1000:2dee     BA 02 08         MOV DX,0x802
  1000:2df1     B3 07            MOV BL,0x7
  1000:2df3     BD 10 00         MOV BP,0x10
  1000:2df6     FF 1E 08 05      CALLF [0x508]
  1000:2dfa     EB 91            JMP 0x1000:2d8d

LAB_1000_2dfc:
  1000:2dfc     2E 80 3E 08 2D 00   CMP byte ptr CS:[0x2d08],0x0
  1000:2e02     75 03            JNZ 0x1000:2e07
  1000:2e04     EB 6B            JMP 0x1000:2e71

LAB_1000_2e07:
  1000:2e07     A0 EF 05         MOV AL,[0x5ef]
  1000:2e0a     0A C0            OR AL,AL
  1000:2e0c     75 11            JNZ 0x1000:2e1f
  1000:2e0e     06               PUSH ES
  1000:2e0f     8C D8            MOV AX,DS
  1000:2e11     8E C0            MOV ES,AX
  1000:2e13     BE FF 05         MOV SI,0x5ff
  1000:2e16     BF EF 05         MOV DI,0x5ef
  1000:2e19     B9 10 00         MOV CX,0x10
  1000:2e1c     F3 A4            MOVSB.REP ES:DI,SI
  1000:2e1e     07               POP ES

LAB_1000_2e1f:
  1000:2e1f     FF 1E B3 05      CALLF [0x5b3]
  1000:2e23     FF 1E BF 05      CALLF [0x5bf]
  1000:2e27     FF 1E AF 05      CALLF [0x5af]
  1000:2e2b     32 C0            XOR AL,AL
  1000:2e2d     A2 B9 16         MOV [0x16b9],AL
  1000:2e30     B0 19            MOV AL,0x19
  1000:2e32     BD 42 00         MOV BP,0x42
  1000:2e35     FF 1E 08 05      CALLF [0x508]
  1000:2e39     FA               CLI
  1000:2e3a     BB 00 00         MOV BX,0x0
  1000:2e3d     BD 06 00         MOV BP,0x6
  1000:2e40     FF 1E 08 05      CALLF [0x508]
  1000:2e44     BB 07 00         MOV BX,0x7
  1000:2e47     BD 06 00         MOV BP,0x6
  1000:2e4a     FF 1E 08 05      CALLF [0x508]
  1000:2e4e     BD 0E 00         MOV BP,0xe
  1000:2e51     FF 1E 08 05      CALLF [0x508]

LAB_1000_2e55:
  1000:2e55     E8 58 F8         CALL 0x1000:26b0
  1000:2e58     FA               CLI
  1000:2e59     C7 06 7E 05 00 00   MOV word ptr [0x57e],0x0
  1000:2e5f     C7 06 80 05 00 00   MOV word ptr [0x580],0x0
  1000:2e65     FB               STI
  1000:2e66     E8 98 FB         CALL 0x1000:2a01
  1000:2e69     A1 83 F1         MOV AX,[0xf183]
  1000:2e6c     8B E0            MOV SP,AX
  1000:2e6e     B0 01            MOV AL,0x1
  1000:2e70     CB               RETF

FUN_1000_2e71:
  1000:2e71     A0 EF 05         MOV AL,[0x5ef]
  1000:2e74     0A C0            OR AL,AL
  1000:2e76     75 1E            JNZ 0x1000:2e96
  1000:2e78     B0 0F            MOV AL,0xf
  1000:2e7a     BD 42 00         MOV BP,0x42
  1000:2e7d     FF 1E 08 05      CALLF [0x508]
  1000:2e81     BD 0E 00         MOV BP,0xe
  1000:2e84     FF 1E 08 05      CALLF [0x508]
  1000:2e88     FF 1E AF 05      CALLF [0x5af]
  1000:2e8c     B0 02            MOV AL,0x2
  1000:2e8e     A2 26 16         MOV [0x1626],AL
  1000:2e91     BB 4C 53         MOV BX,0x534c
  1000:2e94     EB BF            JMP 0x1000:2e55

LAB_1000_2e96:
  1000:2e96     32 C0            XOR AL,AL
  1000:2e98     A2 7E 16         MOV [0x167e],AL
  1000:2e9b     B0 19            MOV AL,0x19
  1000:2e9d     BD 42 00         MOV BP,0x42
  1000:2ea0     FF 1E 08 05      CALLF [0x508]
  1000:2ea4     E8 A2 17         CALL 0x1000:4649
  1000:2ea7     B0 01            MOV AL,0x1
  1000:2ea9     A2 B9 16         MOV [0x16b9],AL
  1000:2eac     A2 89 16         MOV [0x1689],AL
  1000:2eaf     E8 28 17         CALL 0x1000:45da
  1000:2eb2     E8 85 16         CALL 0x1000:453a
  1000:2eb5     A0 EF 05         MOV AL,[0x5ef]
  1000:2eb8     3C 0A            CMP AL,0xa
  1000:2eba     75 03            JNZ 0x1000:2ebf
  1000:2ebc     E8 21 01         CALL 0x1000:2fe0

LAB_1000_2ebf:
  1000:2ebf     3C 09            CMP AL,0x9
  1000:2ec1     A0 76 16         MOV AL,[0x1676]
  1000:2ec4     75 07            JNZ 0x1000:2ecd
  1000:2ec6     3C 02            CMP AL,0x2
  1000:2ec8     72 03            JC 0x1000:2ecd
  1000:2eca     E8 13 01         CALL 0x1000:2fe0

LAB_1000_2ecd:
  1000:2ecd     3C 04            CMP AL,0x4
  1000:2ecf     75 03            JNZ 0x1000:2ed4
  1000:2ed1     E8 BE 00         CALL 0x1000:2f92

LAB_1000_2ed4:
  1000:2ed4     E8 45 01         CALL 0x1000:301c
  1000:2ed7     E8 A1 10         CALL 0x1000:3f7b
  1000:2eda     E8 E8 ED         CALL 0x1000:1cc5
  1000:2edd     E8 4D 11         CALL 0x1000:402d
  1000:2ee0     A0 76 16         MOV AL,[0x1676]
  1000:2ee3     3C 04            CMP AL,0x4
  1000:2ee5     74 0E            JZ 0x1000:2ef5
  1000:2ee7     B0 23            MOV AL,0x23
  1000:2ee9     2E 8B 1E 71 52   MOV BX,word ptr CS:[0x5271]
  1000:2eee     BD 40 00         MOV BP,0x40
  1000:2ef1     FF 1E 08 05      CALLF [0x508]

LAB_1000_2ef5:
  1000:2ef5     C6 06 7E F1 00   MOV byte ptr [0xf17e],0x0
  1000:2efa     BA 58 53         MOV DX,0x5358
  1000:2efd     BB 43 3D         MOV BX,0x3d43
  1000:2f00     E8 88 F2         CALL 0x1000:218b
  1000:2f03     BA 1C 03         MOV DX,0x31c
  1000:2f06     BB 52 DC         MOV BX,0xdc52
  1000:2f09     E8 2C F2         CALL 0x1000:2138
  1000:2f0c     A0 76 16         MOV AL,[0x1676]
  1000:2f0f     3C 04            CMP AL,0x4
  1000:2f11     74 43            JZ 0x1000:2f56
  1000:2f13     B7 12            MOV BH,0x12
  1000:2f15     B3 06            MOV BL,0x6
  1000:2f17     BA 1A 53         MOV DX,0x531a
  1000:2f1a     06               PUSH ES
  1000:2f1b     8C C8            MOV AX,CS
  1000:2f1d     8E C0            MOV ES,AX
  1000:2f1f     B0 37            MOV AL,0x37
  1000:2f21     BD 38 00         MOV BP,0x38
  1000:2f24     FF 1E 08 05      CALLF [0x508]
  1000:2f28     07               POP ES

LAB_1000_2f29:
  1000:2f29     2E 80 3E D0 51 01   CMP byte ptr CS:[0x51d0],0x1
  1000:2f2f     75 03            JNZ 0x1000:2f34
  1000:2f31     E8 CD 22         CALL 0x1000:5201

LAB_1000_2f34:
  1000:2f34     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:2f39     75 04            JNZ 0x1000:2f3f
  1000:2f3b     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_2f3f:
  1000:2f3f     A0 6C 05         MOV AL,[0x56c]
  1000:2f42     D0 C0            ROL AL,0x1
  1000:2f44     73 07            JNC 0x1000:2f4d
  1000:2f46     E8 99 19         CALL 0x1000:48e2
  1000:2f49     24 C0            AND AL,0xc0
  1000:2f4b     74 DC            JZ 0x1000:2f29

LAB_1000_2f4d:
  1000:2f4d     B0 19            MOV AL,0x19
  1000:2f4f     BD 42 00         MOV BP,0x42
  1000:2f52     FF 1E 08 05      CALLF [0x508]

LAB_1000_2f56:
  1000:2f56     BD 5C 00         MOV BP,0x5c
  1000:2f59     FF 1E 08 05      CALLF [0x508]
  1000:2f5d     E8 C7 DC         CALL 0x1000:0c27
  1000:2f60     A0 EF 05         MOV AL,[0x5ef]
  1000:2f63     B2 0A            MOV DL,0xa
  1000:2f65     F6 E2            MUL DL
  1000:2f67     80 3E 76 16 04   CMP byte ptr [0x1676],0x4
  1000:2f6c     75 02            JNZ 0x1000:2f70
  1000:2f6e     04 01            ADD AL,0x1

LAB_1000_2f70:
  1000:2f70     8A E0            MOV AH,AL
  1000:2f72     B0 01            MOV AL,0x1
  1000:2f74     FF 1E AB 05      CALLF [0x5ab]
  1000:2f78     A0 76 16         MOV AL,[0x1676]
  1000:2f7b     3C 04            CMP AL,0x4
  1000:2f7d     74 03            JZ 0x1000:2f82
  1000:2f7f     E9 FF FA         JMP 0x1000:2a81

LAB_1000_2f82:
  1000:2f82     B0 FF            MOV AL,0xff
  1000:2f84     A2 21 16         MOV [0x1621],AL
  1000:2f87     BB EB 74         MOV BX,0x74eb
  1000:2f8a     2E 89 1E 0B 54   MOV word ptr CS:[0x540b],BX
  1000:2f8f     E9 EF FA         JMP 0x1000:2a81

FUN_1000_2f92:
  1000:2f92     BB 0C 75         MOV BX,0x750c
  1000:2f95     8A 07            MOV AL,byte ptr [BX]
  1000:2f97     0A C0            OR AL,AL
  1000:2f99     75 3F            JNZ 0x1000:2fda
  1000:2f9b     FE 07            INC byte ptr [BX]
  1000:2f9d     43               INC BX
  1000:2f9e     06               PUSH ES
  1000:2f9f     8C D8            MOV AX,DS
  1000:2fa1     8E C0            MOV ES,AX
  1000:2fa3     8B F3            MOV SI,BX
  1000:2fa5     BF EF 05         MOV DI,0x5ef
  1000:2fa8     B9 08 00         MOV CX,0x8
  1000:2fab     F3 A5            MOVSW.REP ES:DI,SI
  1000:2fad     46               INC SI
  1000:2fae     46               INC SI
  1000:2faf     BF 4B 16         MOV DI,0x164b
  1000:2fb2     B9 04 00         MOV CX,0x4
  1000:2fb5     F3 A5            MOVSW.REP ES:DI,SI
  1000:2fb7     BF 3B 16         MOV DI,0x163b
  1000:2fba     B9 08 00         MOV CX,0x8
  1000:2fbd     F3 A4            MOVSB.REP ES:DI,SI
  1000:2fbf     07               POP ES
  1000:2fc0     BB 7E 74         MOV BX,0x747e
  1000:2fc3     BA 03 00         MOV DX,0x3
  1000:2fc6     B5 14            MOV CH,0x14

LAB_1000_2fc8:
  1000:2fc8     43               INC BX
  1000:2fc9     8A 07            MOV AL,byte ptr [BX]
  1000:2fcb     4B               DEC BX
  1000:2fcc     0A C0            OR AL,AL
  1000:2fce     74 03            JZ 0x1000:2fd3
  1000:2fd0     80 0F 80         OR byte ptr [BX],0x80

LAB_1000_2fd3:
  1000:2fd3     03 DA            ADD BX,DX
  1000:2fd5     FE CD            DEC CH
  1000:2fd7     75 EF            JNZ 0x1000:2fc8
  1000:2fd9     C3               RET

LAB_1000_2fda:
  1000:2fda     B0 01            MOV AL,0x1
  1000:2fdc     A2 76 16         MOV [0x1676],AL
  1000:2fdf     C3               RET

FUN_1000_2fe0:
  1000:2fe0     C6 06 76 16 01   MOV byte ptr [0x1676],0x1
  1000:2fe5     C6 06 EF 05 09   MOV byte ptr [0x5ef],0x9
  1000:2fea     2E C6 06 80 2A 00   MOV byte ptr CS:[0x2a80],0x0
  1000:2ff0     C6 06 7F 16 00   MOV byte ptr [0x167f],0x0
  1000:2ff5     B0 30            MOV AL,0x30
  1000:2ff7     BB 01 03         MOV BX,0x301
  1000:2ffa     BD 60 00         MOV BP,0x60
  1000:2ffd     FF 1E 08 05      CALLF [0x508]
  1000:3001     C3               RET

FUN_1000_301c:
  1000:301c     A0 76 16         MOV AL,[0x1676]
  1000:301f     3C 04            CMP AL,0x4
  1000:3021     74 11            JZ 0x1000:3034
  1000:3023     06               PUSH ES
  1000:3024     8C D8            MOV AX,DS
  1000:3026     8E C0            MOV ES,AX
  1000:3028     BE FF 05         MOV SI,0x5ff
  1000:302b     BF EF 05         MOV DI,0x5ef
  1000:302e     B9 08 00         MOV CX,0x8
  1000:3031     F3 A5            MOVSW.REP ES:DI,SI
  1000:3033     07               POP ES

LAB_1000_3034:
  1000:3034     B5 00            MOV CH,0x0
  1000:3036     BB FA 05         MOV BX,0x5fa
  1000:3039     8A 07            MOV AL,byte ptr [BX]
  1000:303b     0A C0            OR AL,AL
  1000:303d     74 02            JZ 0x1000:3041
  1000:303f     B5 01            MOV CH,0x1

LAB_1000_3041:
  1000:3041     8A C5            MOV AL,CH
  1000:3043     A2 6B 16         MOV [0x166b],AL
  1000:3046     C3               RET

FUN_1000_3074:
  1000:3074     A0 B9 16         MOV AL,[0x16b9]
  1000:3077     0A C0            OR AL,AL
  1000:3079     74 03            JZ 0x1000:307e
  1000:307b     E9 B4 0A         JMP 0x1000:3b32

LAB_1000_307e:
  1000:307e     A0 B6 16         MOV AL,[0x16b6]
  1000:3081     0A C0            OR AL,AL
  1000:3083     74 01            JZ 0x1000:3086
  1000:3085     C3               RET

LAB_1000_3086:
  1000:3086     32 C0            XOR AL,AL
  1000:3088     A2 36 16         MOV [0x1636],AL
  1000:308b     A2 37 16         MOV [0x1637],AL
  1000:308e     A2 2F 16         MOV [0x162f],AL
  1000:3091     A2 72 16         MOV [0x1672],AL
  1000:3094     A0 2D 16         MOV AL,[0x162d]
  1000:3097     0A C0            OR AL,AL
  1000:3099     75 15            JNZ 0x1000:30b0
  1000:309b     A0 90 16         MOV AL,[0x1690]
  1000:309e     A2 3B 16         MOV [0x163b],AL
  1000:30a1     24 0F            AND AL,0xf
  1000:30a3     8A E8            MOV CH,AL
  1000:30a5     D0 C0            ROL AL,0x1
  1000:30a7     32 E4            XOR AH,AH
  1000:30a9     8B F8            MOV DI,AX

switchD:
  1000:30ab     2E FF A5 54 30   JMP word ptr CS:[DI + 0x3054]

LAB_1000_30b0:
  1000:30b0     32 C0            XOR AL,AL
  1000:30b2     A2 2B 16         MOV [0x162b],AL
  1000:30b5     A2 2C 16         MOV [0x162c],AL
  1000:30b8     A2 39 16         MOV [0x1639],AL
  1000:30bb     A0 3B 16         MOV AL,[0x163b]
  1000:30be     A2 3C 16         MOV [0x163c],AL
  1000:30c1     8A E8            MOV CH,AL
  1000:30c3     A0 90 16         MOV AL,[0x1690]
  1000:30c6     24 0F            AND AL,0xf
  1000:30c8     75 02            JNZ 0x1000:30cc
  1000:30ca     8A C5            MOV AL,CH

LAB_1000_30cc:
  1000:30cc     A2 3B 16         MOV [0x163b],AL
  1000:30cf     8A D5            MOV DL,CH
  1000:30d1     B6 00            MOV DH,0x0
  1000:30d3     BB C0 DD         MOV BX,0xddc0
  1000:30d6     03 DA            ADD BX,DX
  1000:30d8     8A 2F            MOV CH,byte ptr [BX]
  1000:30da     3A C5            CMP AL,CH
  1000:30dc     75 03            JNZ 0x1000:30e1
  1000:30de     E9 6E 08         JMP 0x1000:394f

FUN_1000_30e1:
  1000:30e1     3C 01            CMP AL,0x1
  1000:30e3     75 03            JNZ 0x1000:30e8
  1000:30e5     E9 F1 03         JMP 0x1000:34d9

LAB_1000_30e8:
  1000:30e8     8A E8            MOV CH,AL
  1000:30ea     A0 31 16         MOV AL,[0x1631]
  1000:30ed     3C 02            CMP AL,0x2
  1000:30ef     75 01            JNZ 0x1000:30f2
  1000:30f1     C3               RET

LAB_1000_30f2:
  1000:30f2     8A C5            MOV AL,CH
  1000:30f4     3C 02            CMP AL,0x2
  1000:30f6     75 03            JNZ 0x1000:30fb
  1000:30f8     E9 5D 04         JMP 0x1000:3558

LAB_1000_30fb:
  1000:30fb     3C 04            CMP AL,0x4
  1000:30fd     75 03            JNZ 0x1000:3102
  1000:30ff     E9 D5 04         JMP 0x1000:35d7

LAB_1000_3102:
  1000:3102     3C 08            CMP AL,0x8
  1000:3104     75 03            JNZ 0x1000:3109
  1000:3106     E9 38 05         JMP 0x1000:3641

LAB_1000_3109:
  1000:3109     3C 05            CMP AL,0x5
  1000:310b     75 03            JNZ 0x1000:3110
  1000:310d     E9 D9 06         JMP 0x1000:37e9

LAB_1000_3110:
  1000:3110     3C 06            CMP AL,0x6
  1000:3112     75 03            JNZ 0x1000:3117
  1000:3114     E9 94 05         JMP 0x1000:36ab

LAB_1000_3117:
  1000:3117     3C 09            CMP AL,0x9
  1000:3119     75 03            JNZ 0x1000:311e
  1000:311b     E9 6A 07         JMP 0x1000:3888

LAB_1000_311e:
  1000:311e     3C 0A            CMP AL,0xa
  1000:3120     75 03            JNZ 0x1000:3125
  1000:3122     E9 25 06         JMP 0x1000:374a

LAB_1000_3125:
  1000:3125     3C 0C            CMP AL,0xc
  1000:3127     74 08            JZ 0x1000:3131
  1000:3129     A0 3C 16         MOV AL,[0x163c]
  1000:312c     A2 3B 16         MOV [0x163b],AL
  1000:312f     EB B0            JMP 0x1000:30e1

LAB_1000_3131:
  1000:3131     A0 3C 16         MOV AL,[0x163c]
  1000:3134     F6 D0            NOT AL
  1000:3136     24 0C            AND AL,0xc
  1000:3138     A2 3B 16         MOV [0x163b],AL
  1000:313b     E9 11 08         JMP 0x1000:394f

caseD_0:

caseD_7:

caseD_b:

caseD_c:

caseD_d:

caseD_e:

caseD_f:
  1000:313e     C3               RET

caseD_1:
  1000:313f     A0 2E 16         MOV AL,[0x162e]
  1000:3142     3C 02            CMP AL,0x2
  1000:3144     75 01            JNZ 0x1000:3147
  1000:3146     C3               RET

LAB_1000_3147:
  1000:3147     BA 62 83         MOV DX,0x8362
  1000:314a     E8 2D 1D         CALL 0x1000:4e7a
  1000:314d     A0 72 16         MOV AL,[0x1672]
  1000:3150     3C 01            CMP AL,0x1
  1000:3152     75 08            JNZ 0x1000:315c
  1000:3154     4B               DEC BX
  1000:3155     8A 07            MOV AL,byte ptr [BX]
  1000:3157     24 20            AND AL,0x20
  1000:3159     75 64            JNZ 0x1000:31bf
  1000:315b     43               INC BX

LAB_1000_315c:
  1000:315c     8A 07            MOV AL,byte ptr [BX]
  1000:315e     24 20            AND AL,0x20
  1000:3160     75 5D            JNZ 0x1000:31bf
  1000:3162     43               INC BX
  1000:3163     8A 07            MOV AL,byte ptr [BX]
  1000:3165     24 20            AND AL,0x20
  1000:3167     75 56            JNZ 0x1000:31bf
  1000:3169     43               INC BX
  1000:316a     8A 07            MOV AL,byte ptr [BX]
  1000:316c     24 20            AND AL,0x20
  1000:316e     75 4F            JNZ 0x1000:31bf
  1000:3170     A0 72 16         MOV AL,[0x1672]
  1000:3173     3C 02            CMP AL,0x2
  1000:3175     75 08            JNZ 0x1000:317f
  1000:3177     43               INC BX
  1000:3178     8A 07            MOV AL,byte ptr [BX]
  1000:317a     24 20            AND AL,0x20
  1000:317c     75 41            JNZ 0x1000:31bf
  1000:317e     4B               DEC BX

LAB_1000_317f:
  1000:317f     E8 E1 0C         CALL 0x1000:3e63
  1000:3182     BB 2A 16         MOV BX,0x162a
  1000:3185     FE 0F            DEC byte ptr [BX]
  1000:3187     8A 07            MOV AL,byte ptr [BX]
  1000:3189     3C 55            CMP AL,0x55
  1000:318b     73 11            JNC 0x1000:319e
  1000:318d     3C 07            CMP AL,0x7
  1000:318f     72 0D            JC 0x1000:319e
  1000:3191     BB 35 16         MOV BX,0x1635
  1000:3194     FE 0F            DEC byte ptr [BX]
  1000:3196     BB 37 16         MOV BX,0x1637
  1000:3199     FE 0F            DEC byte ptr [BX]
  1000:319b     EB 0E            JMP 0x1000:31ab

LAB_1000_319e:
  1000:319e     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:31a2     BA 80 FD         MOV DX,0xfd80
  1000:31a5     03 DA            ADD BX,DX
  1000:31a7     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_31ab:
  1000:31ab     BB 30 16         MOV BX,0x1630
  1000:31ae     FE 07            INC byte ptr [BX]
  1000:31b0     8A 07            MOV AL,byte ptr [BX]
  1000:31b2     3C 11            CMP AL,0x11
  1000:31b4     74 09            JZ 0x1000:31bf
  1000:31b6     B0 01            MOV AL,0x1
  1000:31b8     A2 2E 16         MOV [0x162e],AL
  1000:31bb     A2 2F 16         MOV [0x162f],AL
  1000:31be     C3               RET

LAB_1000_31bf:
  1000:31bf     A0 31 16         MOV AL,[0x1631]
  1000:31c2     0A C0            OR AL,AL
  1000:31c4     75 01            JNZ 0x1000:31c7
  1000:31c6     C3               RET

LAB_1000_31c7:
  1000:31c7     B0 02            MOV AL,0x2
  1000:31c9     A2 2E 16         MOV [0x162e],AL
  1000:31cc     C3               RET

FUN_1000_31cd:
  1000:31cd     BA 20 84         MOV DX,0x8420
  1000:31d0     E8 A7 1C         CALL 0x1000:4e7a
  1000:31d3     A0 72 16         MOV AL,[0x1672]
  1000:31d6     3C 01            CMP AL,0x1
  1000:31d8     75 08            JNZ 0x1000:31e2
  1000:31da     4B               DEC BX
  1000:31db     8A 07            MOV AL,byte ptr [BX]
  1000:31dd     24 20            AND AL,0x20
  1000:31df     75 79            JNZ 0x1000:325a
  1000:31e1     43               INC BX

LAB_1000_31e2:
  1000:31e2     8A 07            MOV AL,byte ptr [BX]
  1000:31e4     24 20            AND AL,0x20
  1000:31e6     75 72            JNZ 0x1000:325a
  1000:31e8     43               INC BX
  1000:31e9     8A 07            MOV AL,byte ptr [BX]
  1000:31eb     24 20            AND AL,0x20
  1000:31ed     75 6B            JNZ 0x1000:325a
  1000:31ef     43               INC BX
  1000:31f0     8A 07            MOV AL,byte ptr [BX]
  1000:31f2     24 20            AND AL,0x20
  1000:31f4     75 64            JNZ 0x1000:325a
  1000:31f6     A0 72 16         MOV AL,[0x1672]
  1000:31f9     3C 02            CMP AL,0x2
  1000:31fb     75 08            JNZ 0x1000:3205
  1000:31fd     43               INC BX
  1000:31fe     8A 07            MOV AL,byte ptr [BX]
  1000:3200     24 20            AND AL,0x20
  1000:3202     75 56            JNZ 0x1000:325a
  1000:3204     4B               DEC BX

LAB_1000_3205:
  1000:3205     A0 2E 16         MOV AL,[0x162e]
  1000:3208     0A C0            OR AL,AL
  1000:320a     75 19            JNZ 0x1000:3225
  1000:320c     B9 26 00         MOV CX,0x26
  1000:320f     03 D9            ADD BX,CX
  1000:3211     8A 07            MOV AL,byte ptr [BX]
  1000:3213     24 20            AND AL,0x20
  1000:3215     75 18            JNZ 0x1000:322f
  1000:3217     4B               DEC BX
  1000:3218     8A 07            MOV AL,byte ptr [BX]
  1000:321a     24 20            AND AL,0x20
  1000:321c     75 11            JNZ 0x1000:322f
  1000:321e     4B               DEC BX
  1000:321f     8A 07            MOV AL,byte ptr [BX]
  1000:3221     24 20            AND AL,0x20
  1000:3223     75 0A            JNZ 0x1000:322f

LAB_1000_3225:
  1000:3225     B0 02            MOV AL,0x2
  1000:3227     A2 2E 16         MOV [0x162e],AL
  1000:322a     32 C0            XOR AL,AL
  1000:322c     A2 30 16         MOV [0x1630],AL

LAB_1000_322f:
  1000:322f     E8 E5 0B         CALL 0x1000:3e17
  1000:3232     BB 2A 16         MOV BX,0x162a
  1000:3235     FE 07            INC byte ptr [BX]
  1000:3237     8A 07            MOV AL,byte ptr [BX]
  1000:3239     3C 56            CMP AL,0x56
  1000:323b     73 0F            JNC 0x1000:324c
  1000:323d     3C 08            CMP AL,0x8
  1000:323f     72 0B            JC 0x1000:324c
  1000:3241     BB 35 16         MOV BX,0x1635
  1000:3244     FE 07            INC byte ptr [BX]
  1000:3246     BB 37 16         MOV BX,0x1637
  1000:3249     FE 07            INC byte ptr [BX]
  1000:324b     C3               RET

LAB_1000_324c:
  1000:324c     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3250     BA 80 02         MOV DX,0x280
  1000:3253     03 DA            ADD BX,DX
  1000:3255     89 1E 28 16      MOV word ptr [0x1628],BX
  1000:3259     C3               RET

LAB_1000_325a:
  1000:325a     BB 2E 16         MOV BX,0x162e
  1000:325d     8A 07            MOV AL,byte ptr [BX]
  1000:325f     0A C0            OR AL,AL
  1000:3261     75 01            JNZ 0x1000:3264
  1000:3263     C3               RET

LAB_1000_3264:
  1000:3264     C6 07 00         MOV byte ptr [BX],0x0
  1000:3267     BB 31 16         MOV BX,0x1631
  1000:326a     8A 07            MOV AL,byte ptr [BX]
  1000:326c     0A C0            OR AL,AL
  1000:326e     74 01            JZ 0x1000:3271
  1000:3270     C3               RET

LAB_1000_3271:
  1000:3271     C6 07 01         MOV byte ptr [BX],0x1
  1000:3274     BB BA DD         MOV BX,0xddba
  1000:3277     A0 27 16         MOV AL,[0x1627]
  1000:327a     24 08            AND AL,0x8
  1000:327c     74 03            JZ 0x1000:3281
  1000:327e     BB BD DD         MOV BX,0xddbd

LAB_1000_3281:
  1000:3281     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:3285     C3               RET

caseD_4:
  1000:3286     BA 87 83         MOV DX,0x8387
  1000:3289     E8 EE 1B         CALL 0x1000:4e7a
  1000:328c     BA 26 00         MOV DX,0x26
  1000:328f     8A 07            MOV AL,byte ptr [BX]
  1000:3291     24 20            AND AL,0x20
  1000:3293     74 03            JZ 0x1000:3298
  1000:3295     E9 85 00         JMP 0x1000:331d

LAB_1000_3298:
  1000:3298     03 DA            ADD BX,DX
  1000:329a     8A 07            MOV AL,byte ptr [BX]
  1000:329c     24 20            AND AL,0x20
  1000:329e     75 7D            JNZ 0x1000:331d
  1000:32a0     03 DA            ADD BX,DX
  1000:32a2     8A 07            MOV AL,byte ptr [BX]
  1000:32a4     24 20            AND AL,0x20
  1000:32a6     75 75            JNZ 0x1000:331d
  1000:32a8     03 DA            ADD BX,DX
  1000:32aa     8A 07            MOV AL,byte ptr [BX]
  1000:32ac     24 20            AND AL,0x20
  1000:32ae     75 12            JNZ 0x1000:32c2
  1000:32b0     E8 AA 0B         CALL 0x1000:3e5d
  1000:32b3     BB 34 16         MOV BX,0x1634
  1000:32b6     FE 0F            DEC byte ptr [BX]
  1000:32b8     BB 36 16         MOV BX,0x1636
  1000:32bb     FE 0F            DEC byte ptr [BX]
  1000:32bd     B2 00            MOV DL,0x0
  1000:32bf     EB 5C            JMP 0x1000:331d

LAB_1000_32c2:
  1000:32c2     A0 2E 16         MOV AL,[0x162e]
  1000:32c5     0A C0            OR AL,AL
  1000:32c7     75 54            JNZ 0x1000:331d
  1000:32c9     B9 68 FF         MOV CX,0xff68
  1000:32cc     03 D9            ADD BX,CX
  1000:32ce     8A 07            MOV AL,byte ptr [BX]
  1000:32d0     24 20            AND AL,0x20
  1000:32d2     75 49            JNZ 0x1000:331d
  1000:32d4     43               INC BX
  1000:32d5     8A 07            MOV AL,byte ptr [BX]
  1000:32d7     24 20            AND AL,0x20
  1000:32d9     75 42            JNZ 0x1000:331d
  1000:32db     43               INC BX
  1000:32dc     8A 07            MOV AL,byte ptr [BX]
  1000:32de     24 20            AND AL,0x20
  1000:32e0     75 3B            JNZ 0x1000:331d
  1000:32e2     E8 78 0B         CALL 0x1000:3e5d
  1000:32e5     BB 34 16         MOV BX,0x1634
  1000:32e8     FE 0F            DEC byte ptr [BX]
  1000:32ea     BB 36 16         MOV BX,0x1636
  1000:32ed     FE 0F            DEC byte ptr [BX]
  1000:32ef     B2 00            MOV DL,0x0
  1000:32f1     E8 6F 0B         CALL 0x1000:3e63
  1000:32f4     BB 2A 16         MOV BX,0x162a
  1000:32f7     FE 0F            DEC byte ptr [BX]
  1000:32f9     8A 07            MOV AL,byte ptr [BX]
  1000:32fb     3C 55            CMP AL,0x55
  1000:32fd     73 11            JNC 0x1000:3310
  1000:32ff     3C 07            CMP AL,0x7
  1000:3301     72 0D            JC 0x1000:3310
  1000:3303     BB 35 16         MOV BX,0x1635
  1000:3306     FE 0F            DEC byte ptr [BX]
  1000:3308     BB 37 16         MOV BX,0x1637
  1000:330b     FE 0F            DEC byte ptr [BX]
  1000:330d     EB 0E            JMP 0x1000:331d

LAB_1000_3310:
  1000:3310     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3314     B9 80 FD         MOV CX,0xfd80
  1000:3317     03 D9            ADD BX,CX
  1000:3319     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_331d:
  1000:331d     A0 27 16         MOV AL,[0x1627]
  1000:3320     A8 08            TEST AL,0x8
  1000:3322     74 17            JZ 0x1000:333b
  1000:3324     3C 12            CMP AL,0x12
  1000:3326     73 13            JNC 0x1000:333b
  1000:3328     BB 31 16         MOV BX,0x1631
  1000:332b     8A 07            MOV AL,byte ptr [BX]
  1000:332d     0A C0            OR AL,AL
  1000:332f     75 0A            JNZ 0x1000:333b
  1000:3331     C6 07 01         MOV byte ptr [BX],0x1
  1000:3334     BB 96 DD         MOV BX,0xdd96
  1000:3337     89 1E 32 16      MOV word ptr [0x1632],BX

LAB_1000_333b:
  1000:333b     8A C2            MOV AL,DL
  1000:333d     0A C0            OR AL,AL
  1000:333f     74 01            JZ 0x1000:3342
  1000:3341     C3               RET

LAB_1000_3342:
  1000:3342     B0 01            MOV AL,0x1
  1000:3344     A2 72 16         MOV [0x1672],AL
  1000:3347     A0 31 16         MOV AL,[0x1631]
  1000:334a     0A C0            OR AL,AL
  1000:334c     75 03            JNZ 0x1000:3351
  1000:334e     E9 37 16         JMP 0x1000:4988

LAB_1000_3351:
  1000:3351     C3               RET

caseD_8:
  1000:3352     BA 8B 83         MOV DX,0x838b
  1000:3355     E8 22 1B         CALL 0x1000:4e7a
  1000:3358     BA 26 00         MOV DX,0x26
  1000:335b     8A 07            MOV AL,byte ptr [BX]
  1000:335d     24 20            AND AL,0x20
  1000:335f     74 03            JZ 0x1000:3364
  1000:3361     E9 85 00         JMP 0x1000:33e9

LAB_1000_3364:
  1000:3364     03 DA            ADD BX,DX
  1000:3366     8A 07            MOV AL,byte ptr [BX]
  1000:3368     24 20            AND AL,0x20
  1000:336a     75 7D            JNZ 0x1000:33e9
  1000:336c     03 DA            ADD BX,DX
  1000:336e     8A 07            MOV AL,byte ptr [BX]
  1000:3370     24 20            AND AL,0x20
  1000:3372     75 75            JNZ 0x1000:33e9
  1000:3374     03 DA            ADD BX,DX
  1000:3376     8A 07            MOV AL,byte ptr [BX]
  1000:3378     24 20            AND AL,0x20
  1000:337a     75 12            JNZ 0x1000:338e
  1000:337c     E8 92 0A         CALL 0x1000:3e11
  1000:337f     BB 34 16         MOV BX,0x1634
  1000:3382     FE 07            INC byte ptr [BX]
  1000:3384     BB 36 16         MOV BX,0x1636
  1000:3387     FE 07            INC byte ptr [BX]
  1000:3389     B2 00            MOV DL,0x0
  1000:338b     EB 5C            JMP 0x1000:33e9

LAB_1000_338e:
  1000:338e     A0 2E 16         MOV AL,[0x162e]
  1000:3391     0A C0            OR AL,AL
  1000:3393     75 54            JNZ 0x1000:33e9
  1000:3395     B9 68 FF         MOV CX,0xff68
  1000:3398     03 D9            ADD BX,CX
  1000:339a     8A 07            MOV AL,byte ptr [BX]
  1000:339c     24 20            AND AL,0x20
  1000:339e     75 49            JNZ 0x1000:33e9
  1000:33a0     4B               DEC BX
  1000:33a1     8A 07            MOV AL,byte ptr [BX]
  1000:33a3     24 20            AND AL,0x20
  1000:33a5     75 42            JNZ 0x1000:33e9
  1000:33a7     4B               DEC BX
  1000:33a8     8A 07            MOV AL,byte ptr [BX]
  1000:33aa     24 20            AND AL,0x20
  1000:33ac     75 3B            JNZ 0x1000:33e9
  1000:33ae     E8 60 0A         CALL 0x1000:3e11
  1000:33b1     BB 34 16         MOV BX,0x1634
  1000:33b4     FE 07            INC byte ptr [BX]
  1000:33b6     BB 36 16         MOV BX,0x1636
  1000:33b9     FE 07            INC byte ptr [BX]
  1000:33bb     B2 00            MOV DL,0x0
  1000:33bd     E8 A3 0A         CALL 0x1000:3e63
  1000:33c0     BB 2A 16         MOV BX,0x162a
  1000:33c3     FE 0F            DEC byte ptr [BX]
  1000:33c5     8A 07            MOV AL,byte ptr [BX]
  1000:33c7     3C 55            CMP AL,0x55
  1000:33c9     73 11            JNC 0x1000:33dc
  1000:33cb     3C 07            CMP AL,0x7
  1000:33cd     72 0D            JC 0x1000:33dc
  1000:33cf     BB 35 16         MOV BX,0x1635
  1000:33d2     FE 0F            DEC byte ptr [BX]
  1000:33d4     BB 37 16         MOV BX,0x1637
  1000:33d7     FE 0F            DEC byte ptr [BX]
  1000:33d9     EB 0E            JMP 0x1000:33e9

LAB_1000_33dc:
  1000:33dc     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:33e0     B9 80 FD         MOV CX,0xfd80
  1000:33e3     03 D9            ADD BX,CX
  1000:33e5     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_33e9:
  1000:33e9     A0 27 16         MOV AL,[0x1627]
  1000:33ec     A8 08            TEST AL,0x8
  1000:33ee     75 17            JNZ 0x1000:3407
  1000:33f0     3C 12            CMP AL,0x12
  1000:33f2     73 13            JNC 0x1000:3407
  1000:33f4     BB 31 16         MOV BX,0x1631
  1000:33f7     8A 07            MOV AL,byte ptr [BX]
  1000:33f9     0A C0            OR AL,AL
  1000:33fb     75 0A            JNZ 0x1000:3407
  1000:33fd     C6 07 01         MOV byte ptr [BX],0x1
  1000:3400     BB 92 DD         MOV BX,0xdd92
  1000:3403     89 1E 32 16      MOV word ptr [0x1632],BX

LAB_1000_3407:
  1000:3407     8A C2            MOV AL,DL
  1000:3409     0A C0            OR AL,AL
  1000:340b     74 01            JZ 0x1000:340e
  1000:340d     C3               RET

LAB_1000_340e:
  1000:340e     B0 02            MOV AL,0x2
  1000:3410     A2 72 16         MOV [0x1672],AL
  1000:3413     A0 31 16         MOV AL,[0x1631]
  1000:3416     0A C0            OR AL,AL
  1000:3418     75 03            JNZ 0x1000:341d
  1000:341a     E9 6B 15         JMP 0x1000:4988

LAB_1000_341d:
  1000:341d     C3               RET

caseD_5:
  1000:341e     E8 65 FE         CALL 0x1000:3286
  1000:3421     A0 35 16         MOV AL,[0x1635]
  1000:3424     8A E8            MOV CH,AL
  1000:3426     A0 7C 16         MOV AL,[0x167c]
  1000:3429     3A C5            CMP AL,CH
  1000:342b     74 01            JZ 0x1000:342e
  1000:342d     C3               RET

LAB_1000_342e:
  1000:342e     E9 0E FD         JMP 0x1000:313f

caseD_9:
  1000:3431     E8 1E FF         CALL 0x1000:3352
  1000:3434     A0 35 16         MOV AL,[0x1635]
  1000:3437     8A E8            MOV CH,AL
  1000:3439     A0 7C 16         MOV AL,[0x167c]
  1000:343c     3A C5            CMP AL,CH
  1000:343e     74 01            JZ 0x1000:3441
  1000:3440     C3               RET

LAB_1000_3441:
  1000:3441     E9 FB FC         JMP 0x1000:313f

FUN_1000_3444:
  1000:3444     A0 2E 16         MOV AL,[0x162e]
  1000:3447     0A C0            OR AL,AL
  1000:3449     74 01            JZ 0x1000:344c
  1000:344b     C3               RET

LAB_1000_344c:
  1000:344c     A0 3B 16         MOV AL,[0x163b]
  1000:344f     24 0F            AND AL,0xf
  1000:3451     74 01            JZ 0x1000:3454
  1000:3453     C3               RET

LAB_1000_3454:
  1000:3454     BA 78 76         MOV DX,0x7678
  1000:3457     E8 20 1A         CALL 0x1000:4e7a
  1000:345a     32 C0            XOR AL,AL
  1000:345c     B1 04            MOV CL,0x4
  1000:345e     B5 03            MOV CH,0x3
  1000:3460     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:3464     B0 01            MOV AL,0x1

LAB_1000_3466:
  1000:3466     3A 07            CMP AL,byte ptr [BX]
  1000:3468     73 0A            JNC 0x1000:3474
  1000:346a     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:346e     0A C1            OR AL,CL
  1000:3470     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_3474:
  1000:3474     D0 E9            SHR CL,0x1
  1000:3476     43               INC BX
  1000:3477     FE CD            DEC CH
  1000:3479     75 EB            JNZ 0x1000:3466
  1000:347b     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:347f     0A C0            OR AL,AL
  1000:3481     75 01            JNZ 0x1000:3484
  1000:3483     C3               RET

LAB_1000_3484:
  1000:3484     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:3488     B9 00 03         MOV CX,0x300

LAB_1000_348b:
  1000:348b     4B               DEC BX
  1000:348c     8A 07            MOV AL,byte ptr [BX]
  1000:348e     3C 0F            CMP AL,0xf
  1000:3490     72 06            JC 0x1000:3498
  1000:3492     3C 94            CMP AL,0x94
  1000:3494     73 02            JNC 0x1000:3498
  1000:3496     B1 01            MOV CL,0x1

LAB_1000_3498:
  1000:3498     FE CD            DEC CH
  1000:349a     75 EF            JNZ 0x1000:348b
  1000:349c     8A C1            MOV AL,CL
  1000:349e     0A C0            OR AL,AL
  1000:34a0     74 03            JZ 0x1000:34a5
  1000:34a2     E8 D1 20         CALL 0x1000:5576

LAB_1000_34a5:
  1000:34a5     A0 27 16         MOV AL,[0x1627]
  1000:34a8     24 08            AND AL,0x8
  1000:34aa     75 15            JNZ 0x1000:34c1
  1000:34ac     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:34b0     3C 01            CMP AL,0x1
  1000:34b2     B5 07            MOV CH,0x7
  1000:34b4     74 1D            JZ 0x1000:34d3
  1000:34b6     3C 04            CMP AL,0x4
  1000:34b8     B5 01            MOV CH,0x1
  1000:34ba     74 17            JZ 0x1000:34d3
  1000:34bc     B5 02            MOV CH,0x2
  1000:34be     EB 13            JMP 0x1000:34d3

LAB_1000_34c1:
  1000:34c1     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:34c5     3C 04            CMP AL,0x4
  1000:34c7     B5 0F            MOV CH,0xf
  1000:34c9     74 08            JZ 0x1000:34d3
  1000:34cb     3C 01            CMP AL,0x1
  1000:34cd     B5 09            MOV CH,0x9
  1000:34cf     74 02            JZ 0x1000:34d3
  1000:34d1     B5 0A            MOV CH,0xa

LAB_1000_34d3:
  1000:34d3     8A C5            MOV AL,CH
  1000:34d5     A2 27 16         MOV [0x1627],AL
  1000:34d8     C3               RET

FUN_1000_34d9:
  1000:34d9     BA 62 83         MOV DX,0x8362
  1000:34dc     E8 9B 19         CALL 0x1000:4e7a
  1000:34df     8A 07            MOV AL,byte ptr [BX]
  1000:34e1     24 20            AND AL,0x20
  1000:34e3     75 53            JNZ 0x1000:3538
  1000:34e5     43               INC BX
  1000:34e6     8A 07            MOV AL,byte ptr [BX]
  1000:34e8     24 20            AND AL,0x20
  1000:34ea     75 4C            JNZ 0x1000:3538
  1000:34ec     43               INC BX
  1000:34ed     8A 07            MOV AL,byte ptr [BX]
  1000:34ef     24 20            AND AL,0x20
  1000:34f1     75 45            JNZ 0x1000:3538
  1000:34f3     E8 6D 09         CALL 0x1000:3e63
  1000:34f6     BB 2A 16         MOV BX,0x162a
  1000:34f9     FE 0F            DEC byte ptr [BX]
  1000:34fb     8A 07            MOV AL,byte ptr [BX]
  1000:34fd     3C 55            CMP AL,0x55
  1000:34ff     73 11            JNC 0x1000:3512
  1000:3501     3C 07            CMP AL,0x7
  1000:3503     72 0D            JC 0x1000:3512
  1000:3505     BB 35 16         MOV BX,0x1635
  1000:3508     FE 0F            DEC byte ptr [BX]
  1000:350a     BB 37 16         MOV BX,0x1637
  1000:350d     FE 0F            DEC byte ptr [BX]
  1000:350f     EB 0E            JMP 0x1000:351f

LAB_1000_3512:
  1000:3512     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3516     BA 80 FD         MOV DX,0xfd80
  1000:3519     03 DA            ADD BX,DX
  1000:351b     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_351f:
  1000:351f     A0 31 16         MOV AL,[0x1631]
  1000:3522     0A C0            OR AL,AL
  1000:3524     74 01            JZ 0x1000:3527
  1000:3526     C3               RET

LAB_1000_3527:
  1000:3527     A0 27 16         MOV AL,[0x1627]
  1000:352a     3C 24            CMP AL,0x24
  1000:352c     75 01            JNZ 0x1000:352f
  1000:352e     C3               RET

LAB_1000_352f:
  1000:352f     BA E2 DC         MOV DX,0xdce2
  1000:3532     9A 63 47 00 10   CALLF 0x1000:4763
  1000:3537     C3               RET

LAB_1000_3538:
  1000:3538     BB 2B 16         MOV BX,0x162b
  1000:353b     8A 07            MOV AL,byte ptr [BX]
  1000:353d     3C 02            CMP AL,0x2
  1000:353f     75 03            JNZ 0x1000:3544
  1000:3541     E9 0B 04         JMP 0x1000:394f

LAB_1000_3544:
  1000:3544     FE C0            INC AL
  1000:3546     88 07            MOV byte ptr [BX],AL
  1000:3548     B5 05            MOV CH,0x5
  1000:354a     3C 01            CMP AL,0x1
  1000:354c     74 02            JZ 0x1000:3550
  1000:354e     B5 08            MOV CH,0x8

LAB_1000_3550:
  1000:3550     8A C5            MOV AL,CH
  1000:3552     A2 3B 16         MOV [0x163b],AL
  1000:3555     E9 89 FB         JMP 0x1000:30e1

FUN_1000_3558:
  1000:3558     BA FA 83         MOV DX,0x83fa
  1000:355b     E8 1C 19         CALL 0x1000:4e7a
  1000:355e     8A 07            MOV AL,byte ptr [BX]
  1000:3560     24 20            AND AL,0x20
  1000:3562     75 53            JNZ 0x1000:35b7
  1000:3564     43               INC BX
  1000:3565     8A 07            MOV AL,byte ptr [BX]
  1000:3567     24 20            AND AL,0x20
  1000:3569     75 4C            JNZ 0x1000:35b7
  1000:356b     43               INC BX
  1000:356c     8A 07            MOV AL,byte ptr [BX]
  1000:356e     24 20            AND AL,0x20
  1000:3570     75 45            JNZ 0x1000:35b7
  1000:3572     E8 A2 08         CALL 0x1000:3e17
  1000:3575     BB 2A 16         MOV BX,0x162a
  1000:3578     FE 07            INC byte ptr [BX]
  1000:357a     8A 07            MOV AL,byte ptr [BX]
  1000:357c     3C 56            CMP AL,0x56
  1000:357e     73 11            JNC 0x1000:3591
  1000:3580     3C 08            CMP AL,0x8
  1000:3582     72 0D            JC 0x1000:3591
  1000:3584     BB 35 16         MOV BX,0x1635
  1000:3587     FE 07            INC byte ptr [BX]
  1000:3589     BB 37 16         MOV BX,0x1637
  1000:358c     FE 07            INC byte ptr [BX]
  1000:358e     EB 0E            JMP 0x1000:359e

LAB_1000_3591:
  1000:3591     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3595     BA 80 02         MOV DX,0x280
  1000:3598     03 DA            ADD BX,DX
  1000:359a     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_359e:
  1000:359e     A0 31 16         MOV AL,[0x1631]
  1000:35a1     0A C0            OR AL,AL
  1000:35a3     74 01            JZ 0x1000:35a6
  1000:35a5     C3               RET

LAB_1000_35a6:
  1000:35a6     A0 27 16         MOV AL,[0x1627]
  1000:35a9     3C 2C            CMP AL,0x2c
  1000:35ab     75 01            JNZ 0x1000:35ae
  1000:35ad     C3               RET

LAB_1000_35ae:
  1000:35ae     BA 02 DD         MOV DX,0xdd02
  1000:35b1     9A 63 47 00 10   CALLF 0x1000:4763
  1000:35b6     C3               RET

LAB_1000_35b7:
  1000:35b7     BB 2B 16         MOV BX,0x162b
  1000:35ba     8A 07            MOV AL,byte ptr [BX]
  1000:35bc     3C 02            CMP AL,0x2
  1000:35be     75 03            JNZ 0x1000:35c3
  1000:35c0     E9 8C 03         JMP 0x1000:394f

LAB_1000_35c3:
  1000:35c3     FE C0            INC AL
  1000:35c5     88 07            MOV byte ptr [BX],AL
  1000:35c7     B5 0A            MOV CH,0xa
  1000:35c9     3C 01            CMP AL,0x1
  1000:35cb     74 02            JZ 0x1000:35cf
  1000:35cd     B5 04            MOV CH,0x4

LAB_1000_35cf:
  1000:35cf     8A C5            MOV AL,CH
  1000:35d1     A2 3B 16         MOV [0x163b],AL
  1000:35d4     E9 0A FB         JMP 0x1000:30e1

FUN_1000_35d7:
  1000:35d7     B0 01            MOV AL,0x1
  1000:35d9     A2 2C 16         MOV [0x162c],AL
  1000:35dc     BA 87 83         MOV DX,0x8387
  1000:35df     E8 98 18         CALL 0x1000:4e7a
  1000:35e2     BA 26 00         MOV DX,0x26
  1000:35e5     8A 07            MOV AL,byte ptr [BX]
  1000:35e7     24 20            AND AL,0x20
  1000:35e9     75 36            JNZ 0x1000:3621
  1000:35eb     03 DA            ADD BX,DX
  1000:35ed     8A 07            MOV AL,byte ptr [BX]
  1000:35ef     24 20            AND AL,0x20
  1000:35f1     75 2E            JNZ 0x1000:3621
  1000:35f3     03 DA            ADD BX,DX
  1000:35f5     8A 07            MOV AL,byte ptr [BX]
  1000:35f7     24 20            AND AL,0x20
  1000:35f9     75 26            JNZ 0x1000:3621
  1000:35fb     E8 5F 08         CALL 0x1000:3e5d
  1000:35fe     BB 34 16         MOV BX,0x1634
  1000:3601     FE 0F            DEC byte ptr [BX]
  1000:3603     BB 36 16         MOV BX,0x1636
  1000:3606     FE 0F            DEC byte ptr [BX]
  1000:3608     A0 31 16         MOV AL,[0x1631]
  1000:360b     0A C0            OR AL,AL
  1000:360d     74 01            JZ 0x1000:3610
  1000:360f     C3               RET

LAB_1000_3610:
  1000:3610     A0 27 16         MOV AL,[0x1627]
  1000:3613     3C 20            CMP AL,0x20
  1000:3615     75 01            JNZ 0x1000:3618
  1000:3617     C3               RET

LAB_1000_3618:
  1000:3618     BA A2 DC         MOV DX,0xdca2
  1000:361b     9A 63 47 00 10   CALLF 0x1000:4763
  1000:3620     C3               RET

LAB_1000_3621:
  1000:3621     BB 2B 16         MOV BX,0x162b
  1000:3624     8A 07            MOV AL,byte ptr [BX]
  1000:3626     3C 02            CMP AL,0x2
  1000:3628     75 03            JNZ 0x1000:362d
  1000:362a     E9 22 03         JMP 0x1000:394f

LAB_1000_362d:
  1000:362d     FE C0            INC AL
  1000:362f     88 07            MOV byte ptr [BX],AL
  1000:3631     B5 06            MOV CH,0x6
  1000:3633     3C 01            CMP AL,0x1
  1000:3635     74 02            JZ 0x1000:3639
  1000:3637     B5 01            MOV CH,0x1

LAB_1000_3639:
  1000:3639     8A C5            MOV AL,CH
  1000:363b     A2 3B 16         MOV [0x163b],AL
  1000:363e     E9 A0 FA         JMP 0x1000:30e1

FUN_1000_3641:
  1000:3641     B0 01            MOV AL,0x1
  1000:3643     A2 2C 16         MOV [0x162c],AL
  1000:3646     BA 8B 83         MOV DX,0x838b
  1000:3649     E8 2E 18         CALL 0x1000:4e7a
  1000:364c     BA 26 00         MOV DX,0x26
  1000:364f     8A 07            MOV AL,byte ptr [BX]
  1000:3651     24 20            AND AL,0x20
  1000:3653     75 36            JNZ 0x1000:368b
  1000:3655     03 DA            ADD BX,DX
  1000:3657     8A 07            MOV AL,byte ptr [BX]
  1000:3659     24 20            AND AL,0x20
  1000:365b     75 2E            JNZ 0x1000:368b
  1000:365d     03 DA            ADD BX,DX
  1000:365f     8A 07            MOV AL,byte ptr [BX]
  1000:3661     24 20            AND AL,0x20
  1000:3663     75 26            JNZ 0x1000:368b
  1000:3665     E8 A9 07         CALL 0x1000:3e11
  1000:3668     BB 34 16         MOV BX,0x1634
  1000:366b     FE 07            INC byte ptr [BX]
  1000:366d     BB 36 16         MOV BX,0x1636
  1000:3670     FE 07            INC byte ptr [BX]
  1000:3672     A0 31 16         MOV AL,[0x1631]
  1000:3675     0A C0            OR AL,AL
  1000:3677     74 01            JZ 0x1000:367a
  1000:3679     C3               RET

LAB_1000_367a:
  1000:367a     A0 27 16         MOV AL,[0x1627]
  1000:367d     3C 28            CMP AL,0x28
  1000:367f     75 01            JNZ 0x1000:3682
  1000:3681     C3               RET

LAB_1000_3682:
  1000:3682     BA C2 DC         MOV DX,0xdcc2
  1000:3685     9A 63 47 00 10   CALLF 0x1000:4763
  1000:368a     C3               RET

LAB_1000_368b:
  1000:368b     BB 2B 16         MOV BX,0x162b
  1000:368e     8A 07            MOV AL,byte ptr [BX]
  1000:3690     3C 02            CMP AL,0x2
  1000:3692     75 03            JNZ 0x1000:3697
  1000:3694     E9 B8 02         JMP 0x1000:394f

LAB_1000_3697:
  1000:3697     FE C0            INC AL
  1000:3699     88 07            MOV byte ptr [BX],AL
  1000:369b     B5 09            MOV CH,0x9
  1000:369d     3C 01            CMP AL,0x1
  1000:369f     74 02            JZ 0x1000:36a3
  1000:36a1     B5 02            MOV CH,0x2

LAB_1000_36a3:
  1000:36a3     8A C5            MOV AL,CH
  1000:36a5     A2 3B 16         MOV [0x163b],AL
  1000:36a8     E9 36 FA         JMP 0x1000:30e1

FUN_1000_36ab:
  1000:36ab     BA FB 83         MOV DX,0x83fb
  1000:36ae     E8 C9 17         CALL 0x1000:4e7a
  1000:36b1     8A 07            MOV AL,byte ptr [BX]
  1000:36b3     24 20            AND AL,0x20
  1000:36b5     75 73            JNZ 0x1000:372a
  1000:36b7     4B               DEC BX
  1000:36b8     8A 07            MOV AL,byte ptr [BX]
  1000:36ba     24 20            AND AL,0x20
  1000:36bc     75 6C            JNZ 0x1000:372a
  1000:36be     4B               DEC BX
  1000:36bf     8A 07            MOV AL,byte ptr [BX]
  1000:36c1     24 20            AND AL,0x20
  1000:36c3     75 65            JNZ 0x1000:372a
  1000:36c5     BA DA FF         MOV DX,0xffda
  1000:36c8     03 DA            ADD BX,DX
  1000:36ca     8A 07            MOV AL,byte ptr [BX]
  1000:36cc     24 20            AND AL,0x20
  1000:36ce     75 5A            JNZ 0x1000:372a
  1000:36d0     03 DA            ADD BX,DX
  1000:36d2     8A 07            MOV AL,byte ptr [BX]
  1000:36d4     24 20            AND AL,0x20
  1000:36d6     75 52            JNZ 0x1000:372a
  1000:36d8     E8 82 07         CALL 0x1000:3e5d
  1000:36db     BB 34 16         MOV BX,0x1634
  1000:36de     FE 0F            DEC byte ptr [BX]
  1000:36e0     BB 36 16         MOV BX,0x1636
  1000:36e3     FE 0F            DEC byte ptr [BX]
  1000:36e5     E8 2F 07         CALL 0x1000:3e17
  1000:36e8     BB 2A 16         MOV BX,0x162a
  1000:36eb     FE 07            INC byte ptr [BX]
  1000:36ed     8A 07            MOV AL,byte ptr [BX]
  1000:36ef     3C 56            CMP AL,0x56
  1000:36f1     73 11            JNC 0x1000:3704
  1000:36f3     3C 08            CMP AL,0x8
  1000:36f5     72 0D            JC 0x1000:3704
  1000:36f7     BB 35 16         MOV BX,0x1635
  1000:36fa     FE 07            INC byte ptr [BX]
  1000:36fc     BB 37 16         MOV BX,0x1637
  1000:36ff     FE 07            INC byte ptr [BX]
  1000:3701     EB 0E            JMP 0x1000:3711

LAB_1000_3704:
  1000:3704     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3708     BA 80 02         MOV DX,0x280
  1000:370b     03 DA            ADD BX,DX
  1000:370d     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_3711:
  1000:3711     A0 31 16         MOV AL,[0x1631]
  1000:3714     0A C0            OR AL,AL
  1000:3716     74 01            JZ 0x1000:3719
  1000:3718     C3               RET

LAB_1000_3719:
  1000:3719     A0 27 16         MOV AL,[0x1627]
  1000:371c     3C 2E            CMP AL,0x2e
  1000:371e     75 01            JNZ 0x1000:3721
  1000:3720     C3               RET

LAB_1000_3721:
  1000:3721     BA 62 DD         MOV DX,0xdd62
  1000:3724     9A 63 47 00 10   CALLF 0x1000:4763
  1000:3729     C3               RET

LAB_1000_372a:
  1000:372a     BB 2B 16         MOV BX,0x162b
  1000:372d     8A 07            MOV AL,byte ptr [BX]
  1000:372f     3C 02            CMP AL,0x2
  1000:3731     75 03            JNZ 0x1000:3736
  1000:3733     E9 19 02         JMP 0x1000:394f

LAB_1000_3736:
  1000:3736     FE C0            INC AL
  1000:3738     88 07            MOV byte ptr [BX],AL
  1000:373a     B5 02            MOV CH,0x2
  1000:373c     3C 01            CMP AL,0x1
  1000:373e     74 02            JZ 0x1000:3742
  1000:3740     B5 05            MOV CH,0x5

LAB_1000_3742:
  1000:3742     8A C5            MOV AL,CH
  1000:3744     A2 3B 16         MOV [0x163b],AL
  1000:3747     E9 97 F9         JMP 0x1000:30e1

FUN_1000_374a:
  1000:374a     BA FB 83         MOV DX,0x83fb
  1000:374d     E8 2A 17         CALL 0x1000:4e7a
  1000:3750     8A 07            MOV AL,byte ptr [BX]
  1000:3752     24 20            AND AL,0x20
  1000:3754     75 73            JNZ 0x1000:37c9
  1000:3756     43               INC BX
  1000:3757     8A 07            MOV AL,byte ptr [BX]
  1000:3759     24 20            AND AL,0x20
  1000:375b     75 6C            JNZ 0x1000:37c9
  1000:375d     43               INC BX
  1000:375e     8A 07            MOV AL,byte ptr [BX]
  1000:3760     24 20            AND AL,0x20
  1000:3762     75 65            JNZ 0x1000:37c9
  1000:3764     BA DA FF         MOV DX,0xffda
  1000:3767     03 DA            ADD BX,DX
  1000:3769     8A 07            MOV AL,byte ptr [BX]
  1000:376b     24 20            AND AL,0x20
  1000:376d     75 5A            JNZ 0x1000:37c9
  1000:376f     03 DA            ADD BX,DX
  1000:3771     8A 07            MOV AL,byte ptr [BX]
  1000:3773     24 20            AND AL,0x20
  1000:3775     75 52            JNZ 0x1000:37c9
  1000:3777     E8 97 06         CALL 0x1000:3e11
  1000:377a     BB 34 16         MOV BX,0x1634
  1000:377d     FE 07            INC byte ptr [BX]
  1000:377f     BB 36 16         MOV BX,0x1636
  1000:3782     FE 07            INC byte ptr [BX]
  1000:3784     E8 90 06         CALL 0x1000:3e17
  1000:3787     BB 2A 16         MOV BX,0x162a
  1000:378a     FE 07            INC byte ptr [BX]
  1000:378c     8A 07            MOV AL,byte ptr [BX]
  1000:378e     3C 56            CMP AL,0x56
  1000:3790     73 11            JNC 0x1000:37a3
  1000:3792     3C 08            CMP AL,0x8
  1000:3794     72 0D            JC 0x1000:37a3
  1000:3796     BB 35 16         MOV BX,0x1635
  1000:3799     FE 07            INC byte ptr [BX]
  1000:379b     BB 37 16         MOV BX,0x1637
  1000:379e     FE 07            INC byte ptr [BX]
  1000:37a0     EB 0E            JMP 0x1000:37b0

LAB_1000_37a3:
  1000:37a3     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:37a7     BA 80 02         MOV DX,0x280
  1000:37aa     03 DA            ADD BX,DX
  1000:37ac     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_37b0:
  1000:37b0     A0 31 16         MOV AL,[0x1631]
  1000:37b3     0A C0            OR AL,AL
  1000:37b5     74 01            JZ 0x1000:37b8
  1000:37b7     C3               RET

LAB_1000_37b8:
  1000:37b8     A0 27 16         MOV AL,[0x1627]
  1000:37bb     3C 2A            CMP AL,0x2a
  1000:37bd     75 01            JNZ 0x1000:37c0
  1000:37bf     C3               RET

LAB_1000_37c0:
  1000:37c0     BA 42 DD         MOV DX,0xdd42
  1000:37c3     9A 63 47 00 10   CALLF 0x1000:4763
  1000:37c8     C3               RET

LAB_1000_37c9:
  1000:37c9     BB 2B 16         MOV BX,0x162b
  1000:37cc     8A 07            MOV AL,byte ptr [BX]
  1000:37ce     3C 02            CMP AL,0x2
  1000:37d0     75 03            JNZ 0x1000:37d5
  1000:37d2     E9 7A 01         JMP 0x1000:394f

LAB_1000_37d5:
  1000:37d5     FE C0            INC AL
  1000:37d7     88 07            MOV byte ptr [BX],AL
  1000:37d9     B5 08            MOV CH,0x8
  1000:37db     3C 01            CMP AL,0x1
  1000:37dd     74 02            JZ 0x1000:37e1
  1000:37df     B5 06            MOV CH,0x6

LAB_1000_37e1:
  1000:37e1     8A C5            MOV AL,CH
  1000:37e3     A2 3B 16         MOV [0x163b],AL
  1000:37e6     E9 F8 F8         JMP 0x1000:30e1

FUN_1000_37e9:
  1000:37e9     BA 63 83         MOV DX,0x8363
  1000:37ec     E8 8B 16         CALL 0x1000:4e7a
  1000:37ef     8A 07            MOV AL,byte ptr [BX]
  1000:37f1     24 20            AND AL,0x20
  1000:37f3     75 73            JNZ 0x1000:3868
  1000:37f5     4B               DEC BX
  1000:37f6     8A 07            MOV AL,byte ptr [BX]
  1000:37f8     24 20            AND AL,0x20
  1000:37fa     75 6C            JNZ 0x1000:3868
  1000:37fc     4B               DEC BX
  1000:37fd     8A 07            MOV AL,byte ptr [BX]
  1000:37ff     24 20            AND AL,0x20
  1000:3801     75 65            JNZ 0x1000:3868
  1000:3803     BA 26 00         MOV DX,0x26
  1000:3806     03 DA            ADD BX,DX
  1000:3808     8A 07            MOV AL,byte ptr [BX]
  1000:380a     24 20            AND AL,0x20
  1000:380c     75 5A            JNZ 0x1000:3868
  1000:380e     03 DA            ADD BX,DX
  1000:3810     8A 07            MOV AL,byte ptr [BX]
  1000:3812     24 20            AND AL,0x20
  1000:3814     75 52            JNZ 0x1000:3868
  1000:3816     E8 44 06         CALL 0x1000:3e5d
  1000:3819     BB 34 16         MOV BX,0x1634
  1000:381c     FE 0F            DEC byte ptr [BX]
  1000:381e     BB 36 16         MOV BX,0x1636
  1000:3821     FE 0F            DEC byte ptr [BX]
  1000:3823     E8 3D 06         CALL 0x1000:3e63
  1000:3826     BB 2A 16         MOV BX,0x162a
  1000:3829     FE 0F            DEC byte ptr [BX]
  1000:382b     8A 07            MOV AL,byte ptr [BX]
  1000:382d     3C 55            CMP AL,0x55
  1000:382f     73 11            JNC 0x1000:3842
  1000:3831     3C 07            CMP AL,0x7
  1000:3833     72 0D            JC 0x1000:3842
  1000:3835     BB 35 16         MOV BX,0x1635
  1000:3838     FE 0F            DEC byte ptr [BX]
  1000:383a     BB 37 16         MOV BX,0x1637
  1000:383d     FE 0F            DEC byte ptr [BX]
  1000:383f     EB 0E            JMP 0x1000:384f

LAB_1000_3842:
  1000:3842     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3846     BA 80 FD         MOV DX,0xfd80
  1000:3849     03 DA            ADD BX,DX
  1000:384b     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_384f:
  1000:384f     A0 31 16         MOV AL,[0x1631]
  1000:3852     0A C0            OR AL,AL
  1000:3854     74 01            JZ 0x1000:3857
  1000:3856     C3               RET

LAB_1000_3857:
  1000:3857     A0 27 16         MOV AL,[0x1627]
  1000:385a     3C 22            CMP AL,0x22
  1000:385c     75 01            JNZ 0x1000:385f
  1000:385e     C3               RET

LAB_1000_385f:
  1000:385f     BA 82 DD         MOV DX,0xdd82
  1000:3862     9A 63 47 00 10   CALLF 0x1000:4763
  1000:3867     C3               RET

LAB_1000_3868:
  1000:3868     BB 2B 16         MOV BX,0x162b
  1000:386b     8A 07            MOV AL,byte ptr [BX]
  1000:386d     3C 02            CMP AL,0x2
  1000:386f     75 03            JNZ 0x1000:3874
  1000:3871     E9 DB 00         JMP 0x1000:394f

LAB_1000_3874:
  1000:3874     FE C0            INC AL
  1000:3876     88 07            MOV byte ptr [BX],AL
  1000:3878     B5 04            MOV CH,0x4
  1000:387a     3C 01            CMP AL,0x1
  1000:387c     74 02            JZ 0x1000:3880
  1000:387e     B5 09            MOV CH,0x9

LAB_1000_3880:
  1000:3880     8A C5            MOV AL,CH
  1000:3882     A2 3B 16         MOV [0x163b],AL
  1000:3885     E9 59 F8         JMP 0x1000:30e1

FUN_1000_3888:
  1000:3888     BA 63 83         MOV DX,0x8363
  1000:388b     E8 EC 15         CALL 0x1000:4e7a
  1000:388e     8A 07            MOV AL,byte ptr [BX]
  1000:3890     24 20            AND AL,0x20
  1000:3892     75 73            JNZ 0x1000:3907
  1000:3894     43               INC BX
  1000:3895     8A 07            MOV AL,byte ptr [BX]
  1000:3897     24 20            AND AL,0x20
  1000:3899     75 6C            JNZ 0x1000:3907
  1000:389b     43               INC BX
  1000:389c     8A 07            MOV AL,byte ptr [BX]
  1000:389e     24 20            AND AL,0x20
  1000:38a0     75 65            JNZ 0x1000:3907
  1000:38a2     BA 26 00         MOV DX,0x26
  1000:38a5     03 DA            ADD BX,DX
  1000:38a7     8A 07            MOV AL,byte ptr [BX]
  1000:38a9     24 20            AND AL,0x20
  1000:38ab     75 5A            JNZ 0x1000:3907
  1000:38ad     03 DA            ADD BX,DX
  1000:38af     8A 07            MOV AL,byte ptr [BX]
  1000:38b1     24 20            AND AL,0x20
  1000:38b3     75 52            JNZ 0x1000:3907
  1000:38b5     E8 59 05         CALL 0x1000:3e11
  1000:38b8     BB 34 16         MOV BX,0x1634
  1000:38bb     FE 07            INC byte ptr [BX]
  1000:38bd     BB 36 16         MOV BX,0x1636
  1000:38c0     FE 07            INC byte ptr [BX]
  1000:38c2     E8 9E 05         CALL 0x1000:3e63
  1000:38c5     BB 2A 16         MOV BX,0x162a
  1000:38c8     FE 0F            DEC byte ptr [BX]
  1000:38ca     8A 07            MOV AL,byte ptr [BX]
  1000:38cc     3C 55            CMP AL,0x55
  1000:38ce     73 11            JNC 0x1000:38e1
  1000:38d0     3C 07            CMP AL,0x7
  1000:38d2     72 0D            JC 0x1000:38e1
  1000:38d4     BB 35 16         MOV BX,0x1635
  1000:38d7     FE 0F            DEC byte ptr [BX]
  1000:38d9     BB 37 16         MOV BX,0x1637
  1000:38dc     FE 0F            DEC byte ptr [BX]
  1000:38de     EB 0E            JMP 0x1000:38ee

LAB_1000_38e1:
  1000:38e1     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:38e5     BA 80 FD         MOV DX,0xfd80
  1000:38e8     03 DA            ADD BX,DX
  1000:38ea     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_38ee:
  1000:38ee     A0 31 16         MOV AL,[0x1631]
  1000:38f1     0A C0            OR AL,AL
  1000:38f3     74 01            JZ 0x1000:38f6
  1000:38f5     C3               RET

LAB_1000_38f6:
  1000:38f6     A0 27 16         MOV AL,[0x1627]
  1000:38f9     3C 26            CMP AL,0x26
  1000:38fb     75 01            JNZ 0x1000:38fe
  1000:38fd     C3               RET

LAB_1000_38fe:
  1000:38fe     BA 22 DD         MOV DX,0xdd22
  1000:3901     9A 63 47 00 10   CALLF 0x1000:4763
  1000:3906     C3               RET

LAB_1000_3907:
  1000:3907     BB 2B 16         MOV BX,0x162b
  1000:390a     8A 07            MOV AL,byte ptr [BX]
  1000:390c     3C 02            CMP AL,0x2
  1000:390e     74 3F            JZ 0x1000:394f
  1000:3910     FE C0            INC AL
  1000:3912     88 07            MOV byte ptr [BX],AL
  1000:3914     B5 01            MOV CH,0x1
  1000:3916     3C 01            CMP AL,0x1
  1000:3918     74 02            JZ 0x1000:391c
  1000:391a     B5 0A            MOV CH,0xa

LAB_1000_391c:
  1000:391c     8A C5            MOV AL,CH
  1000:391e     A2 3B 16         MOV [0x163b],AL
  1000:3921     E9 BD F7         JMP 0x1000:30e1

caseD_2:

caseD_3:

caseD_6:

caseD_a:
  1000:3924     A0 90 16         MOV AL,[0x1690]
  1000:3927     D0 C8            ROR AL,0x1
  1000:3929     73 01            JNC 0x1000:392c
  1000:392b     C3               RET

LAB_1000_392c:
  1000:392c     BB 31 16         MOV BX,0x1631
  1000:392f     8A 07            MOV AL,byte ptr [BX]
  1000:3931     3C 02            CMP AL,0x2
  1000:3933     75 01            JNZ 0x1000:3936
  1000:3935     C3               RET

LAB_1000_3936:
  1000:3936     C6 07 02         MOV byte ptr [BX],0x2
  1000:3939     A0 27 16         MOV AL,[0x1627]
  1000:393c     3C 10            CMP AL,0x10
  1000:393e     73 07            JNC 0x1000:3947
  1000:3940     24 08            AND AL,0x8
  1000:3942     BB 9A DD         MOV BX,0xdd9a
  1000:3945     74 03            JZ 0x1000:394a

LAB_1000_3947:
  1000:3947     BB A2 DD         MOV BX,0xdda2

LAB_1000_394a:
  1000:394a     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:394e     C3               RET

FUN_1000_394f:
  1000:394f     BA FA 83         MOV DX,0x83fa
  1000:3952     E8 25 15         CALL 0x1000:4e7a
  1000:3955     8A 07            MOV AL,byte ptr [BX]
  1000:3957     24 20            AND AL,0x20
  1000:3959     75 13            JNZ 0x1000:396e
  1000:395b     43               INC BX
  1000:395c     8A 07            MOV AL,byte ptr [BX]
  1000:395e     24 20            AND AL,0x20
  1000:3960     75 0B            JNZ 0x1000:396d
  1000:3962     43               INC BX
  1000:3963     8A 07            MOV AL,byte ptr [BX]
  1000:3965     24 20            AND AL,0x20
  1000:3967     75 03            JNZ 0x1000:396c
  1000:3969     EB 48            JMP 0x1000:39b3

LAB_1000_396c:
  1000:396c     4B               DEC BX

LAB_1000_396d:
  1000:396d     4B               DEC BX

LAB_1000_396e:
  1000:396e     BA 68 FF         MOV DX,0xff68
  1000:3971     03 DA            ADD BX,DX
  1000:3973     8A 07            MOV AL,byte ptr [BX]
  1000:3975     24 20            AND AL,0x20
  1000:3977     75 61            JNZ 0x1000:39da
  1000:3979     43               INC BX
  1000:397a     8A 07            MOV AL,byte ptr [BX]
  1000:397c     24 20            AND AL,0x20
  1000:397e     75 5A            JNZ 0x1000:39da
  1000:3980     43               INC BX
  1000:3981     8A 07            MOV AL,byte ptr [BX]
  1000:3983     24 20            AND AL,0x20
  1000:3985     75 53            JNZ 0x1000:39da
  1000:3987     E8 D9 04         CALL 0x1000:3e63
  1000:398a     BB 2A 16         MOV BX,0x162a
  1000:398d     FE 0F            DEC byte ptr [BX]
  1000:398f     8A 07            MOV AL,byte ptr [BX]
  1000:3991     3C 55            CMP AL,0x55
  1000:3993     73 11            JNC 0x1000:39a6
  1000:3995     3C 07            CMP AL,0x7
  1000:3997     72 0D            JC 0x1000:39a6
  1000:3999     BB 35 16         MOV BX,0x1635
  1000:399c     FE 0F            DEC byte ptr [BX]
  1000:399e     BB 37 16         MOV BX,0x1637
  1000:39a1     FE 0F            DEC byte ptr [BX]
  1000:39a3     EB 0E            JMP 0x1000:39b3

LAB_1000_39a6:
  1000:39a6     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:39aa     BA 80 FD         MOV DX,0xfd80
  1000:39ad     03 DA            ADD BX,DX
  1000:39af     89 1E 28 16      MOV word ptr [0x1628],BX

LAB_1000_39b3:
  1000:39b3     BB 31 16         MOV BX,0x1631
  1000:39b6     8A 07            MOV AL,byte ptr [BX]
  1000:39b8     3C 02            CMP AL,0x2
  1000:39ba     75 01            JNZ 0x1000:39bd
  1000:39bc     C3               RET

LAB_1000_39bd:
  1000:39bd     B0 02            MOV AL,0x2
  1000:39bf     88 07            MOV byte ptr [BX],AL
  1000:39c1     A2 2E 16         MOV [0x162e],AL
  1000:39c4     A0 27 16         MOV AL,[0x1627]
  1000:39c7     24 0C            AND AL,0xc
  1000:39c9     BB AA DD         MOV BX,0xddaa
  1000:39cc     74 07            JZ 0x1000:39d5
  1000:39ce     3C 0C            CMP AL,0xc
  1000:39d0     74 03            JZ 0x1000:39d5
  1000:39d2     BB B2 DD         MOV BX,0xddb2

LAB_1000_39d5:
  1000:39d5     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:39d9     C3               RET

LAB_1000_39da:
  1000:39da     BF 3B 16         MOV DI,0x163b
  1000:39dd     8B D7            MOV DX,DI
  1000:39df     A0 2B 16         MOV AL,[0x162b]
  1000:39e2     0A C0            OR AL,AL
  1000:39e4     75 05            JNZ 0x1000:39eb
  1000:39e6     8A 05            MOV AL,byte ptr [DI]
  1000:39e8     E9 F6 F6         JMP 0x1000:30e1

LAB_1000_39eb:
  1000:39eb     A0 2C 16         MOV AL,[0x162c]
  1000:39ee     0A C0            OR AL,AL
  1000:39f0     75 12            JNZ 0x1000:3a04
  1000:39f2     A0 3C 16         MOV AL,[0x163c]
  1000:39f5     8A E8            MOV CH,AL
  1000:39f7     8A 05            MOV AL,byte ptr [DI]
  1000:39f9     3A C5            CMP AL,CH
  1000:39fb     74 07            JZ 0x1000:3a04
  1000:39fd     8A C5            MOV AL,CH
  1000:39ff     88 05            MOV byte ptr [DI],AL
  1000:3a01     E9 DD F6         JMP 0x1000:30e1

LAB_1000_3a04:
  1000:3a04     BB 39 16         MOV BX,0x1639
  1000:3a07     FE 07            INC byte ptr [BX]
  1000:3a09     8A 07            MOV AL,byte ptr [BX]
  1000:3a0b     3C 08            CMP AL,0x8
  1000:3a0d     75 01            JNZ 0x1000:3a10
  1000:3a0f     C3               RET

LAB_1000_3a10:
  1000:3a10     8A 05            MOV AL,byte ptr [DI]
  1000:3a12     24 0F            AND AL,0xf
  1000:3a14     32 E4            XOR AH,AH
  1000:3a16     05 D0 DD         ADD AX,0xddd0
  1000:3a19     8B D8            MOV BX,AX
  1000:3a1b     8A 07            MOV AL,byte ptr [BX]
  1000:3a1d     88 05            MOV byte ptr [DI],AL
  1000:3a1f     8A E8            MOV CH,AL
  1000:3a21     A0 39 16         MOV AL,[0x1639]
  1000:3a24     FE C0            INC AL
  1000:3a26     24 07            AND AL,0x7
  1000:3a28     74 08            JZ 0x1000:3a32
  1000:3a2a     A2 39 16         MOV [0x1639],AL
  1000:3a2d     8A C5            MOV AL,CH
  1000:3a2f     E9 AF F6         JMP 0x1000:30e1

LAB_1000_3a32:
  1000:3a32     BB 27 16         MOV BX,0x1627
  1000:3a35     FE 07            INC byte ptr [BX]
  1000:3a37     8A 07            MOV AL,byte ptr [BX]
  1000:3a39     3C 30            CMP AL,0x30
  1000:3a3b     74 01            JZ 0x1000:3a3e
  1000:3a3d     C3               RET

LAB_1000_3a3e:
  1000:3a3e     C6 07 20         MOV byte ptr [BX],0x20
  1000:3a41     C3               RET

FUN_1000_3a42:
  1000:3a42     A0 B9 16         MOV AL,[0x16b9]
  1000:3a45     0A C0            OR AL,AL
  1000:3a47     74 01            JZ 0x1000:3a4a
  1000:3a49     C3               RET

LAB_1000_3a4a:
  1000:3a4a     A0 B6 16         MOV AL,[0x16b6]
  1000:3a4d     0A C0            OR AL,AL
  1000:3a4f     74 01            JZ 0x1000:3a52
  1000:3a51     C3               RET

LAB_1000_3a52:
  1000:3a52     A0 2D 16         MOV AL,[0x162d]
  1000:3a55     0A C0            OR AL,AL
  1000:3a57     74 03            JZ 0x1000:3a5c
  1000:3a59     E9 8B 00         JMP 0x1000:3ae7

LAB_1000_3a5c:
  1000:3a5c     A0 2F 16         MOV AL,[0x162f]
  1000:3a5f     0A C0            OR AL,AL
  1000:3a61     75 03            JNZ 0x1000:3a66
  1000:3a63     E8 67 F7         CALL 0x1000:31cd

LAB_1000_3a66:
  1000:3a66     A0 2E 16         MOV AL,[0x162e]
  1000:3a69     0A C0            OR AL,AL
  1000:3a6b     74 0F            JZ 0x1000:3a7c
  1000:3a6d     A0 31 16         MOV AL,[0x1631]
  1000:3a70     3C 02            CMP AL,0x2
  1000:3a72     74 08            JZ 0x1000:3a7c
  1000:3a74     A0 27 16         MOV AL,[0x1627]
  1000:3a77     24 08            AND AL,0x8
  1000:3a79     A2 27 16         MOV [0x1627],AL

LAB_1000_3a7c:
  1000:3a7c     E8 C5 F9         CALL 0x1000:3444
  1000:3a7f     A0 31 16         MOV AL,[0x1631]
  1000:3a82     0A C0            OR AL,AL
  1000:3a84     75 01            JNZ 0x1000:3a87
  1000:3a86     C3               RET

LAB_1000_3a87:
  1000:3a87     3C 02            CMP AL,0x2
  1000:3a89     74 22            JZ 0x1000:3aad
  1000:3a8b     8B 1E 32 16      MOV BX,word ptr [0x1632]
  1000:3a8f     8A 2F            MOV CH,byte ptr [BX]
  1000:3a91     43               INC BX
  1000:3a92     8A 07            MOV AL,byte ptr [BX]
  1000:3a94     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:3a98     0A C0            OR AL,AL
  1000:3a9a     74 06            JZ 0x1000:3aa2
  1000:3a9c     8A C5            MOV AL,CH
  1000:3a9e     A2 27 16         MOV [0x1627],AL
  1000:3aa1     C3               RET

LAB_1000_3aa2:
  1000:3aa2     8A C5            MOV AL,CH
  1000:3aa4     A2 27 16         MOV [0x1627],AL
  1000:3aa7     32 C0            XOR AL,AL
  1000:3aa9     A2 31 16         MOV [0x1631],AL
  1000:3aac     C3               RET

LAB_1000_3aad:
  1000:3aad     8B 1E 32 16      MOV BX,word ptr [0x1632]
  1000:3ab1     8A 2F            MOV CH,byte ptr [BX]
  1000:3ab3     43               INC BX
  1000:3ab4     8A 07            MOV AL,byte ptr [BX]
  1000:3ab6     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:3aba     0A C0            OR AL,AL
  1000:3abc     74 06            JZ 0x1000:3ac4
  1000:3abe     8A C5            MOV AL,CH
  1000:3ac0     A2 27 16         MOV [0x1627],AL
  1000:3ac3     C3               RET

LAB_1000_3ac4:
  1000:3ac4     A2 31 16         MOV [0x1631],AL
  1000:3ac7     FE C0            INC AL
  1000:3ac9     A2 2D 16         MOV [0x162d],AL
  1000:3acc     8A C5            MOV AL,CH
  1000:3ace     A2 27 16         MOV [0x1627],AL
  1000:3ad1     A0 27 16         MOV AL,[0x1627]
  1000:3ad4     3C 20            CMP AL,0x20
  1000:3ad6     B5 04            MOV CH,0x4
  1000:3ad8     74 02            JZ 0x1000:3adc
  1000:3ada     B5 08            MOV CH,0x8

LAB_1000_3adc:
  1000:3adc     8A C5            MOV AL,CH
  1000:3ade     A2 3B 16         MOV [0x163b],AL
  1000:3ae1     E8 CD D1         CALL 0x1000:0cb1
  1000:3ae4     E9 40 D1         JMP 0x1000:0c27

LAB_1000_3ae7:
  1000:3ae7     A0 31 16         MOV AL,[0x1631]
  1000:3aea     0A C0            OR AL,AL
  1000:3aec     75 01            JNZ 0x1000:3aef
  1000:3aee     C3               RET

LAB_1000_3aef:
  1000:3aef     3C 02            CMP AL,0x2
  1000:3af1     74 1A            JZ 0x1000:3b0d
  1000:3af3     8B 1E 32 16      MOV BX,word ptr [0x1632]
  1000:3af7     8A 2F            MOV CH,byte ptr [BX]
  1000:3af9     43               INC BX
  1000:3afa     8A 07            MOV AL,byte ptr [BX]
  1000:3afc     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:3b00     0A C0            OR AL,AL
  1000:3b02     75 03            JNZ 0x1000:3b07
  1000:3b04     A2 31 16         MOV [0x1631],AL

LAB_1000_3b07:
  1000:3b07     8A C5            MOV AL,CH
  1000:3b09     A2 27 16         MOV [0x1627],AL
  1000:3b0c     C3               RET

LAB_1000_3b0d:
  1000:3b0d     8B 1E 32 16      MOV BX,word ptr [0x1632]
  1000:3b11     8A 2F            MOV CH,byte ptr [BX]
  1000:3b13     43               INC BX
  1000:3b14     8A 07            MOV AL,byte ptr [BX]
  1000:3b16     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:3b1a     0A C0            OR AL,AL
  1000:3b1c     75 0E            JNZ 0x1000:3b2c
  1000:3b1e     A2 31 16         MOV [0x1631],AL
  1000:3b21     A2 2D 16         MOV [0x162d],AL
  1000:3b24     51               PUSH CX
  1000:3b25     E8 89 D1         CALL 0x1000:0cb1
  1000:3b28     E8 FC D0         CALL 0x1000:0c27
  1000:3b2b     59               POP CX

LAB_1000_3b2c:
  1000:3b2c     8A C5            MOV AL,CH
  1000:3b2e     A2 27 16         MOV [0x1627],AL
  1000:3b31     C3               RET

FUN_1000_3b32:
  1000:3b32     FE C8            DEC AL
  1000:3b34     75 59            JNZ 0x1000:3b8f
  1000:3b36     FE C0            INC AL
  1000:3b38     A2 84 16         MOV [0x1684],AL
  1000:3b3b     C7 06 B7 16 00 00   MOV word ptr [0x16b7],0x0
  1000:3b41     FE C0            INC AL
  1000:3b43     A2 B9 16         MOV [0x16b9],AL
  1000:3b46     B5 00            MOV CH,0x0
  1000:3b48     B1 14            MOV CL,0x14
  1000:3b4a     A0 27 16         MOV AL,[0x1627]
  1000:3b4d     24 08            AND AL,0x8
  1000:3b4f     74 04            JZ 0x1000:3b55
  1000:3b51     B5 01            MOV CH,0x1
  1000:3b53     B1 17            MOV CL,0x17

LAB_1000_3b55:
  1000:3b55     8A C5            MOV AL,CH
  1000:3b57     2E A2 50 30      MOV CS:[0x3050],AL
  1000:3b5b     B0 28            MOV AL,0x28
  1000:3b5d     2E A2 53 30      MOV CS:[0x3053],AL
  1000:3b61     A0 2D 16         MOV AL,[0x162d]
  1000:3b64     8A E8            MOV CH,AL
  1000:3b66     0A C0            OR AL,AL
  1000:3b68     74 11            JZ 0x1000:3b7b
  1000:3b6a     A0 27 16         MOV AL,[0x1627]
  1000:3b6d     8A C8            MOV CL,AL
  1000:3b6f     3C 20            CMP AL,0x20
  1000:3b71     73 08            JNC 0x1000:3b7b
  1000:3b73     B1 20            MOV CL,0x20
  1000:3b75     3C 1D            CMP AL,0x1d
  1000:3b77     72 02            JC 0x1000:3b7b
  1000:3b79     B1 28            MOV CL,0x28

LAB_1000_3b7b:
  1000:3b7b     8A C1            MOV AL,CL
  1000:3b7d     A2 27 16         MOV [0x1627],AL
  1000:3b80     2E A2 52 30      MOV CS:[0x3052],AL
  1000:3b84     32 C0            XOR AL,AL
  1000:3b86     2E A2 51 30      MOV CS:[0x3051],AL
  1000:3b8a     2E A2 E1 4B      MOV CS:[0x4be1],AL
  1000:3b8e     C3               RET

LAB_1000_3b8f:
  1000:3b8f     FE C8            DEC AL
  1000:3b91     75 57            JNZ 0x1000:3bea
  1000:3b93     A0 84 16         MOV AL,[0x1684]
  1000:3b96     0A C0            OR AL,AL
  1000:3b98     75 2A            JNZ 0x1000:3bc4
  1000:3b9a     E8 0C 01         CALL 0x1000:3ca9
  1000:3b9d     75 03            JNZ 0x1000:3ba2
  1000:3b9f     E9 CE 00         JMP 0x1000:3c70

LAB_1000_3ba2:
  1000:3ba2     E8 A2 00         CALL 0x1000:3c47
  1000:3ba5     BB 51 30         MOV BX,0x3051
  1000:3ba8     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:3bab     2E FE 07         INC byte ptr CS:[BX]
  1000:3bae     3C 06            CMP AL,0x6
  1000:3bb0     74 0C            JZ 0x1000:3bbe
  1000:3bb2     32 E4            XOR AH,AH
  1000:3bb4     03 C2            ADD AX,DX
  1000:3bb6     8B F8            MOV DI,AX
  1000:3bb8     8A 05            MOV AL,byte ptr [DI]
  1000:3bba     A2 27 16         MOV [0x1627],AL
  1000:3bbd     C3               RET

LAB_1000_3bbe:
  1000:3bbe     BB B9 16         MOV BX,0x16b9
  1000:3bc1     FE 07            INC byte ptr [BX]
  1000:3bc3     C3               RET

LAB_1000_3bc4:
  1000:3bc4     FE C8            DEC AL
  1000:3bc6     75 03            JNZ 0x1000:3bcb
  1000:3bc8     E8 2B 00         CALL 0x1000:3bf6

LAB_1000_3bcb:
  1000:3bcb     2E A0 52 30      MOV AL,CS:[0x3052]
  1000:3bcf     A2 27 16         MOV [0x1627],AL
  1000:3bd2     81 3E B7 16 04 01   CMP word ptr [0x16b7],0x104
  1000:3bd8     72 0A            JC 0x1000:3be4
  1000:3bda     C6 06 84 16 00   MOV byte ptr [0x1684],0x0
  1000:3bdf     32 C0            XOR AL,AL
  1000:3be1     EB 3E            JMP 0x1000:3c21

LAB_1000_3be4:
  1000:3be4     E8 89 00         CALL 0x1000:3c70
  1000:3be7     E9 BF 00         JMP 0x1000:3ca9

LAB_1000_3bea:
  1000:3bea     BB 53 30         MOV BX,0x3053
  1000:3bed     2E FE 0F         DEC byte ptr CS:[BX]
  1000:3bf0     74 01            JZ 0x1000:3bf3
  1000:3bf2     C3               RET

LAB_1000_3bf3:
  1000:3bf3     E9 17 F1         JMP 0x1000:2d0d

FUN_1000_3bf6:
  1000:3bf6     06               PUSH ES
  1000:3bf7     8C D8            MOV AX,DS
  1000:3bf9     8E C0            MOV ES,AX
  1000:3bfb     C6 06 84 16 02   MOV byte ptr [0x1684],0x2
  1000:3c00     A0 2D 16         MOV AL,[0x162d]
  1000:3c03     0A C0            OR AL,AL
  1000:3c05     75 0D            JNZ 0x1000:3c14
  1000:3c07     BE F6 E4         MOV SI,0xe4f6
  1000:3c0a     BF 43 3D         MOV DI,0x3d43
  1000:3c0d     B9 20 03         MOV CX,0x320
  1000:3c10     F3 A5            MOVSW.REP ES:DI,SI
  1000:3c12     07               POP ES
  1000:3c13     C3               RET

LAB_1000_3c14:
  1000:3c14     BE 36 EB         MOV SI,0xeb36
  1000:3c17     BF A3 61         MOV DI,0x61a3
  1000:3c1a     B9 A0 01         MOV CX,0x1a0
  1000:3c1d     F3 A5            MOVSW.REP ES:DI,SI
  1000:3c1f     07               POP ES
  1000:3c20     C3               RET

FUN_1000_3c21:
  1000:3c21     06               PUSH ES
  1000:3c22     8C D8            MOV AX,DS
  1000:3c24     8E C0            MOV ES,AX
  1000:3c26     A0 2D 16         MOV AL,[0x162d]
  1000:3c29     0A C0            OR AL,AL
  1000:3c2b     75 0D            JNZ 0x1000:3c3a
  1000:3c2d     BE D7 E1         MOV SI,0xe1d7
  1000:3c30     BF D9 DF         MOV DI,0xdfd9
  1000:3c33     B9 24 00         MOV CX,0x24
  1000:3c36     F3 A5            MOVSW.REP ES:DI,SI
  1000:3c38     07               POP ES
  1000:3c39     C3               RET

LAB_1000_3c3a:
  1000:3c3a     BE 1F E2         MOV SI,0xe21f
  1000:3c3d     BF 11 E1         MOV DI,0xe111
  1000:3c40     B9 12 00         MOV CX,0x12
  1000:3c43     F3 A5            MOVSW.REP ES:DI,SI
  1000:3c45     07               POP ES
  1000:3c46     C3               RET

FUN_1000_3c47:
  1000:3c47     2E A0 50 30      MOV AL,CS:[0x3050]
  1000:3c4b     8A E8            MOV CH,AL
  1000:3c4d     A0 2D 16         MOV AL,[0x162d]
  1000:3c50     0A C0            OR AL,AL
  1000:3c52     75 0E            JNZ 0x1000:3c62
  1000:3c54     BA CC DE         MOV DX,0xdecc
  1000:3c57     8A C5            MOV AL,CH
  1000:3c59     0A C0            OR AL,AL
  1000:3c5b     75 01            JNZ 0x1000:3c5e
  1000:3c5d     C3               RET

LAB_1000_3c5e:
  1000:3c5e     BA D2 DE         MOV DX,0xded2
  1000:3c61     C3               RET

LAB_1000_3c62:
  1000:3c62     BA D8 DE         MOV DX,0xded8
  1000:3c65     8A C5            MOV AL,CH
  1000:3c67     0A C0            OR AL,AL
  1000:3c69     74 01            JZ 0x1000:3c6c
  1000:3c6b     C3               RET

LAB_1000_3c6c:
  1000:3c6c     BA DE DE         MOV DX,0xdede
  1000:3c6f     C3               RET

FUN_1000_3c70:
  1000:3c70     E8 F7 11         CALL 0x1000:4e6a
  1000:3c73     9A C0 04 00 10   CALLF 0x1000:04c0
  1000:3c78     24 03            AND AL,0x3
  1000:3c7a     02 C2            ADD AL,DL
  1000:3c7c     8A D0            MOV DL,AL
  1000:3c7e     9A C0 04 00 10   CALLF 0x1000:04c0
  1000:3c83     24 0C            AND AL,0xc
  1000:3c85     D0 C8            ROR AL,0x1
  1000:3c87     D0 C8            ROR AL,0x1
  1000:3c89     02 C6            ADD AL,DH
  1000:3c8b     8A F0            MOV DH,AL
  1000:3c8d     BB C5 78         MOV BX,0x78c5
  1000:3c90     9A E0 4D 00 10   CALLF 0x1000:4de0
  1000:3c95     E8 8C 1A         CALL 0x1000:5724
  1000:3c98     B0 0C            MOV AL,0xc
  1000:3c9a     A2 62 05         MOV [0x562],AL
  1000:3c9d     B0 01            MOV AL,0x1
  1000:3c9f     A2 B6 16         MOV [0x16b6],AL
  1000:3ca2     A2 B4 16         MOV [0x16b4],AL
  1000:3ca5     A2 B5 16         MOV [0x16b5],AL
  1000:3ca8     C3               RET

FUN_1000_3ca9:
  1000:3ca9     BA 20 84         MOV DX,0x8420
  1000:3cac     A0 2D 16         MOV AL,[0x162d]
  1000:3caf     0A C0            OR AL,AL
  1000:3cb1     74 03            JZ 0x1000:3cb6
  1000:3cb3     BA FA 83         MOV DX,0x83fa

LAB_1000_3cb6:
  1000:3cb6     E8 C1 11         CALL 0x1000:4e7a
  1000:3cb9     8A 07            MOV AL,byte ptr [BX]
  1000:3cbb     24 20            AND AL,0x20
  1000:3cbd     74 01            JZ 0x1000:3cc0
  1000:3cbf     C3               RET

LAB_1000_3cc0:
  1000:3cc0     43               INC BX
  1000:3cc1     8A 07            MOV AL,byte ptr [BX]
  1000:3cc3     24 20            AND AL,0x20
  1000:3cc5     74 01            JZ 0x1000:3cc8
  1000:3cc7     C3               RET

LAB_1000_3cc8:
  1000:3cc8     43               INC BX
  1000:3cc9     8A 07            MOV AL,byte ptr [BX]
  1000:3ccb     24 20            AND AL,0x20
  1000:3ccd     74 01            JZ 0x1000:3cd0
  1000:3ccf     C3               RET

LAB_1000_3cd0:
  1000:3cd0     A0 7E 16         MOV AL,[0x167e]
  1000:3cd3     0A C0            OR AL,AL
  1000:3cd5     74 01            JZ 0x1000:3cd8
  1000:3cd7     C3               RET

LAB_1000_3cd8:
  1000:3cd8     E8 3C 01         CALL 0x1000:3e17
  1000:3cdb     BB 2A 16         MOV BX,0x162a
  1000:3cde     FE 07            INC byte ptr [BX]
  1000:3ce0     8A 07            MOV AL,byte ptr [BX]
  1000:3ce2     3C 56            CMP AL,0x56
  1000:3ce4     73 11            JNC 0x1000:3cf7
  1000:3ce6     3C 08            CMP AL,0x8
  1000:3ce8     72 0D            JC 0x1000:3cf7
  1000:3cea     BB 35 16         MOV BX,0x1635
  1000:3ced     FE 07            INC byte ptr [BX]
  1000:3cef     BB 37 16         MOV BX,0x1637
  1000:3cf2     FE 07            INC byte ptr [BX]
  1000:3cf4     32 C0            XOR AL,AL
  1000:3cf6     C3               RET

LAB_1000_3cf7:
  1000:3cf7     8B 1E 28 16      MOV BX,word ptr [0x1628]
  1000:3cfb     BA 80 02         MOV DX,0x280
  1000:3cfe     03 DA            ADD BX,DX
  1000:3d00     89 1E 28 16      MOV word ptr [0x1628],BX
  1000:3d04     32 C0            XOR AL,AL
  1000:3d06     C3               RET

FUN_1000_3d10:
  1000:3d10     BF F5 05         MOV DI,0x5f5
  1000:3d13     BB F2 05         MOV BX,0x5f2
  1000:3d16     8B CB            MOV CX,BX
  1000:3d18     8A 05            MOV AL,byte ptr [DI]
  1000:3d1a     38 07            CMP byte ptr [BX],AL
  1000:3d1c     75 11            JNZ 0x1000:3d2f
  1000:3d1e     4F               DEC DI
  1000:3d1f     4B               DEC BX
  1000:3d20     8A 05            MOV AL,byte ptr [DI]
  1000:3d22     38 07            CMP byte ptr [BX],AL
  1000:3d24     75 09            JNZ 0x1000:3d2f
  1000:3d26     4F               DEC DI
  1000:3d27     4B               DEC BX
  1000:3d28     8A 05            MOV AL,byte ptr [DI]
  1000:3d2a     38 07            CMP byte ptr [BX],AL
  1000:3d2c     75 01            JNZ 0x1000:3d2f
  1000:3d2e     C3               RET

LAB_1000_3d2f:
  1000:3d2f     8B D9            MOV BX,CX
  1000:3d31     B5 0A            MOV CH,0xa
  1000:3d33     B1 00            MOV CL,0x0
  1000:3d35     FE 07            INC byte ptr [BX]
  1000:3d37     8A 07            MOV AL,byte ptr [BX]
  1000:3d39     3C 01            CMP AL,0x1
  1000:3d3b     75 03            JNZ 0x1000:3d40
  1000:3d3d     EB 34            JMP 0x1000:3d73

LAB_1000_3d40:
  1000:3d40     3C 06            CMP AL,0x6
  1000:3d42     75 03            JNZ 0x1000:3d47
  1000:3d44     EB 2D            JMP 0x1000:3d73

LAB_1000_3d47:
  1000:3d47     3A C5            CMP AL,CH
  1000:3d49     74 01            JZ 0x1000:3d4c
  1000:3d4b     C3               RET

LAB_1000_3d4c:
  1000:3d4c     88 0F            MOV byte ptr [BX],CL
  1000:3d4e     FE CB            DEC BL
  1000:3d50     FE 07            INC byte ptr [BX]
  1000:3d52     8A 07            MOV AL,byte ptr [BX]
  1000:3d54     3A C5            CMP AL,CH
  1000:3d56     74 01            JZ 0x1000:3d59
  1000:3d58     C3               RET

LAB_1000_3d59:
  1000:3d59     88 0F            MOV byte ptr [BX],CL
  1000:3d5b     FE CB            DEC BL
  1000:3d5d     FE 07            INC byte ptr [BX]
  1000:3d5f     8A 07            MOV AL,byte ptr [BX]
  1000:3d61     3A C5            CMP AL,CH
  1000:3d63     74 01            JZ 0x1000:3d66
  1000:3d65     C3               RET

LAB_1000_3d66:
  1000:3d66     FE CD            DEC CH
  1000:3d68     88 2F            MOV byte ptr [BX],CH
  1000:3d6a     FE C3            INC BL
  1000:3d6c     88 2F            MOV byte ptr [BX],CH
  1000:3d6e     FE C3            INC BL
  1000:3d70     88 2F            MOV byte ptr [BX],CH
  1000:3d72     C3               RET

FUN_1000_3d73:
  1000:3d73     BB FD 05         MOV BX,0x5fd
  1000:3d76     FE 07            INC byte ptr [BX]
  1000:3d78     8A 07            MOV AL,byte ptr [BX]
  1000:3d7a     3C 15            CMP AL,0x15
  1000:3d7c     72 01            JC 0x1000:3d7f
  1000:3d7e     C3               RET

LAB_1000_3d7f:
  1000:3d7f     FE C8            DEC AL
  1000:3d81     B6 02            MOV DH,0x2
  1000:3d83     3C 08            CMP AL,0x8
  1000:3d85     72 08            JC 0x1000:3d8f
  1000:3d87     B6 06            MOV DH,0x6
  1000:3d89     3C 0E            CMP AL,0xe
  1000:3d8b     72 02            JC 0x1000:3d8f
  1000:3d8d     B6 04            MOV DH,0x4

LAB_1000_3d8f:
  1000:3d8f     B7 A0            MOV BH,0xa0
  1000:3d91     B3 30            MOV BL,0x30
  1000:3d93     32 E4            XOR AH,AH
  1000:3d95     03 D8            ADD BX,AX
  1000:3d97     E8 AA 02         CALL 0x1000:4044
  1000:3d9a     C3               RET

FUN_1000_3d9b:
  1000:3d9b     B8 13 00         MOV AX,0x13

LAB_1000_3d9e:
  1000:3d9e     50               PUSH AX
  1000:3d9f     B7 A0            MOV BH,0xa0
  1000:3da1     B3 30            MOV BL,0x30
  1000:3da3     03 D8            ADD BX,AX
  1000:3da5     E8 B2 02         CALL 0x1000:405a
  1000:3da8     58               POP AX
  1000:3da9     FE C8            DEC AL
  1000:3dab     75 F1            JNZ 0x1000:3d9e
  1000:3dad     C3               RET

FUN_1000_3dae:
  1000:3dae     BB FD 05         MOV BX,0x5fd
  1000:3db1     FE 0F            DEC byte ptr [BX]
  1000:3db3     8A 07            MOV AL,byte ptr [BX]
  1000:3db5     3C 14            CMP AL,0x14
  1000:3db7     72 01            JC 0x1000:3dba
  1000:3db9     C3               RET

LAB_1000_3dba:
  1000:3dba     0A C0            OR AL,AL
  1000:3dbc     75 05            JNZ 0x1000:3dc3
  1000:3dbe     C6 06 B9 16 01   MOV byte ptr [0x16b9],0x1

LAB_1000_3dc3:
  1000:3dc3     B7 A0            MOV BH,0xa0
  1000:3dc5     B3 30            MOV BL,0x30
  1000:3dc7     32 E4            XOR AH,AH
  1000:3dc9     03 D8            ADD BX,AX
  1000:3dcb     E9 8C 02         JMP 0x1000:405a

FUN_1000_3dce:
  1000:3dce     BB F3 05         MOV BX,0x5f3
  1000:3dd1     8A 07            MOV AL,byte ptr [BX]
  1000:3dd3     3C 05            CMP AL,0x5
  1000:3dd5     75 01            JNZ 0x1000:3dd8
  1000:3dd7     C3               RET

LAB_1000_3dd8:
  1000:3dd8     43               INC BX
  1000:3dd9     43               INC BX
  1000:3dda     B5 0A            MOV CH,0xa
  1000:3ddc     B1 00            MOV CL,0x0
  1000:3dde     FE 07            INC byte ptr [BX]
  1000:3de0     FE 07            INC byte ptr [BX]
  1000:3de2     8A 07            MOV AL,byte ptr [BX]
  1000:3de4     3A C5            CMP AL,CH
  1000:3de6     74 01            JZ 0x1000:3de9
  1000:3de8     C3               RET

LAB_1000_3de9:
  1000:3de9     88 0F            MOV byte ptr [BX],CL
  1000:3deb     FE CB            DEC BL
  1000:3ded     FE 07            INC byte ptr [BX]
  1000:3def     8A 07            MOV AL,byte ptr [BX]
  1000:3df1     3A C5            CMP AL,CH
  1000:3df3     74 01            JZ 0x1000:3df6
  1000:3df5     C3               RET

LAB_1000_3df6:
  1000:3df6     88 0F            MOV byte ptr [BX],CL
  1000:3df8     FE CB            DEC BL
  1000:3dfa     FE 07            INC byte ptr [BX]
  1000:3dfc     8A 07            MOV AL,byte ptr [BX]
  1000:3dfe     3A C5            CMP AL,CH
  1000:3e00     74 01            JZ 0x1000:3e03
  1000:3e02     C3               RET

LAB_1000_3e03:
  1000:3e03     FE CD            DEC CH
  1000:3e05     88 2F            MOV byte ptr [BX],CH
  1000:3e07     FE C3            INC BL
  1000:3e09     88 2F            MOV byte ptr [BX],CH
  1000:3e0b     FE C3            INC BL
  1000:3e0d     C6 07 08         MOV byte ptr [BX],0x8
  1000:3e10     C3               RET

FUN_1000_3e11:
  1000:3e11     BB 4E 16         MOV BX,0x164e
  1000:3e14     EB 04            JMP 0x1000:3e1a

FUN_1000_3e17:
  1000:3e17     BB 52 16         MOV BX,0x1652

LAB_1000_3e1a:
  1000:3e1a     B5 3A            MOV CH,0x3a
  1000:3e1c     B1 30            MOV CL,0x30
  1000:3e1e     FE 07            INC byte ptr [BX]
  1000:3e20     8A 07            MOV AL,byte ptr [BX]
  1000:3e22     3A C5            CMP AL,CH
  1000:3e24     74 01            JZ 0x1000:3e27
  1000:3e26     C3               RET

LAB_1000_3e27:
  1000:3e27     88 0F            MOV byte ptr [BX],CL
  1000:3e29     FE CB            DEC BL
  1000:3e2b     FE 07            INC byte ptr [BX]
  1000:3e2d     8A 07            MOV AL,byte ptr [BX]
  1000:3e2f     3A C5            CMP AL,CH
  1000:3e31     74 01            JZ 0x1000:3e34
  1000:3e33     C3               RET

LAB_1000_3e34:
  1000:3e34     88 0F            MOV byte ptr [BX],CL
  1000:3e36     FE CB            DEC BL
  1000:3e38     FE 07            INC byte ptr [BX]
  1000:3e3a     8A 07            MOV AL,byte ptr [BX]
  1000:3e3c     3A C5            CMP AL,CH
  1000:3e3e     74 01            JZ 0x1000:3e41
  1000:3e40     C3               RET

LAB_1000_3e41:
  1000:3e41     88 0F            MOV byte ptr [BX],CL
  1000:3e43     FE CB            DEC BL
  1000:3e45     FE 07            INC byte ptr [BX]
  1000:3e47     8A 07            MOV AL,byte ptr [BX]
  1000:3e49     3A C5            CMP AL,CH
  1000:3e4b     74 01            JZ 0x1000:3e4e
  1000:3e4d     C3               RET

LAB_1000_3e4e:
  1000:3e4e     88 0F            MOV byte ptr [BX],CL
  1000:3e50     FE C3            INC BL
  1000:3e52     88 0F            MOV byte ptr [BX],CL
  1000:3e54     FE C3            INC BL
  1000:3e56     88 0F            MOV byte ptr [BX],CL
  1000:3e58     FE C3            INC BL
  1000:3e5a     88 0F            MOV byte ptr [BX],CL
  1000:3e5c     C3               RET

FUN_1000_3e5d:
  1000:3e5d     BB 4E 16         MOV BX,0x164e
  1000:3e60     EB 04            JMP 0x1000:3e66

FUN_1000_3e63:
  1000:3e63     BB 52 16         MOV BX,0x1652

LAB_1000_3e66:
  1000:3e66     B5 2F            MOV CH,0x2f
  1000:3e68     B1 39            MOV CL,0x39
  1000:3e6a     FE 0F            DEC byte ptr [BX]
  1000:3e6c     8A 07            MOV AL,byte ptr [BX]
  1000:3e6e     3A C5            CMP AL,CH
  1000:3e70     74 01            JZ 0x1000:3e73
  1000:3e72     C3               RET

LAB_1000_3e73:
  1000:3e73     88 0F            MOV byte ptr [BX],CL
  1000:3e75     FE CB            DEC BL
  1000:3e77     FE 0F            DEC byte ptr [BX]
  1000:3e79     8A 07            MOV AL,byte ptr [BX]
  1000:3e7b     3A C5            CMP AL,CH
  1000:3e7d     74 01            JZ 0x1000:3e80
  1000:3e7f     C3               RET

LAB_1000_3e80:
  1000:3e80     88 0F            MOV byte ptr [BX],CL
  1000:3e82     FE CB            DEC BL
  1000:3e84     FE 0F            DEC byte ptr [BX]
  1000:3e86     8A 07            MOV AL,byte ptr [BX]
  1000:3e88     3A C5            CMP AL,CH
  1000:3e8a     74 01            JZ 0x1000:3e8d
  1000:3e8c     C3               RET

LAB_1000_3e8d:
  1000:3e8d     88 0F            MOV byte ptr [BX],CL
  1000:3e8f     FE CB            DEC BL
  1000:3e91     FE 0F            DEC byte ptr [BX]
  1000:3e93     8A 07            MOV AL,byte ptr [BX]
  1000:3e95     3A C5            CMP AL,CH
  1000:3e97     74 01            JZ 0x1000:3e9a
  1000:3e99     C3               RET

LAB_1000_3e9a:
  1000:3e9a     88 0F            MOV byte ptr [BX],CL
  1000:3e9c     FE C3            INC BL
  1000:3e9e     88 0F            MOV byte ptr [BX],CL
  1000:3ea0     FE C3            INC BL
  1000:3ea2     88 0F            MOV byte ptr [BX],CL
  1000:3ea4     FE C3            INC BL
  1000:3ea6     88 0F            MOV byte ptr [BX],CL
  1000:3ea8     C3               RET

FUN_1000_3ea9:
  1000:3ea9     BB F6 05         MOV BX,0x5f6
  1000:3eac     8A 07            MOV AL,byte ptr [BX]
  1000:3eae     3C 98            CMP AL,0x98
  1000:3eb0     72 02            JC 0x1000:3eb4
  1000:3eb2     B0 97            MOV AL,0x97

LAB_1000_3eb4:
  1000:3eb4     04 02            ADD AL,0x2
  1000:3eb6     27               DAA
  1000:3eb7     88 07            MOV byte ptr [BX],AL
  1000:3eb9     C3               RET

FUN_1000_3ed3:
  1000:3ed3     A0 5E 16         MOV AL,[0x165e]
  1000:3ed6     0A C0            OR AL,AL
  1000:3ed8     75 01            JNZ 0x1000:3edb
  1000:3eda     C3               RET

LAB_1000_3edb:
  1000:3edb     FE 0E 5D 16      DEC byte ptr [0x165d]
  1000:3edf     74 01            JZ 0x1000:3ee2
  1000:3ee1     C3               RET

LAB_1000_3ee2:
  1000:3ee2     C6 06 5D 16 19   MOV byte ptr [0x165d],0x19
  1000:3ee7     A0 5C 16         MOV AL,[0x165c]
  1000:3eea     FE C8            DEC AL
  1000:3eec     50               PUSH AX
  1000:3eed     B7 A0            MOV BH,0xa0
  1000:3eef     B3 1E            MOV BL,0x1e
  1000:3ef1     2A D8            SUB BL,AL
  1000:3ef3     FE C3            INC BL
  1000:3ef5     E8 62 01         CALL 0x1000:405a
  1000:3ef8     58               POP AX
  1000:3ef9     A2 5C 16         MOV [0x165c],AL
  1000:3efc     0A C0            OR AL,AL
  1000:3efe     74 01            JZ 0x1000:3f01
  1000:3f00     C3               RET

LAB_1000_3f01:
  1000:3f01     E8 40 00         CALL 0x1000:3f44
  1000:3f04     32 C0            XOR AL,AL
  1000:3f06     A2 5E 16         MOV [0x165e],AL
  1000:3f09     B0 09            MOV AL,0x9
  1000:3f0b     A2 62 05         MOV [0x562],AL
  1000:3f0e     C3               RET

FUN_1000_3f0f:
  1000:3f0f     06               PUSH ES
  1000:3f10     8C C8            MOV AX,CS
  1000:3f12     8E C0            MOV ES,AX
  1000:3f14     B7 16            MOV BH,0x16
  1000:3f16     B3 0D            MOV BL,0xd
  1000:3f18     BA C5 3E         MOV DX,0x3ec5
  1000:3f1b     BD 38 00         MOV BP,0x38
  1000:3f1e     FF 1E 08 05      CALLF [0x508]
  1000:3f22     B7 16            MOV BH,0x16
  1000:3f24     B3 0D            MOV BL,0xd
  1000:3f26     BA CC 3E         MOV DX,0x3ecc
  1000:3f29     B0 22            MOV AL,0x22
  1000:3f2b     BD 3A 00         MOV BP,0x3a
  1000:3f2e     FF 1E 08 05      CALLF [0x508]
  1000:3f32     B7 0B            MOV BH,0xb
  1000:3f34     B3 01            MOV BL,0x1
  1000:3f36     BA CC 3E         MOV DX,0x3ecc
  1000:3f39     B0 32            MOV AL,0x32
  1000:3f3b     BD 38 00         MOV BP,0x38
  1000:3f3e     FF 1E 08 05      CALLF [0x508]
  1000:3f42     07               POP ES
  1000:3f43     C3               RET

FUN_1000_3f44:
  1000:3f44     06               PUSH ES
  1000:3f45     8C C8            MOV AX,CS
  1000:3f47     8E C0            MOV ES,AX
  1000:3f49     B7 16            MOV BH,0x16
  1000:3f4b     B3 0D            MOV BL,0xd
  1000:3f4d     BA C5 3E         MOV DX,0x3ec5
  1000:3f50     B0 07            MOV AL,0x7
  1000:3f52     BD 38 00         MOV BP,0x38
  1000:3f55     FF 1E 08 05      CALLF [0x508]
  1000:3f59     B7 16            MOV BH,0x16
  1000:3f5b     B3 0D            MOV BL,0xd
  1000:3f5d     BA CF 3E         MOV DX,0x3ecf
  1000:3f60     B0 22            MOV AL,0x22
  1000:3f62     BD 38 00         MOV BP,0x38
  1000:3f65     FF 1E 08 05      CALLF [0x508]
  1000:3f69     B7 0B            MOV BH,0xb
  1000:3f6b     B3 01            MOV BL,0x1
  1000:3f6d     B0 07            MOV AL,0x7
  1000:3f6f     BA C9 3E         MOV DX,0x3ec9
  1000:3f72     BD 38 00         MOV BP,0x38
  1000:3f75     FF 1E 08 05      CALLF [0x508]
  1000:3f79     07               POP ES
  1000:3f7a     C3               RET

FUN_1000_3f7b:
  1000:3f7b     B7 16            MOV BH,0x16
  1000:3f7d     B3 1F            MOV BL,0x1f
  1000:3f7f     BA F3 05         MOV DX,0x5f3
  1000:3f82     E8 29 00         CALL 0x1000:3fae
  1000:3f85     B7 15            MOV BH,0x15
  1000:3f87     B3 1F            MOV BL,0x1f
  1000:3f89     BA F0 05         MOV DX,0x5f0
  1000:3f8c     E8 1F 00         CALL 0x1000:3fae
  1000:3f8f     B7 17            MOV BH,0x17
  1000:3f91     B3 19            MOV BL,0x19
  1000:3f93     BA 4B 16         MOV DX,0x164b
  1000:3f96     E8 3F 00         CALL 0x1000:3fd8
  1000:3f99     B7 17            MOV BH,0x17
  1000:3f9b     B3 1E            MOV BL,0x1e
  1000:3f9d     BA 4F 16         MOV DX,0x164f
  1000:3fa0     E8 35 00         CALL 0x1000:3fd8
  1000:3fa3     B7 11            MOV BH,0x11
  1000:3fa5     B3 01            MOV BL,0x1
  1000:3fa7     BA F6 05         MOV DX,0x5f6
  1000:3faa     E8 5B 00         CALL 0x1000:4008
  1000:3fad     C3               RET

FUN_1000_3fae:
  1000:3fae     8B F2            MOV SI,DX
  1000:3fb0     8A 04            MOV AL,byte ptr [SI]
  1000:3fb2     46               INC SI
  1000:3fb3     04 30            ADD AL,0x30
  1000:3fb5     BD 60 00         MOV BP,0x60
  1000:3fb8     FF 1E 08 05      CALLF [0x508]
  1000:3fbc     FE C3            INC BL
  1000:3fbe     8A 04            MOV AL,byte ptr [SI]
  1000:3fc0     46               INC SI
  1000:3fc1     04 30            ADD AL,0x30
  1000:3fc3     BD 60 00         MOV BP,0x60
  1000:3fc6     FF 1E 08 05      CALLF [0x508]
  1000:3fca     FE C3            INC BL
  1000:3fcc     8A 04            MOV AL,byte ptr [SI]
  1000:3fce     04 30            ADD AL,0x30
  1000:3fd0     BD 60 00         MOV BP,0x60
  1000:3fd3     FF 1E 08 05      CALLF [0x508]
  1000:3fd7     C3               RET

FUN_1000_3fd8:
  1000:3fd8     8B F2            MOV SI,DX
  1000:3fda     8A 04            MOV AL,byte ptr [SI]
  1000:3fdc     46               INC SI
  1000:3fdd     BD 60 00         MOV BP,0x60
  1000:3fe0     FF 1E 08 05      CALLF [0x508]
  1000:3fe4     FE C3            INC BL
  1000:3fe6     8A 04            MOV AL,byte ptr [SI]
  1000:3fe8     46               INC SI
  1000:3fe9     BD 60 00         MOV BP,0x60
  1000:3fec     FF 1E 08 05      CALLF [0x508]
  1000:3ff0     FE C3            INC BL
  1000:3ff2     8A 04            MOV AL,byte ptr [SI]
  1000:3ff4     46               INC SI
  1000:3ff5     BD 60 00         MOV BP,0x60
  1000:3ff8     FF 1E 08 05      CALLF [0x508]
  1000:3ffc     FE C3            INC BL
  1000:3ffe     8A 04            MOV AL,byte ptr [SI]
  1000:4000     BD 60 00         MOV BP,0x60
  1000:4003     FF 1E 08 05      CALLF [0x508]
  1000:4007     C3               RET

FUN_1000_4008:
  1000:4008     8B F2            MOV SI,DX
  1000:400a     8A 04            MOV AL,byte ptr [SI]
  1000:400c     D0 E8            SHR AL,0x1
  1000:400e     D0 E8            SHR AL,0x1
  1000:4010     D0 E8            SHR AL,0x1
  1000:4012     D0 E8            SHR AL,0x1
  1000:4014     04 30            ADD AL,0x30
  1000:4016     BD 60 00         MOV BP,0x60
  1000:4019     FF 1E 08 05      CALLF [0x508]
  1000:401d     FE C3            INC BL
  1000:401f     8A 04            MOV AL,byte ptr [SI]
  1000:4021     24 0F            AND AL,0xf
  1000:4023     04 30            ADD AL,0x30
  1000:4025     BD 60 00         MOV BP,0x60
  1000:4028     FF 1E 08 05      CALLF [0x508]
  1000:402c     C3               RET

FUN_1000_402d:
  1000:402d     BB FD 05         MOV BX,0x5fd
  1000:4030     8A 07            MOV AL,byte ptr [BX]
  1000:4032     8A E8            MOV CH,AL
  1000:4034     C6 07 00         MOV byte ptr [BX],0x0

LAB_1000_4037:
  1000:4037     51               PUSH CX
  1000:4038     E8 38 FD         CALL 0x1000:3d73
  1000:403b     59               POP CX
  1000:403c     A0 FD 05         MOV AL,[0x5fd]
  1000:403f     3A C5            CMP AL,CH
  1000:4041     75 F4            JNZ 0x1000:4037
  1000:4043     C3               RET

FUN_1000_4044:
  1000:4044     50               PUSH AX
  1000:4045     8B FB            MOV DI,BX
  1000:4047     B0 7E            MOV AL,0x7e
  1000:4049     B7 07            MOV BH,0x7
  1000:404b     8A DE            MOV BL,DH
  1000:404d     B6 08            MOV DH,0x8
  1000:404f     B2 01            MOV DL,0x1
  1000:4051     BD 48 00         MOV BP,0x48
  1000:4054     FF 1E 08 05      CALLF [0x508]
  1000:4058     58               POP AX
  1000:4059     C3               RET

FUN_1000_405a:
  1000:405a     57               PUSH DI
  1000:405b     53               PUSH BX
  1000:405c     5F               POP DI
  1000:405d     B0 FF            MOV AL,0xff
  1000:405f     B7 0F            MOV BH,0xf
  1000:4061     B3 00            MOV BL,0x0
  1000:4063     B6 08            MOV DH,0x8
  1000:4065     B2 01            MOV DL,0x1
  1000:4067     BD 48 00         MOV BP,0x48
  1000:406a     FF 1E 08 05      CALLF [0x508]
  1000:406e     5F               POP DI
  1000:406f     C3               RET

FUN_1000_4070:
  1000:4070     A0 B9 16         MOV AL,[0x16b9]
  1000:4073     0A C0            OR AL,AL
  1000:4075     74 01            JZ 0x1000:4078
  1000:4077     CB               RETF

LAB_1000_4078:
  1000:4078     E8 95 FC         CALL 0x1000:3d10
  1000:407b     CB               RETF

FUN_1000_407c:
  1000:407c     F6 06 75 05 80   TEST byte ptr [0x575],0x80
  1000:4081     75 01            JNZ 0x1000:4084
  1000:4083     CB               RETF

LAB_1000_4084:
  1000:4084     A0 B9 16         MOV AL,[0x16b9]
  1000:4087     0A C0            OR AL,AL
  1000:4089     74 01            JZ 0x1000:408c
  1000:408b     CB               RETF

LAB_1000_408c:
  1000:408c     BB F2 05         MOV BX,0x5f2
  1000:408f     B6 FF            MOV DH,0xff
  1000:4091     B2 09            MOV DL,0x9
  1000:4093     FE 0F            DEC byte ptr [BX]
  1000:4095     8A 07            MOV AL,byte ptr [BX]
  1000:4097     0A C0            OR AL,AL
  1000:4099     75 04            JNZ 0x1000:409f
  1000:409b     E8 10 FD         CALL 0x1000:3dae
  1000:409e     CB               RETF

LAB_1000_409f:
  1000:409f     3C 05            CMP AL,0x5
  1000:40a1     75 04            JNZ 0x1000:40a7
  1000:40a3     E8 08 FD         CALL 0x1000:3dae
  1000:40a6     CB               RETF

LAB_1000_40a7:
  1000:40a7     3A C6            CMP AL,DH
  1000:40a9     74 01            JZ 0x1000:40ac
  1000:40ab     CB               RETF

LAB_1000_40ac:
  1000:40ac     88 17            MOV byte ptr [BX],DL
  1000:40ae     FE CB            DEC BL
  1000:40b0     FE 0F            DEC byte ptr [BX]
  1000:40b2     8A 07            MOV AL,byte ptr [BX]
  1000:40b4     3A C6            CMP AL,DH
  1000:40b6     74 01            JZ 0x1000:40b9
  1000:40b8     CB               RETF

LAB_1000_40b9:
  1000:40b9     88 17            MOV byte ptr [BX],DL
  1000:40bb     FE CB            DEC BL
  1000:40bd     FE 0F            DEC byte ptr [BX]
  1000:40bf     8A 07            MOV AL,byte ptr [BX]
  1000:40c1     3A C6            CMP AL,DH
  1000:40c3     74 01            JZ 0x1000:40c6
  1000:40c5     CB               RETF

LAB_1000_40c6:
  1000:40c6     32 C0            XOR AL,AL
  1000:40c8     88 07            MOV byte ptr [BX],AL
  1000:40ca     FE C3            INC BL
  1000:40cc     88 07            MOV byte ptr [BX],AL
  1000:40ce     FE C3            INC BL
  1000:40d0     88 07            MOV byte ptr [BX],AL
  1000:40d2     FE C0            INC AL
  1000:40d4     A2 B9 16         MOV [0x16b9],AL
  1000:40d7     CB               RETF

FUN_1000_40e0:
  1000:40e0     BE 7E 74         MOV SI,0x747e
  1000:40e3     32 C0            XOR AL,AL

LAB_1000_40e5:
  1000:40e5     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:40e9     F6 04 80         TEST byte ptr [SI],0x80
  1000:40ec     74 03            JZ 0x1000:40f1
  1000:40ee     E8 10 00         CALL 0x1000:4101

LAB_1000_40f1:
  1000:40f1     BA 03 00         MOV DX,0x3
  1000:40f4     03 F2            ADD SI,DX
  1000:40f6     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:40fa     FE C0            INC AL
  1000:40fc     3C 14            CMP AL,0x14
  1000:40fe     75 E5            JNZ 0x1000:40e5
  1000:4100     C3               RET

FUN_1000_4101:
  1000:4101     A0 34 16         MOV AL,[0x1634]
  1000:4104     2C 03            SUB AL,0x3
  1000:4106     8A D0            MOV DL,AL
  1000:4108     8A 44 01         MOV AL,byte ptr [SI + 0x1]
  1000:410b     2A C2            SUB AL,DL
  1000:410d     0A C0            OR AL,AL
  1000:410f     75 01            JNZ 0x1000:4112
  1000:4111     C3               RET

LAB_1000_4112:
  1000:4112     3C 25            CMP AL,0x25
  1000:4114     72 01            JC 0x1000:4117
  1000:4116     C3               RET

LAB_1000_4117:
  1000:4117     8A D0            MOV DL,AL
  1000:4119     A0 35 16         MOV AL,[0x1635]
  1000:411c     2C 02            SUB AL,0x2
  1000:411e     8A F0            MOV DH,AL
  1000:4120     8A 44 02         MOV AL,byte ptr [SI + 0x2]
  1000:4123     2A C6            SUB AL,DH
  1000:4125     0A C0            OR AL,AL
  1000:4127     75 01            JNZ 0x1000:412a
  1000:4129     C3               RET

LAB_1000_412a:
  1000:412a     3C 15            CMP AL,0x15
  1000:412c     72 01            JC 0x1000:412f
  1000:412e     C3               RET

LAB_1000_412f:
  1000:412f     8A F0            MOV DH,AL
  1000:4131     BB 83 75         MOV BX,0x7583
  1000:4134     9A E0 4D 00 10   CALLF 0x1000:4de0
  1000:4139     8A 04            MOV AL,byte ptr [SI]
  1000:413b     D0 C8            ROR AL,0x1
  1000:413d     D0 C8            ROR AL,0x1
  1000:413f     D0 C8            ROR AL,0x1
  1000:4141     D0 C8            ROR AL,0x1
  1000:4143     24 07            AND AL,0x7
  1000:4145     75 03            JNZ 0x1000:414a
  1000:4147     E8 32 00         CALL 0x1000:417c

LAB_1000_414a:
  1000:414a     8A E8            MOV CH,AL
  1000:414c     FE C8            DEC AL
  1000:414e     02 C0            ADD AL,AL
  1000:4150     53               PUSH BX
  1000:4151     32 E4            XOR AH,AH
  1000:4153     8B D8            MOV BX,AX
  1000:4155     81 C3 BD DF      ADD BX,0xdfbd
  1000:4159     8B 17            MOV DX,word ptr [BX]
  1000:415b     81 C2 52 DC      ADD DX,0xdc52
  1000:415f     5B               POP BX
  1000:4160     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4164     04 EB            ADD AL,0xeb
  1000:4166     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:416a     8A C5            MOV AL,CH
  1000:416c     56               PUSH SI
  1000:416d     E8 41 02         CALL 0x1000:43b1
  1000:4170     5E               POP SI
  1000:4171     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4175     2C EB            SUB AL,0xeb
  1000:4177     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:417b     C3               RET

FUN_1000_417c:
  1000:417c     8A 04            MOV AL,byte ptr [SI]
  1000:417e     24 0F            AND AL,0xf
  1000:4180     04 08            ADD AL,0x8
  1000:4182     C3               RET

FUN_1000_4193:
  1000:4193     3C A6            CMP AL,0xa6
  1000:4195     72 01            JC 0x1000:4198
  1000:4197     C3               RET

LAB_1000_4198:
  1000:4198     59               POP CX
  1000:4199     B9 D4 06         MOV CX,0x6d4
  1000:419c     03 D9            ADD BX,CX
  1000:419e     8A 07            MOV AL,byte ptr [BX]
  1000:41a0     87 D3            XCHG BX,DX
  1000:41a2     2C EB            SUB AL,0xeb
  1000:41a4     8A E8            MOV CH,AL
  1000:41a6     02 C0            ADD AL,AL
  1000:41a8     02 C5            ADD AL,CH
  1000:41aa     BB 7E 74         MOV BX,0x747e
  1000:41ad     32 E4            XOR AH,AH
  1000:41af     03 D8            ADD BX,AX
  1000:41b1     8A 07            MOV AL,byte ptr [BX]
  1000:41b3     8A E8            MOV CH,AL
  1000:41b5     D0 C8            ROR AL,0x1
  1000:41b7     D0 C8            ROR AL,0x1
  1000:41b9     D0 C8            ROR AL,0x1
  1000:41bb     D0 C8            ROR AL,0x1
  1000:41bd     24 07            AND AL,0x7
  1000:41bf     02 C0            ADD AL,AL
  1000:41c1     B4 00            MOV AH,0x0
  1000:41c3     8B F8            MOV DI,AX
  1000:41c5     8A C5            MOV AL,CH
  1000:41c7     24 0F            AND AL,0xf

switchD:
  1000:41c9     2E FF A5 83 41   JMP word ptr CS:[DI + 0x4183]

caseD_1:

caseD_4:

caseD_5:

caseD_6:

caseD_7:
  1000:41ce     C3               RET

caseD_2:
  1000:41cf     80 27 7F         AND byte ptr [BX],0x7f

LAB_1000_41d2:
  1000:41d2     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:41d6     E8 F5 FB         CALL 0x1000:3dce
  1000:41d9     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:41dd     FE C8            DEC AL
  1000:41df     75 F1            JNZ 0x1000:41d2
  1000:41e1     B0 0A            MOV AL,0xa
  1000:41e3     A2 62 05         MOV [0x562],AL
  1000:41e6     C3               RET

caseD_3:
  1000:41e7     80 27 7F         AND byte ptr [BX],0x7f

LAB_1000_41ea:
  1000:41ea     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:41ee     E8 B8 FC         CALL 0x1000:3ea9
  1000:41f1     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:41f5     FE C8            DEC AL
  1000:41f7     75 F1            JNZ 0x1000:41ea
  1000:41f9     B0 0A            MOV AL,0xa
  1000:41fb     A2 62 05         MOV [0x562],AL
  1000:41fe     A0 89 16         MOV AL,[0x1689]
  1000:4201     3C 02            CMP AL,0x2
  1000:4203     74 01            JZ 0x1000:4206
  1000:4205     C3               RET

LAB_1000_4206:
  1000:4206     E9 31 03         JMP 0x1000:453a

caseD_0:
  1000:4217     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:421b     C6 06 6B 16 01   MOV byte ptr [0x166b],0x1
  1000:4220     52               PUSH DX
  1000:4221     8B 16 63 16      MOV DX,word ptr [0x1663]
  1000:4225     FE C6            INC DH
  1000:4227     89 16 6D 16      MOV word ptr [0x166d],DX
  1000:422b     5A               POP DX
  1000:422c     8A 07            MOV AL,byte ptr [BX]
  1000:422e     24 0F            AND AL,0xf
  1000:4230     FE C0            INC AL
  1000:4232     8A E8            MOV CH,AL
  1000:4234     BE F7 05         MOV SI,0x5f7
  1000:4237     B1 00            MOV CL,0x0
  1000:4239     8A 04            MOV AL,byte ptr [SI]
  1000:423b     3A C5            CMP AL,CH
  1000:423d     74 2F            JZ 0x1000:426e
  1000:423f     FE C1            INC CL
  1000:4241     46               INC SI
  1000:4242     8A 04            MOV AL,byte ptr [SI]
  1000:4244     3A C5            CMP AL,CH
  1000:4246     74 26            JZ 0x1000:426e
  1000:4248     FE C1            INC CL
  1000:424a     46               INC SI
  1000:424b     8A 04            MOV AL,byte ptr [SI]
  1000:424d     3A C5            CMP AL,CH
  1000:424f     74 1D            JZ 0x1000:426e
  1000:4251     4E               DEC SI
  1000:4252     4E               DEC SI
  1000:4253     B1 00            MOV CL,0x0
  1000:4255     8A 04            MOV AL,byte ptr [SI]
  1000:4257     0A C0            OR AL,AL
  1000:4259     74 13            JZ 0x1000:426e
  1000:425b     FE C1            INC CL
  1000:425d     46               INC SI
  1000:425e     8A 04            MOV AL,byte ptr [SI]
  1000:4260     0A C0            OR AL,AL
  1000:4262     74 0A            JZ 0x1000:426e
  1000:4264     FE C1            INC CL
  1000:4266     46               INC SI
  1000:4267     8A 04            MOV AL,byte ptr [SI]
  1000:4269     0A C0            OR AL,AL
  1000:426b     74 01            JZ 0x1000:426e
  1000:426d     C3               RET

LAB_1000_426e:
  1000:426e     B0 0A            MOV AL,0xa
  1000:4270     A2 62 05         MOV [0x562],AL
  1000:4273     80 27 7F         AND byte ptr [BX],0x7f
  1000:4276     8A 07            MOV AL,byte ptr [BX]
  1000:4278     24 0F            AND AL,0xf
  1000:427a     FE C0            INC AL
  1000:427c     88 04            MOV byte ptr [SI],AL
  1000:427e     FE C8            DEC AL
  1000:4280     46               INC SI
  1000:4281     46               INC SI
  1000:4282     46               INC SI
  1000:4283     02 C0            ADD AL,AL
  1000:4285     B4 00            MOV AH,0x0
  1000:4287     8B F8            MOV DI,AX

switchD:
  1000:4289     2E FF A5 09 42   JMP word ptr CS:[DI + 0x4209]

caseD_0:
  1000:428e     B0 08            MOV AL,0x8
  1000:4290     88 04            MOV byte ptr [SI],AL
  1000:4292     EB 23            JMP 0x1000:42b7

caseD_1:
  1000:4295     EB FE            JMP 0x1000:4295

caseD_2:
  1000:4297     B0 10            MOV AL,0x10
  1000:4299     88 04            MOV byte ptr [SI],AL
  1000:429b     EB 1A            JMP 0x1000:42b7

caseD_3:
  1000:429e     B0 01            MOV AL,0x1
  1000:42a0     88 04            MOV byte ptr [SI],AL
  1000:42a2     EB 13            JMP 0x1000:42b7

caseD_4:
  1000:42a5     B0 05            MOV AL,0x5
  1000:42a7     88 04            MOV byte ptr [SI],AL
  1000:42a9     EB 0C            JMP 0x1000:42b7

caseD_5:
  1000:42ac     B0 05            MOV AL,0x5
  1000:42ae     88 04            MOV byte ptr [SI],AL
  1000:42b0     EB 05            JMP 0x1000:42b7

caseD_6:
  1000:42b3     B0 05            MOV AL,0x5
  1000:42b5     88 04            MOV byte ptr [SI],AL

LAB_1000_42b7:
  1000:42b7     A0 89 16         MOV AL,[0x1689]
  1000:42ba     3C 04            CMP AL,0x4
  1000:42bc     72 0B            JC 0x1000:42c9
  1000:42be     2C 05            SUB AL,0x5
  1000:42c0     3A C1            CMP AL,CL
  1000:42c2     51               PUSH CX
  1000:42c3     75 03            JNZ 0x1000:42c8
  1000:42c5     E8 72 02         CALL 0x1000:453a

LAB_1000_42c8:
  1000:42c8     59               POP CX

LAB_1000_42c9:
  1000:42c9     8A C1            MOV AL,CL

FUN_1000_42cb:
  1000:42cb     8A E8            MOV CH,AL
  1000:42cd     32 E4            XOR AH,AH
  1000:42cf     05 F7 05         ADD AX,0x5f7
  1000:42d2     8B D8            MOV BX,AX
  1000:42d4     8A 07            MOV AL,byte ptr [BX]
  1000:42d6     0A C0            OR AL,AL
  1000:42d8     75 03            JNZ 0x1000:42dd
  1000:42da     E9 AE 00         JMP 0x1000:438b

LAB_1000_42dd:
  1000:42dd     FE C8            DEC AL
  1000:42df     33 D2            XOR DX,DX
  1000:42e1     0A C0            OR AL,AL
  1000:42e3     74 15            JZ 0x1000:42fa
  1000:42e5     FE C8            DEC AL
  1000:42e7     8A E0            MOV AH,AL
  1000:42e9     32 C0            XOR AL,AL
  1000:42eb     D1 E8            SHR AX,0x1
  1000:42ed     8B D0            MOV DX,AX
  1000:42ef     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:42f4     75 04            JNZ 0x1000:42fa
  1000:42f6     D1 E8            SHR AX,0x1
  1000:42f8     03 D0            ADD DX,AX

LAB_1000_42fa:
  1000:42fa     81 C2 C3 38      ADD DX,0x38c3
  1000:42fe     8A C5            MOV AL,CH
  1000:4300     02 C0            ADD AL,AL
  1000:4302     32 E4            XOR AH,AH
  1000:4304     05 16 54         ADD AX,0x5416
  1000:4307     8B D8            MOV BX,AX
  1000:4309     2E 8B 1F         MOV BX,word ptr CS:[BX]
  1000:430c     D0 E7            SHL BH,0x1
  1000:430e     D0 E7            SHL BH,0x1
  1000:4310     D0 E7            SHL BH,0x1
  1000:4312     D0 E3            SHL BL,0x1
  1000:4314     51               PUSH CX
  1000:4315     BD 52 00         MOV BP,0x52
  1000:4318     FF 1E 08 05      CALLF [0x508]
  1000:431c     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:4321     75 05            JNZ 0x1000:4328
  1000:4323     83 C2 30         ADD DX,0x30
  1000:4326     EB 03            JMP 0x1000:432b

LAB_1000_4328:
  1000:4328     83 C2 20         ADD DX,0x20

LAB_1000_432b:
  1000:432b     FE C3            INC BL
  1000:432d     FE C3            INC BL
  1000:432f     BD 52 00         MOV BP,0x52
  1000:4332     FF 1E 08 05      CALLF [0x508]
  1000:4336     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:433b     75 05            JNZ 0x1000:4342
  1000:433d     83 C2 30         ADD DX,0x30
  1000:4340     EB 03            JMP 0x1000:4345

LAB_1000_4342:
  1000:4342     83 C2 20         ADD DX,0x20

LAB_1000_4345:
  1000:4345     80 C7 08         ADD BH,0x8
  1000:4348     FE CB            DEC BL
  1000:434a     FE CB            DEC BL
  1000:434c     BD 52 00         MOV BP,0x52
  1000:434f     FF 1E 08 05      CALLF [0x508]
  1000:4353     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:4358     75 05            JNZ 0x1000:435f
  1000:435a     83 C2 30         ADD DX,0x30
  1000:435d     EB 03            JMP 0x1000:4362

LAB_1000_435f:
  1000:435f     83 C2 20         ADD DX,0x20

LAB_1000_4362:
  1000:4362     FE C3            INC BL
  1000:4364     FE C3            INC BL
  1000:4366     BD 52 00         MOV BP,0x52
  1000:4369     FF 1E 08 05      CALLF [0x508]
  1000:436d     59               POP CX
  1000:436e     8A C5            MOV AL,CH
  1000:4370     32 E4            XOR AH,AH
  1000:4372     05 FA 05         ADD AX,0x5fa
  1000:4375     8B D0            MOV DX,AX
  1000:4377     8A C5            MOV AL,CH
  1000:4379     32 E4            XOR AH,AH
  1000:437b     02 C0            ADD AL,AL
  1000:437d     05 16 54         ADD AX,0x5416
  1000:4380     8B D8            MOV BX,AX
  1000:4382     2E 8B 1F         MOV BX,word ptr CS:[BX]
  1000:4385     80 C7 03         ADD BH,0x3
  1000:4388     E9 7D FC         JMP 0x1000:4008

LAB_1000_438b:
  1000:438b     8A C5            MOV AL,CH
  1000:438d     3C 03            CMP AL,0x3
  1000:438f     75 01            JNZ 0x1000:4392
  1000:4391     C3               RET

LAB_1000_4392:
  1000:4392     02 C0            ADD AL,AL
  1000:4394     32 E4            XOR AH,AH
  1000:4396     05 16 54         ADD AX,0x5416
  1000:4399     8B D8            MOV BX,AX
  1000:439b     2E 8B 1F         MOV BX,word ptr CS:[BX]
  1000:439e     06               PUSH ES
  1000:439f     8C C8            MOV AX,CS
  1000:43a1     8E C0            MOV ES,AX
  1000:43a3     BA 81 52         MOV DX,0x5281
  1000:43a6     32 C0            XOR AL,AL
  1000:43a8     BD 38 00         MOV BP,0x38
  1000:43ab     FF 1E 08 05      CALLF [0x508]
  1000:43af     07               POP ES
  1000:43b0     C3               RET

FUN_1000_43b1:
  1000:43b1     8B F2            MOV SI,DX
  1000:43b3     3C 04            CMP AL,0x4
  1000:43b5     74 4B            JZ 0x1000:4402
  1000:43b7     B9 26 00         MOV CX,0x26
  1000:43ba     8A 04            MOV AL,byte ptr [SI]
  1000:43bc     88 07            MOV byte ptr [BX],AL
  1000:43be     46               INC SI
  1000:43bf     43               INC BX
  1000:43c0     8A 04            MOV AL,byte ptr [SI]
  1000:43c2     88 07            MOV byte ptr [BX],AL
  1000:43c4     46               INC SI
  1000:43c5     03 D9            ADD BX,CX
  1000:43c7     8A 04            MOV AL,byte ptr [SI]
  1000:43c9     88 07            MOV byte ptr [BX],AL
  1000:43cb     46               INC SI
  1000:43cc     4B               DEC BX
  1000:43cd     8A 04            MOV AL,byte ptr [SI]
  1000:43cf     88 07            MOV byte ptr [BX],AL
  1000:43d1     BE AE 06         MOV SI,0x6ae
  1000:43d4     03 DE            ADD BX,SI
  1000:43d6     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:43da     88 07            MOV byte ptr [BX],AL
  1000:43dc     43               INC BX
  1000:43dd     88 07            MOV byte ptr [BX],AL
  1000:43df     03 D9            ADD BX,CX
  1000:43e1     88 07            MOV byte ptr [BX],AL
  1000:43e3     4B               DEC BX
  1000:43e4     88 07            MOV byte ptr [BX],AL
  1000:43e6     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:43ea     BE AE 06         MOV SI,0x6ae
  1000:43ed     03 DE            ADD BX,SI
  1000:43ef     B6 02            MOV DH,0x2
  1000:43f1     80 0F 02         OR byte ptr [BX],0x2
  1000:43f4     43               INC BX
  1000:43f5     80 0F 02         OR byte ptr [BX],0x2
  1000:43f8     03 D9            ADD BX,CX
  1000:43fa     80 0F 02         OR byte ptr [BX],0x2
  1000:43fd     4B               DEC BX
  1000:43fe     80 0F 02         OR byte ptr [BX],0x2
  1000:4401     C3               RET

LAB_1000_4402:
  1000:4402     B9 26 00         MOV CX,0x26
  1000:4405     8A 04            MOV AL,byte ptr [SI]
  1000:4407     88 07            MOV byte ptr [BX],AL
  1000:4409     46               INC SI
  1000:440a     43               INC BX
  1000:440b     8A 04            MOV AL,byte ptr [SI]
  1000:440d     88 07            MOV byte ptr [BX],AL
  1000:440f     46               INC SI
  1000:4410     43               INC BX
  1000:4411     8A 04            MOV AL,byte ptr [SI]
  1000:4413     88 07            MOV byte ptr [BX],AL
  1000:4415     46               INC SI
  1000:4416     03 D9            ADD BX,CX
  1000:4418     8A 04            MOV AL,byte ptr [SI]
  1000:441a     88 07            MOV byte ptr [BX],AL
  1000:441c     46               INC SI
  1000:441d     4B               DEC BX
  1000:441e     8A 04            MOV AL,byte ptr [SI]
  1000:4420     88 07            MOV byte ptr [BX],AL
  1000:4422     46               INC SI
  1000:4423     4B               DEC BX
  1000:4424     8A 04            MOV AL,byte ptr [SI]
  1000:4426     88 07            MOV byte ptr [BX],AL
  1000:4428     46               INC SI
  1000:4429     03 D9            ADD BX,CX
  1000:442b     8A 04            MOV AL,byte ptr [SI]
  1000:442d     88 07            MOV byte ptr [BX],AL
  1000:442f     46               INC SI
  1000:4430     43               INC BX
  1000:4431     8A 04            MOV AL,byte ptr [SI]
  1000:4433     88 07            MOV byte ptr [BX],AL
  1000:4435     46               INC SI
  1000:4436     43               INC BX
  1000:4437     8A 04            MOV AL,byte ptr [SI]
  1000:4439     88 07            MOV byte ptr [BX],AL
  1000:443b     BA 86 06         MOV DX,0x686
  1000:443e     03 DA            ADD BX,DX
  1000:4440     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4444     88 07            MOV byte ptr [BX],AL
  1000:4446     43               INC BX
  1000:4447     88 07            MOV byte ptr [BX],AL
  1000:4449     43               INC BX
  1000:444a     88 07            MOV byte ptr [BX],AL
  1000:444c     03 D9            ADD BX,CX
  1000:444e     88 07            MOV byte ptr [BX],AL
  1000:4450     4B               DEC BX
  1000:4451     88 07            MOV byte ptr [BX],AL
  1000:4453     4B               DEC BX
  1000:4454     88 07            MOV byte ptr [BX],AL
  1000:4456     03 D9            ADD BX,CX
  1000:4458     88 07            MOV byte ptr [BX],AL
  1000:445a     43               INC BX
  1000:445b     88 07            MOV byte ptr [BX],AL
  1000:445d     43               INC BX
  1000:445e     88 07            MOV byte ptr [BX],AL
  1000:4460     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4464     BA 86 06         MOV DX,0x686
  1000:4467     03 DA            ADD BX,DX
  1000:4469     80 0F 02         OR byte ptr [BX],0x2
  1000:446c     43               INC BX
  1000:446d     80 0F 02         OR byte ptr [BX],0x2
  1000:4470     43               INC BX
  1000:4471     80 0F 02         OR byte ptr [BX],0x2
  1000:4474     03 D9            ADD BX,CX
  1000:4476     80 0F 02         OR byte ptr [BX],0x2
  1000:4479     4B               DEC BX
  1000:447a     80 0F 02         OR byte ptr [BX],0x2
  1000:447d     4B               DEC BX
  1000:447e     80 0F 02         OR byte ptr [BX],0x2
  1000:4481     03 D9            ADD BX,CX
  1000:4483     80 0F 02         OR byte ptr [BX],0x2
  1000:4486     43               INC BX
  1000:4487     80 0F 02         OR byte ptr [BX],0x2
  1000:448a     43               INC BX
  1000:448b     80 0F 02         OR byte ptr [BX],0x2
  1000:448e     C3               RET

FUN_1000_453a:
  1000:453a     B7 17            MOV BH,0x17
  1000:453c     B3 0A            MOV BL,0xa
  1000:453e     A0 89 16         MOV AL,[0x1689]
  1000:4541     3C 05            CMP AL,0x5
  1000:4543     72 10            JC 0x1000:4555
  1000:4545     2C 05            SUB AL,0x5
  1000:4547     32 E4            XOR AH,AH
  1000:4549     05 FA 05         ADD AX,0x5fa
  1000:454c     8B D0            MOV DX,AX
  1000:454e     B7 17            MOV BH,0x17
  1000:4550     B3 0A            MOV BL,0xa
  1000:4552     E9 B3 FA         JMP 0x1000:4008

LAB_1000_4555:
  1000:4555     FE C8            DEC AL
  1000:4557     74 3F            JZ 0x1000:4598
  1000:4559     FE C8            DEC AL
  1000:455b     74 35            JZ 0x1000:4592
  1000:455d     06               PUSH ES
  1000:455e     8C C8            MOV AX,CS
  1000:4560     8E C0            MOV ES,AX
  1000:4562     B7 17            MOV BH,0x17
  1000:4564     B3 0A            MOV BL,0xa
  1000:4566     BA 88 52         MOV DX,0x5288
  1000:4569     32 C0            XOR AL,AL
  1000:456b     BD 38 00         MOV BP,0x38
  1000:456e     FF 1E 08 05      CALLF [0x508]
  1000:4572     B7 16            MOV BH,0x16
  1000:4574     B3 07            MOV BL,0x7
  1000:4576     BA 88 52         MOV DX,0x5288
  1000:4579     32 C0            XOR AL,AL
  1000:457b     BD 38 00         MOV BP,0x38
  1000:457e     FF 1E 08 05      CALLF [0x508]
  1000:4582     FE C7            INC BH
  1000:4584     BA 88 52         MOV DX,0x5288
  1000:4587     32 C0            XOR AL,AL
  1000:4589     BD 38 00         MOV BP,0x38
  1000:458c     FF 1E 08 05      CALLF [0x508]
  1000:4590     07               POP ES
  1000:4591     C3               RET

LAB_1000_4592:
  1000:4592     BA F6 05         MOV DX,0x5f6
  1000:4595     E9 70 FA         JMP 0x1000:4008

LAB_1000_4598:
  1000:4598     06               PUSH ES
  1000:4599     8C C8            MOV AX,CS
  1000:459b     8E C0            MOV ES,AX
  1000:459d     B7 17            MOV BH,0x17
  1000:459f     B3 0A            MOV BL,0xa
  1000:45a1     BA 88 52         MOV DX,0x5288
  1000:45a4     32 C0            XOR AL,AL
  1000:45a6     BD 38 00         MOV BP,0x38
  1000:45a9     FF 1E 08 05      CALLF [0x508]
  1000:45ad     07               POP ES
  1000:45ae     C3               RET

FUN_1000_45b0:
  1000:45b0     0A C0            OR AL,AL
  1000:45b2     75 01            JNZ 0x1000:45b5
  1000:45b4     C3               RET

LAB_1000_45b5:
  1000:45b5     53               PUSH BX
  1000:45b6     52               PUSH DX
  1000:45b7     87 D3            XCHG BX,DX
  1000:45b9     2C 99            SUB AL,0x99
  1000:45bb     B7 00            MOV BH,0x0
  1000:45bd     8A D8            MOV BL,AL
  1000:45bf     03 DB            ADD BX,BX
  1000:45c1     03 DB            ADD BX,BX
  1000:45c3     03 DB            ADD BX,BX
  1000:45c5     03 DB            ADD BX,BX
  1000:45c7     B9 A3 6D         MOV CX,0x6da3
  1000:45ca     03 D9            ADD BX,CX
  1000:45cc     87 D3            XCHG BX,DX
  1000:45ce     B0 07            MOV AL,0x7
  1000:45d0     BD 56 00         MOV BP,0x56
  1000:45d3     FF 1E 08 05      CALLF [0x508]
  1000:45d7     5A               POP DX
  1000:45d8     5B               POP BX
  1000:45d9     C3               RET

FUN_1000_45da:
  1000:45da     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:45de     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:45e2     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:45e6     32 E4            XOR AH,AH
  1000:45e8     02 C0            ADD AL,AL
  1000:45ea     05 1C 46         ADD AX,0x461c
  1000:45ed     8B D8            MOV BX,AX
  1000:45ef     2E 83 3F 00      CMP word ptr CS:[BX],0x0
  1000:45f3     74 1A            JZ 0x1000:460f
  1000:45f5     2E 8A 27         MOV AH,byte ptr CS:[BX]
  1000:45f8     2E 8A 47 01      MOV AL,byte ptr CS:[BX + 0x1]
  1000:45fc     8B D8            MOV BX,AX
  1000:45fe     B6 B0            MOV DH,0xb0
  1000:4600     B2 0E            MOV DL,0xe
  1000:4602     8B FA            MOV DI,DX
  1000:4604     B5 10            MOV CH,0x10
  1000:4606     B1 04            MOV CL,0x4
  1000:4608     BD 22 00         MOV BP,0x22
  1000:460b     FF 1E 08 05      CALLF [0x508]

LAB_1000_460f:
  1000:460f     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:4613     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:4617     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:461b     C3               RET

FUN_1000_4649:
  1000:4649     57               PUSH DI
  1000:464a     52               PUSH DX
  1000:464b     53               PUSH BX
  1000:464c     B3 0F            MOV BL,0xf
  1000:464e     BF 08 08         MOV DI,0x808
  1000:4651     B6 90            MOV DH,0x90
  1000:4653     B2 40            MOV DL,0x40
  1000:4655     BD 10 00         MOV BP,0x10
  1000:4658     FF 1E 08 05      CALLF [0x508]
  1000:465c     5B               POP BX
  1000:465d     5A               POP DX
  1000:465e     5F               POP DI
  1000:465f     C3               RET

FUN_1000_4666:
  1000:4666     BB 83 27         MOV BX,0x2783
  1000:4669     BA 08 00         MOV DX,0x8
  1000:466c     B5 00            MOV CH,0x0

LAB_1000_466e:
  1000:466e     8A 07            MOV AL,byte ptr [BX]
  1000:4670     03 DA            ADD BX,DX
  1000:4672     FE C5            INC CH
  1000:4674     24 80            AND AL,0x80
  1000:4676     74 02            JZ 0x1000:467a
  1000:4678     EB F4            JMP 0x1000:466e

LAB_1000_467a:
  1000:467a     8A C5            MOV AL,CH
  1000:467c     A2 60 16         MOV [0x1660],AL
  1000:467f     CB               RETF

FUN_1000_4763:
  1000:4763     24 0F            AND AL,0xf
  1000:4765     D0 E8            SHR AL,0x1
  1000:4767     02 C0            ADD AL,AL
  1000:4769     8B DA            MOV BX,DX
  1000:476b     32 E4            XOR AH,AH
  1000:476d     03 D8            ADD BX,AX
  1000:476f     8B 1F            MOV BX,word ptr [BX]
  1000:4771     81 C3 52 DC      ADD BX,0xdc52
  1000:4775     89 1E 32 16      MOV word ptr [0x1632],BX
  1000:4779     B0 01            MOV AL,0x1
  1000:477b     A2 31 16         MOV [0x1631],AL
  1000:477e     CB               RETF

FUN_1000_477f:
  1000:477f     E9 FF E2         JMP 0x1000:2a81

FUN_1000_4782:
  1000:4782     B0 11            MOV AL,0x11
  1000:4784     A2 62 05         MOV [0x562],AL
  1000:4787     E8 5F BE         CALL 0x1000:05e9
  1000:478a     B0 11            MOV AL,0x11
  1000:478c     A2 62 05         MOV [0x562],AL
  1000:478f     C3               RET

FUN_1000_480d:
  1000:480d     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:4812     75 04            JNZ 0x1000:4818
  1000:4814     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_4818:
  1000:4818     A0 76 05         MOV AL,[0x576]
  1000:481b     D0 C8            ROR AL,0x1
  1000:481d     D0 C8            ROR AL,0x1
  1000:481f     72 01            JC 0x1000:4822
  1000:4821     C3               RET

LAB_1000_4822:
  1000:4822     BB 81 F1         MOV BX,0xf181
  1000:4825     83 FB 0C         CMP BX,0xc
  1000:4828     7E 01            JLE 0x1000:482b
  1000:482a     90               NOP

LAB_1000_482b:
  1000:482b     2E 80 3E D0 51 01   CMP byte ptr CS:[0x51d0],0x1
  1000:4831     75 03            JNZ 0x1000:4836
  1000:4833     E8 CB 09         CALL 0x1000:5201

LAB_1000_4836:
  1000:4836     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:483b     75 04            JNZ 0x1000:4841
  1000:483d     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_4841:
  1000:4841     A0 74 05         MOV AL,[0x574]
  1000:4844     D0 C8            ROR AL,0x1
  1000:4846     D0 C8            ROR AL,0x1
  1000:4848     72 04            JC 0x1000:484e
  1000:484a     FF 1E E7 05      CALLF [0x5e7]

LAB_1000_484e:
  1000:484e     F6 06 76 05 08   TEST byte ptr [0x576],0x8
  1000:4853     75 0A            JNZ 0x1000:485f

LAB_1000_4855:
  1000:4855     F6 06 76 05 08   TEST byte ptr [0x576],0x8
  1000:485a     74 F9            JZ 0x1000:4855
  1000:485c     E8 87 33         CALL 0x1000:7be6

LAB_1000_485f:
  1000:485f     80 3E 74 05 77   CMP byte ptr [0x574],0x77
  1000:4864     75 11            JNZ 0x1000:4877

LAB_1000_4866:
  1000:4866     9A 7C 40 00 10   CALLF 0x1000:407c
  1000:486b     A0 B9 16         MOV AL,[0x16b9]
  1000:486e     0A C0            OR AL,AL
  1000:4870     74 03            JZ 0x1000:4875
  1000:4872     EB 08            JMP 0x1000:487c

LAB_1000_4875:
  1000:4875     EB EF            JMP 0x1000:4866

LAB_1000_4877:
  1000:4877     83 3F 0C         CMP word ptr [BX],0xc
  1000:487a     72 AF            JC 0x1000:482b

LAB_1000_487c:
  1000:487c     33 C0            XOR AX,AX
  1000:487e     89 07            MOV word ptr [BX],AX
  1000:4880     C3               RET

FUN_1000_4881:
  1000:4881     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:4886     75 04            JNZ 0x1000:488c
  1000:4888     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_488c:
  1000:488c     A0 75 05         MOV AL,[0x575]
  1000:488f     D0 C8            ROR AL,0x1
  1000:4891     72 01            JC 0x1000:4894
  1000:4893     C3               RET

LAB_1000_4894:
  1000:4894     BB B7 16         MOV BX,0x16b7
  1000:4897     C7 07 00 00      MOV word ptr [BX],0x0

LAB_1000_489b:
  1000:489b     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:48a0     75 04            JNZ 0x1000:48a6
  1000:48a2     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_48a6:
  1000:48a6     8B 07            MOV AX,word ptr [BX]
  1000:48a8     3B C1            CMP AX,CX
  1000:48aa     72 EF            JC 0x1000:489b
  1000:48ac     C3               RET

FUN_1000_48ad:
  1000:48ad     BE 95 86         MOV SI,0x8695
  1000:48b0     BF 95 AD         MOV DI,0xad95
  1000:48b3     B5 10            MOV CH,0x10

LAB_1000_48b5:
  1000:48b5     51               PUSH CX
  1000:48b6     E8 09 00         CALL 0x1000:48c2
  1000:48b9     83 C6 30         ADD SI,0x30
  1000:48bc     59               POP CX
  1000:48bd     FE CD            DEC CH
  1000:48bf     75 F4            JNZ 0x1000:48b5
  1000:48c1     C3               RET

FUN_1000_48c2:
  1000:48c2     B9 08 00         MOV CX,0x8
  1000:48c5     56               PUSH SI

LAB_1000_48c6:
  1000:48c6     8B 04            MOV AX,word ptr [SI]
  1000:48c8     89 05            MOV word ptr [DI],AX
  1000:48ca     46               INC SI
  1000:48cb     46               INC SI
  1000:48cc     8B 04            MOV AX,word ptr [SI]
  1000:48ce     89 85 00 01      MOV word ptr [DI + 0x100],AX
  1000:48d2     46               INC SI
  1000:48d3     46               INC SI
  1000:48d4     8B 04            MOV AX,word ptr [SI]
  1000:48d6     89 85 00 02      MOV word ptr [DI + 0x200],AX
  1000:48da     46               INC SI
  1000:48db     46               INC SI
  1000:48dc     47               INC DI
  1000:48dd     47               INC DI
  1000:48de     E2 E6            LOOP 0x1000:48c6
  1000:48e0     5E               POP SI
  1000:48e1     C3               RET

FUN_1000_48e2:
  1000:48e2     E8 0F 00         CALL 0x1000:48f4
  1000:48e5     8A EE            MOV CH,DH
  1000:48e7     A0 25 16         MOV AL,[0x1625]
  1000:48ea     0A C0            OR AL,AL
  1000:48ec     8A C5            MOV AL,CH
  1000:48ee     74 03            JZ 0x1000:48f3
  1000:48f0     E9 64 09         JMP 0x1000:5257

LAB_1000_48f3:
  1000:48f3     C3               RET

FUN_1000_48f4:
  1000:48f4     B6 00            MOV DH,0x0
  1000:48f6     A0 6B 05         MOV AL,[0x56b]
  1000:48f9     D0 C0            ROL AL,0x1
  1000:48fb     72 06            JC 0x1000:4903
  1000:48fd     80 CE 04         OR DH,0x4
  1000:4900     80 CE 01         OR DH,0x1

LAB_1000_4903:
  1000:4903     D0 C0            ROL AL,0x1
  1000:4905     72 03            JC 0x1000:490a
  1000:4907     80 CE 08         OR DH,0x8

LAB_1000_490a:
  1000:490a     D0 C0            ROL AL,0x1
  1000:490c     D0 C0            ROL AL,0x1
  1000:490e     72 03            JC 0x1000:4913
  1000:4910     80 CE 04         OR DH,0x4

LAB_1000_4913:
  1000:4913     D0 C0            ROL AL,0x1
  1000:4915     72 06            JC 0x1000:491d
  1000:4917     80 CE 08         OR DH,0x8
  1000:491a     80 CE 02         OR DH,0x2

LAB_1000_491d:
  1000:491d     D0 C0            ROL AL,0x1
  1000:491f     72 03            JC 0x1000:4924
  1000:4921     80 CE 02         OR DH,0x2

LAB_1000_4924:
  1000:4924     D0 C0            ROL AL,0x1
  1000:4926     72 06            JC 0x1000:492e
  1000:4928     80 CE 04         OR DH,0x4
  1000:492b     80 CE 02         OR DH,0x2

LAB_1000_492e:
  1000:492e     A0 6C 05         MOV AL,[0x56c]
  1000:4931     D0 C8            ROR AL,0x1
  1000:4933     72 03            JC 0x1000:4938
  1000:4935     80 CE 01         OR DH,0x1

LAB_1000_4938:
  1000:4938     D0 C8            ROR AL,0x1
  1000:493a     72 06            JC 0x1000:4942
  1000:493c     80 CE 08         OR DH,0x8
  1000:493f     80 CE 01         OR DH,0x1

LAB_1000_4942:
  1000:4942     A0 70 05         MOV AL,[0x570]
  1000:4945     D0 C8            ROR AL,0x1
  1000:4947     72 03            JC 0x1000:494c
  1000:4949     80 CE 40         OR DH,0x40

LAB_1000_494c:
  1000:494c     D0 C8            ROR AL,0x1
  1000:494e     D0 C8            ROR AL,0x1
  1000:4950     72 03            JC 0x1000:4955
  1000:4952     80 CE 80         OR DH,0x80

LAB_1000_4955:
  1000:4955     A0 6C 05         MOV AL,[0x56c]
  1000:4958     D0 C0            ROL AL,0x1
  1000:495a     72 03            JC 0x1000:495f
  1000:495c     80 CE 40         OR DH,0x40

LAB_1000_495f:
  1000:495f     A0 74 05         MOV AL,[0x574]
  1000:4962     24 40            AND AL,0x40
  1000:4964     75 03            JNZ 0x1000:4969
  1000:4966     80 CE 40         OR DH,0x40

LAB_1000_4969:
  1000:4969     A0 73 05         MOV AL,[0x573]
  1000:496c     24 40            AND AL,0x40
  1000:496e     75 03            JNZ 0x1000:4973
  1000:4970     80 CE 80         OR DH,0x80

LAB_1000_4973:
  1000:4973     32 C0            XOR AL,AL
  1000:4975     80 3E 55 05 01   CMP byte ptr [0x555],0x1
  1000:497a     75 0B            JNZ 0x1000:4987
  1000:497c     55               PUSH BP
  1000:497d     BD 02 00         MOV BP,0x2
  1000:4980     FF 1E 00 05      CALLF [0x500]
  1000:4984     5D               POP BP
  1000:4985     0A F0            OR DH,AL

LAB_1000_4987:
  1000:4987     C3               RET

FUN_1000_4988:
  1000:4988     BB 27 16         MOV BX,0x1627
  1000:498b     8A 07            MOV AL,byte ptr [BX]
  1000:498d     8A E8            MOV CH,AL
  1000:498f     24 F8            AND AL,0xf8
  1000:4991     8A C8            MOV CL,AL
  1000:4993     8A C5            MOV AL,CH
  1000:4995     FE C0            INC AL
  1000:4997     24 07            AND AL,0x7
  1000:4999     0A C1            OR AL,CL
  1000:499b     88 07            MOV byte ptr [BX],AL
  1000:499d     C3               RET

FUN_1000_49b8:
  1000:49b8     A0 89 16         MOV AL,[0x1689]
  1000:49bb     3C 03            CMP AL,0x3
  1000:49bd     73 0B            JNC 0x1000:49ca
  1000:49bf     32 E4            XOR AH,AH
  1000:49c1     D0 E0            SHL AL,0x1
  1000:49c3     8B F8            MOV DI,AX

switchD:
  1000:49c5     2E FF A5 A4 49   JMP word ptr CS:[DI + 0x49a4]

default:
  1000:49ca     2C 04            SUB AL,0x4
  1000:49cc     BB F7 05         MOV BX,0x5f7

LAB_1000_49cf:
  1000:49cf     FE C8            DEC AL
  1000:49d1     74 03            JZ 0x1000:49d6
  1000:49d3     43               INC BX
  1000:49d4     EB F9            JMP 0x1000:49cf

LAB_1000_49d6:
  1000:49d6     8A 07            MOV AL,byte ptr [BX]
  1000:49d8     04 02            ADD AL,0x2
  1000:49da     D0 E0            SHL AL,0x1
  1000:49dc     32 E4            XOR AH,AH
  1000:49de     8B F8            MOV DI,AX
  1000:49e0     2E FF 95 A4 49   CALL word ptr CS:[DI + 0x49a4]
  1000:49e5     2E A1 9E 49      MOV AX,CS:[0x499e]
  1000:49e9     2E A3 60 46      MOV CS:[0x4660],AX
  1000:49ed     2E A1 A0 49      MOV AX,CS:[0x49a0]
  1000:49f1     2E A3 62 46      MOV CS:[0x4662],AX
  1000:49f5     2E A1 A2 49      MOV AX,CS:[0x49a2]
  1000:49f9     2E A3 64 46      MOV CS:[0x4664],AX
  1000:49fd     C3               RET

caseD_0:
  1000:49fe     2E C7 06 9E 49 C8 85   MOV word ptr CS:[0x499e],0x85c8
  1000:4a05     2E C7 06 A0 49 00 00   MOV word ptr CS:[0x49a0],0x0
  1000:4a0c     2E C7 06 A2 49 00 00   MOV word ptr CS:[0x49a2],0x0
  1000:4a13     C3               RET

caseD_1:
  1000:4a14     2E A1 60 46      MOV AX,CS:[0x4660]
  1000:4a18     2E A3 9E 49      MOV CS:[0x499e],AX
  1000:4a1c     2E A1 62 46      MOV AX,CS:[0x4662]
  1000:4a20     2E A3 A0 49      MOV CS:[0x49a0],AX
  1000:4a24     2E A1 64 46      MOV AX,CS:[0x4664]
  1000:4a28     2E A3 A2 49      MOV CS:[0x49a2],AX
  1000:4a2c     C3               RET

caseD_2:
  1000:4a2d     2E C7 06 9E 49 AB 82   MOV word ptr CS:[0x499e],0x82ab
  1000:4a34     2E C7 06 A0 49 69 83   MOV word ptr CS:[0x49a0],0x8369
  1000:4a3b     2E C7 06 A2 49 D2 84   MOV word ptr CS:[0x49a2],0x84d2
  1000:4a42     C3               RET

FUN_1000_4b37:
  1000:4b37     06               PUSH ES
  1000:4b38     53               PUSH BX
  1000:4b39     50               PUSH AX
  1000:4b3a     32 E4            XOR AH,AH
  1000:4b3c     8A E8            MOV CH,AL
  1000:4b3e     02 C0            ADD AL,AL
  1000:4b40     02 C5            ADD AL,CH
  1000:4b42     02 C0            ADD AL,AL
  1000:4b44     05 8B 53         ADD AX,0x538b
  1000:4b47     8B D0            MOV DX,AX
  1000:4b49     BB 00 00         MOV BX,0x0
  1000:4b4c     E8 E9 D5         CALL 0x1000:2138
  1000:4b4f     2E 89 1E 33 4B   MOV word ptr CS:[0x4b33],BX
  1000:4b54     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:4b59     74 45            JZ 0x1000:4ba0
  1000:4b5b     1E               PUSH DS
  1000:4b5c     B8 00 06         MOV AX,0x600
  1000:4b5f     FF 1E D7 05      CALLF [0x5d7]
  1000:4b63     2E A3 35 4B      MOV CS:[0x4b35],AX
  1000:4b67     8E C0            MOV ES,AX
  1000:4b69     33 FF            XOR DI,DI
  1000:4b6b     33 F6            XOR SI,SI
  1000:4b6d     2E A1 33 4B      MOV AX,CS:[0x4b33]
  1000:4b71     8E D8            MOV DS,AX
  1000:4b73     B0 03            MOV AL,0x3
  1000:4b75     E8 64 22         CALL 0x1000:6ddc
  1000:4b78     1F               POP DS
  1000:4b79     1E               PUSH DS
  1000:4b7a     1E               PUSH DS
  1000:4b7b     07               POP ES
  1000:4b7c     2E 8B 1E 35 4B   MOV BX,word ptr CS:[0x4b35]
  1000:4b81     8E DB            MOV DS,BX
  1000:4b83     33 F6            XOR SI,SI
  1000:4b85     B2 08            MOV DL,0x8
  1000:4b87     B6 20            MOV DH,0x20
  1000:4b89     BF 24 A0         MOV DI,0xa024
  1000:4b8c     BD 4A 00         MOV BP,0x4a
  1000:4b8f     26 FF 1E 08 05   CALLF [0x508]
  1000:4b94     1F               POP DS
  1000:4b95     2E 8B 1E 35 4B   MOV BX,word ptr CS:[0x4b35]
  1000:4b9a     FF 1E DB 05      CALLF [0x5db]
  1000:4b9e     EB 34            JMP 0x1000:4bd4

LAB_1000_4ba0:
  1000:4ba0     1E               PUSH DS
  1000:4ba1     1E               PUSH DS
  1000:4ba2     07               POP ES
  1000:4ba3     8E DB            MOV DS,BX
  1000:4ba5     B2 08            MOV DL,0x8
  1000:4ba7     B6 20            MOV DH,0x20
  1000:4ba9     BF 24 A0         MOV DI,0xa024
  1000:4bac     B3 01            MOV BL,0x1
  1000:4bae     BE 00 00         MOV SI,0x0
  1000:4bb1     BD 12 00         MOV BP,0x12
  1000:4bb4     26 FF 1E 08 05   CALLF [0x508]
  1000:4bb9     B3 02            MOV BL,0x2
  1000:4bbb     BE 00 01         MOV SI,0x100
  1000:4bbe     BD 12 00         MOV BP,0x12
  1000:4bc1     26 FF 1E 08 05   CALLF [0x508]
  1000:4bc6     B3 04            MOV BL,0x4
  1000:4bc8     BE 00 02         MOV SI,0x200
  1000:4bcb     BD 12 00         MOV BP,0x12
  1000:4bce     26 FF 1E 08 05   CALLF [0x508]
  1000:4bd3     1F               POP DS

LAB_1000_4bd4:
  1000:4bd4     2E 8B 1E 33 4B   MOV BX,word ptr CS:[0x4b33]
  1000:4bd9     FF 1E DB 05      CALLF [0x5db]
  1000:4bdd     58               POP AX
  1000:4bde     5B               POP BX
  1000:4bdf     07               POP ES
  1000:4be0     C3               RET

FUN_1000_4be6:
  1000:4be6     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:4bea     0A C0            OR AL,AL
  1000:4bec     75 01            JNZ 0x1000:4bef
  1000:4bee     C3               RET

LAB_1000_4bef:
  1000:4bef     BB E2 4B         MOV BX,0x4be2
  1000:4bf2     2E FE 07         INC byte ptr CS:[BX]
  1000:4bf5     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:4bf8     3C 08            CMP AL,0x8
  1000:4bfa     74 01            JZ 0x1000:4bfd
  1000:4bfc     C3               RET

LAB_1000_4bfd:
  1000:4bfd     2E C6 07 00      MOV byte ptr CS:[BX],0x0
  1000:4c01     43               INC BX
  1000:4c02     43               INC BX
  1000:4c03     2E FE 0F         DEC byte ptr CS:[BX]
  1000:4c06     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:4c09     3C 2F            CMP AL,0x2f
  1000:4c0b     75 21            JNZ 0x1000:4c2e
  1000:4c0d     2E C6 07 39      MOV byte ptr CS:[BX],0x39
  1000:4c11     4B               DEC BX
  1000:4c12     2E FE 0F         DEC byte ptr CS:[BX]
  1000:4c15     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:4c18     3C 2F            CMP AL,0x2f
  1000:4c1a     75 12            JNZ 0x1000:4c2e
  1000:4c1c     32 C0            XOR AL,AL
  1000:4c1e     A2 15 DC         MOV [0xdc15],AL
  1000:4c21     A2 01 17         MOV [0x1701],AL
  1000:4c24     2E A2 E1 4B      MOV CS:[0x4be1],AL
  1000:4c28     A2 B4 16         MOV [0x16b4],AL
  1000:4c2b     A2 B5 16         MOV [0x16b5],AL

LAB_1000_4c2e:
  1000:4c2e     06               PUSH ES
  1000:4c2f     8C C8            MOV AX,CS
  1000:4c31     8E C0            MOV ES,AX
  1000:4c33     B7 16            MOV BH,0x16
  1000:4c35     B3 13            MOV BL,0x13
  1000:4c37     BA 88 52         MOV DX,0x5288
  1000:4c3a     32 C0            XOR AL,AL
  1000:4c3c     BD 38 00         MOV BP,0x38
  1000:4c3f     FF 1E 08 05      CALLF [0x508]
  1000:4c43     07               POP ES
  1000:4c44     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:4c48     0A C0            OR AL,AL
  1000:4c4a     75 01            JNZ 0x1000:4c4d
  1000:4c4c     C3               RET

LAB_1000_4c4d:
  1000:4c4d     06               PUSH ES
  1000:4c4e     8C C8            MOV AX,CS
  1000:4c50     8E C0            MOV ES,AX
  1000:4c52     B7 16            MOV BH,0x16
  1000:4c54     B3 13            MOV BL,0x13
  1000:4c56     BA E3 4B         MOV DX,0x4be3
  1000:4c59     B0 32            MOV AL,0x32
  1000:4c5b     BD 38 00         MOV BP,0x38
  1000:4c5e     FF 1E 08 05      CALLF [0x508]
  1000:4c62     07               POP ES
  1000:4c63     C3               RET

FUN_1000_4c64:
  1000:4c64     A0 5A 16         MOV AL,[0x165a]
  1000:4c67     0A C0            OR AL,AL
  1000:4c69     75 01            JNZ 0x1000:4c6c
  1000:4c6b     C3               RET

LAB_1000_4c6c:
  1000:4c6c     FE C8            DEC AL
  1000:4c6e     75 0C            JNZ 0x1000:4c7c
  1000:4c70     FE 0E 34 16      DEC byte ptr [0x1634]
  1000:4c74     BB 36 16         MOV BX,0x1636
  1000:4c77     FE 0F            DEC byte ptr [BX]
  1000:4c79     E9 E1 F1         JMP 0x1000:3e5d

LAB_1000_4c7c:
  1000:4c7c     FE 06 34 16      INC byte ptr [0x1634]
  1000:4c80     BB 36 16         MOV BX,0x1636
  1000:4c83     FE 07            INC byte ptr [BX]
  1000:4c85     E9 89 F1         JMP 0x1000:3e11

FUN_1000_4c91:
  1000:4c91     2E 80 3E 90 4C 00   CMP byte ptr CS:[0x4c90],0x0
  1000:4c97     74 01            JZ 0x1000:4c9a
  1000:4c99     C3               RET

LAB_1000_4c9a:
  1000:4c9a     A0 B9 16         MOV AL,[0x16b9]
  1000:4c9d     0A C0            OR AL,AL
  1000:4c9f     74 01            JZ 0x1000:4ca2
  1000:4ca1     C3               RET

LAB_1000_4ca2:
  1000:4ca2     A0 B6 16         MOV AL,[0x16b6]
  1000:4ca5     0A C0            OR AL,AL
  1000:4ca7     74 01            JZ 0x1000:4caa
  1000:4ca9     C3               RET

LAB_1000_4caa:
  1000:4caa     A0 25 16         MOV AL,[0x1625]
  1000:4cad     0A C0            OR AL,AL
  1000:4caf     75 0A            JNZ 0x1000:4cbb
  1000:4cb1     A0 75 05         MOV AL,[0x575]
  1000:4cb4     D0 C8            ROR AL,0x1
  1000:4cb6     72 03            JC 0x1000:4cbb
  1000:4cb8     E9 AE 00         JMP 0x1000:4d69

LAB_1000_4cbb:
  1000:4cbb     BB 70 16         MOV BX,0x1670
  1000:4cbe     A0 90 16         MOV AL,[0x1690]
  1000:4cc1     8A E8            MOV CH,AL
  1000:4cc3     24 80            AND AL,0x80
  1000:4cc5     74 22            JZ 0x1000:4ce9
  1000:4cc7     A0 2D 16         MOV AL,[0x162d]
  1000:4cca     0A C0            OR AL,AL
  1000:4ccc     75 10            JNZ 0x1000:4cde
  1000:4cce     A0 31 16         MOV AL,[0x1631]
  1000:4cd1     0A C0            OR AL,AL
  1000:4cd3     75 09            JNZ 0x1000:4cde
  1000:4cd5     8A C5            MOV AL,CH
  1000:4cd7     24 02            AND AL,0x2
  1000:4cd9     74 03            JZ 0x1000:4cde
  1000:4cdb     E9 8B 00         JMP 0x1000:4d69

LAB_1000_4cde:
  1000:4cde     8A 07            MOV AL,byte ptr [BX]
  1000:4ce0     3C 0A            CMP AL,0xa
  1000:4ce2     74 21            JZ 0x1000:4d05
  1000:4ce4     FE 07            INC byte ptr [BX]
  1000:4ce6     EB 33            JMP 0x1000:4d1b

LAB_1000_4ce9:
  1000:4ce9     8A 07            MOV AL,byte ptr [BX]
  1000:4ceb     0A C0            OR AL,AL
  1000:4ced     75 01            JNZ 0x1000:4cf0
  1000:4cef     C3               RET

LAB_1000_4cf0:
  1000:4cf0     C6 07 00         MOV byte ptr [BX],0x0
  1000:4cf3     E8 4C 00         CALL 0x1000:4d42
  1000:4cf6     A0 89 16         MOV AL,[0x1689]
  1000:4cf9     3C 01            CMP AL,0x1
  1000:4cfb     75 03            JNZ 0x1000:4d00
  1000:4cfd     E9 30 C0         JMP 0x1000:0d30

LAB_1000_4d00:
  1000:4d00     2E FF 26 9E 49   JMP word ptr CS:[0x499e]

FUN_1000_4d05:
  1000:4d05     C6 07 00         MOV byte ptr [BX],0x0
  1000:4d08     2E C7 06 9E 49 FB 7E   MOV word ptr CS:[0x499e],0x7efb
  1000:4d0f     2E C7 06 A0 49 9B 82   MOV word ptr CS:[0x49a0],0x829b
  1000:4d16     2E FF 26 9E 49   JMP word ptr CS:[0x499e]

FUN_1000_4d1b:
  1000:4d1b     A0 70 16         MOV AL,[0x1670]
  1000:4d1e     0A C0            OR AL,AL
  1000:4d20     75 01            JNZ 0x1000:4d23
  1000:4d22     C3               RET

LAB_1000_4d23:
  1000:4d23     BB 2C 54         MOV BX,0x542c
  1000:4d26     FE C8            DEC AL
  1000:4d28     02 C0            ADD AL,AL
  1000:4d2a     02 C0            ADD AL,AL
  1000:4d2c     32 E4            XOR AH,AH
  1000:4d2e     03 D8            ADD BX,AX
  1000:4d30     2E 8B 17         MOV DX,word ptr CS:[BX]
  1000:4d33     43               INC BX
  1000:4d34     43               INC BX
  1000:4d35     2E 8B 1F         MOV BX,word ptr CS:[BX]
  1000:4d38     B0 02            MOV AL,0x2
  1000:4d3a     BD 56 00         MOV BP,0x56
  1000:4d3d     FF 1E 08 05      CALLF [0x508]
  1000:4d41     C3               RET

FUN_1000_4d42:
  1000:4d42     B0 0A            MOV AL,0xa

LAB_1000_4d44:
  1000:4d44     BB 2C 54         MOV BX,0x542c
  1000:4d47     50               PUSH AX
  1000:4d48     FE C8            DEC AL
  1000:4d4a     02 C0            ADD AL,AL
  1000:4d4c     02 C0            ADD AL,AL
  1000:4d4e     32 E4            XOR AH,AH
  1000:4d50     03 D8            ADD BX,AX
  1000:4d52     2E 8B 17         MOV DX,word ptr CS:[BX]
  1000:4d55     43               INC BX
  1000:4d56     43               INC BX
  1000:4d57     2E 8B 1F         MOV BX,word ptr CS:[BX]
  1000:4d5a     32 C0            XOR AL,AL
  1000:4d5c     BD 56 00         MOV BP,0x56
  1000:4d5f     FF 1E 08 05      CALLF [0x508]
  1000:4d63     58               POP AX
  1000:4d64     FE C8            DEC AL
  1000:4d66     75 DC            JNZ 0x1000:4d44
  1000:4d68     C3               RET

FUN_1000_4d69:
  1000:4d69     BB 90 16         MOV BX,0x1690
  1000:4d6c     9C               PUSHF
  1000:4d6d     80 27 FD         AND byte ptr [BX],0xfd
  1000:4d70     9D               POPF
  1000:4d71     B0 0A            MOV AL,0xa

LAB_1000_4d73:
  1000:4d73     A2 70 16         MOV [0x1670],AL
  1000:4d76     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4d7a     E8 9E FF         CALL 0x1000:4d1b
  1000:4d7d     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4d81     FE C8            DEC AL
  1000:4d83     75 EE            JNZ 0x1000:4d73
  1000:4d85     BB 70 16         MOV BX,0x1670
  1000:4d88     E9 7A FF         JMP 0x1000:4d05

FUN_1000_4d8b:
  1000:4d8b     2E C7 06 9E 49 C8 85   MOV word ptr CS:[0x499e],0x85c8
  1000:4d92     2E FF 16 9E 49   CALL word ptr CS:[0x499e]
  1000:4d97     50               PUSH AX
  1000:4d98     2E C7 06 9E 49 FB 7E   MOV word ptr CS:[0x499e],0x7efb
  1000:4d9f     58               POP AX
  1000:4da0     C3               RET

FUN_1000_4db0:
  1000:4db0     8B 0E 34 16      MOV CX,word ptr [0x1634]
  1000:4db4     8A 44 01         MOV AL,byte ptr [SI + 0x1]
  1000:4db7     04 03            ADD AL,0x3
  1000:4db9     2A C1            SUB AL,CL
  1000:4dbb     8A C8            MOV CL,AL
  1000:4dbd     8A 44 02         MOV AL,byte ptr [SI + 0x2]
  1000:4dc0     04 02            ADD AL,0x2
  1000:4dc2     2A C5            SUB AL,CH
  1000:4dc4     8A E8            MOV CH,AL
  1000:4dc6     CB               RETF

FUN_1000_4dc7:
  1000:4dc7     32 E4            XOR AH,AH
  1000:4dc9     8B D0            MOV DX,AX
  1000:4dcb     D1 E2            SHL DX,0x1
  1000:4dcd     D1 E0            SHL AX,0x1
  1000:4dcf     D1 E0            SHL AX,0x1
  1000:4dd1     D1 E0            SHL AX,0x1
  1000:4dd3     D1 E0            SHL AX,0x1
  1000:4dd5     D1 E0            SHL AX,0x1
  1000:4dd7     03 C2            ADD AX,DX
  1000:4dd9     03 C2            ADD AX,DX
  1000:4ddb     03 C2            ADD AX,DX
  1000:4ddd     8B D0            MOV DX,AX
  1000:4ddf     CB               RETF

FUN_1000_4de0:
  1000:4de0     53               PUSH BX
  1000:4de1     8A C6            MOV AL,DH
  1000:4de3     02 C0            ADD AL,AL
  1000:4de5     02 C0            ADD AL,AL
  1000:4de7     02 C0            ADD AL,AL
  1000:4de9     02 C6            ADD AL,DH
  1000:4deb     8A F8            MOV BH,AL
  1000:4ded     02 C6            ADD AL,DH
  1000:4def     8A D8            MOV BL,AL
  1000:4df1     8A C7            MOV AL,BH
  1000:4df3     32 FF            XOR BH,BH
  1000:4df5     8A EF            MOV CH,BH
  1000:4df7     02 C3            ADD AL,BL
  1000:4df9     8A D8            MOV BL,AL
  1000:4dfb     12 C7            ADC AL,BH
  1000:4dfd     2A C3            SUB AL,BL
  1000:4dff     8A F8            MOV BH,AL
  1000:4e01     03 DB            ADD BX,BX
  1000:4e03     8A CA            MOV CL,DL
  1000:4e05     03 D9            ADD BX,CX
  1000:4e07     59               POP CX
  1000:4e08     03 D9            ADD BX,CX
  1000:4e0a     CB               RETF

FUN_1000_4e2b:
  1000:4e2b     A0 DA 74         MOV AL,[0x74da]
  1000:4e2e     3C C0            CMP AL,0xc0
  1000:4e30     75 1B            JNZ 0x1000:4e4d
  1000:4e32     8A FE            MOV BH,DH
  1000:4e34     32 DB            XOR BL,BL
  1000:4e36     8A F3            MOV DH,BL
  1000:4e38     D1 EB            SHR BX,0x1
  1000:4e3a     D1 EB            SHR BX,0x1
  1000:4e3c     8B CB            MOV CX,BX
  1000:4e3e     D1 EB            SHR BX,0x1
  1000:4e40     03 D9            ADD BX,CX
  1000:4e42     8A C2            MOV AL,DL
  1000:4e44     D0 EA            SHR DL,0x1
  1000:4e46     03 DA            ADD BX,DX
  1000:4e48     87 D3            XCHG BX,DX
  1000:4e4a     A8 01            TEST AL,0x1
  1000:4e4c     C3               RET

LAB_1000_4e4d:
  1000:4e4d     8A FE            MOV BH,DH
  1000:4e4f     32 DB            XOR BL,BL
  1000:4e51     8A F3            MOV DH,BL
  1000:4e53     D1 EB            SHR BX,0x1
  1000:4e55     D1 EB            SHR BX,0x1
  1000:4e57     D1 EB            SHR BX,0x1
  1000:4e59     8B CB            MOV CX,BX
  1000:4e5b     D1 EB            SHR BX,0x1
  1000:4e5d     03 D9            ADD BX,CX
  1000:4e5f     8A C2            MOV AL,DL
  1000:4e61     D0 EA            SHR DL,0x1
  1000:4e63     03 DA            ADD BX,DX
  1000:4e65     87 D3            XCHG BX,DX
  1000:4e67     A8 01            TEST AL,0x1
  1000:4e69     C3               RET

FUN_1000_4e6a:
  1000:4e6a     8A 36 35 16      MOV DH,byte ptr [0x1635]
  1000:4e6e     A0 2A 16         MOV AL,[0x162a]
  1000:4e71     04 02            ADD AL,0x2
  1000:4e73     2A C6            SUB AL,DH
  1000:4e75     8A F0            MOV DH,AL
  1000:4e77     B2 12            MOV DL,0x12
  1000:4e79     C3               RET

FUN_1000_4e7a:
  1000:4e7a     8A 3E 35 16      MOV BH,byte ptr [0x1635]
  1000:4e7e     A0 2A 16         MOV AL,[0x162a]
  1000:4e81     2A C7            SUB AL,BH
  1000:4e83     8A D8            MOV BL,AL
  1000:4e85     02 C0            ADD AL,AL
  1000:4e87     02 C0            ADD AL,AL
  1000:4e89     02 C0            ADD AL,AL
  1000:4e8b     02 C3            ADD AL,BL
  1000:4e8d     8A F8            MOV BH,AL
  1000:4e8f     02 C3            ADD AL,BL
  1000:4e91     8A D8            MOV BL,AL
  1000:4e93     8A C7            MOV AL,BH
  1000:4e95     32 FF            XOR BH,BH
  1000:4e97     32 E4            XOR AH,AH
  1000:4e99     03 D8            ADD BX,AX
  1000:4e9b     03 DB            ADD BX,BX
  1000:4e9d     03 DA            ADD BX,DX
  1000:4e9f     C3               RET

FUN_1000_4ea0:
  1000:4ea0     2B DA            SUB BX,DX
  1000:4ea2     33 C9            XOR CX,CX
  1000:4ea4     BA 26 00         MOV DX,0x26

LAB_1000_4ea7:
  1000:4ea7     FE C5            INC CH
  1000:4ea9     1B DA            SBB BX,DX
  1000:4eab     73 FA            JNC 0x1000:4ea7
  1000:4ead     FE CD            DEC CH
  1000:4eaf     03 DA            ADD BX,DX
  1000:4eb1     8A D3            MOV DL,BL
  1000:4eb3     8A F5            MOV DH,CH
  1000:4eb5     C3               RET

FUN_1000_4ecb:
  1000:4ecb     53               PUSH BX
  1000:4ecc     8A 04            MOV AL,byte ptr [SI]
  1000:4ece     8A E8            MOV CH,AL
  1000:4ed0     24 70            AND AL,0x70
  1000:4ed2     75 03            JNZ 0x1000:4ed7
  1000:4ed4     E9 82 00         JMP 0x1000:4f59

LAB_1000_4ed7:
  1000:4ed7     8A C5            MOV AL,CH
  1000:4ed9     D0 C8            ROR AL,0x1
  1000:4edb     D0 C8            ROR AL,0x1
  1000:4edd     D0 C8            ROR AL,0x1
  1000:4edf     D0 C8            ROR AL,0x1
  1000:4ee1     24 07            AND AL,0x7
  1000:4ee3     8A E8            MOV CH,AL
  1000:4ee5     02 C0            ADD AL,AL
  1000:4ee7     02 C5            ADD AL,CH
  1000:4ee9     32 E4            XOR AH,AH
  1000:4eeb     05 68 DF         ADD AX,0xdf68
  1000:4eee     8B D8            MOV BX,AX
  1000:4ef0     8B 17            MOV DX,word ptr [BX]
  1000:4ef2     81 C2 52 DC      ADD DX,0xdc52
  1000:4ef6     43               INC BX
  1000:4ef7     43               INC BX
  1000:4ef8     8A 2F            MOV CH,byte ptr [BX]
  1000:4efa     80 3E EF 05 0A   CMP byte ptr [0x5ef],0xa
  1000:4eff     75 03            JNZ 0x1000:4f04
  1000:4f01     EB 42            JMP 0x1000:4f45

LAB_1000_4f04:
  1000:4f04     80 3E EF 05 09   CMP byte ptr [0x5ef],0x9
  1000:4f09     7C 07            JL 0x1000:4f12
  1000:4f0b     80 3E 76 16 02   CMP byte ptr [0x1676],0x2
  1000:4f10     7D 33            JGE 0x1000:4f45

LAB_1000_4f12:
  1000:4f12     80 0E 53 16 00   OR byte ptr [0x1653],0x0
  1000:4f17     75 1D            JNZ 0x1000:4f36
  1000:4f19     8A 44 05         MOV AL,byte ptr [SI + 0x5]
  1000:4f1c     22 C5            AND AL,CH
  1000:4f1e     88 44 05         MOV byte ptr [SI + 0x5],AL
  1000:4f21     24 0F            AND AL,0xf
  1000:4f23     75 11            JNZ 0x1000:4f36
  1000:4f25     8A 04            MOV AL,byte ptr [SI]
  1000:4f27     24 0F            AND AL,0xf
  1000:4f29     3C 07            CMP AL,0x7
  1000:4f2b     75 09            JNZ 0x1000:4f36
  1000:4f2d     F6 44 05 20      TEST byte ptr [SI + 0x5],0x20
  1000:4f31     74 03            JZ 0x1000:4f36
  1000:4f33     FE 44 05         INC byte ptr [SI + 0x5]

LAB_1000_4f36:
  1000:4f36     8A 44 05         MOV AL,byte ptr [SI + 0x5]
  1000:4f39     24 0F            AND AL,0xf
  1000:4f3b     02 C0            ADD AL,AL
  1000:4f3d     02 C0            ADD AL,AL
  1000:4f3f     32 E4            XOR AH,AH
  1000:4f41     03 D0            ADD DX,AX
  1000:4f43     5B               POP BX
  1000:4f44     C3               RET

LAB_1000_4f45:
  1000:4f45     8A 44 05         MOV AL,byte ptr [SI + 0x5]
  1000:4f48     22 C5            AND AL,CH
  1000:4f4a     88 44 05         MOV byte ptr [SI + 0x5],AL
  1000:4f4d     24 0F            AND AL,0xf
  1000:4f4f     02 C0            ADD AL,AL
  1000:4f51     02 C0            ADD AL,AL
  1000:4f53     32 E4            XOR AH,AH
  1000:4f55     03 D0            ADD DX,AX
  1000:4f57     5B               POP BX
  1000:4f58     C3               RET

LAB_1000_4f59:
  1000:4f59     BB 44 DF         MOV BX,0xdf44
  1000:4f5c     8A C5            MOV AL,CH
  1000:4f5e     24 0F            AND AL,0xf
  1000:4f60     75 0B            JNZ 0x1000:4f6d
  1000:4f62     8A 44 05         MOV AL,byte ptr [SI + 0x5]
  1000:4f65     24 F3            AND AL,0xf3
  1000:4f67     88 44 05         MOV byte ptr [SI + 0x5],AL
  1000:4f6a     EB 14            JMP 0x1000:4f80

LAB_1000_4f6d:
  1000:4f6d     8A 44 05         MOV AL,byte ptr [SI + 0x5]
  1000:4f70     A8 08            TEST AL,0x8
  1000:4f72     74 03            JZ 0x1000:4f77
  1000:4f74     BB 56 DF         MOV BX,0xdf56

LAB_1000_4f77:
  1000:4f77     24 FB            AND AL,0xfb
  1000:4f79     88 44 05         MOV byte ptr [SI + 0x5],AL
  1000:4f7c     D0 C8            ROR AL,0x1
  1000:4f7e     24 01            AND AL,0x1

LAB_1000_4f80:
  1000:4f80     24 0F            AND AL,0xf
  1000:4f82     8A E8            MOV CH,AL
  1000:4f84     02 C0            ADD AL,AL
  1000:4f86     02 C0            ADD AL,AL
  1000:4f88     02 C0            ADD AL,AL
  1000:4f8a     02 C5            ADD AL,CH
  1000:4f8c     32 E4            XOR AH,AH
  1000:4f8e     03 D8            ADD BX,AX
  1000:4f90     87 D3            XCHG BX,DX
  1000:4f92     5B               POP BX
  1000:4f93     C3               RET

FUN_1000_4f94:
  1000:4f94     80 4C 05 80      OR byte ptr [SI + 0x5],0x80
  1000:4f98     8A 04            MOV AL,byte ptr [SI]
  1000:4f9a     8A E8            MOV CH,AL
  1000:4f9c     24 70            AND AL,0x70
  1000:4f9e     74 59            JZ 0x1000:4ff9
  1000:4fa0     B9 26 00         MOV CX,0x26
  1000:4fa3     8B FA            MOV DI,DX
  1000:4fa5     8A 05            MOV AL,byte ptr [DI]
  1000:4fa7     88 07            MOV byte ptr [BX],AL
  1000:4fa9     47               INC DI
  1000:4faa     43               INC BX
  1000:4fab     8A 05            MOV AL,byte ptr [DI]
  1000:4fad     88 07            MOV byte ptr [BX],AL
  1000:4faf     47               INC DI
  1000:4fb0     03 D9            ADD BX,CX
  1000:4fb2     8A 05            MOV AL,byte ptr [DI]
  1000:4fb4     88 07            MOV byte ptr [BX],AL
  1000:4fb6     47               INC DI
  1000:4fb7     4B               DEC BX
  1000:4fb8     8A 05            MOV AL,byte ptr [DI]
  1000:4fba     88 07            MOV byte ptr [BX],AL
  1000:4fbc     BA AE 06         MOV DX,0x6ae
  1000:4fbf     03 DA            ADD BX,DX
  1000:4fc1     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4fc5     88 07            MOV byte ptr [BX],AL
  1000:4fc7     43               INC BX
  1000:4fc8     88 07            MOV byte ptr [BX],AL
  1000:4fca     03 D9            ADD BX,CX
  1000:4fcc     88 07            MOV byte ptr [BX],AL
  1000:4fce     4B               DEC BX
  1000:4fcf     88 07            MOV byte ptr [BX],AL
  1000:4fd1     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:4fd5     BA AE 06         MOV DX,0x6ae
  1000:4fd8     03 DA            ADD BX,DX
  1000:4fda     B6 22            MOV DH,0x22
  1000:4fdc     8A 07            MOV AL,byte ptr [BX]
  1000:4fde     0A C6            OR AL,DH
  1000:4fe0     88 07            MOV byte ptr [BX],AL
  1000:4fe2     43               INC BX
  1000:4fe3     8A 07            MOV AL,byte ptr [BX]
  1000:4fe5     0A C6            OR AL,DH
  1000:4fe7     88 07            MOV byte ptr [BX],AL
  1000:4fe9     03 D9            ADD BX,CX
  1000:4feb     8A 07            MOV AL,byte ptr [BX]
  1000:4fed     0A C6            OR AL,DH
  1000:4fef     88 07            MOV byte ptr [BX],AL
  1000:4ff1     4B               DEC BX
  1000:4ff2     8A 07            MOV AL,byte ptr [BX]
  1000:4ff4     0A C6            OR AL,DH
  1000:4ff6     88 07            MOV byte ptr [BX],AL
  1000:4ff8     C3               RET

LAB_1000_4ff9:
  1000:4ff9     B9 24 00         MOV CX,0x24
  1000:4ffc     8B FA            MOV DI,DX
  1000:4ffe     8A 05            MOV AL,byte ptr [DI]
  1000:5000     88 07            MOV byte ptr [BX],AL
  1000:5002     47               INC DI
  1000:5003     43               INC BX
  1000:5004     8A 05            MOV AL,byte ptr [DI]
  1000:5006     88 07            MOV byte ptr [BX],AL
  1000:5008     47               INC DI
  1000:5009     43               INC BX
  1000:500a     8A 05            MOV AL,byte ptr [DI]
  1000:500c     88 07            MOV byte ptr [BX],AL
  1000:500e     47               INC DI
  1000:500f     03 D9            ADD BX,CX
  1000:5011     8A 05            MOV AL,byte ptr [DI]
  1000:5013     88 07            MOV byte ptr [BX],AL
  1000:5015     47               INC DI
  1000:5016     43               INC BX
  1000:5017     8A 05            MOV AL,byte ptr [DI]
  1000:5019     88 07            MOV byte ptr [BX],AL
  1000:501b     47               INC DI
  1000:501c     43               INC BX
  1000:501d     8A 05            MOV AL,byte ptr [DI]
  1000:501f     88 07            MOV byte ptr [BX],AL
  1000:5021     47               INC DI
  1000:5022     03 D9            ADD BX,CX
  1000:5024     8A 05            MOV AL,byte ptr [DI]
  1000:5026     88 07            MOV byte ptr [BX],AL
  1000:5028     47               INC DI
  1000:5029     43               INC BX
  1000:502a     8A 05            MOV AL,byte ptr [DI]
  1000:502c     88 07            MOV byte ptr [BX],AL
  1000:502e     47               INC DI
  1000:502f     43               INC BX
  1000:5030     8A 05            MOV AL,byte ptr [DI]
  1000:5032     88 07            MOV byte ptr [BX],AL
  1000:5034     BA 86 06         MOV DX,0x686
  1000:5037     03 DA            ADD BX,DX
  1000:5039     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:503d     88 07            MOV byte ptr [BX],AL
  1000:503f     43               INC BX
  1000:5040     88 07            MOV byte ptr [BX],AL
  1000:5042     43               INC BX
  1000:5043     88 07            MOV byte ptr [BX],AL
  1000:5045     03 D9            ADD BX,CX
  1000:5047     88 07            MOV byte ptr [BX],AL
  1000:5049     43               INC BX
  1000:504a     88 07            MOV byte ptr [BX],AL
  1000:504c     43               INC BX
  1000:504d     88 07            MOV byte ptr [BX],AL
  1000:504f     03 D9            ADD BX,CX
  1000:5051     88 07            MOV byte ptr [BX],AL
  1000:5053     43               INC BX
  1000:5054     88 07            MOV byte ptr [BX],AL
  1000:5056     43               INC BX
  1000:5057     88 07            MOV byte ptr [BX],AL
  1000:5059     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:505d     BA 86 06         MOV DX,0x686
  1000:5060     03 DA            ADD BX,DX
  1000:5062     B6 22            MOV DH,0x22
  1000:5064     8A 07            MOV AL,byte ptr [BX]
  1000:5066     0A C6            OR AL,DH
  1000:5068     88 07            MOV byte ptr [BX],AL
  1000:506a     43               INC BX
  1000:506b     8A 07            MOV AL,byte ptr [BX]
  1000:506d     0A C6            OR AL,DH
  1000:506f     88 07            MOV byte ptr [BX],AL
  1000:5071     43               INC BX
  1000:5072     8A 07            MOV AL,byte ptr [BX]
  1000:5074     0A C6            OR AL,DH
  1000:5076     88 07            MOV byte ptr [BX],AL
  1000:5078     03 D9            ADD BX,CX
  1000:507a     8A 07            MOV AL,byte ptr [BX]
  1000:507c     0A C6            OR AL,DH
  1000:507e     88 07            MOV byte ptr [BX],AL
  1000:5080     43               INC BX
  1000:5081     8A 07            MOV AL,byte ptr [BX]
  1000:5083     0A C6            OR AL,DH
  1000:5085     88 07            MOV byte ptr [BX],AL
  1000:5087     43               INC BX
  1000:5088     8A 07            MOV AL,byte ptr [BX]
  1000:508a     0A C6            OR AL,DH
  1000:508c     88 07            MOV byte ptr [BX],AL
  1000:508e     03 D9            ADD BX,CX
  1000:5090     8A 07            MOV AL,byte ptr [BX]
  1000:5092     0A C6            OR AL,DH
  1000:5094     88 07            MOV byte ptr [BX],AL
  1000:5096     43               INC BX
  1000:5097     8A 07            MOV AL,byte ptr [BX]
  1000:5099     0A C6            OR AL,DH
  1000:509b     88 07            MOV byte ptr [BX],AL
  1000:509d     43               INC BX
  1000:509e     8A 07            MOV AL,byte ptr [BX]
  1000:50a0     0A C6            OR AL,DH
  1000:50a2     88 07            MOV byte ptr [BX],AL
  1000:50a4     C3               RET

FUN_1000_50a5:
  1000:50a5     B0 01            MOV AL,0x1
  1000:50a7     0A C0            OR AL,AL
  1000:50a9     C3               RET

FUN_1000_50aa:
  1000:50aa     B9 26 00         MOV CX,0x26
  1000:50ad     C6 07 00         MOV byte ptr [BX],0x0
  1000:50b0     43               INC BX
  1000:50b1     C6 07 00         MOV byte ptr [BX],0x0
  1000:50b4     03 D9            ADD BX,CX
  1000:50b6     C6 07 00         MOV byte ptr [BX],0x0
  1000:50b9     4B               DEC BX
  1000:50ba     C6 07 00         MOV byte ptr [BX],0x0
  1000:50bd     C3               RET

FUN_1000_50be:
  1000:50be     B9 26 00         MOV CX,0x26
  1000:50c1     C6 07 00         MOV byte ptr [BX],0x0
  1000:50c4     43               INC BX
  1000:50c5     C6 07 00         MOV byte ptr [BX],0x0
  1000:50c8     43               INC BX
  1000:50c9     C6 07 00         MOV byte ptr [BX],0x0
  1000:50cc     03 D9            ADD BX,CX
  1000:50ce     C6 07 00         MOV byte ptr [BX],0x0
  1000:50d1     4B               DEC BX
  1000:50d2     C6 07 00         MOV byte ptr [BX],0x0
  1000:50d5     4B               DEC BX
  1000:50d6     C6 07 00         MOV byte ptr [BX],0x0
  1000:50d9     03 D9            ADD BX,CX
  1000:50db     C6 07 00         MOV byte ptr [BX],0x0
  1000:50de     43               INC BX
  1000:50df     C6 07 00         MOV byte ptr [BX],0x0
  1000:50e2     43               INC BX
  1000:50e3     C6 07 00         MOV byte ptr [BX],0x0
  1000:50e6     C3               RET

FUN_1000_50e7:
  1000:50e7     5A               POP DX
  1000:50e8     B0 05            MOV AL,0x5
  1000:50ea     BD 5A 00         MOV BP,0x5a
  1000:50ed     FF 1E 08 05      CALLF [0x508]
  1000:50f1     B0 19            MOV AL,0x19
  1000:50f3     BD 42 00         MOV BP,0x42
  1000:50f6     FF 1E 08 05      CALLF [0x508]
  1000:50fa     80 3E EF 05 00   CMP byte ptr [0x5ef],0x0
  1000:50ff     74 2E            JZ 0x1000:512f
  1000:5101     A0 EF 05         MOV AL,[0x5ef]
  1000:5104     32 E4            XOR AH,AH
  1000:5106     FE C8            DEC AL
  1000:5108     D1 E0            SHL AX,0x1
  1000:510a     8B C8            MOV CX,AX
  1000:510c     D1 E0            SHL AX,0x1
  1000:510e     D1 E0            SHL AX,0x1
  1000:5110     D1 E0            SHL AX,0x1
  1000:5112     D1 E0            SHL AX,0x1
  1000:5114     03 C1            ADD AX,CX
  1000:5116     8B D8            MOV BX,AX
  1000:5118     BE EF 05         MOV SI,0x5ef
  1000:511b     FE 04            INC byte ptr [SI]
  1000:511d     06               PUSH ES
  1000:511e     0E               PUSH CS
  1000:511f     07               POP ES
  1000:5120     BA C0 4E         MOV DX,0x4ec0
  1000:5123     B9 22 00         MOV CX,0x22
  1000:5126     FF 1E E3 05      CALLF [0x5e3]
  1000:512a     FE 0E EF 05      DEC byte ptr [0x5ef]
  1000:512e     07               POP ES

LAB_1000_512f:
  1000:512f     BB EF 05         MOV BX,0x5ef
  1000:5132     8A 07            MOV AL,byte ptr [BX]
  1000:5134     0A C0            OR AL,AL
  1000:5136     75 03            JNZ 0x1000:513b
  1000:5138     EB 74            JMP 0x1000:51ae

LAB_1000_513b:
  1000:513b     FE 07            INC byte ptr [BX]
  1000:513d     E8 85 CB         CALL 0x1000:1cc5
  1000:5140     B0 23            MOV AL,0x23
  1000:5142     BB 71 52         MOV BX,0x5271
  1000:5145     BD 40 00         MOV BP,0x40
  1000:5148     FF 1E 08 05      CALLF [0x508]
  1000:514c     B7 12            MOV BH,0x12
  1000:514e     B3 06            MOV BL,0x6
  1000:5150     BA 1A 53         MOV DX,0x531a
  1000:5153     06               PUSH ES
  1000:5154     8C C8            MOV AX,CS
  1000:5156     8E C0            MOV ES,AX
  1000:5158     B0 37            MOV AL,0x37
  1000:515a     BD 38 00         MOV BP,0x38
  1000:515d     FF 1E 08 05      CALLF [0x508]
  1000:5161     07               POP ES

LAB_1000_5162:
  1000:5162     2E 80 3E D0 51 01   CMP byte ptr CS:[0x51d0],0x1
  1000:5168     75 03            JNZ 0x1000:516d
  1000:516a     E8 94 00         CALL 0x1000:5201

LAB_1000_516d:
  1000:516d     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:5172     75 04            JNZ 0x1000:5178
  1000:5174     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_5178:
  1000:5178     A0 6C 05         MOV AL,[0x56c]
  1000:517b     D0 C0            ROL AL,0x1
  1000:517d     73 07            JNC 0x1000:5186
  1000:517f     E8 60 F7         CALL 0x1000:48e2
  1000:5182     24 C0            AND AL,0xc0
  1000:5184     74 DC            JZ 0x1000:5162

LAB_1000_5186:
  1000:5186     A0 EF 05         MOV AL,[0x5ef]
  1000:5189     B2 0A            MOV DL,0xa
  1000:518b     F6 E2            MUL DL
  1000:518d     8A E0            MOV AH,AL
  1000:518f     B0 01            MOV AL,0x1
  1000:5191     FF 1E AB 05      CALLF [0x5ab]
  1000:5195     B0 19            MOV AL,0x19
  1000:5197     BD 42 00         MOV BP,0x42
  1000:519a     FF 1E 08 05      CALLF [0x508]
  1000:519e     BD 5C 00         MOV BP,0x5c
  1000:51a1     FF 1E 08 05      CALLF [0x508]
  1000:51a5     E8 7F BA         CALL 0x1000:0c27
  1000:51a8     E8 9E F4         CALL 0x1000:4649
  1000:51ab     E9 D3 D8         JMP 0x1000:2a81

LAB_1000_51ae:
  1000:51ae     06               PUSH ES
  1000:51af     8C D8            MOV AX,DS
  1000:51b1     8E C0            MOV ES,AX
  1000:51b3     BE FF 05         MOV SI,0x5ff
  1000:51b6     BF EF 05         MOV DI,0x5ef
  1000:51b9     B9 08 00         MOV CX,0x8
  1000:51bc     F3 A5            MOVSW.REP ES:DI,SI
  1000:51be     E9 B0 DC         JMP 0x1000:2e71

caseD_b:
  1000:5201     53               PUSH BX
  1000:5202     50               PUSH AX
  1000:5203     C6 06 44 16 0C   MOV byte ptr [0x1644],0xc
  1000:5208     A0 43 16         MOV AL,[0x1643]
  1000:520b     02 C0            ADD AL,AL
  1000:520d     32 E4            XOR AH,AH
  1000:520f     BB 67 52         MOV BX,0x5267
  1000:5212     03 D8            ADD BX,AX
  1000:5214     2E 8B 1F         MOV BX,word ptr CS:[BX]
  1000:5217     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:521c     75 0B            JNZ 0x1000:5229
  1000:521e     8A 3F            MOV BH,byte ptr [BX]
  1000:5220     B3 07            MOV BL,0x7
  1000:5222     BD 06 00         MOV BP,0x6
  1000:5225     FF 1E 08 05      CALLF [0x508]

LAB_1000_5229:
  1000:5229     FE 06 43 16      INC byte ptr [0x1643]
  1000:522d     80 3E 43 16 05   CMP byte ptr [0x1643],0x5
  1000:5232     75 05            JNZ 0x1000:5239
  1000:5234     C6 06 43 16 00   MOV byte ptr [0x1643],0x0

LAB_1000_5239:
  1000:5239     2E C6 06 D0 51 00   MOV byte ptr CS:[0x51d0],0x0
  1000:523f     58               POP AX
  1000:5240     5B               POP BX
  1000:5241     C3               RET

LAB_1000_5257:
  1000:5257     C3               RET

FUN_1000_5258:
  1000:5258     8A E8            MOV CH,AL
  1000:525a     A0 25 16         MOV AL,[0x1625]
  1000:525d     0A C0            OR AL,AL
  1000:525f     8A C5            MOV AL,CH
  1000:5261     75 01            JNZ 0x1000:5264
  1000:5263     C3               RET

LAB_1000_5264:
  1000:5264     32 C0            XOR AL,AL
  1000:5266     C3               RET

FUN_1000_5460:
  1000:5460     A0 B6 16         MOV AL,[0x16b6]
  1000:5463     0A C0            OR AL,AL
  1000:5465     74 01            JZ 0x1000:5468
  1000:5467     C3               RET

LAB_1000_5468:
  1000:5468     BA E0 75         MOV DX,0x75e0
  1000:546b     E8 0C FA         CALL 0x1000:4e7a
  1000:546e     B9 24 00         MOV CX,0x24
  1000:5471     80 3F 0F         CMP byte ptr [BX],0xf
  1000:5474     72 03            JC 0x1000:5479
  1000:5476     E8 8B 00         CALL 0x1000:5504

LAB_1000_5479:
  1000:5479     43               INC BX
  1000:547a     80 3F 0F         CMP byte ptr [BX],0xf
  1000:547d     72 03            JC 0x1000:5482
  1000:547f     E8 82 00         CALL 0x1000:5504

LAB_1000_5482:
  1000:5482     43               INC BX
  1000:5483     80 3F 0F         CMP byte ptr [BX],0xf
  1000:5486     72 03            JC 0x1000:548b
  1000:5488     E8 79 00         CALL 0x1000:5504

LAB_1000_548b:
  1000:548b     03 D9            ADD BX,CX
  1000:548d     80 3F 0F         CMP byte ptr [BX],0xf
  1000:5490     72 03            JC 0x1000:5495
  1000:5492     E8 6F 00         CALL 0x1000:5504

LAB_1000_5495:
  1000:5495     43               INC BX
  1000:5496     80 3F 0F         CMP byte ptr [BX],0xf
  1000:5499     72 03            JC 0x1000:549e
  1000:549b     E8 66 00         CALL 0x1000:5504

LAB_1000_549e:
  1000:549e     43               INC BX
  1000:549f     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54a2     72 03            JC 0x1000:54a7
  1000:54a4     E8 5D 00         CALL 0x1000:5504

LAB_1000_54a7:
  1000:54a7     03 D9            ADD BX,CX
  1000:54a9     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54ac     72 03            JC 0x1000:54b1
  1000:54ae     E8 53 00         CALL 0x1000:5504

LAB_1000_54b1:
  1000:54b1     43               INC BX
  1000:54b2     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54b5     72 03            JC 0x1000:54ba
  1000:54b7     E8 4A 00         CALL 0x1000:5504

LAB_1000_54ba:
  1000:54ba     43               INC BX
  1000:54bb     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54be     72 03            JC 0x1000:54c3
  1000:54c0     E8 41 00         CALL 0x1000:5504

LAB_1000_54c3:
  1000:54c3     03 D9            ADD BX,CX
  1000:54c5     A0 27 16         MOV AL,[0x1627]
  1000:54c8     3C 1A            CMP AL,0x1a
  1000:54ca     72 01            JC 0x1000:54cd
  1000:54cc     C3               RET

LAB_1000_54cd:
  1000:54cd     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54d0     72 03            JC 0x1000:54d5
  1000:54d2     E8 2F 00         CALL 0x1000:5504

LAB_1000_54d5:
  1000:54d5     43               INC BX
  1000:54d6     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54d9     72 03            JC 0x1000:54de
  1000:54db     E8 26 00         CALL 0x1000:5504

LAB_1000_54de:
  1000:54de     43               INC BX
  1000:54df     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54e2     72 03            JC 0x1000:54e7
  1000:54e4     E8 1D 00         CALL 0x1000:5504

LAB_1000_54e7:
  1000:54e7     03 D9            ADD BX,CX
  1000:54e9     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54ec     72 03            JC 0x1000:54f1
  1000:54ee     E8 13 00         CALL 0x1000:5504

LAB_1000_54f1:
  1000:54f1     43               INC BX
  1000:54f2     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54f5     72 03            JC 0x1000:54fa
  1000:54f7     E8 0A 00         CALL 0x1000:5504

LAB_1000_54fa:
  1000:54fa     43               INC BX
  1000:54fb     80 3F 0F         CMP byte ptr [BX],0xf
  1000:54fe     72 03            JC 0x1000:5503
  1000:5500     E8 01 00         CALL 0x1000:5504

LAB_1000_5503:
  1000:5503     C3               RET

FUN_1000_5504:
  1000:5504     8A 07            MOV AL,byte ptr [BX]
  1000:5506     3C 94            CMP AL,0x94
  1000:5508     72 03            JC 0x1000:550d
  1000:550a     E9 86 EC         JMP 0x1000:4193

LAB_1000_550d:
  1000:550d     59               POP CX
  1000:550e     A0 5E 16         MOV AL,[0x165e]
  1000:5511     0A C0            OR AL,AL
  1000:5513     75 20            JNZ 0x1000:5535

LAB_1000_5515:
  1000:5515     C6 06 62 05 0D   MOV byte ptr [0x562],0xd
  1000:551a     C6 06 6F 16 01   MOV byte ptr [0x166f],0x1
  1000:551f     A0 DF 74         MOV AL,[0x74df]
  1000:5522     0A C0            OR AL,AL
  1000:5524     75 01            JNZ 0x1000:5527
  1000:5526     C3               RET

LAB_1000_5527:
  1000:5527     8A E8            MOV CH,AL

LAB_1000_5529:
  1000:5529     51               PUSH CX
  1000:552a     9A 7C 40 00 10   CALLF 0x1000:407c
  1000:552f     59               POP CX
  1000:5530     FE CD            DEC CH
  1000:5532     75 F5            JNZ 0x1000:5529
  1000:5534     C3               RET

LAB_1000_5535:
  1000:5535     81 C3 D4 06      ADD BX,0x6d4
  1000:5539     8A 07            MOV AL,byte ptr [BX]
  1000:553b     0A C0            OR AL,AL
  1000:553d     74 12            JZ 0x1000:5551
  1000:553f     8A E8            MOV CH,AL
  1000:5541     81 C3 96 FC      ADD BX,0xfc96
  1000:5545     87 D3            XCHG BX,DX
  1000:5547     A0 E3 74         MOV AL,[0x74e3]
  1000:554a     0A C0            OR AL,AL
  1000:554c     74 03            JZ 0x1000:5551
  1000:554e     E8 34 01         CALL 0x1000:5685

LAB_1000_5551:
  1000:5551     C6 06 62 05 08   MOV byte ptr [0x562],0x8
  1000:5556     BB 74 16         MOV BX,0x1674
  1000:5559     8A 07            MOV AL,byte ptr [BX]
  1000:555b     0A C0            OR AL,AL
  1000:555d     75 03            JNZ 0x1000:5562
  1000:555f     C6 07 06         MOV byte ptr [BX],0x6

LAB_1000_5562:
  1000:5562     A0 E2 74         MOV AL,[0x74e2]
  1000:5565     0A C0            OR AL,AL
  1000:5567     75 01            JNZ 0x1000:556a
  1000:5569     C3               RET

LAB_1000_556a:
  1000:556a     8A E8            MOV CH,AL

LAB_1000_556c:
  1000:556c     51               PUSH CX
  1000:556d     E8 63 E9         CALL 0x1000:3ed3
  1000:5570     59               POP CX
  1000:5571     FE CD            DEC CH
  1000:5573     75 F7            JNZ 0x1000:556c
  1000:5575     C3               RET

FUN_1000_5576:
  1000:5576     A0 5E 16         MOV AL,[0x165e]
  1000:5579     0A C0            OR AL,AL
  1000:557b     74 98            JZ 0x1000:5515
  1000:557d     EB D2            JMP 0x1000:5551

FUN_1000_557f:
  1000:557f     BB 74 16         MOV BX,0x1674
  1000:5582     8A 07            MOV AL,byte ptr [BX]
  1000:5584     0A C0            OR AL,AL
  1000:5586     75 01            JNZ 0x1000:5589
  1000:5588     C3               RET

LAB_1000_5589:
  1000:5589     8A E8            MOV CH,AL
  1000:558b     A0 B9 16         MOV AL,[0x16b9]
  1000:558e     0A C0            OR AL,AL
  1000:5590     75 07            JNZ 0x1000:5599
  1000:5592     A0 B6 16         MOV AL,[0x16b6]
  1000:5595     0A C0            OR AL,AL
  1000:5597     75 02            JNZ 0x1000:559b

LAB_1000_5599:
  1000:5599     FE 0F            DEC byte ptr [BX]

LAB_1000_559b:
  1000:559b     8A C5            MOV AL,CH
  1000:559d     FE C8            DEC AL
  1000:559f     D0 E0            SHL AL,0x1
  1000:55a1     D0 E0            SHL AL,0x1
  1000:55a3     D0 E0            SHL AL,0x1
  1000:55a5     D0 E0            SHL AL,0x1
  1000:55a7     32 E4            XOR AH,AH
  1000:55a9     05 E0 DD         ADD AX,0xdde0
  1000:55ac     8B D0            MOV DX,AX
  1000:55ae     A0 27 16         MOV AL,[0x1627]
  1000:55b1     3C 1A            CMP AL,0x1a
  1000:55b3     73 63            JNC 0x1000:5618
  1000:55b5     52               PUSH DX
  1000:55b6     E8 B1 F8         CALL 0x1000:4e6a
  1000:55b9     FE CE            DEC DH
  1000:55bb     D0 E6            SHL DH,0x1
  1000:55bd     D0 E6            SHL DH,0x1
  1000:55bf     D0 E6            SHL DH,0x1
  1000:55c1     D0 E2            SHL DL,0x1
  1000:55c3     8B DA            MOV BX,DX
  1000:55c5     5A               POP DX
  1000:55c6     4B               DEC BX
  1000:55c7     B5 04            MOV CH,0x4
  1000:55c9     8B FA            MOV DI,DX

LAB_1000_55cb:
  1000:55cb     51               PUSH CX
  1000:55cc     8A 05            MOV AL,byte ptr [DI]
  1000:55ce     47               INC DI
  1000:55cf     E8 DE EF         CALL 0x1000:45b0
  1000:55d2     43               INC BX
  1000:55d3     43               INC BX
  1000:55d4     8A 05            MOV AL,byte ptr [DI]
  1000:55d6     47               INC DI
  1000:55d7     E8 D6 EF         CALL 0x1000:45b0
  1000:55da     43               INC BX
  1000:55db     43               INC BX
  1000:55dc     8A 05            MOV AL,byte ptr [DI]
  1000:55de     47               INC DI
  1000:55df     E8 CE EF         CALL 0x1000:45b0
  1000:55e2     43               INC BX
  1000:55e3     43               INC BX
  1000:55e4     8A 05            MOV AL,byte ptr [DI]
  1000:55e6     47               INC DI
  1000:55e7     E8 C6 EF         CALL 0x1000:45b0
  1000:55ea     80 C7 08         ADD BH,0x8
  1000:55ed     80 EB 06         SUB BL,0x6
  1000:55f0     59               POP CX
  1000:55f1     FE CD            DEC CH
  1000:55f3     75 D6            JNZ 0x1000:55cb
  1000:55f5     BA E0 75         MOV DX,0x75e0
  1000:55f8     E8 7F F8         CALL 0x1000:4e7a
  1000:55fb     B5 04            MOV CH,0x4
  1000:55fd     BA 22 00         MOV DX,0x22
  1000:5600     4B               DEC BX
  1000:5601     B0 FF            MOV AL,0xff

LAB_1000_5603:
  1000:5603     88 07            MOV byte ptr [BX],AL
  1000:5605     43               INC BX
  1000:5606     88 07            MOV byte ptr [BX],AL
  1000:5608     43               INC BX
  1000:5609     88 07            MOV byte ptr [BX],AL
  1000:560b     43               INC BX
  1000:560c     88 07            MOV byte ptr [BX],AL
  1000:560e     43               INC BX
  1000:560f     88 07            MOV byte ptr [BX],AL
  1000:5611     03 DA            ADD BX,DX
  1000:5613     FE CD            DEC CH
  1000:5615     75 EC            JNZ 0x1000:5603
  1000:5617     C3               RET

LAB_1000_5618:
  1000:5618     52               PUSH DX
  1000:5619     E8 4E F8         CALL 0x1000:4e6a
  1000:561c     FE CE            DEC DH
  1000:561e     D0 E6            SHL DH,0x1
  1000:5620     D0 E6            SHL DH,0x1
  1000:5622     D0 E6            SHL DH,0x1
  1000:5624     D0 E2            SHL DL,0x1
  1000:5626     8B DA            MOV BX,DX
  1000:5628     5A               POP DX
  1000:5629     80 EF 04         SUB BH,0x4
  1000:562c     FE CB            DEC BL
  1000:562e     B5 04            MOV CH,0x4
  1000:5630     8B FA            MOV DI,DX

LAB_1000_5632:
  1000:5632     51               PUSH CX
  1000:5633     8A 05            MOV AL,byte ptr [DI]
  1000:5635     47               INC DI
  1000:5636     E8 77 EF         CALL 0x1000:45b0
  1000:5639     FE C3            INC BL
  1000:563b     FE C3            INC BL
  1000:563d     8A 05            MOV AL,byte ptr [DI]
  1000:563f     47               INC DI
  1000:5640     E8 6D EF         CALL 0x1000:45b0
  1000:5643     FE C3            INC BL
  1000:5645     FE C3            INC BL
  1000:5647     8A 05            MOV AL,byte ptr [DI]
  1000:5649     47               INC DI
  1000:564a     E8 63 EF         CALL 0x1000:45b0
  1000:564d     FE C3            INC BL
  1000:564f     FE C3            INC BL
  1000:5651     8A 05            MOV AL,byte ptr [DI]
  1000:5653     47               INC DI
  1000:5654     E8 59 EF         CALL 0x1000:45b0
  1000:5657     80 C7 08         ADD BH,0x8
  1000:565a     80 EB 06         SUB BL,0x6
  1000:565d     59               POP CX
  1000:565e     FE CD            DEC CH
  1000:5660     75 D0            JNZ 0x1000:5632
  1000:5662     BA BA 75         MOV DX,0x75ba
  1000:5665     E8 12 F8         CALL 0x1000:4e7a
  1000:5668     B5 06            MOV CH,0x6
  1000:566a     BA 22 00         MOV DX,0x22
  1000:566d     4B               DEC BX
  1000:566e     B0 FF            MOV AL,0xff

LAB_1000_5670:
  1000:5670     88 07            MOV byte ptr [BX],AL
  1000:5672     43               INC BX
  1000:5673     88 07            MOV byte ptr [BX],AL
  1000:5675     43               INC BX
  1000:5676     88 07            MOV byte ptr [BX],AL
  1000:5678     43               INC BX
  1000:5679     88 07            MOV byte ptr [BX],AL
  1000:567b     43               INC BX
  1000:567c     88 07            MOV byte ptr [BX],AL
  1000:567e     03 DA            ADD BX,DX
  1000:5680     FE CD            DEC CH
  1000:5682     75 EC            JNZ 0x1000:5670
  1000:5684     C3               RET

FUN_1000_5685:
  1000:5685     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5689     A0 D0 16         MOV AL,[0x16d0]
  1000:568c     0A C0            OR AL,AL
  1000:568e     74 01            JZ 0x1000:5691
  1000:5690     C3               RET

LAB_1000_5691:
  1000:5691     8A C5            MOV AL,CH
  1000:5693     3C ED            CMP AL,0xed
  1000:5695     72 01            JC 0x1000:5698
  1000:5697     C3               RET

LAB_1000_5698:
  1000:5698     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:569c     FE CD            DEC CH
  1000:569e     B7 00            MOV BH,0x0
  1000:56a0     8A DD            MOV BL,CH
  1000:56a2     D1 E3            SHL BX,0x1
  1000:56a4     D1 E3            SHL BX,0x1
  1000:56a6     D1 E3            SHL BX,0x1
  1000:56a8     8B CB            MOV CX,BX
  1000:56aa     8B 36 CC 16      MOV SI,word ptr [0x16cc]
  1000:56ae     03 F1            ADD SI,CX
  1000:56b0     9A AA 58 00 10   CALLF 0x1000:58aa
  1000:56b5     C3               RET

FUN_1000_56bc:
  1000:56bc     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:56c0     8A E8            MOV CH,AL
  1000:56c2     8A 44 03         MOV AL,byte ptr [SI + 0x3]
  1000:56c5     0A C0            OR AL,AL
  1000:56c7     74 09            JZ 0x1000:56d2

LAB_1000_56c9:
  1000:56c9     FE 4C 03         DEC byte ptr [SI + 0x3]
  1000:56cc     74 15            JZ 0x1000:56e3
  1000:56ce     FE CD            DEC CH
  1000:56d0     75 F7            JNZ 0x1000:56c9

LAB_1000_56d2:
  1000:56d2     8A 04            MOV AL,byte ptr [SI]
  1000:56d4     24 0F            AND AL,0xf
  1000:56d6     3C 07            CMP AL,0x7
  1000:56d8     75 04            JNZ 0x1000:56de
  1000:56da     80 4C 05 20      OR byte ptr [SI + 0x5],0x20

LAB_1000_56de:
  1000:56de     87 D3            XCHG BX,DX
  1000:56e0     EB 42            JMP 0x1000:5724

LAB_1000_56e3:
  1000:56e3     B0 0E            MOV AL,0xe
  1000:56e5     A2 62 05         MOV [0x562],AL
  1000:56e8     8A 6C 04         MOV CH,byte ptr [SI + 0x4]
  1000:56eb     8A C5            MOV AL,CH
  1000:56ed     0A C0            OR AL,AL
  1000:56ef     74 2E            JZ 0x1000:571f
  1000:56f1     B0 0F            MOV AL,0xf
  1000:56f3     A2 62 05         MOV [0x562],AL
  1000:56f6     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:56fa     0A C0            OR AL,AL
  1000:56fc     75 21            JNZ 0x1000:571f

LAB_1000_56fe:
  1000:56fe     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:5702     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:5706     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:570a     9A 70 40 00 10   CALLF 0x1000:4070
  1000:570f     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:5713     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:5717     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:571b     FE CD            DEC CH
  1000:571d     75 DF            JNZ 0x1000:56fe

LAB_1000_571f:
  1000:571f     87 D3            XCHG BX,DX
  1000:5721     EB 01            JMP 0x1000:5724

FUN_1000_5724:
  1000:5724     BE 53 75         MOV SI,0x7553
  1000:5727     BA 03 00         MOV DX,0x3
  1000:572a     B5 0A            MOV CH,0xa

LAB_1000_572c:
  1000:572c     8A 04            MOV AL,byte ptr [SI]
  1000:572e     0A C0            OR AL,AL
  1000:5730     74 07            JZ 0x1000:5739
  1000:5732     03 F2            ADD SI,DX
  1000:5734     FE CD            DEC CH
  1000:5736     75 F4            JNZ 0x1000:572c
  1000:5738     C3               RET

LAB_1000_5739:
  1000:5739     C6 04 07         MOV byte ptr [SI],0x7
  1000:573c     B9 3E 0A         MOV CX,0xa3e
  1000:573f     03 D9            ADD BX,CX
  1000:5741     89 5C 01         MOV word ptr [SI + 0x1],BX
  1000:5744     C3               RET

FUN_1000_5745:
  1000:5745     BE 53 75         MOV SI,0x7553
  1000:5748     B5 0A            MOV CH,0xa

LAB_1000_574a:
  1000:574a     51               PUSH CX
  1000:574b     8A 04            MOV AL,byte ptr [SI]
  1000:574d     0A C0            OR AL,AL
  1000:574f     74 03            JZ 0x1000:5754
  1000:5751     E8 0B 00         CALL 0x1000:575f

LAB_1000_5754:
  1000:5754     B9 03 00         MOV CX,0x3
  1000:5757     03 F1            ADD SI,CX
  1000:5759     59               POP CX
  1000:575a     FE CD            DEC CH
  1000:575c     75 EC            JNZ 0x1000:574a
  1000:575e     C3               RET

FUN_1000_575f:
  1000:575f     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5763     FE 0C            DEC byte ptr [SI]
  1000:5765     8B 5C 01         MOV BX,word ptr [SI + 0x1]
  1000:5768     E8 A1 00         CALL 0x1000:580c
  1000:576b     BA 2B 83         MOV DX,0x832b
  1000:576e     E8 2F F7         CALL 0x1000:4ea0
  1000:5771     52               PUSH DX
  1000:5772     8F 06 4C DC      POP word ptr [0xdc4c]
  1000:5776     FE CE            DEC DH
  1000:5778     FE C2            INC DL
  1000:577a     D0 E6            SHL DH,0x1
  1000:577c     D0 E6            SHL DH,0x1
  1000:577e     D0 E6            SHL DH,0x1
  1000:5780     D0 E2            SHL DL,0x1
  1000:5782     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5786     87 D3            XCHG BX,DX
  1000:5788     FE C8            DEC AL
  1000:578a     02 C0            ADD AL,AL
  1000:578c     02 C0            ADD AL,AL
  1000:578e     32 E4            XOR AH,AH
  1000:5790     05 A0 DE         ADD AX,0xdea0
  1000:5793     8B D0            MOV DX,AX
  1000:5795     87 D3            XCHG BX,DX
  1000:5797     8B FB            MOV DI,BX
  1000:5799     8A 05            MOV AL,byte ptr [DI]
  1000:579b     47               INC DI
  1000:579c     57               PUSH DI
  1000:579d     E8 87 00         CALL 0x1000:5827
  1000:57a0     5F               POP DI
  1000:57a1     42               INC DX
  1000:57a2     42               INC DX
  1000:57a3     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:57a7     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:57ab     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:57af     FE C1            INC CL
  1000:57b1     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:57b5     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:57b9     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:57bd     8A 05            MOV AL,byte ptr [DI]
  1000:57bf     47               INC DI
  1000:57c0     57               PUSH DI
  1000:57c1     E8 63 00         CALL 0x1000:5827
  1000:57c4     5F               POP DI
  1000:57c5     80 C6 08         ADD DH,0x8
  1000:57c8     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:57cc     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:57d0     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:57d4     FE C5            INC CH
  1000:57d6     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:57da     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:57de     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:57e2     8A 05            MOV AL,byte ptr [DI]
  1000:57e4     47               INC DI
  1000:57e5     57               PUSH DI
  1000:57e6     E8 3E 00         CALL 0x1000:5827
  1000:57e9     5F               POP DI
  1000:57ea     4A               DEC DX
  1000:57eb     4A               DEC DX
  1000:57ec     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:57f0     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:57f4     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:57f8     FE C9            DEC CL
  1000:57fa     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:57fe     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:5802     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:5806     8A 05            MOV AL,byte ptr [DI]
  1000:5808     47               INC DI
  1000:5809     EB 1C            JMP 0x1000:5827

FUN_1000_580c:
  1000:580c     53               PUSH BX
  1000:580d     B9 58 F2         MOV CX,0xf258
  1000:5810     03 D9            ADD BX,CX
  1000:5812     B9 26 00         MOV CX,0x26
  1000:5815     C6 07 FE         MOV byte ptr [BX],0xfe
  1000:5818     43               INC BX
  1000:5819     C6 07 FE         MOV byte ptr [BX],0xfe
  1000:581c     03 D9            ADD BX,CX
  1000:581e     C6 07 FE         MOV byte ptr [BX],0xfe
  1000:5821     4B               DEC BX
  1000:5822     C6 07 FE         MOV byte ptr [BX],0xfe
  1000:5825     5B               POP BX
  1000:5826     C3               RET

FUN_1000_5827:
  1000:5827     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:582b     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:582f     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:5833     8A F0            MOV DH,AL
  1000:5835     8A C1            MOV AL,CL
  1000:5837     3C 03            CMP AL,0x3
  1000:5839     72 62            JC 0x1000:589d
  1000:583b     8A C1            MOV AL,CL
  1000:583d     3C 23            CMP AL,0x23
  1000:583f     73 5C            JNC 0x1000:589d
  1000:5841     8A C5            MOV AL,CH
  1000:5843     3C 02            CMP AL,0x2
  1000:5845     72 56            JC 0x1000:589d
  1000:5847     8A C5            MOV AL,CH
  1000:5849     3C 14            CMP AL,0x14
  1000:584b     73 50            JNC 0x1000:589d
  1000:584d     8A C6            MOV AL,DH
  1000:584f     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:5853     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:5857     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:585b     53               PUSH BX
  1000:585c     52               PUSH DX
  1000:585d     56               PUSH SI
  1000:585e     8B FA            MOV DI,DX
  1000:5860     FE C8            DEC AL
  1000:5862     B6 00            MOV DH,0x0
  1000:5864     8A D0            MOV DL,AL
  1000:5866     D1 E2            SHL DX,0x1
  1000:5868     D1 E2            SHL DX,0x1
  1000:586a     D1 E2            SHL DX,0x1
  1000:586c     D1 E2            SHL DX,0x1
  1000:586e     81 C2 03 6B      ADD DX,0x6b03
  1000:5872     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:5877     75 13            JNZ 0x1000:588c
  1000:5879     8B F2            MOV SI,DX
  1000:587b     B6 08            MOV DH,0x8
  1000:587d     B2 02            MOV DL,0x2
  1000:587f     B3 07            MOV BL,0x7
  1000:5881     B7 07            MOV BH,0x7
  1000:5883     BD 14 00         MOV BP,0x14
  1000:5886     FF 1E 08 05      CALLF [0x508]
  1000:588a     EB 0D            JMP 0x1000:5899

LAB_1000_588c:
  1000:588c     B0 03            MOV AL,0x3
  1000:588e     53               PUSH BX
  1000:588f     8B DF            MOV BX,DI
  1000:5891     BD 56 00         MOV BP,0x56
  1000:5894     FF 1E 08 05      CALLF [0x508]
  1000:5898     5B               POP BX

LAB_1000_5899:
  1000:5899     5E               POP SI
  1000:589a     5A               POP DX
  1000:589b     5B               POP BX
  1000:589c     C3               RET

LAB_1000_589d:
  1000:589d     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:58a1     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:58a5     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:58a9     C3               RET

FUN_1000_58aa:
  1000:58aa     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:58ae     32 C0            XOR AL,AL
  1000:58b0     E8 09 FE         CALL 0x1000:56bc
  1000:58b3     CB               RETF

FUN_1000_58c0:
  1000:58c0     8B 16 34 16      MOV DX,word ptr [0x1634]
  1000:58c4     E8 49 B4         CALL 0x1000:0d10
  1000:58c7     BB 95 86         MOV BX,0x8695
  1000:58ca     03 DA            ADD BX,DX
  1000:58cc     81 C3 3D FF      ADD BX,0xff3d
  1000:58d0     8B FB            MOV DI,BX
  1000:58d2     BB 83 75         MOV BX,0x7583
  1000:58d5     B5 00            MOV CH,0x0

LAB_1000_58d7:
  1000:58d7     B1 00            MOV CL,0x0

LAB_1000_58d9:
  1000:58d9     8A 05            MOV AL,byte ptr [DI]
  1000:58db     3A 07            CMP AL,byte ptr [BX]
  1000:58dd     74 03            JZ 0x1000:58e2
  1000:58df     E8 19 00         CALL 0x1000:58fb

LAB_1000_58e2:
  1000:58e2     47               INC DI
  1000:58e3     43               INC BX
  1000:58e4     FE C1            INC CL
  1000:58e6     80 F9 26         CMP CL,0x26
  1000:58e9     75 EE            JNZ 0x1000:58d9
  1000:58eb     FE C5            INC CH
  1000:58ed     80 FD 17         CMP CH,0x17
  1000:58f0     75 01            JNZ 0x1000:58f3
  1000:58f2     C3               RET

LAB_1000_58f3:
  1000:58f3     83 C7 DA         ADD DI,-0x26
  1000:58f6     83 C7 60         ADD DI,0x60
  1000:58f9     EB DC            JMP 0x1000:58d7

FUN_1000_58fb:
  1000:58fb     53               PUSH BX
  1000:58fc     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5900     8A 07            MOV AL,byte ptr [BX]
  1000:5902     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5906     88 07            MOV byte ptr [BX],AL
  1000:5908     81 C3 A8 0D      ADD BX,0xda8
  1000:590c     3C 02            CMP AL,0x2
  1000:590e     72 05            JC 0x1000:5915
  1000:5910     C6 07 22         MOV byte ptr [BX],0x22
  1000:5913     5B               POP BX
  1000:5914     C3               RET

LAB_1000_5915:
  1000:5915     3C 01            CMP AL,0x1
  1000:5917     74 05            JZ 0x1000:591e
  1000:5919     C6 07 01         MOV byte ptr [BX],0x1
  1000:591c     5B               POP BX
  1000:591d     C3               RET

LAB_1000_591e:
  1000:591e     C6 07 12         MOV byte ptr [BX],0x12
  1000:5921     5B               POP BX
  1000:5922     C3               RET

FUN_1000_5931:
  1000:5931     24 0F            AND AL,0xf
  1000:5933     75 01            JNZ 0x1000:5936
  1000:5935     C3               RET

LAB_1000_5936:
  1000:5936     8B D1            MOV DX,CX
  1000:5938     D0 C6            ROL DH,0x1
  1000:593a     D0 C6            ROL DH,0x1
  1000:593c     D0 C6            ROL DH,0x1
  1000:593e     D0 C2            ROL DL,0x1
  1000:5940     FE C8            DEC AL
  1000:5942     32 E4            XOR AH,AH
  1000:5944     D1 E0            SHL AX,0x1
  1000:5946     8B F8            MOV DI,AX
  1000:5948     1E               PUSH DS
  1000:5949     07               POP ES
  1000:594a     51               PUSH CX
  1000:594b     53               PUSH BX
  1000:594c     2E FF 95 23 59   CALL word ptr CS:[DI + 0x5923]
  1000:5951     5B               POP BX
  1000:5952     59               POP CX
  1000:5953     C3               RET

FUN_1000_59fb:
  1000:59fb     A0 80 16         MOV AL,[0x1680]
  1000:59fe     0A C0            OR AL,AL
  1000:5a00     75 01            JNZ 0x1000:5a03
  1000:5a02     C3               RET

LAB_1000_5a03:
  1000:5a03     BE BA 16         MOV SI,0x16ba
  1000:5a06     8A 04            MOV AL,byte ptr [SI]
  1000:5a08     0A C0            OR AL,AL
  1000:5a0a     75 01            JNZ 0x1000:5a0d
  1000:5a0c     C3               RET

LAB_1000_5a0d:
  1000:5a0d     FE C8            DEC AL
  1000:5a0f     88 04            MOV byte ptr [SI],AL
  1000:5a11     FE 0E 5B 16      DEC byte ptr [0x165b]
  1000:5a15     75 0A            JNZ 0x1000:5a21
  1000:5a17     C6 06 5B 16 14   MOV byte ptr [0x165b],0x14
  1000:5a1c     9A 7C 40 00 10   CALLF 0x1000:407c

LAB_1000_5a21:
  1000:5a21     C6 04 00         MOV byte ptr [SI],0x0
  1000:5a24     BB 07 07         MOV BX,0x707
  1000:5a27     BD 34 00         MOV BP,0x34
  1000:5a2a     FF 1E 08 05      CALLF [0x508]
  1000:5a2e     8B 5C 01         MOV BX,word ptr [SI + 0x1]
  1000:5a31     8B 54 03         MOV DX,word ptr [SI + 0x3]
  1000:5a34     8B 44 06         MOV AX,word ptr [SI + 0x6]
  1000:5a37     8A 6C 05         MOV CH,byte ptr [SI + 0x5]
  1000:5a3a     B1 08            MOV CL,0x8
  1000:5a3c     56               PUSH SI
  1000:5a3d     06               PUSH ES
  1000:5a3e     BD 36 00         MOV BP,0x36
  1000:5a41     FF 1E 08 05      CALLF [0x508]
  1000:5a45     07               POP ES
  1000:5a46     5E               POP SI
  1000:5a47     C6 06 62 05 03   MOV byte ptr [0x562],0x3
  1000:5a4c     8A 04            MOV AL,byte ptr [SI]
  1000:5a4e     C6 04 00         MOV byte ptr [SI],0x0
  1000:5a51     3C 02            CMP AL,0x2
  1000:5a53     74 01            JZ 0x1000:5a56
  1000:5a55     C3               RET

LAB_1000_5a56:
  1000:5a56     8B 5C 08         MOV BX,word ptr [SI + 0x8]
  1000:5a59     81 C3 58 F2      ADD BX,0xf258
  1000:5a5d     8A 2F            MOV CH,byte ptr [BX]
  1000:5a5f     A0 EF 05         MOV AL,[0x5ef]
  1000:5a62     3C 0A            CMP AL,0xa
  1000:5a64     8A C5            MOV AL,CH
  1000:5a66     74 2A            JZ 0x1000:5a92
  1000:5a68     3C 10            CMP AL,0x10
  1000:5a6a     72 50            JC 0x1000:5abc
  1000:5a6c     3C 1F            CMP AL,0x1f
  1000:5a6e     72 01            JC 0x1000:5a71
  1000:5a70     C3               RET

LAB_1000_5a71:
  1000:5a71     C6 06 62 05 04   MOV byte ptr [0x562],0x4
  1000:5a76     53               PUSH BX
  1000:5a77     A0 E4 74         MOV AL,[0x74e4]
  1000:5a7a     8A E8            MOV CH,AL
  1000:5a7c     B6 05            MOV DH,0x5

LAB_1000_5a7e:
  1000:5a7e     E8 D5 00         CALL 0x1000:5b56
  1000:5a81     74 04            JZ 0x1000:5a87
  1000:5a83     FE CD            DEC CH
  1000:5a85     75 F7            JNZ 0x1000:5a7e

LAB_1000_5a87:
  1000:5a87     5B               POP BX
  1000:5a88     81 C3 6A 03      ADD BX,0x36a
  1000:5a8c     8B D3            MOV DX,BX
  1000:5a8e     4A               DEC DX
  1000:5a8f     E9 92 FC         JMP 0x1000:5724

LAB_1000_5a92:
  1000:5a92     3C 60            CMP AL,0x60
  1000:5a94     72 26            JC 0x1000:5abc
  1000:5a96     3C 62            CMP AL,0x62
  1000:5a98     72 01            JC 0x1000:5a9b
  1000:5a9a     C3               RET

LAB_1000_5a9b:
  1000:5a9b     C6 06 62 05 04   MOV byte ptr [0x562],0x4
  1000:5aa0     53               PUSH BX
  1000:5aa1     A0 E4 74         MOV AL,[0x74e4]
  1000:5aa4     8A E8            MOV CH,AL
  1000:5aa6     B6 01            MOV DH,0x1

LAB_1000_5aa8:
  1000:5aa8     E8 AB 00         CALL 0x1000:5b56
  1000:5aab     74 04            JZ 0x1000:5ab1
  1000:5aad     FE CD            DEC CH
  1000:5aaf     75 F7            JNZ 0x1000:5aa8

LAB_1000_5ab1:
  1000:5ab1     5B               POP BX
  1000:5ab2     81 C3 6A 03      ADD BX,0x36a
  1000:5ab6     8B D3            MOV DX,BX
  1000:5ab8     4A               DEC DX
  1000:5ab9     E9 68 FC         JMP 0x1000:5724

LAB_1000_5abc:
  1000:5abc     3C 0E            CMP AL,0xe
  1000:5abe     74 01            JZ 0x1000:5ac1
  1000:5ac0     C3               RET

LAB_1000_5ac1:
  1000:5ac1     81 EB 83 75      SUB BX,0x7583
  1000:5ac5     B6 00            MOV DH,0x0
  1000:5ac7     B9 26 00         MOV CX,0x26

LAB_1000_5aca:
  1000:5aca     2B D9            SUB BX,CX
  1000:5acc     FE C6            INC DH
  1000:5ace     73 FA            JNC 0x1000:5aca
  1000:5ad0     03 D9            ADD BX,CX
  1000:5ad2     FE CE            DEC DH
  1000:5ad4     8A D3            MOV DL,BL
  1000:5ad6     FE CE            DEC DH
  1000:5ad8     FE CE            DEC DH
  1000:5ada     FE CA            DEC DL
  1000:5adc     FE CA            DEC DL
  1000:5ade     FE CA            DEC DL
  1000:5ae0     A0 34 16         MOV AL,[0x1634]
  1000:5ae3     02 D0            ADD DL,AL
  1000:5ae5     A0 35 16         MOV AL,[0x1635]
  1000:5ae8     02 F0            ADD DH,AL
  1000:5aea     E8 23 B2         CALL 0x1000:0d10
  1000:5aed     BB 95 86         MOV BX,0x8695
  1000:5af0     03 DA            ADD BX,DX
  1000:5af2     C6 07 00         MOV byte ptr [BX],0x0
  1000:5af5     C3               RET

FUN_1000_5b56:
  1000:5b56     BB 54 5D         MOV BX,0x5d54
  1000:5b59     2E FE 0F         DEC byte ptr CS:[BX]
  1000:5b5c     74 01            JZ 0x1000:5b5f
  1000:5b5e     C3               RET

LAB_1000_5b5f:
  1000:5b5f     2E 88 37         MOV byte ptr CS:[BX],DH
  1000:5b62     BB 80 16         MOV BX,0x1680
  1000:5b65     8A 07            MOV AL,byte ptr [BX]
  1000:5b67     0A C0            OR AL,AL
  1000:5b69     75 01            JNZ 0x1000:5b6c
  1000:5b6b     C3               RET

LAB_1000_5b6c:
  1000:5b6c     FE 0F            DEC byte ptr [BX]
  1000:5b6e     C3               RET

FUN_1000_5c21:
  1000:5c21     0E               PUSH CS
  1000:5c22     07               POP ES
  1000:5c23     BF 50 5D         MOV DI,0x5d50
  1000:5c26     B9 07 00         MOV CX,0x7
  1000:5c29     B0 00            MOV AL,0x0
  1000:5c2b     F3 AA            STOSB.REP ES:DI
  1000:5c2d     BF 76 EE         MOV DI,0xee76
  1000:5c30     B9 A0 00         MOV CX,0xa0
  1000:5c33     1E               PUSH DS
  1000:5c34     07               POP ES
  1000:5c35     F3 AA            STOSB.REP ES:DI
  1000:5c37     BF B9 E4         MOV DI,0xe4b9
  1000:5c3a     B9 09 00         MOV CX,0x9
  1000:5c3d     F3 AA            STOSB.REP ES:DI
  1000:5c3f     32 C0            XOR AL,AL
  1000:5c41     A2 71 16         MOV [0x1671],AL
  1000:5c44     2E FE 06 0C 54   INC byte ptr CS:[0x540c]
  1000:5c49     BB 14 54         MOV BX,0x5414
  1000:5c4c     2E FE 07         INC byte ptr CS:[BX]
  1000:5c4f     BB 10 54         MOV BX,0x5410
  1000:5c52     8B D3            MOV DX,BX
  1000:5c54     BB 53 74         MOV BX,0x7453
  1000:5c57     E8 DE C4         CALL 0x1000:2138
  1000:5c5a     A0 53 74         MOV AL,[0x7453]
  1000:5c5d     D0 C8            ROR AL,0x1
  1000:5c5f     73 2B            JNC 0x1000:5c8c
  1000:5c61     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5c65     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:5c6a     75 0E            JNZ 0x1000:5c7a
  1000:5c6c     BA 54 74         MOV DX,0x7454
  1000:5c6f     BB 95 86         MOV BX,0x8695
  1000:5c72     E8 F9 C4         CALL 0x1000:216e
  1000:5c75     E8 35 EC         CALL 0x1000:48ad
  1000:5c78     EB 0E            JMP 0x1000:5c88

LAB_1000_5c7a:
  1000:5c7a     C6 06 7E F1 04   MOV byte ptr [0xf17e],0x4
  1000:5c7f     BA 54 74         MOV DX,0x7454
  1000:5c82     BB 95 AD         MOV BX,0xad95
  1000:5c85     E8 69 C5         CALL 0x1000:21f1

LAB_1000_5c88:
  1000:5c88     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_5c8c:
  1000:5c8c     D0 C8            ROR AL,0x1
  1000:5c8e     73 16            JNC 0x1000:5ca6
  1000:5c90     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5c94     C6 06 7E F1 0C   MOV byte ptr [0xf17e],0xc
  1000:5c99     BA 5A 74         MOV DX,0x745a
  1000:5c9c     BB 95 B0         MOV BX,0xb095
  1000:5c9f     E8 4F C5         CALL 0x1000:21f1
  1000:5ca2     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_5ca6:
  1000:5ca6     D0 C8            ROR AL,0x1
  1000:5ca8     73 11            JNC 0x1000:5cbb
  1000:5caa     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5cae     BA 60 74         MOV DX,0x7460
  1000:5cb1     BB 15 C1         MOV BX,0xc115
  1000:5cb4     E8 B7 C4         CALL 0x1000:216e
  1000:5cb7     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_5cbb:
  1000:5cbb     D0 C8            ROR AL,0x1
  1000:5cbd     D0 C8            ROR AL,0x1
  1000:5cbf     73 11            JNC 0x1000:5cd2
  1000:5cc1     86 06 47 DC      XCHG byte ptr [0xdc47],AL
  1000:5cc5     BA 6C 74         MOV DX,0x746c
  1000:5cc8     BB 95 86         MOV BX,0x8695
  1000:5ccb     E8 A0 C4         CALL 0x1000:216e
  1000:5cce     86 06 47 DC      XCHG byte ptr [0xdc47],AL

LAB_1000_5cd2:
  1000:5cd2     D0 C8            ROR AL,0x1
  1000:5cd4     D0 C8            ROR AL,0x1
  1000:5cd6     A0 83 16         MOV AL,[0x1683]
  1000:5cd9     2E A2 20 5C      MOV CS:[0x5c20],AL
  1000:5cdd     C6 06 83 16 01   MOV byte ptr [0x1683],0x1
  1000:5ce2     E8 3C 00         CALL 0x1000:5d21
  1000:5ce5     BB DC 74         MOV BX,0x74dc
  1000:5ce8     8A 17            MOV DL,byte ptr [BX]
  1000:5cea     88 16 34 16      MOV byte ptr [0x1634],DL
  1000:5cee     43               INC BX
  1000:5cef     8A 37            MOV DH,byte ptr [BX]
  1000:5cf1     88 36 35 16      MOV byte ptr [0x1635],DH
  1000:5cf5     43               INC BX
  1000:5cf6     8A 07            MOV AL,byte ptr [BX]
  1000:5cf8     A2 2A 16         MOV [0x162a],AL
  1000:5cfb     E8 61 0F         CALL 0x1000:6c5f
  1000:5cfe     BB 02 03         MOV BX,0x302
  1000:5d01     A0 EF 05         MOV AL,[0x5ef]
  1000:5d04     04 30            ADD AL,0x30
  1000:5d06     BD 60 00         MOV BP,0x60
  1000:5d09     FF 1E 08 05      CALLF [0x508]
  1000:5d0d     BB 02 05         MOV BX,0x502
  1000:5d10     A0 76 16         MOV AL,[0x1676]
  1000:5d13     04 30            ADD AL,0x30
  1000:5d15     BD 60 00         MOV BP,0x60
  1000:5d18     FF 1E 08 05      CALLF [0x508]
  1000:5d1c     C3               RET

FUN_1000_5d21:
  1000:5d21     A0 57 16         MOV AL,[0x1657]
  1000:5d24     0A C0            OR AL,AL
  1000:5d26     75 01            JNZ 0x1000:5d29
  1000:5d28     C3               RET

LAB_1000_5d29:
  1000:5d29     BB E4 74         MOV BX,0x74e4
  1000:5d2c     FE C8            DEC AL
  1000:5d2e     24 01            AND AL,0x1
  1000:5d30     02 C0            ADD AL,AL
  1000:5d32     32 E4            XOR AH,AH
  1000:5d34     8B F8            MOV DI,AX

switchD:
  1000:5d36     2E FF A5 1D 5D   JMP word ptr CS:[DI + 0x5d1d]

caseD_0:
  1000:5d3b     B0 02            MOV AL,0x2
  1000:5d3d     88 07            MOV byte ptr [BX],AL
  1000:5d3f     43               INC BX
  1000:5d40     88 07            MOV byte ptr [BX],AL
  1000:5d42     C3               RET

caseD_1:
  1000:5d43     B0 0A            MOV AL,0xa
  1000:5d45     88 07            MOV byte ptr [BX],AL
  1000:5d47     43               INC BX
  1000:5d48     88 07            MOV byte ptr [BX],AL
  1000:5d4a     C3               RET

FUN_1000_5d97:
  1000:5d97     A0 73 05         MOV AL,[0x573]
  1000:5d9a     D0 C8            ROR AL,0x1
  1000:5d9c     72 01            JC 0x1000:5d9f
  1000:5d9e     C3               RET

LAB_1000_5d9f:
  1000:5d9f     A0 B9 16         MOV AL,[0x16b9]
  1000:5da2     0A C0            OR AL,AL
  1000:5da4     74 01            JZ 0x1000:5da7
  1000:5da6     C3               RET

LAB_1000_5da7:
  1000:5da7     32 C0            XOR AL,AL
  1000:5da9     A2 B4 16         MOV [0x16b4],AL
  1000:5dac     A2 B5 16         MOV [0x16b5],AL
  1000:5daf     2E 8A 1E 50 5D   MOV BL,byte ptr CS:[0x5d50]
  1000:5db4     80 FB 09         CMP BL,0x9
  1000:5db7     72 01            JC 0x1000:5dba

default:
  1000:5db9     C3               RET

LAB_1000_5dba:
  1000:5dba     32 FF            XOR BH,BH
  1000:5dbc     D1 E3            SHL BX,0x1

switchD:
  1000:5dbe     2E FF A7 85 5D   JMP word ptr CS:[BX + 0x5d85]

caseD_0:
  1000:5dc3     C6 06 79 16 14   MOV byte ptr [0x1679],0x14
  1000:5dc8     BB 76 EE         MOV BX,0xee76
  1000:5dcb     89 1E 77 16      MOV word ptr [0x1677],BX
  1000:5dcf     B0 32            MOV AL,0x32
  1000:5dd1     A2 7F 16         MOV [0x167f],AL
  1000:5dd4     A2 80 16         MOV [0x1680],AL
  1000:5dd7     A0 E1 74         MOV AL,[0x74e1]
  1000:5dda     2E A2 54 5D      MOV CS:[0x5d54],AL
  1000:5dde     C6 06 60 16 01   MOV byte ptr [0x1660],0x1
  1000:5de3     BB B9 E4         MOV BX,0xe4b9
  1000:5de6     1E               PUSH DS
  1000:5de7     07               POP ES
  1000:5de8     57               PUSH DI
  1000:5de9     50               PUSH AX
  1000:5dea     B0 00            MOV AL,0x0
  1000:5dec     B9 09 00         MOV CX,0x9
  1000:5def     BF B9 E4         MOV DI,0xe4b9
  1000:5df2     F3 AA            STOSB.REP ES:DI
  1000:5df4     58               POP AX
  1000:5df5     5F               POP DI
  1000:5df6     89 1E CC 16      MOV word ptr [0x16cc],BX
  1000:5dfa     C6 06 D0 16 01   MOV byte ptr [0x16d0],0x1
  1000:5dff     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5e04     C3               RET

caseD_1:
  1000:5e05     2E FE 06 51 5D   INC byte ptr CS:[0x5d51]
  1000:5e0a     2E A0 51 5D      MOV AL,CS:[0x5d51]
  1000:5e0e     24 0F            AND AL,0xf
  1000:5e10     32 E4            XOR AH,AH
  1000:5e12     05 69 5D         ADD AX,0x5d69
  1000:5e15     8B D8            MOV BX,AX
  1000:5e17     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:5e1a     32 FF            XOR BH,BH
  1000:5e1c     8A D8            MOV BL,AL
  1000:5e1e     03 DB            ADD BX,BX
  1000:5e20     03 DB            ADD BX,BX
  1000:5e22     8B CB            MOV CX,BX
  1000:5e24     03 DB            ADD BX,BX
  1000:5e26     03 DB            ADD BX,BX
  1000:5e28     03 DB            ADD BX,BX
  1000:5e2a     03 D9            ADD BX,CX
  1000:5e2c     81 C3 55 C2      ADD BX,0xc255
  1000:5e30     8B F3            MOV SI,BX
  1000:5e32     8C D8            MOV AX,DS
  1000:5e34     8E C0            MOV ES,AX
  1000:5e36     BF E0 C1         MOV DI,0xc1e0
  1000:5e39     B9 04 00         MOV CX,0x4

LAB_1000_5e3c:
  1000:5e3c     51               PUSH CX
  1000:5e3d     B9 09 00         MOV CX,0x9
  1000:5e40     F3 A4            MOVSB.REP ES:DI,SI
  1000:5e42     83 C7 17         ADD DI,0x17
  1000:5e45     59               POP CX
  1000:5e46     E2 F4            LOOP 0x1000:5e3c
  1000:5e48     BB 15 C1         MOV BX,0xc115
  1000:5e4b     BF 99 A6         MOV DI,0xa699
  1000:5e4e     B1 0A            MOV CL,0xa

LAB_1000_5e50:
  1000:5e50     57               PUSH DI
  1000:5e51     B5 20            MOV CH,0x20

LAB_1000_5e53:
  1000:5e53     8A 07            MOV AL,byte ptr [BX]
  1000:5e55     0A C0            OR AL,AL
  1000:5e57     74 02            JZ 0x1000:5e5b
  1000:5e59     2C 6C            SUB AL,0x6c

LAB_1000_5e5b:
  1000:5e5b     88 05            MOV byte ptr [DI],AL
  1000:5e5d     43               INC BX
  1000:5e5e     47               INC DI
  1000:5e5f     FE CD            DEC CH
  1000:5e61     75 F0            JNZ 0x1000:5e53
  1000:5e63     5F               POP DI
  1000:5e64     83 C7 60         ADD DI,0x60
  1000:5e67     FE C9            DEC CL
  1000:5e69     75 E5            JNZ 0x1000:5e50
  1000:5e6b     E8 67 07         CALL 0x1000:65d5
  1000:5e6e     A0 80 16         MOV AL,[0x1680]
  1000:5e71     0A C0            OR AL,AL
  1000:5e73     74 01            JZ 0x1000:5e76
  1000:5e75     C3               RET

LAB_1000_5e76:
  1000:5e76     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5e7b     C3               RET

caseD_2:
  1000:5e7c     C6 06 62 05 0C   MOV byte ptr [0x562],0xc
  1000:5e81     2E FE 06 56 5D   INC byte ptr CS:[0x5d56]
  1000:5e86     2E A0 56 5D      MOV AL,CS:[0x5d56]
  1000:5e8a     3C 15            CMP AL,0x15
  1000:5e8c     73 26            JNC 0x1000:5eb4
  1000:5e8e     D0 C8            ROR AL,0x1
  1000:5e90     73 01            JNC 0x1000:5e93
  1000:5e92     C3               RET

LAB_1000_5e93:
  1000:5e93     8C D8            MOV AX,DS
  1000:5e95     8E C0            MOV ES,AX
  1000:5e97     BE 99 A9         MOV SI,0xa999
  1000:5e9a     BF F9 A9         MOV DI,0xa9f9
  1000:5e9d     B5 0B            MOV CH,0xb

LAB_1000_5e9f:
  1000:5e9f     51               PUSH CX
  1000:5ea0     B9 20 00         MOV CX,0x20
  1000:5ea3     56               PUSH SI
  1000:5ea4     F3 A4            MOVSB.REP ES:DI,SI
  1000:5ea6     5E               POP SI
  1000:5ea7     8B FE            MOV DI,SI
  1000:5ea9     0A C0            OR AL,AL
  1000:5eab     83 DE 60         SBB SI,0x60
  1000:5eae     59               POP CX
  1000:5eaf     FE CD            DEC CH
  1000:5eb1     75 EC            JNZ 0x1000:5e9f
  1000:5eb3     C3               RET

LAB_1000_5eb4:
  1000:5eb4     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5eb9     C3               RET

caseD_3:
  1000:5eba     C6 06 7E F1 0D   MOV byte ptr [0xf17e],0xd
  1000:5ebf     BA 7F 5D         MOV DX,0x5d7f
  1000:5ec2     BB 95 B0         MOV BX,0xb095
  1000:5ec5     E8 C3 C2         CALL 0x1000:218b
  1000:5ec8     BA 79 5D         MOV DX,0x5d79
  1000:5ecb     BB 2D C3         MOV BX,0xc32d
  1000:5ece     E8 67 C2         CALL 0x1000:2138
  1000:5ed1     C6 06 EF 05 0A   MOV byte ptr [0x5ef],0xa
  1000:5ed6     C6 06 76 16 01   MOV byte ptr [0x1676],0x1
  1000:5edb     B0 31            MOV AL,0x31
  1000:5edd     BB 01 03         MOV BX,0x301
  1000:5ee0     BD 60 00         MOV BP,0x60
  1000:5ee3     FF 1E 08 05      CALLF [0x508]
  1000:5ee7     B0 30            MOV AL,0x30
  1000:5ee9     BB 02 03         MOV BX,0x302
  1000:5eec     BD 60 00         MOV BP,0x60
  1000:5eef     FF 1E 08 05      CALLF [0x508]
  1000:5ef3     B0 31            MOV AL,0x31
  1000:5ef5     BB 02 05         MOV BX,0x502
  1000:5ef8     BD 60 00         MOV BP,0x60
  1000:5efb     FF 1E 08 05      CALLF [0x508]
  1000:5eff     2E C6 06 52 5D 01   MOV byte ptr CS:[0x5d52],0x1
  1000:5f05     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5f0a     E8 48 01         CALL 0x1000:6055
  1000:5f0d     8C D8            MOV AX,DS
  1000:5f0f     8E C0            MOV ES,AX
  1000:5f11     BF 84 75         MOV DI,0x7584
  1000:5f14     B9 6A 03         MOV CX,0x36a
  1000:5f17     B0 F0            MOV AL,0xf0
  1000:5f19     F3 AA            STOSB.REP ES:DI
  1000:5f1b     C3               RET

caseD_4:
  1000:5f1c     2E C6 06 53 5D 0C   MOV byte ptr CS:[0x5d53],0xc
  1000:5f22     E8 59 01         CALL 0x1000:607e
  1000:5f25     8C D8            MOV AX,DS
  1000:5f27     8E C0            MOV ES,AX
  1000:5f29     8B 3E 77 16      MOV DI,word ptr [0x1677]
  1000:5f2d     B0 00            MOV AL,0x0
  1000:5f2f     B9 A0 00         MOV CX,0xa0
  1000:5f32     F3 AA            STOSB.REP ES:DI
  1000:5f34     BE 5B 98         MOV SI,0x985b
  1000:5f37     BF 57 7C         MOV DI,0x7c57
  1000:5f3a     B0 30            MOV AL,0x30

LAB_1000_5f3c:
  1000:5f3c     B9 17 00         MOV CX,0x17
  1000:5f3f     56               PUSH SI
  1000:5f40     F3 A4            MOVSB.REP ES:DI,SI
  1000:5f42     5E               POP SI
  1000:5f43     83 C6 60         ADD SI,0x60
  1000:5f46     FE C8            DEC AL
  1000:5f48     75 F2            JNZ 0x1000:5f3c
  1000:5f4a     BE 8E 97         MOV SI,0x978e
  1000:5f4d     BF 8F 97         MOV DI,0x978f
  1000:5f50     C6 04 00         MOV byte ptr [SI],0x0
  1000:5f53     B4 32            MOV AH,0x32

LAB_1000_5f55:
  1000:5f55     57               PUSH DI
  1000:5f56     B9 2F 00         MOV CX,0x2f
  1000:5f59     F3 A4            MOVSB.REP ES:DI,SI
  1000:5f5b     5F               POP DI
  1000:5f5c     8B F7            MOV SI,DI
  1000:5f5e     83 C7 60         ADD DI,0x60
  1000:5f61     FE CC            DEC AH
  1000:5f63     75 F0            JNZ 0x1000:5f55
  1000:5f65     C6 06 80 16 32   MOV byte ptr [0x1680],0x32
  1000:5f6a     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5f6f     E9 E3 00         JMP 0x1000:6055

caseD_5:
  1000:5f72     2E A0 52 5D      MOV AL,CS:[0x5d52]
  1000:5f76     2E FE 06 52 5D   INC byte ptr CS:[0x5d52]
  1000:5f7b     3C 31            CMP AL,0x31
  1000:5f7d     73 03            JNC 0x1000:5f82
  1000:5f7f     E9 AF 00         JMP 0x1000:6031

LAB_1000_5f82:
  1000:5f82     2E C6 06 52 5D 60   MOV byte ptr CS:[0x5d52],0x60
  1000:5f88     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5f8d     C3               RET

caseD_6:
  1000:5f8e     A0 80 16         MOV AL,[0x1680]
  1000:5f91     0A C0            OR AL,AL
  1000:5f93     74 03            JZ 0x1000:5f98
  1000:5f95     E9 E6 00         JMP 0x1000:607e

LAB_1000_5f98:
  1000:5f98     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5f9d     C3               RET

caseD_7:
  1000:5f9e     E8 B4 00         CALL 0x1000:6055
  1000:5fa1     2E A0 52 5D      MOV AL,CS:[0x5d52]
  1000:5fa5     3C 02            CMP AL,0x2
  1000:5fa7     73 06            JNC 0x1000:5faf
  1000:5fa9     2E FE 06 50 5D   INC byte ptr CS:[0x5d50]
  1000:5fae     C3               RET

LAB_1000_5faf:
  1000:5faf     C6 06 62 05 0C   MOV byte ptr [0x562],0xc
  1000:5fb4     2E FE 0E 52 5D   DEC byte ptr CS:[0x5d52]
  1000:5fb9     D0 E8            SHR AL,0x1
  1000:5fbb     EB 74            JMP 0x1000:6031

caseD_8:
  1000:5fbe     2E A0 55 5D      MOV AL,CS:[0x5d55]
  1000:5fc2     2E FE 06 55 5D   INC byte ptr CS:[0x5d55]
  1000:5fc7     0A C0            OR AL,AL
  1000:5fc9     75 03            JNZ 0x1000:5fce
  1000:5fcb     E9 87 00         JMP 0x1000:6055

LAB_1000_5fce:
  1000:5fce     BD 42 00         MOV BP,0x42
  1000:5fd1     FF 1E 08 05      CALLF [0x508]
  1000:5fd5     E8 D8 C6         CALL 0x1000:26b0
  1000:5fd8     A1 83 F1         MOV AX,[0xf183]
  1000:5fdb     8B E0            MOV SP,AX
  1000:5fdd     2E C6 06 80 2A 00   MOV byte ptr CS:[0x2a80],0x0
  1000:5fe3     2E C6 06 13 54 30   MOV byte ptr CS:[0x5413],0x30
  1000:5fe9     2E C6 06 14 54 30   MOV byte ptr CS:[0x5414],0x30
  1000:5fef     C6 06 EF 05 01   MOV byte ptr [0x5ef],0x1
  1000:5ff4     C6 06 FF 05 01   MOV byte ptr [0x5ff],0x1
  1000:5ff9     C6 06 76 16 01   MOV byte ptr [0x1676],0x1
  1000:5ffe     2E C6 06 0B 54 01   MOV byte ptr CS:[0x540b],0x1
  1000:6004     2E C6 06 0C 54 01   MOV byte ptr CS:[0x540c],0x1
  1000:600a     2E A0 20 5C      MOV AL,CS:[0x5c20]
  1000:600e     A2 83 16         MOV [0x1683],AL
  1000:6011     C6 06 7F 16 00   MOV byte ptr [0x167f],0x0
  1000:6016     C6 06 79 16 04   MOV byte ptr [0x1679],0x4
  1000:601b     BB 94 16         MOV BX,0x1694
  1000:601e     89 1E 77 16      MOV word ptr [0x1677],BX
  1000:6022     BB 83 27         MOV BX,0x2783
  1000:6025     89 1E CC 16      MOV word ptr [0x16cc],BX
  1000:6029     C6 06 D0 16 00   MOV byte ptr [0x16d0],0x0
  1000:602e     B0 02            MOV AL,0x2
  1000:6030     CB               RETF

LAB_1000_6031:
  1000:6031     8C DB            MOV BX,DS
  1000:6033     8E C3            MOV ES,BX
  1000:6035     BF 5B AA         MOV DI,0xaa5b
  1000:6038     BA A0 FF         MOV DX,0xffa0
  1000:603b     8A E8            MOV CH,AL

LAB_1000_603d:
  1000:603d     03 FA            ADD DI,DX
  1000:603f     FE CD            DEC CH
  1000:6041     75 FA            JNZ 0x1000:603d
  1000:6043     BE 57 7C         MOV SI,0x7c57

LAB_1000_6046:
  1000:6046     B9 17 00         MOV CX,0x17
  1000:6049     57               PUSH DI
  1000:604a     F3 A4            MOVSB.REP ES:DI,SI
  1000:604c     5F               POP DI
  1000:604d     83 C7 60         ADD DI,0x60
  1000:6050     FE C8            DEC AL
  1000:6052     75 F2            JNZ 0x1000:6046
  1000:6054     C3               RET

FUN_1000_6055:
  1000:6055     8C D8            MOV AX,DS
  1000:6057     8E C0            MOV ES,AX
  1000:6059     BE 8E 97         MOV SI,0x978e
  1000:605c     BF 8F 97         MOV DI,0x978f
  1000:605f     C6 04 00         MOV byte ptr [SI],0x0
  1000:6062     B9 2F 00         MOV CX,0x2f
  1000:6065     B0 32            MOV AL,0x32

LAB_1000_6067:
  1000:6067     57               PUSH DI
  1000:6068     B9 2F 00         MOV CX,0x2f
  1000:606b     F3 A4            MOVSB.REP ES:DI,SI
  1000:606d     5F               POP DI
  1000:606e     8B F7            MOV SI,DI
  1000:6070     83 C7 60         ADD DI,0x60
  1000:6073     FE C8            DEC AL
  1000:6075     75 F0            JNZ 0x1000:6067
  1000:6077     C3               RET

FUN_1000_607e:
  1000:607e     E8 D4 FF         CALL 0x1000:6055
  1000:6081     BE 95 62         MOV SI,0x6295
  1000:6084     BB 53 5D         MOV BX,0x5d53
  1000:6087     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:608a     24 0F            AND AL,0xf
  1000:608c     2E FE 07         INC byte ptr CS:[BX]
  1000:608f     32 FF            XOR BH,BH
  1000:6091     8A D8            MOV BL,AL
  1000:6093     8B CB            MOV CX,BX
  1000:6095     03 DB            ADD BX,BX
  1000:6097     03 DB            ADD BX,BX
  1000:6099     8B D3            MOV DX,BX
  1000:609b     03 DB            ADD BX,BX
  1000:609d     03 DA            ADD BX,DX
  1000:609f     03 D9            ADD BX,CX
  1000:60a1     03 DB            ADD BX,BX
  1000:60a3     03 DB            ADD BX,BX
  1000:60a5     03 F3            ADD SI,BX
  1000:60a7     BB 35 98         MOV BX,0x9835
  1000:60aa     2E 8B 14         MOV DX,word ptr CS:[SI]
  1000:60ad     03 DA            ADD BX,DX
  1000:60af     2E 8B 7C 02      MOV DI,word ptr CS:[SI + 0x2]
  1000:60b3     B1 04            MOV CL,0x4

LAB_1000_60b5:
  1000:60b5     B5 04            MOV CH,0x4

LAB_1000_60b7:
  1000:60b7     8A 05            MOV AL,byte ptr [DI]
  1000:60b9     3C 50            CMP AL,0x50
  1000:60bb     74 02            JZ 0x1000:60bf
  1000:60bd     88 07            MOV byte ptr [BX],AL

LAB_1000_60bf:
  1000:60bf     47               INC DI
  1000:60c0     43               INC BX
  1000:60c1     FE CD            DEC CH
  1000:60c3     75 F2            JNZ 0x1000:60b7
  1000:60c5     83 C3 5C         ADD BX,0x5c
  1000:60c8     FE C9            DEC CL
  1000:60ca     75 E9            JNZ 0x1000:60b5
  1000:60cc     BB 35 98         MOV BX,0x9835
  1000:60cf     2E 8B 54 04      MOV DX,word ptr CS:[SI + 0x4]
  1000:60d3     03 DA            ADD BX,DX
  1000:60d5     2E 8B 7C 06      MOV DI,word ptr CS:[SI + 0x6]
  1000:60d9     B1 09            MOV CL,0x9

LAB_1000_60db:
  1000:60db     B5 08            MOV CH,0x8

LAB_1000_60dd:
  1000:60dd     8A 05            MOV AL,byte ptr [DI]
  1000:60df     3C 50            CMP AL,0x50
  1000:60e1     74 02            JZ 0x1000:60e5
  1000:60e3     88 07            MOV byte ptr [BX],AL

LAB_1000_60e5:
  1000:60e5     47               INC DI
  1000:60e6     43               INC BX
  1000:60e7     FE CD            DEC CH
  1000:60e9     75 F2            JNZ 0x1000:60dd
  1000:60eb     83 C3 58         ADD BX,0x58
  1000:60ee     FE C9            DEC CL
  1000:60f0     75 E9            JNZ 0x1000:60db
  1000:60f2     BB 35 98         MOV BX,0x9835
  1000:60f5     2E 8B 54 08      MOV DX,word ptr CS:[SI + 0x8]
  1000:60f9     03 DA            ADD BX,DX
  1000:60fb     2E 8B 7C 0A      MOV DI,word ptr CS:[SI + 0xa]
  1000:60ff     B1 0A            MOV CL,0xa

LAB_1000_6101:
  1000:6101     B5 0C            MOV CH,0xc

LAB_1000_6103:
  1000:6103     8A 05            MOV AL,byte ptr [DI]
  1000:6105     3C 50            CMP AL,0x50
  1000:6107     74 02            JZ 0x1000:610b
  1000:6109     88 07            MOV byte ptr [BX],AL

LAB_1000_610b:
  1000:610b     47               INC DI
  1000:610c     43               INC BX
  1000:610d     FE CD            DEC CH
  1000:610f     75 F2            JNZ 0x1000:6103
  1000:6111     83 C3 54         ADD BX,0x54
  1000:6114     FE C9            DEC CL
  1000:6116     75 E9            JNZ 0x1000:6101
  1000:6118     BB 35 98         MOV BX,0x9835
  1000:611b     2E 8B 54 0C      MOV DX,word ptr CS:[SI + 0xc]
  1000:611f     03 DA            ADD BX,DX
  1000:6121     2E 8B 7C 0E      MOV DI,word ptr CS:[SI + 0xe]
  1000:6125     B1 08            MOV CL,0x8

LAB_1000_6127:
  1000:6127     B5 0B            MOV CH,0xb

LAB_1000_6129:
  1000:6129     8A 05            MOV AL,byte ptr [DI]
  1000:612b     3C 50            CMP AL,0x50
  1000:612d     74 02            JZ 0x1000:6131
  1000:612f     88 07            MOV byte ptr [BX],AL

LAB_1000_6131:
  1000:6131     47               INC DI
  1000:6132     43               INC BX
  1000:6133     FE CD            DEC CH
  1000:6135     75 F2            JNZ 0x1000:6129
  1000:6137     83 C3 55         ADD BX,0x55
  1000:613a     FE C9            DEC CL
  1000:613c     75 E9            JNZ 0x1000:6127
  1000:613e     BB 35 98         MOV BX,0x9835
  1000:6141     2E 8B 54 10      MOV DX,word ptr CS:[SI + 0x10]
  1000:6145     03 DA            ADD BX,DX
  1000:6147     2E 8B 7C 12      MOV DI,word ptr CS:[SI + 0x12]
  1000:614b     B1 10            MOV CL,0x10

LAB_1000_614d:
  1000:614d     B5 0F            MOV CH,0xf

LAB_1000_614f:
  1000:614f     8A 05            MOV AL,byte ptr [DI]
  1000:6151     3C 50            CMP AL,0x50
  1000:6153     74 02            JZ 0x1000:6157
  1000:6155     88 07            MOV byte ptr [BX],AL

LAB_1000_6157:
  1000:6157     47               INC DI
  1000:6158     43               INC BX
  1000:6159     FE CD            DEC CH
  1000:615b     75 F2            JNZ 0x1000:614f
  1000:615d     83 C3 51         ADD BX,0x51
  1000:6160     FE C9            DEC CL
  1000:6162     75 E9            JNZ 0x1000:614d
  1000:6164     BB 35 98         MOV BX,0x9835
  1000:6167     2E 8B 54 14      MOV DX,word ptr CS:[SI + 0x14]
  1000:616b     03 DA            ADD BX,DX
  1000:616d     2E 8B 7C 16      MOV DI,word ptr CS:[SI + 0x16]
  1000:6171     B1 12            MOV CL,0x12

LAB_1000_6173:
  1000:6173     B5 11            MOV CH,0x11

LAB_1000_6175:
  1000:6175     8A 05            MOV AL,byte ptr [DI]
  1000:6177     3C 50            CMP AL,0x50
  1000:6179     74 02            JZ 0x1000:617d
  1000:617b     88 07            MOV byte ptr [BX],AL

LAB_1000_617d:
  1000:617d     47               INC DI
  1000:617e     43               INC BX
  1000:617f     FE CD            DEC CH
  1000:6181     75 F2            JNZ 0x1000:6175
  1000:6183     83 C3 4F         ADD BX,0x4f
  1000:6186     FE C9            DEC CL
  1000:6188     75 E9            JNZ 0x1000:6173
  1000:618a     BB 35 98         MOV BX,0x9835
  1000:618d     2E 8B 54 18      MOV DX,word ptr CS:[SI + 0x18]
  1000:6191     03 DA            ADD BX,DX
  1000:6193     2E 8B 7C 1A      MOV DI,word ptr CS:[SI + 0x1a]
  1000:6197     B1 18            MOV CL,0x18

LAB_1000_6199:
  1000:6199     B5 0B            MOV CH,0xb

LAB_1000_619b:
  1000:619b     8A 05            MOV AL,byte ptr [DI]
  1000:619d     3C 50            CMP AL,0x50
  1000:619f     74 02            JZ 0x1000:61a3
  1000:61a1     88 07            MOV byte ptr [BX],AL

LAB_1000_61a3:
  1000:61a3     47               INC DI
  1000:61a4     43               INC BX
  1000:61a5     FE CD            DEC CH
  1000:61a7     75 F2            JNZ 0x1000:619b
  1000:61a9     83 C3 55         ADD BX,0x55
  1000:61ac     FE C9            DEC CL
  1000:61ae     75 E9            JNZ 0x1000:6199
  1000:61b0     BB 35 98         MOV BX,0x9835
  1000:61b3     2E 8B 54 1C      MOV DX,word ptr CS:[SI + 0x1c]
  1000:61b7     03 DA            ADD BX,DX
  1000:61b9     2E 8B 7C 1E      MOV DI,word ptr CS:[SI + 0x1e]
  1000:61bd     B1 08            MOV CL,0x8

LAB_1000_61bf:
  1000:61bf     B5 0B            MOV CH,0xb

LAB_1000_61c1:
  1000:61c1     8A 05            MOV AL,byte ptr [DI]
  1000:61c3     3C 50            CMP AL,0x50
  1000:61c5     74 02            JZ 0x1000:61c9
  1000:61c7     88 07            MOV byte ptr [BX],AL

LAB_1000_61c9:
  1000:61c9     47               INC DI
  1000:61ca     43               INC BX
  1000:61cb     FE CD            DEC CH
  1000:61cd     75 F2            JNZ 0x1000:61c1
  1000:61cf     83 C3 55         ADD BX,0x55
  1000:61d2     FE C9            DEC CL
  1000:61d4     75 E9            JNZ 0x1000:61bf
  1000:61d6     BB 35 98         MOV BX,0x9835
  1000:61d9     2E 8B 54 20      MOV DX,word ptr CS:[SI + 0x20]
  1000:61dd     03 DA            ADD BX,DX
  1000:61df     2E 8B 7C 22      MOV DI,word ptr CS:[SI + 0x22]
  1000:61e3     B1 10            MOV CL,0x10

LAB_1000_61e5:
  1000:61e5     B5 0F            MOV CH,0xf

LAB_1000_61e7:
  1000:61e7     8A 05            MOV AL,byte ptr [DI]
  1000:61e9     3C 50            CMP AL,0x50
  1000:61eb     74 02            JZ 0x1000:61ef
  1000:61ed     88 07            MOV byte ptr [BX],AL

LAB_1000_61ef:
  1000:61ef     47               INC DI
  1000:61f0     43               INC BX
  1000:61f1     FE CD            DEC CH
  1000:61f3     75 F2            JNZ 0x1000:61e7
  1000:61f5     83 C3 51         ADD BX,0x51
  1000:61f8     FE C9            DEC CL
  1000:61fa     75 E9            JNZ 0x1000:61e5
  1000:61fc     BB 35 98         MOV BX,0x9835
  1000:61ff     2E 8B 54 24      MOV DX,word ptr CS:[SI + 0x24]
  1000:6203     03 DA            ADD BX,DX
  1000:6205     2E 8B 7C 26      MOV DI,word ptr CS:[SI + 0x26]
  1000:6209     B1 12            MOV CL,0x12

LAB_1000_620b:
  1000:620b     B5 11            MOV CH,0x11

LAB_1000_620d:
  1000:620d     8A 05            MOV AL,byte ptr [DI]
  1000:620f     3C 50            CMP AL,0x50
  1000:6211     74 02            JZ 0x1000:6215
  1000:6213     88 07            MOV byte ptr [BX],AL

LAB_1000_6215:
  1000:6215     47               INC DI
  1000:6216     43               INC BX
  1000:6217     FE CD            DEC CH
  1000:6219     75 F2            JNZ 0x1000:620d
  1000:621b     83 C3 4F         ADD BX,0x4f
  1000:621e     FE C9            DEC CL
  1000:6220     75 E9            JNZ 0x1000:620b
  1000:6222     BB 35 98         MOV BX,0x9835
  1000:6225     2E 8B 54 28      MOV DX,word ptr CS:[SI + 0x28]
  1000:6229     03 DA            ADD BX,DX
  1000:622b     2E 8B 7C 2A      MOV DI,word ptr CS:[SI + 0x2a]
  1000:622f     B1 04            MOV CL,0x4

LAB_1000_6231:
  1000:6231     B5 04            MOV CH,0x4

LAB_1000_6233:
  1000:6233     8A 05            MOV AL,byte ptr [DI]
  1000:6235     3C 50            CMP AL,0x50
  1000:6237     74 02            JZ 0x1000:623b
  1000:6239     88 07            MOV byte ptr [BX],AL

LAB_1000_623b:
  1000:623b     47               INC DI
  1000:623c     43               INC BX
  1000:623d     FE CD            DEC CH
  1000:623f     75 F2            JNZ 0x1000:6233
  1000:6241     83 C3 5C         ADD BX,0x5c
  1000:6244     FE C9            DEC CL
  1000:6246     75 E9            JNZ 0x1000:6231
  1000:6248     BB 35 98         MOV BX,0x9835
  1000:624b     2E 8B 54 2C      MOV DX,word ptr CS:[SI + 0x2c]
  1000:624f     03 DA            ADD BX,DX
  1000:6251     2E 8B 7C 2E      MOV DI,word ptr CS:[SI + 0x2e]
  1000:6255     B1 09            MOV CL,0x9

LAB_1000_6257:
  1000:6257     B5 08            MOV CH,0x8

LAB_1000_6259:
  1000:6259     8A 05            MOV AL,byte ptr [DI]
  1000:625b     3C 50            CMP AL,0x50
  1000:625d     74 02            JZ 0x1000:6261
  1000:625f     88 07            MOV byte ptr [BX],AL

LAB_1000_6261:
  1000:6261     47               INC DI
  1000:6262     43               INC BX
  1000:6263     FE CD            DEC CH
  1000:6265     75 F2            JNZ 0x1000:6259
  1000:6267     83 C3 58         ADD BX,0x58
  1000:626a     FE C9            DEC CL
  1000:626c     75 E9            JNZ 0x1000:6257
  1000:626e     BB 35 98         MOV BX,0x9835
  1000:6271     2E 8B 54 30      MOV DX,word ptr CS:[SI + 0x30]
  1000:6275     03 DA            ADD BX,DX
  1000:6277     2E 8B 7C 32      MOV DI,word ptr CS:[SI + 0x32]
  1000:627b     B1 0A            MOV CL,0xa

LAB_1000_627d:
  1000:627d     B5 0C            MOV CH,0xc

LAB_1000_627f:
  1000:627f     8A 05            MOV AL,byte ptr [DI]
  1000:6281     3C 50            CMP AL,0x50
  1000:6283     74 02            JZ 0x1000:6287
  1000:6285     88 07            MOV byte ptr [BX],AL

LAB_1000_6287:
  1000:6287     47               INC DI
  1000:6288     43               INC BX
  1000:6289     FE CD            DEC CH
  1000:628b     75 F2            JNZ 0x1000:627f
  1000:628d     83 C3 54         ADD BX,0x54
  1000:6290     FE C9            DEC CL
  1000:6292     75 E9            JNZ 0x1000:627d
  1000:6294     C3               RET

FUN_1000_65d5:
  1000:65d5     BE 57 5D         MOV SI,0x5d57
  1000:65d8     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:65db     2E FE 04         INC byte ptr CS:[SI]
  1000:65de     24 03            AND AL,0x3
  1000:65e0     74 42            JZ 0x1000:6624
  1000:65e2     46               INC SI
  1000:65e3     46               INC SI
  1000:65e4     46               INC SI
  1000:65e5     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:65e8     2E FE 04         INC byte ptr CS:[SI]
  1000:65eb     24 03            AND AL,0x3
  1000:65ed     74 35            JZ 0x1000:6624
  1000:65ef     46               INC SI
  1000:65f0     46               INC SI
  1000:65f1     46               INC SI
  1000:65f2     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:65f5     2E FE 04         INC byte ptr CS:[SI]
  1000:65f8     24 03            AND AL,0x3
  1000:65fa     74 28            JZ 0x1000:6624
  1000:65fc     46               INC SI
  1000:65fd     46               INC SI
  1000:65fe     46               INC SI
  1000:65ff     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:6602     2E FE 04         INC byte ptr CS:[SI]
  1000:6605     24 03            AND AL,0x3
  1000:6607     74 1B            JZ 0x1000:6624
  1000:6609     46               INC SI
  1000:660a     46               INC SI
  1000:660b     46               INC SI
  1000:660c     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:660f     2E FE 04         INC byte ptr CS:[SI]
  1000:6612     24 03            AND AL,0x3
  1000:6614     74 0E            JZ 0x1000:6624
  1000:6616     46               INC SI
  1000:6617     46               INC SI
  1000:6618     46               INC SI
  1000:6619     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:661c     2E FE 04         INC byte ptr CS:[SI]
  1000:661f     24 03            AND AL,0x3
  1000:6621     74 01            JZ 0x1000:6624
  1000:6623     C3               RET

LAB_1000_6624:
  1000:6624     8B 3E 77 16      MOV DI,word ptr [0x1677]
  1000:6628     A0 79 16         MOV AL,[0x1679]

LAB_1000_662b:
  1000:662b     F6 05 01         TEST byte ptr [DI],0x1
  1000:662e     74 08            JZ 0x1000:6638
  1000:6630     83 C7 08         ADD DI,0x8
  1000:6633     FE C8            DEC AL
  1000:6635     75 F4            JNZ 0x1000:662b
  1000:6637     C3               RET

LAB_1000_6638:
  1000:6638     9C               PUSHF
  1000:6639     80 0D 01         OR byte ptr [DI],0x1
  1000:663c     9D               POPF
  1000:663d     E8 2A E8         CALL 0x1000:4e6a
  1000:6640     8B 0E 34 16      MOV CX,word ptr [0x1634]
  1000:6644     2E 8A 44 01      MOV AL,byte ptr CS:[SI + 0x1]
  1000:6648     04 03            ADD AL,0x3
  1000:664a     2A C1            SUB AL,CL
  1000:664c     8A C8            MOV CL,AL
  1000:664e     2E 8A 44 02      MOV AL,byte ptr CS:[SI + 0x2]
  1000:6652     04 02            ADD AL,0x2
  1000:6654     2A C5            SUB AL,CH
  1000:6656     8A E8            MOV CH,AL
  1000:6658     FE C5            INC CH
  1000:665a     FE C1            INC CL
  1000:665c     FE C6            INC DH
  1000:665e     FE C6            INC DH
  1000:6660     FE C2            INC DL
  1000:6662     8A C5            MOV AL,CH
  1000:6664     3A C6            CMP AL,DH
  1000:6666     72 03            JC 0x1000:666b
  1000:6668     E9 CC 00         JMP 0x1000:6737

LAB_1000_666b:
  1000:666b     8A C1            MOV AL,CL
  1000:666d     3A C2            CMP AL,DL
  1000:666f     73 62            JNC 0x1000:66d3
  1000:6671     8A C2            MOV AL,DL
  1000:6673     2A C1            SUB AL,CL
  1000:6675     8A D8            MOV BL,AL
  1000:6677     8A C6            MOV AL,DH
  1000:6679     2A C5            SUB AL,CH
  1000:667b     8A F8            MOV BH,AL
  1000:667d     3A C3            CMP AL,BL
  1000:667f     73 29            JNC 0x1000:66aa
  1000:6681     B5 00            MOV CH,0x0
  1000:6683     8A C7            MOV AL,BH
  1000:6685     0A C0            OR AL,AL
  1000:6687     74 08            JZ 0x1000:6691
  1000:6689     8A C3            MOV AL,BL

LAB_1000_668b:
  1000:668b     FE C5            INC CH
  1000:668d     2A C7            SUB AL,BH
  1000:668f     73 FA            JNC 0x1000:668b

LAB_1000_6691:
  1000:6691     8A C5            MOV AL,CH
  1000:6693     B5 08            MOV CH,0x8
  1000:6695     3C 04            CMP AL,0x4
  1000:6697     72 03            JC 0x1000:669c
  1000:6699     E9 55 01         JMP 0x1000:67f1

LAB_1000_669c:
  1000:669c     B5 09            MOV CH,0x9
  1000:669e     3C 03            CMP AL,0x3
  1000:66a0     72 03            JC 0x1000:66a5
  1000:66a2     E9 4C 01         JMP 0x1000:67f1

LAB_1000_66a5:
  1000:66a5     B5 0A            MOV CH,0xa
  1000:66a7     E9 47 01         JMP 0x1000:67f1

LAB_1000_66aa:
  1000:66aa     B5 00            MOV CH,0x0
  1000:66ac     8A C3            MOV AL,BL
  1000:66ae     0A C0            OR AL,AL
  1000:66b0     74 08            JZ 0x1000:66ba
  1000:66b2     8A C7            MOV AL,BH

LAB_1000_66b4:
  1000:66b4     FE C5            INC CH
  1000:66b6     2A C3            SUB AL,BL
  1000:66b8     73 FA            JNC 0x1000:66b4

LAB_1000_66ba:
  1000:66ba     8A C5            MOV AL,CH
  1000:66bc     B5 0C            MOV CH,0xc
  1000:66be     3C 04            CMP AL,0x4
  1000:66c0     72 03            JC 0x1000:66c5
  1000:66c2     E9 2C 01         JMP 0x1000:67f1

LAB_1000_66c5:
  1000:66c5     B5 0B            MOV CH,0xb
  1000:66c7     3C 03            CMP AL,0x3
  1000:66c9     72 03            JC 0x1000:66ce
  1000:66cb     E9 23 01         JMP 0x1000:67f1

LAB_1000_66ce:
  1000:66ce     B5 0A            MOV CH,0xa
  1000:66d0     E9 1E 01         JMP 0x1000:67f1

LAB_1000_66d3:
  1000:66d3     8A C1            MOV AL,CL
  1000:66d5     2A C2            SUB AL,DL
  1000:66d7     8A D8            MOV BL,AL
  1000:66d9     8A C6            MOV AL,DH
  1000:66db     2A C5            SUB AL,CH
  1000:66dd     8A F8            MOV BH,AL
  1000:66df     3A C3            CMP AL,BL
  1000:66e1     73 29            JNC 0x1000:670c
  1000:66e3     B5 00            MOV CH,0x0
  1000:66e5     8A C7            MOV AL,BH
  1000:66e7     0A C0            OR AL,AL
  1000:66e9     74 08            JZ 0x1000:66f3
  1000:66eb     8A C3            MOV AL,BL

LAB_1000_66ed:
  1000:66ed     FE C5            INC CH
  1000:66ef     2A C7            SUB AL,BH
  1000:66f1     73 FA            JNC 0x1000:66ed

LAB_1000_66f3:
  1000:66f3     8A C5            MOV AL,CH
  1000:66f5     B5 00            MOV CH,0x0
  1000:66f7     3C 04            CMP AL,0x4
  1000:66f9     72 03            JC 0x1000:66fe
  1000:66fb     E9 F3 00         JMP 0x1000:67f1

LAB_1000_66fe:
  1000:66fe     B5 0F            MOV CH,0xf
  1000:6700     3C 03            CMP AL,0x3
  1000:6702     72 03            JC 0x1000:6707
  1000:6704     E9 EA 00         JMP 0x1000:67f1

LAB_1000_6707:
  1000:6707     B5 0E            MOV CH,0xe
  1000:6709     E9 E5 00         JMP 0x1000:67f1

LAB_1000_670c:
  1000:670c     B5 0A            MOV CH,0xa
  1000:670e     8A C3            MOV AL,BL
  1000:6710     0A C0            OR AL,AL
  1000:6712     74 0A            JZ 0x1000:671e
  1000:6714     B5 00            MOV CH,0x0
  1000:6716     8A C7            MOV AL,BH

LAB_1000_6718:
  1000:6718     FE C5            INC CH
  1000:671a     2A C3            SUB AL,BL
  1000:671c     73 FA            JNC 0x1000:6718

LAB_1000_671e:
  1000:671e     8A C5            MOV AL,CH
  1000:6720     B5 0C            MOV CH,0xc
  1000:6722     3C 04            CMP AL,0x4
  1000:6724     72 03            JC 0x1000:6729
  1000:6726     E9 C8 00         JMP 0x1000:67f1

LAB_1000_6729:
  1000:6729     B5 0D            MOV CH,0xd
  1000:672b     3C 03            CMP AL,0x3
  1000:672d     72 03            JC 0x1000:6732
  1000:672f     E9 BF 00         JMP 0x1000:67f1

LAB_1000_6732:
  1000:6732     B5 0E            MOV CH,0xe
  1000:6734     E9 BA 00         JMP 0x1000:67f1

LAB_1000_6737:
  1000:6737     8A C1            MOV AL,CL
  1000:6739     3A C2            CMP AL,DL
  1000:673b     73 5C            JNC 0x1000:6799
  1000:673d     8A C2            MOV AL,DL
  1000:673f     2A C1            SUB AL,CL
  1000:6741     8A D8            MOV BL,AL
  1000:6743     8A C5            MOV AL,CH
  1000:6745     2A C6            SUB AL,DH
  1000:6747     8A F8            MOV BH,AL
  1000:6749     3A C3            CMP AL,BL
  1000:674b     73 29            JNC 0x1000:6776
  1000:674d     B5 00            MOV CH,0x0
  1000:674f     8A C7            MOV AL,BH
  1000:6751     0A C0            OR AL,AL
  1000:6753     74 08            JZ 0x1000:675d
  1000:6755     8A C3            MOV AL,BL

LAB_1000_6757:
  1000:6757     FE C5            INC CH
  1000:6759     2A C7            SUB AL,BH
  1000:675b     73 FA            JNC 0x1000:6757

LAB_1000_675d:
  1000:675d     8A C5            MOV AL,CH
  1000:675f     B5 08            MOV CH,0x8
  1000:6761     3C 04            CMP AL,0x4
  1000:6763     72 03            JC 0x1000:6768
  1000:6765     E9 89 00         JMP 0x1000:67f1

LAB_1000_6768:
  1000:6768     B5 07            MOV CH,0x7
  1000:676a     3C 03            CMP AL,0x3
  1000:676c     72 03            JC 0x1000:6771
  1000:676e     E9 80 00         JMP 0x1000:67f1

LAB_1000_6771:
  1000:6771     B5 06            MOV CH,0x6
  1000:6773     EB 7C            JMP 0x1000:67f1

LAB_1000_6776:
  1000:6776     B5 00            MOV CH,0x0
  1000:6778     8A C3            MOV AL,BL
  1000:677a     0A C0            OR AL,AL
  1000:677c     74 08            JZ 0x1000:6786
  1000:677e     8A C7            MOV AL,BH

LAB_1000_6780:
  1000:6780     FE C5            INC CH
  1000:6782     2A C3            SUB AL,BL
  1000:6784     73 FA            JNC 0x1000:6780

LAB_1000_6786:
  1000:6786     8A C5            MOV AL,CH
  1000:6788     B5 04            MOV CH,0x4
  1000:678a     3C 04            CMP AL,0x4
  1000:678c     73 63            JNC 0x1000:67f1
  1000:678e     B5 05            MOV CH,0x5
  1000:6790     3C 03            CMP AL,0x3
  1000:6792     73 5D            JNC 0x1000:67f1
  1000:6794     B5 06            MOV CH,0x6
  1000:6796     EB 59            JMP 0x1000:67f1

LAB_1000_6799:
  1000:6799     8A C1            MOV AL,CL
  1000:679b     2A C2            SUB AL,DL
  1000:679d     8A D8            MOV BL,AL
  1000:679f     8A C5            MOV AL,CH
  1000:67a1     2A C6            SUB AL,DH
  1000:67a3     8A F8            MOV BH,AL
  1000:67a5     3A C3            CMP AL,BL
  1000:67a7     73 23            JNC 0x1000:67cc
  1000:67a9     B5 00            MOV CH,0x0
  1000:67ab     8A C7            MOV AL,BH
  1000:67ad     0A C0            OR AL,AL
  1000:67af     74 08            JZ 0x1000:67b9
  1000:67b1     8A C3            MOV AL,BL

LAB_1000_67b3:
  1000:67b3     FE C5            INC CH
  1000:67b5     2A C7            SUB AL,BH
  1000:67b7     73 FA            JNC 0x1000:67b3

LAB_1000_67b9:
  1000:67b9     8A C5            MOV AL,CH
  1000:67bb     B5 00            MOV CH,0x0
  1000:67bd     3C 04            CMP AL,0x4
  1000:67bf     73 30            JNC 0x1000:67f1
  1000:67c1     B5 01            MOV CH,0x1
  1000:67c3     3C 03            CMP AL,0x3
  1000:67c5     73 2A            JNC 0x1000:67f1
  1000:67c7     B5 02            MOV CH,0x2
  1000:67c9     EB 26            JMP 0x1000:67f1

LAB_1000_67cc:
  1000:67cc     B5 0A            MOV CH,0xa
  1000:67ce     8A C3            MOV AL,BL
  1000:67d0     0A C0            OR AL,AL
  1000:67d2     74 0A            JZ 0x1000:67de
  1000:67d4     B5 00            MOV CH,0x0
  1000:67d6     8A C7            MOV AL,BH

LAB_1000_67d8:
  1000:67d8     FE C5            INC CH
  1000:67da     2A C3            SUB AL,BL
  1000:67dc     73 FA            JNC 0x1000:67d8

LAB_1000_67de:
  1000:67de     8A C5            MOV AL,CH
  1000:67e0     B5 04            MOV CH,0x4
  1000:67e2     3C 04            CMP AL,0x4
  1000:67e4     73 0B            JNC 0x1000:67f1
  1000:67e6     B5 03            MOV CH,0x3
  1000:67e8     3C 03            CMP AL,0x3
  1000:67ea     73 05            JNC 0x1000:67f1
  1000:67ec     B5 02            MOV CH,0x2
  1000:67ee     EB 01            JMP 0x1000:67f1

LAB_1000_67f1:
  1000:67f1     8A C5            MOV AL,CH
  1000:67f3     02 C0            ADD AL,AL
  1000:67f5     8A E8            MOV CH,AL
  1000:67f7     02 C0            ADD AL,AL
  1000:67f9     02 C5            ADD AL,CH
  1000:67fb     32 F6            XOR DH,DH
  1000:67fd     8A D0            MOV DL,AL
  1000:67ff     81 C2 40 DE      ADD DX,0xde40
  1000:6803     8B EA            MOV BP,DX
  1000:6805     9C               PUSHF
  1000:6806     80 25 FD         AND byte ptr [DI],0xfd
  1000:6809     9D               POPF
  1000:680a     3E 8A 46 00      MOV AL,byte ptr DS:[BP + 0x0]
  1000:680e     45               INC BP
  1000:680f     0A C0            OR AL,AL
  1000:6811     74 05            JZ 0x1000:6818
  1000:6813     9C               PUSHF
  1000:6814     80 0D 02         OR byte ptr [DI],0x2
  1000:6817     9D               POPF

LAB_1000_6818:
  1000:6818     2E 8A 5C 01      MOV BL,byte ptr CS:[SI + 0x1]
  1000:681c     32 FF            XOR BH,BH
  1000:681e     03 DB            ADD BX,BX
  1000:6820     B5 00            MOV CH,0x0
  1000:6822     3E 8A 46 00      MOV AL,byte ptr DS:[BP + 0x0]
  1000:6826     45               INC BP
  1000:6827     A8 80            TEST AL,0x80
  1000:6829     74 02            JZ 0x1000:682d
  1000:682b     B5 FF            MOV CH,0xff

LAB_1000_682d:
  1000:682d     8A C8            MOV CL,AL
  1000:682f     03 D9            ADD BX,CX
  1000:6831     89 5D 01         MOV word ptr [DI + 0x1],BX
  1000:6834     3E 8A 46 00      MOV AL,byte ptr DS:[BP + 0x0]
  1000:6838     45               INC BP
  1000:6839     8A E8            MOV CH,AL
  1000:683b     2E 8A 44 02      MOV AL,byte ptr CS:[SI + 0x2]
  1000:683f     02 C0            ADD AL,AL
  1000:6841     02 C5            ADD AL,CH
  1000:6843     88 45 03         MOV byte ptr [DI + 0x3],AL
  1000:6846     3E 8A 46 00      MOV AL,byte ptr DS:[BP + 0x0]
  1000:684a     45               INC BP
  1000:684b     88 45 04         MOV byte ptr [DI + 0x4],AL
  1000:684e     3E 8A 46 00      MOV AL,byte ptr DS:[BP + 0x0]
  1000:6852     45               INC BP
  1000:6853     88 45 05         MOV byte ptr [DI + 0x5],AL
  1000:6856     3E 8A 46 00      MOV AL,byte ptr DS:[BP + 0x0]
  1000:685a     88 45 06         MOV byte ptr [DI + 0x6],AL
  1000:685d     88 45 07         MOV byte ptr [DI + 0x7],AL
  1000:6860     C3               RET

FUN_1000_6870:
  1000:6870     8B 16 34 16      MOV DX,word ptr [0x1634]
  1000:6874     E8 B4 E5         CALL 0x1000:4e2b
  1000:6877     75 59            JNZ 0x1000:68d2
  1000:6879     BB 95 86         MOV BX,0x8695
  1000:687c     03 DA            ADD BX,DX
  1000:687e     8A 16 DA 74      MOV DL,byte ptr [0x74da]
  1000:6882     80 C2 02         ADD DL,0x2
  1000:6885     32 F6            XOR DH,DH
  1000:6887     0A D2            OR DL,DL
  1000:6889     1B DA            SBB BX,DX
  1000:688b     8B FB            MOV DI,BX
  1000:688d     BB 83 75         MOV BX,0x7583
  1000:6890     B5 00            MOV CH,0x0

LAB_1000_6892:
  1000:6892     B1 00            MOV CL,0x0

LAB_1000_6894:
  1000:6894     8A 05            MOV AL,byte ptr [DI]
  1000:6896     24 0F            AND AL,0xf
  1000:6898     3A 07            CMP AL,byte ptr [BX]
  1000:689a     74 03            JZ 0x1000:689f
  1000:689c     E8 8B 00         CALL 0x1000:692a

LAB_1000_689f:
  1000:689f     47               INC DI
  1000:68a0     43               INC BX
  1000:68a1     FE C1            INC CL
  1000:68a3     8A 05            MOV AL,byte ptr [DI]
  1000:68a5     D0 C8            ROR AL,0x1
  1000:68a7     D0 C8            ROR AL,0x1
  1000:68a9     D0 C8            ROR AL,0x1
  1000:68ab     D0 C8            ROR AL,0x1
  1000:68ad     24 0F            AND AL,0xf
  1000:68af     3A 07            CMP AL,byte ptr [BX]
  1000:68b1     74 03            JZ 0x1000:68b6
  1000:68b3     E8 74 00         CALL 0x1000:692a

LAB_1000_68b6:
  1000:68b6     43               INC BX
  1000:68b7     FE C1            INC CL
  1000:68b9     80 F9 26         CMP CL,0x26
  1000:68bc     75 D6            JNZ 0x1000:6894
  1000:68be     FE C5            INC CH
  1000:68c0     80 FD 17         CMP CH,0x17
  1000:68c3     75 01            JNZ 0x1000:68c6
  1000:68c5     C3               RET

LAB_1000_68c6:
  1000:68c6     83 C7 ED         ADD DI,-0x13
  1000:68c9     A0 DB 74         MOV AL,[0x74db]
  1000:68cc     32 E4            XOR AH,AH
  1000:68ce     03 F8            ADD DI,AX
  1000:68d0     EB C0            JMP 0x1000:6892

LAB_1000_68d2:
  1000:68d2     BB 95 86         MOV BX,0x8695
  1000:68d5     03 DA            ADD BX,DX
  1000:68d7     8A 16 DA 74      MOV DL,byte ptr [0x74da]
  1000:68db     FE C2            INC DL
  1000:68dd     32 F6            XOR DH,DH
  1000:68df     0A D2            OR DL,DL
  1000:68e1     1B DA            SBB BX,DX
  1000:68e3     8B FB            MOV DI,BX
  1000:68e5     BB 83 75         MOV BX,0x7583
  1000:68e8     B5 00            MOV CH,0x0

LAB_1000_68ea:
  1000:68ea     B1 00            MOV CL,0x0

LAB_1000_68ec:
  1000:68ec     8A 05            MOV AL,byte ptr [DI]
  1000:68ee     D0 C8            ROR AL,0x1
  1000:68f0     D0 C8            ROR AL,0x1
  1000:68f2     D0 C8            ROR AL,0x1
  1000:68f4     D0 C8            ROR AL,0x1
  1000:68f6     24 0F            AND AL,0xf
  1000:68f8     3A 07            CMP AL,byte ptr [BX]
  1000:68fa     74 03            JZ 0x1000:68ff
  1000:68fc     E8 2B 00         CALL 0x1000:692a

LAB_1000_68ff:
  1000:68ff     43               INC BX
  1000:6900     FE C1            INC CL
  1000:6902     8A 05            MOV AL,byte ptr [DI]
  1000:6904     24 0F            AND AL,0xf
  1000:6906     3A 07            CMP AL,byte ptr [BX]
  1000:6908     74 03            JZ 0x1000:690d
  1000:690a     E8 1D 00         CALL 0x1000:692a

LAB_1000_690d:
  1000:690d     47               INC DI
  1000:690e     43               INC BX
  1000:690f     FE C1            INC CL
  1000:6911     80 F9 26         CMP CL,0x26
  1000:6914     75 D6            JNZ 0x1000:68ec
  1000:6916     FE C5            INC CH
  1000:6918     80 FD 17         CMP CH,0x17
  1000:691b     75 01            JNZ 0x1000:691e
  1000:691d     C3               RET

LAB_1000_691e:
  1000:691e     83 C7 ED         ADD DI,-0x13
  1000:6921     A0 DB 74         MOV AL,[0x74db]
  1000:6924     32 E4            XOR AH,AH
  1000:6926     03 F8            ADD DI,AX
  1000:6928     EB C0            JMP 0x1000:68ea

FUN_1000_692a:
  1000:692a     53               PUSH BX
  1000:692b     51               PUSH CX
  1000:692c     88 07            MOV byte ptr [BX],AL
  1000:692e     81 C3 A8 0D      ADD BX,0xda8
  1000:6932     3C 02            CMP AL,0x2
  1000:6934     72 06            JC 0x1000:693c
  1000:6936     C6 07 22         MOV byte ptr [BX],0x22
  1000:6939     59               POP CX
  1000:693a     5B               POP BX
  1000:693b     C3               RET

LAB_1000_693c:
  1000:693c     3C 01            CMP AL,0x1
  1000:693e     74 06            JZ 0x1000:6946

LAB_1000_6940:
  1000:6940     C6 07 01         MOV byte ptr [BX],0x1
  1000:6943     59               POP CX
  1000:6944     5B               POP BX
  1000:6945     C3               RET

LAB_1000_6946:
  1000:6946     8A 26 E8 74      MOV AH,byte ptr [0x74e8]
  1000:694a     0A E4            OR AH,AH
  1000:694c     74 F2            JZ 0x1000:6940
  1000:694e     C6 07 12         MOV byte ptr [BX],0x12
  1000:6951     59               POP CX
  1000:6952     5B               POP BX
  1000:6953     C3               RET

FUN_1000_6954:
  1000:6954     BB 7A 83         MOV BX,0x837a
  1000:6957     B5 01            MOV CH,0x1

LAB_1000_6959:
  1000:6959     B1 04            MOV CL,0x4

LAB_1000_695b:
  1000:695b     8A 07            MOV AL,byte ptr [BX]
  1000:695d     0A C0            OR AL,AL
  1000:695f     74 03            JZ 0x1000:6964
  1000:6961     E8 E0 00         CALL 0x1000:6a44

LAB_1000_6964:
  1000:6964     43               INC BX
  1000:6965     FE C1            INC CL
  1000:6967     8A 07            MOV AL,byte ptr [BX]
  1000:6969     0A C0            OR AL,AL
  1000:696b     74 03            JZ 0x1000:6970
  1000:696d     E8 D4 00         CALL 0x1000:6a44

LAB_1000_6970:
  1000:6970     43               INC BX
  1000:6971     FE C1            INC CL
  1000:6973     8A 07            MOV AL,byte ptr [BX]
  1000:6975     0A C0            OR AL,AL
  1000:6977     74 03            JZ 0x1000:697c
  1000:6979     E8 C8 00         CALL 0x1000:6a44

LAB_1000_697c:
  1000:697c     43               INC BX
  1000:697d     FE C1            INC CL
  1000:697f     8A 07            MOV AL,byte ptr [BX]
  1000:6981     0A C0            OR AL,AL
  1000:6983     74 03            JZ 0x1000:6988
  1000:6985     E8 BC 00         CALL 0x1000:6a44

LAB_1000_6988:
  1000:6988     43               INC BX
  1000:6989     FE C1            INC CL
  1000:698b     8A 07            MOV AL,byte ptr [BX]
  1000:698d     0A C0            OR AL,AL
  1000:698f     74 03            JZ 0x1000:6994
  1000:6991     E8 B0 00         CALL 0x1000:6a44

LAB_1000_6994:
  1000:6994     43               INC BX
  1000:6995     FE C1            INC CL
  1000:6997     8A 07            MOV AL,byte ptr [BX]
  1000:6999     0A C0            OR AL,AL
  1000:699b     74 03            JZ 0x1000:69a0
  1000:699d     E8 A4 00         CALL 0x1000:6a44

LAB_1000_69a0:
  1000:69a0     43               INC BX
  1000:69a1     FE C1            INC CL
  1000:69a3     8A 07            MOV AL,byte ptr [BX]
  1000:69a5     0A C0            OR AL,AL
  1000:69a7     74 03            JZ 0x1000:69ac
  1000:69a9     E8 98 00         CALL 0x1000:6a44

LAB_1000_69ac:
  1000:69ac     43               INC BX
  1000:69ad     FE C1            INC CL
  1000:69af     8A 07            MOV AL,byte ptr [BX]
  1000:69b1     0A C0            OR AL,AL
  1000:69b3     74 03            JZ 0x1000:69b8
  1000:69b5     E8 8C 00         CALL 0x1000:6a44

LAB_1000_69b8:
  1000:69b8     43               INC BX
  1000:69b9     FE C1            INC CL
  1000:69bb     8A 07            MOV AL,byte ptr [BX]
  1000:69bd     0A C0            OR AL,AL
  1000:69bf     74 03            JZ 0x1000:69c4
  1000:69c1     E8 80 00         CALL 0x1000:6a44

LAB_1000_69c4:
  1000:69c4     43               INC BX
  1000:69c5     FE C1            INC CL
  1000:69c7     8A 07            MOV AL,byte ptr [BX]
  1000:69c9     0A C0            OR AL,AL
  1000:69cb     74 03            JZ 0x1000:69d0
  1000:69cd     E8 74 00         CALL 0x1000:6a44

LAB_1000_69d0:
  1000:69d0     43               INC BX
  1000:69d1     FE C1            INC CL
  1000:69d3     8A 07            MOV AL,byte ptr [BX]
  1000:69d5     0A C0            OR AL,AL
  1000:69d7     74 03            JZ 0x1000:69dc
  1000:69d9     E8 68 00         CALL 0x1000:6a44

LAB_1000_69dc:
  1000:69dc     43               INC BX
  1000:69dd     FE C1            INC CL
  1000:69df     8A 07            MOV AL,byte ptr [BX]
  1000:69e1     0A C0            OR AL,AL
  1000:69e3     74 03            JZ 0x1000:69e8
  1000:69e5     E8 5C 00         CALL 0x1000:6a44

LAB_1000_69e8:
  1000:69e8     43               INC BX
  1000:69e9     FE C1            INC CL
  1000:69eb     8A 07            MOV AL,byte ptr [BX]
  1000:69ed     0A C0            OR AL,AL
  1000:69ef     74 03            JZ 0x1000:69f4
  1000:69f1     E8 50 00         CALL 0x1000:6a44

LAB_1000_69f4:
  1000:69f4     43               INC BX
  1000:69f5     FE C1            INC CL
  1000:69f7     8A 07            MOV AL,byte ptr [BX]
  1000:69f9     0A C0            OR AL,AL
  1000:69fb     74 03            JZ 0x1000:6a00
  1000:69fd     E8 44 00         CALL 0x1000:6a44

LAB_1000_6a00:
  1000:6a00     43               INC BX
  1000:6a01     FE C1            INC CL
  1000:6a03     8A 07            MOV AL,byte ptr [BX]
  1000:6a05     0A C0            OR AL,AL
  1000:6a07     74 03            JZ 0x1000:6a0c
  1000:6a09     E8 38 00         CALL 0x1000:6a44

LAB_1000_6a0c:
  1000:6a0c     43               INC BX
  1000:6a0d     FE C1            INC CL
  1000:6a0f     8A 07            MOV AL,byte ptr [BX]
  1000:6a11     0A C0            OR AL,AL
  1000:6a13     74 03            JZ 0x1000:6a18
  1000:6a15     E8 2C 00         CALL 0x1000:6a44

LAB_1000_6a18:
  1000:6a18     43               INC BX
  1000:6a19     FE C1            INC CL
  1000:6a1b     80 F9 24         CMP CL,0x24
  1000:6a1e     74 03            JZ 0x1000:6a23
  1000:6a20     E9 38 FF         JMP 0x1000:695b

LAB_1000_6a23:
  1000:6a23     83 C3 06         ADD BX,0x6
  1000:6a26     FE C5            INC CH
  1000:6a28     80 FD 13         CMP CH,0x13
  1000:6a2b     74 03            JZ 0x1000:6a30
  1000:6a2d     E9 29 FF         JMP 0x1000:6959

LAB_1000_6a30:
  1000:6a30     C6 06 6F 16 00   MOV byte ptr [0x166f],0x0
  1000:6a35     C3               RET

FUN_1000_6a44:
  1000:6a44     2E 80 3E 80 2A 00   CMP byte ptr CS:[0x2a80],0x0
  1000:6a4a     74 03            JZ 0x1000:6a4f
  1000:6a4c     E9 E2 EE         JMP 0x1000:5931

LAB_1000_6a4f:
  1000:6a4f     24 0F            AND AL,0xf
  1000:6a51     75 01            JNZ 0x1000:6a54
  1000:6a53     C3               RET

LAB_1000_6a54:
  1000:6a54     89 0E 58 16      MOV word ptr [0x1658],CX
  1000:6a58     8B D1            MOV DX,CX
  1000:6a5a     D0 C6            ROL DH,0x1
  1000:6a5c     D0 C6            ROL DH,0x1
  1000:6a5e     D0 C6            ROL DH,0x1
  1000:6a60     D0 C2            ROL DL,0x1
  1000:6a62     FE C8            DEC AL
  1000:6a64     32 E4            XOR AH,AH
  1000:6a66     D1 E0            SHL AX,0x1
  1000:6a68     8B F8            MOV DI,AX
  1000:6a6a     1E               PUSH DS
  1000:6a6b     07               POP ES
  1000:6a6c     53               PUSH BX
  1000:6a6d     2E FF 95 36 6A   CALL word ptr CS:[DI + 0x6a36]
  1000:6a72     5B               POP BX
  1000:6a73     C3               RET

FUN_1000_6bd8:
  1000:6bd8     BE BA 74         MOV SI,0x74ba
  1000:6bdb     8A 16 34 16      MOV DL,byte ptr [0x1634]
  1000:6bdf     80 C2 0E         ADD DL,0xe
  1000:6be2     8A 36 2A 16      MOV DH,byte ptr [0x162a]
  1000:6be6     B5 07            MOV CH,0x7

LAB_1000_6be8:
  1000:6be8     8A 04            MOV AL,byte ptr [SI]
  1000:6bea     3A C2            CMP AL,DL
  1000:6bec     75 07            JNZ 0x1000:6bf5
  1000:6bee     8A 44 01         MOV AL,byte ptr [SI + 0x1]
  1000:6bf1     3A C6            CMP AL,DH
  1000:6bf3     74 08            JZ 0x1000:6bfd

LAB_1000_6bf5:
  1000:6bf5     83 C6 05         ADD SI,0x5
  1000:6bf8     FE CD            DEC CH
  1000:6bfa     75 EC            JNZ 0x1000:6be8
  1000:6bfc     C3               RET

LAB_1000_6bfd:
  1000:6bfd     8A CD            MOV CL,CH
  1000:6bff     E8 3C 00         CALL 0x1000:6c3e
  1000:6c02     80 F9 01         CMP CL,0x1
  1000:6c05     75 07            JNZ 0x1000:6c0e
  1000:6c07     A0 B9 16         MOV AL,[0x16b9]
  1000:6c0a     0A C0            OR AL,AL
  1000:6c0c     75 1D            JNZ 0x1000:6c2b

LAB_1000_6c0e:
  1000:6c0e     8A 44 04         MOV AL,byte ptr [SI + 0x4]
  1000:6c11     A2 7A 16         MOV [0x167a],AL
  1000:6c14     8A 44 02         MOV AL,byte ptr [SI + 0x2]
  1000:6c17     2C 0E            SUB AL,0xe
  1000:6c19     8A D0            MOV DL,AL
  1000:6c1b     8A 44 03         MOV AL,byte ptr [SI + 0x3]
  1000:6c1e     2C 07            SUB AL,0x7
  1000:6c20     8A F0            MOV DH,AL
  1000:6c22     89 16 34 16      MOV word ptr [0x1634],DX
  1000:6c26     04 07            ADD AL,0x7
  1000:6c28     A2 2A 16         MOV [0x162a],AL

LAB_1000_6c2b:
  1000:6c2b     A0 EF 05         MOV AL,[0x5ef]
  1000:6c2e     0A C0            OR AL,AL
  1000:6c30     B0 01            MOV AL,0x1
  1000:6c32     74 06            JZ 0x1000:6c3a
  1000:6c34     8A C1            MOV AL,CL
  1000:6c36     3C 01            CMP AL,0x1
  1000:6c38     75 25            JNZ 0x1000:6c5f

LAB_1000_6c3a:
  1000:6c3a     A2 7E 16         MOV [0x167e],AL
  1000:6c3d     C3               RET

FUN_1000_6c3e:
  1000:6c3e     80 F9 01         CMP CL,0x1
  1000:6c41     75 08            JNZ 0x1000:6c4b
  1000:6c43     A0 B9 16         MOV AL,[0x16b9]
  1000:6c46     0A C0            OR AL,AL
  1000:6c48     74 01            JZ 0x1000:6c4b
  1000:6c4a     C3               RET

LAB_1000_6c4b:
  1000:6c4b     BB 61 16         MOV BX,0x1661
  1000:6c4e     B5 05            MOV CH,0x5

LAB_1000_6c50:
  1000:6c50     8B 16 34 16      MOV DX,word ptr [0x1634]
  1000:6c54     28 17            SUB byte ptr [BX],DL
  1000:6c56     43               INC BX
  1000:6c57     28 37            SUB byte ptr [BX],DH
  1000:6c59     43               INC BX
  1000:6c5a     FE CD            DEC CH
  1000:6c5c     75 F2            JNZ 0x1000:6c50
  1000:6c5e     C3               RET

FUN_1000_6c5f:
  1000:6c5f     80 F9 01         CMP CL,0x1
  1000:6c62     75 08            JNZ 0x1000:6c6c
  1000:6c64     A0 B9 16         MOV AL,[0x16b9]
  1000:6c67     0A C0            OR AL,AL
  1000:6c69     74 01            JZ 0x1000:6c6c
  1000:6c6b     C3               RET

LAB_1000_6c6c:
  1000:6c6c     BB 61 16         MOV BX,0x1661
  1000:6c6f     B5 05            MOV CH,0x5

LAB_1000_6c71:
  1000:6c71     00 17            ADD byte ptr [BX],DL
  1000:6c73     43               INC BX
  1000:6c74     00 37            ADD byte ptr [BX],DH
  1000:6c76     43               INC BX
  1000:6c77     FE CD            DEC CH
  1000:6c79     75 F6            JNZ 0x1000:6c71
  1000:6c7b     C3               RET

FUN_1000_6c7c:
  1000:6c7c     A0 7E 16         MOV AL,[0x167e]
  1000:6c7f     0A C0            OR AL,AL
  1000:6c81     75 01            JNZ 0x1000:6c84
  1000:6c83     C3               RET

LAB_1000_6c84:
  1000:6c84     A0 B9 16         MOV AL,[0x16b9]
  1000:6c87     0A C0            OR AL,AL
  1000:6c89     74 01            JZ 0x1000:6c8c
  1000:6c8b     C3               RET

LAB_1000_6c8c:
  1000:6c8c     A0 71 16         MOV AL,[0x1671]
  1000:6c8f     0A C0            OR AL,AL
  1000:6c91     74 05            JZ 0x1000:6c98
  1000:6c93     2E FF 1E EF 2B   CALLF [0x2bef]

LAB_1000_6c98:
  1000:6c98     32 C0            XOR AL,AL
  1000:6c9a     A2 7E 16         MOV [0x167e],AL
  1000:6c9d     A0 76 16         MOV AL,[0x1676]
  1000:6ca0     FE C0            INC AL
  1000:6ca2     3C 05            CMP AL,0x5
  1000:6ca4     75 03            JNZ 0x1000:6ca9
  1000:6ca6     E9 3E E4         JMP 0x1000:50e7

LAB_1000_6ca9:
  1000:6ca9     8A E8            MOV CH,AL
  1000:6cab     A0 EF 05         MOV AL,[0x5ef]
  1000:6cae     0A C0            OR AL,AL
  1000:6cb0     75 03            JNZ 0x1000:6cb5
  1000:6cb2     E9 32 E4         JMP 0x1000:50e7

LAB_1000_6cb5:
  1000:6cb5     88 2E 76 16      MOV byte ptr [0x1676],CH
  1000:6cb9     E9 50 BA         JMP 0x1000:270c

FUN_1000_6cbc:
  1000:6cbc     A0 71 16         MOV AL,[0x1671]
  1000:6cbf     0A C0            OR AL,AL
  1000:6cc1     75 01            JNZ 0x1000:6cc4
  1000:6cc3     C3               RET

LAB_1000_6cc4:
  1000:6cc4     2E FF 1E E7 2B   CALLF [0x2be7]
  1000:6cc9     C3               RET

FUN_1000_6cca:
  1000:6cca     BE BA 16         MOV SI,0x16ba
  1000:6ccd     8A 04            MOV AL,byte ptr [SI]
  1000:6ccf     0A C0            OR AL,AL
  1000:6cd1     75 01            JNZ 0x1000:6cd4
  1000:6cd3     C3               RET

LAB_1000_6cd4:
  1000:6cd4     FE C8            DEC AL
  1000:6cd6     88 04            MOV byte ptr [SI],AL
  1000:6cd8     FE 0E 5B 16      DEC byte ptr [0x165b]
  1000:6cdc     75 0A            JNZ 0x1000:6ce8
  1000:6cde     C6 06 5B 16 14   MOV byte ptr [0x165b],0x14
  1000:6ce3     9A 7C 40 00 10   CALLF 0x1000:407c

LAB_1000_6ce8:
  1000:6ce8     C6 04 00         MOV byte ptr [SI],0x0
  1000:6ceb     BB 07 07         MOV BX,0x707
  1000:6cee     BD 34 00         MOV BP,0x34
  1000:6cf1     FF 1E 08 05      CALLF [0x508]
  1000:6cf5     8B 5C 01         MOV BX,word ptr [SI + 0x1]
  1000:6cf8     8B 54 03         MOV DX,word ptr [SI + 0x3]
  1000:6cfb     8B 44 06         MOV AX,word ptr [SI + 0x6]
  1000:6cfe     8A 6C 05         MOV CH,byte ptr [SI + 0x5]
  1000:6d01     B1 08            MOV CL,0x8
  1000:6d03     56               PUSH SI
  1000:6d04     06               PUSH ES
  1000:6d05     BD 36 00         MOV BP,0x36
  1000:6d08     FF 1E 08 05      CALLF [0x508]
  1000:6d0c     07               POP ES
  1000:6d0d     5E               POP SI
  1000:6d0e     C6 06 62 05 03   MOV byte ptr [0x562],0x3
  1000:6d13     8A 04            MOV AL,byte ptr [SI]
  1000:6d15     C6 04 00         MOV byte ptr [SI],0x0
  1000:6d18     3C 02            CMP AL,0x2
  1000:6d1a     74 01            JZ 0x1000:6d1d
  1000:6d1c     C3               RET

LAB_1000_6d1d:
  1000:6d1d     E9 4A 9C         JMP 0x1000:096a

FUN_1000_6d20:
  1000:6d20     A0 B9 16         MOV AL,[0x16b9]
  1000:6d23     0A C0            OR AL,AL
  1000:6d25     74 01            JZ 0x1000:6d28
  1000:6d27     C3               RET

LAB_1000_6d28:
  1000:6d28     BB CF 16         MOV BX,0x16cf
  1000:6d2b     A0 2D 16         MOV AL,[0x162d]
  1000:6d2e     0A C0            OR AL,AL
  1000:6d30     75 2C            JNZ 0x1000:6d5e
  1000:6d32     A0 2E 16         MOV AL,[0x162e]
  1000:6d35     0A C0            OR AL,AL
  1000:6d37     75 0B            JNZ 0x1000:6d44
  1000:6d39     A0 90 16         MOV AL,[0x1690]
  1000:6d3c     24 0F            AND AL,0xf
  1000:6d3e     75 01            JNZ 0x1000:6d41
  1000:6d40     C3               RET

LAB_1000_6d41:
  1000:6d41     EB 21            JMP 0x1000:6d64

LAB_1000_6d44:
  1000:6d44     A0 2E 16         MOV AL,[0x162e]
  1000:6d47     3C 02            CMP AL,0x2
  1000:6d49     75 01            JNZ 0x1000:6d4c
  1000:6d4b     C3               RET

LAB_1000_6d4c:
  1000:6d4c     A0 30 16         MOV AL,[0x1630]
  1000:6d4f     0A C0            OR AL,AL
  1000:6d51     75 01            JNZ 0x1000:6d54
  1000:6d53     C3               RET

LAB_1000_6d54:
  1000:6d54     8A E8            MOV CH,AL

LAB_1000_6d56:
  1000:6d56     E8 0B 00         CALL 0x1000:6d64
  1000:6d59     FE CD            DEC CH
  1000:6d5b     75 F9            JNZ 0x1000:6d56
  1000:6d5d     C3               RET

LAB_1000_6d5e:
  1000:6d5e     E8 03 00         CALL 0x1000:6d64
  1000:6d61     EB 01            JMP 0x1000:6d64

FUN_1000_6d64:
  1000:6d64     FE 0F            DEC byte ptr [BX]
  1000:6d66     74 01            JZ 0x1000:6d69
  1000:6d68     C3               RET

LAB_1000_6d69:
  1000:6d69     C6 07 80         MOV byte ptr [BX],0x80
  1000:6d6c     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:6d70     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:6d74     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:6d78     9A 7C 40 00 10   CALLF 0x1000:407c
  1000:6d7d     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:6d81     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:6d85     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:6d89     C3               RET

FUN_1000_6d99:
  1000:6d99     A0 25 16         MOV AL,[0x1625]
  1000:6d9c     0A C0            OR AL,AL
  1000:6d9e     75 01            JNZ 0x1000:6da1
  1000:6da0     C3               RET

LAB_1000_6da1:
  1000:6da1     8C C8            MOV AX,CS
  1000:6da3     8E C0            MOV ES,AX
  1000:6da5     BB 05 11         MOV BX,0x1105
  1000:6da8     BA 8A 6D         MOV DX,0x6d8a
  1000:6dab     B0 34            MOV AL,0x34
  1000:6dad     BD 38 00         MOV BP,0x38
  1000:6db0     FF 1E 08 05      CALLF [0x508]
  1000:6db4     C3               RET

FUN_1000_6ddc:
  1000:6ddc     8A D8            MOV BL,AL
  1000:6dde     32 FF            XOR BH,BH
  1000:6de0     D1 E3            SHL BX,0x1
  1000:6de2     2E FF 97 C0 6D   CALL word ptr CS:[BX + 0x6dc0]
  1000:6de7     C3               RET

FUN_1000_7be6:
  1000:7be6     2E 80 3E FA 7E 00   CMP byte ptr CS:[0x7efa],0x0
  1000:7bec     74 01            JZ 0x1000:7bef
  1000:7bee     C3               RET

LAB_1000_7bef:
  1000:7bef     06               PUSH ES
  1000:7bf0     56               PUSH SI
  1000:7bf1     52               PUSH DX
  1000:7bf2     51               PUSH CX
  1000:7bf3     53               PUSH BX
  1000:7bf4     50               PUSH AX

LAB_1000_7bf5:
  1000:7bf5     1E               PUSH DS
  1000:7bf6     8C C8            MOV AX,CS
  1000:7bf8     8E D8            MOV DS,AX
  1000:7bfa     8E C0            MOV ES,AX
  1000:7bfc     BF A1 7A         MOV DI,0x7aa1
  1000:7bff     B9 08 00         MOV CX,0x8
  1000:7c02     B0 20            MOV AL,0x20

LAB_1000_7c04:
  1000:7c04     51               PUSH CX
  1000:7c05     B9 0F 00         MOV CX,0xf
  1000:7c08     F3 AA            STOSB.REP ES:DI
  1000:7c0a     59               POP CX
  1000:7c0b     47               INC DI
  1000:7c0c     E2 F6            LOOP 0x1000:7c04
  1000:7c0e     B4 3D            MOV AH,0x3d
  1000:7c10     B0 00            MOV AL,0x0
  1000:7c12     BA 42 7A         MOV DX,0x7a42
  1000:7c15     CD 21            INT 0x21
  1000:7c17     73 03            JNC 0x1000:7c1c
  1000:7c19     E9 2C 02         JMP 0x1000:7e48

LAB_1000_7c1c:
  1000:7c1c     8B D8            MOV BX,AX
  1000:7c1e     50               PUSH AX
  1000:7c1f     B4 3F            MOV AH,0x3f
  1000:7c21     B9 32 01         MOV CX,0x132
  1000:7c24     BA 10 79         MOV DX,0x7910
  1000:7c27     CD 21            INT 0x21
  1000:7c29     73 04            JNC 0x1000:7c2f
  1000:7c2b     58               POP AX
  1000:7c2c     E9 19 02         JMP 0x1000:7e48

LAB_1000_7c2f:
  1000:7c2f     5B               POP BX
  1000:7c30     B4 3E            MOV AH,0x3e
  1000:7c32     CD 21            INT 0x21
  1000:7c34     B9 08 00         MOV CX,0x8
  1000:7c37     BB 10 79         MOV BX,0x7910
  1000:7c3a     BF A1 7A         MOV DI,0x7aa1
  1000:7c3d     83 C7 05         ADD DI,0x5

LAB_1000_7c40:
  1000:7c40     51               PUSH CX
  1000:7c41     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:7c44     3C 00            CMP AL,0x0
  1000:7c46     74 0F            JZ 0x1000:7c57
  1000:7c48     B9 08 00         MOV CX,0x8
  1000:7c4b     BE 4D 7A         MOV SI,0x7a4d
  1000:7c4e     57               PUSH DI
  1000:7c4f     F3 A4            MOVSB.REP ES:DI,SI
  1000:7c51     04 30            ADD AL,0x30
  1000:7c53     2E 88 05         MOV byte ptr CS:[DI],AL
  1000:7c56     5F               POP DI

LAB_1000_7c57:
  1000:7c57     83 C7 10         ADD DI,0x10
  1000:7c5a     83 C3 22         ADD BX,0x22
  1000:7c5d     59               POP CX
  1000:7c5e     E2 E0            LOOP 0x1000:7c40
  1000:7c60     BE 59 7A         MOV SI,0x7a59
  1000:7c63     1F               POP DS
  1000:7c64     BF 95 7A         MOV DI,0x7a95
  1000:7c67     83 C7 04         ADD DI,0x4
  1000:7c6a     80 3E 79 05 00   CMP byte ptr [0x579],0x0
  1000:7c6f     75 09            JNZ 0x1000:7c7a
  1000:7c71     B8 95 7A         MOV AX,0x7a95
  1000:7c74     2E A3 7B 7A      MOV CS:[0x7a7b],AX
  1000:7c78     EB 07            JMP 0x1000:7c81

LAB_1000_7c7a:
  1000:7c7a     B8 90 7B         MOV AX,0x7b90
  1000:7c7d     2E A3 7B 7A      MOV CS:[0x7a7b],AX

LAB_1000_7c81:
  1000:7c81     2E C6 06 56 7A 00   MOV byte ptr CS:[0x7a56],0x0
  1000:7c87     FF 1E CB 05      CALLF [0x5cb]
  1000:7c8b     B7 04            MOV BH,0x4
  1000:7c8d     B3 08            MOV BL,0x8
  1000:7c8f     B1 00            MOV CL,0x0
  1000:7c91     BE 57 7A         MOV SI,0x7a57
  1000:7c94     56               PUSH SI
  1000:7c95     BD 20 00         MOV BP,0x20
  1000:7c98     FF 1E 08 05      CALLF [0x508]
  1000:7c9c     5E               POP SI

LAB_1000_7c9d:
  1000:7c9d     A0 76 05         MOV AL,[0x576]
  1000:7ca0     D0 C0            ROL AL,0x1
  1000:7ca2     D0 C0            ROL AL,0x1
  1000:7ca4     72 03            JC 0x1000:7ca9
  1000:7ca6     E9 61 01         JMP 0x1000:7e0a

LAB_1000_7ca9:
  1000:7ca9     D0 C0            ROL AL,0x1
  1000:7cab     D0 C0            ROL AL,0x1
  1000:7cad     72 03            JC 0x1000:7cb2
  1000:7caf     E9 3F 01         JMP 0x1000:7df1

LAB_1000_7cb2:
  1000:7cb2     E8 2D CC         CALL 0x1000:48e2
  1000:7cb5     0A C0            OR AL,AL
  1000:7cb7     74 E4            JZ 0x1000:7c9d
  1000:7cb9     B9 1E 00         MOV CX,0x1e
  1000:7cbc     50               PUSH AX
  1000:7cbd     53               PUSH BX
  1000:7cbe     E8 C0 CB         CALL 0x1000:4881
  1000:7cc1     5B               POP BX
  1000:7cc2     58               POP AX
  1000:7cc3     A8 C0            TEST AL,0xc0
  1000:7cc5     75 65            JNZ 0x1000:7d2c
  1000:7cc7     A8 02            TEST AL,0x2
  1000:7cc9     75 06            JNZ 0x1000:7cd1
  1000:7ccb     A8 01            TEST AL,0x1
  1000:7ccd     75 2A            JNZ 0x1000:7cf9
  1000:7ccf     EB CC            JMP 0x1000:7c9d

LAB_1000_7cd1:
  1000:7cd1     B1 03            MOV CL,0x3
  1000:7cd3     56               PUSH SI
  1000:7cd4     BD 20 00         MOV BP,0x20
  1000:7cd7     FF 1E 08 05      CALLF [0x508]
  1000:7cdb     5E               POP SI
  1000:7cdc     2E 80 3E 56 7A 08   CMP byte ptr CS:[0x7a56],0x8
  1000:7ce2     75 0B            JNZ 0x1000:7cef
  1000:7ce4     B7 04            MOV BH,0x4
  1000:7ce6     2E C6 06 56 7A 00   MOV byte ptr CS:[0x7a56],0x0
  1000:7cec     EB 30            JMP 0x1000:7d1e

LAB_1000_7cef:
  1000:7cef     FE C7            INC BH
  1000:7cf1     2E FE 06 56 7A   INC byte ptr CS:[0x7a56]
  1000:7cf6     EB 26            JMP 0x1000:7d1e

LAB_1000_7cf9:
  1000:7cf9     B1 03            MOV CL,0x3
  1000:7cfb     56               PUSH SI
  1000:7cfc     BD 20 00         MOV BP,0x20
  1000:7cff     FF 1E 08 05      CALLF [0x508]
  1000:7d03     5E               POP SI
  1000:7d04     2E 80 3E 56 7A 00   CMP byte ptr CS:[0x7a56],0x0
  1000:7d0a     75 0B            JNZ 0x1000:7d17
  1000:7d0c     B7 0C            MOV BH,0xc
  1000:7d0e     2E C6 06 56 7A 08   MOV byte ptr CS:[0x7a56],0x8
  1000:7d14     EB 08            JMP 0x1000:7d1e

LAB_1000_7d17:
  1000:7d17     2E FE 0E 56 7A   DEC byte ptr CS:[0x7a56]
  1000:7d1c     FE CF            DEC BH

LAB_1000_7d1e:
  1000:7d1e     B1 00            MOV CL,0x0
  1000:7d20     56               PUSH SI
  1000:7d21     BD 20 00         MOV BP,0x20
  1000:7d24     FF 1E 08 05      CALLF [0x508]
  1000:7d28     5E               POP SI
  1000:7d29     E9 71 FF         JMP 0x1000:7c9d

LAB_1000_7d2c:
  1000:7d2c     2E A0 56 7A      MOV AL,CS:[0x7a56]
  1000:7d30     3C 00            CMP AL,0x0
  1000:7d32     75 03            JNZ 0x1000:7d37
  1000:7d34     E9 06 01         JMP 0x1000:7e3d

LAB_1000_7d37:
  1000:7d37     FE C8            DEC AL
  1000:7d39     32 E4            XOR AH,AH
  1000:7d3b     D1 E0            SHL AX,0x1
  1000:7d3d     8B D0            MOV DX,AX
  1000:7d3f     D1 E0            SHL AX,0x1
  1000:7d41     D1 E0            SHL AX,0x1
  1000:7d43     D1 E0            SHL AX,0x1
  1000:7d45     D1 E0            SHL AX,0x1
  1000:7d47     03 C2            ADD AX,DX
  1000:7d49     8B F8            MOV DI,AX
  1000:7d4b     81 C7 10 79      ADD DI,0x7910
  1000:7d4f     2E 8A 05         MOV AL,byte ptr CS:[DI]
  1000:7d52     0A C0            OR AL,AL
  1000:7d54     75 03            JNZ 0x1000:7d59
  1000:7d56     E9 44 FF         JMP 0x1000:7c9d

LAB_1000_7d59:
  1000:7d59     B9 22 00         MOV CX,0x22
  1000:7d5c     8B F7            MOV SI,DI
  1000:7d5e     BF EF 05         MOV DI,0x5ef
  1000:7d61     56               PUSH SI
  1000:7d62     57               PUSH DI

LAB_1000_7d63:
  1000:7d63     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:7d66     88 05            MOV byte ptr [DI],AL
  1000:7d68     46               INC SI
  1000:7d69     47               INC DI
  1000:7d6a     E2 F7            LOOP 0x1000:7d63
  1000:7d6c     5F               POP DI
  1000:7d6d     83 C7 10         ADD DI,0x10
  1000:7d70     5E               POP SI
  1000:7d71     B9 10 00         MOV CX,0x10

LAB_1000_7d74:
  1000:7d74     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:7d77     88 05            MOV byte ptr [DI],AL
  1000:7d79     46               INC SI
  1000:7d7a     47               INC DI
  1000:7d7b     E2 F7            LOOP 0x1000:7d74
  1000:7d7d     FF 1E C7 05      CALLF [0x5c7]
  1000:7d81     58               POP AX
  1000:7d82     5B               POP BX
  1000:7d83     59               POP CX
  1000:7d84     5A               POP DX
  1000:7d85     5E               POP SI
  1000:7d86     07               POP ES
  1000:7d87     A0 71 16         MOV AL,[0x1671]
  1000:7d8a     0A C0            OR AL,AL
  1000:7d8c     74 05            JZ 0x1000:7d93
  1000:7d8e     2E FF 1E EF 2B   CALLF [0x2bef]

LAB_1000_7d93:
  1000:7d93     32 C0            XOR AL,AL
  1000:7d95     A2 7E 16         MOV [0x167e],AL
  1000:7d98     C6 06 76 16 01   MOV byte ptr [0x1676],0x1
  1000:7d9d     A1 83 F1         MOV AX,[0xf183]
  1000:7da0     8B E0            MOV SP,AX
  1000:7da2     BB 10 54         MOV BX,0x5410
  1000:7da5     A0 EF 05         MOV AL,[0x5ef]
  1000:7da8     04 30            ADD AL,0x30
  1000:7daa     2E 88 47 03      MOV byte ptr CS:[BX + 0x3],AL
  1000:7dae     2E C6 47 04 30   MOV byte ptr CS:[BX + 0x4],0x30
  1000:7db3     2E C6 06 80 2A 00   MOV byte ptr CS:[0x2a80],0x0
  1000:7db9     2E A0 20 5C      MOV AL,CS:[0x5c20]
  1000:7dbd     A2 83 16         MOV [0x1683],AL
  1000:7dc0     C6 06 7F 16 00   MOV byte ptr [0x167f],0x0
  1000:7dc5     C6 06 79 16 04   MOV byte ptr [0x1679],0x4
  1000:7dca     BB 94 16         MOV BX,0x1694
  1000:7dcd     89 1E 77 16      MOV word ptr [0x1677],BX
  1000:7dd1     BB 83 27         MOV BX,0x2783
  1000:7dd4     89 1E CC 16      MOV word ptr [0x16cc],BX
  1000:7dd8     C6 06 D0 16 00   MOV byte ptr [0x16d0],0x0
  1000:7ddd     8C D8            MOV AX,DS
  1000:7ddf     8E C0            MOV ES,AX
  1000:7de1     B9 4F 00         MOV CX,0x4f
  1000:7de4     BF 53 75         MOV DI,0x7553
  1000:7de7     B0 00            MOV AL,0x0
  1000:7de9     F3 AA            STOSB.REP ES:DI
  1000:7deb     E8 AD BF         CALL 0x1000:3d9b
  1000:7dee     E9 80 B0         JMP 0x1000:2e71

LAB_1000_7df1:
  1000:7df1     A0 76 05         MOV AL,[0x576]
  1000:7df4     3C FF            CMP AL,0xff
  1000:7df6     75 F9            JNZ 0x1000:7df1
  1000:7df8     FF 1E C7 05      CALLF [0x5c7]
  1000:7dfc     BE AC 7B         MOV SI,0x7bac
  1000:7dff     FF 1E 93 05      CALLF [0x593]
  1000:7e03     FF 1E C7 05      CALLF [0x5c7]
  1000:7e07     E9 EB FD         JMP 0x1000:7bf5

LAB_1000_7e0a:
  1000:7e0a     1E               PUSH DS
  1000:7e0b     8C C8            MOV AX,CS
  1000:7e0d     8E D8            MOV DS,AX
  1000:7e0f     B4 3D            MOV AH,0x3d
  1000:7e11     B0 01            MOV AL,0x1
  1000:7e13     BA 42 7A         MOV DX,0x7a42
  1000:7e16     CD 21            INT 0x21
  1000:7e18     72 2E            JC 0x1000:7e48
  1000:7e1a     50               PUSH AX
  1000:7e1b     8C C8            MOV AX,CS
  1000:7e1d     8E C0            MOV ES,AX
  1000:7e1f     BF 10 79         MOV DI,0x7910
  1000:7e22     B0 00            MOV AL,0x0
  1000:7e24     B9 32 01         MOV CX,0x132
  1000:7e27     F3 AA            STOSB.REP ES:DI
  1000:7e29     5B               POP BX
  1000:7e2a     53               PUSH BX
  1000:7e2b     B4 40            MOV AH,0x40
  1000:7e2d     B9 32 01         MOV CX,0x132
  1000:7e30     BA 10 79         MOV DX,0x7910
  1000:7e33     CD 21            INT 0x21
  1000:7e35     72 11            JC 0x1000:7e48
  1000:7e37     5B               POP BX
  1000:7e38     B4 3E            MOV AH,0x3e
  1000:7e3a     CD 21            INT 0x21
  1000:7e3c     1F               POP DS

LAB_1000_7e3d:
  1000:7e3d     FF 1E C7 05      CALLF [0x5c7]
  1000:7e41     58               POP AX
  1000:7e42     5B               POP BX
  1000:7e43     59               POP CX
  1000:7e44     5A               POP DX
  1000:7e45     5E               POP SI
  1000:7e46     07               POP ES
  1000:7e47     C3               RET

LAB_1000_7e48:
  1000:7e48     1F               POP DS
  1000:7e49     B8 02 00         MOV AX,0x2
  1000:7e4c     BA 42 7A         MOV DX,0x7a42
  1000:7e4f     E9 C2 A3         JMP 0x1000:2214

LAB_1000_7efb:
  1000:7efb     2E C6 06 FA 7E 01   MOV byte ptr CS:[0x7efa],0x1
  1000:7f01     E8 0B 8D         CALL 0x1000:0c0f
  1000:7f04     A0 89 16         MOV AL,[0x1689]
  1000:7f07     A2 75 16         MOV [0x1675],AL
  1000:7f0a     3C 04            CMP AL,0x4
  1000:7f0c     7C 02            JL 0x1000:7f10
  1000:7f0e     B0 03            MOV AL,0x3

LAB_1000_7f10:
  1000:7f10     A2 89 16         MOV [0x1689],AL
  1000:7f13     BF E2 52         MOV DI,0x52e2
  1000:7f16     E8 95 02         CALL 0x1000:81ae
  1000:7f19     A0 89 16         MOV AL,[0x1689]
  1000:7f1c     E8 4B 02         CALL 0x1000:816a
  1000:7f1f     B5 FF            MOV CH,0xff
  1000:7f21     E8 6D 03         CALL 0x1000:8291
  1000:7f24     E8 69 00         CALL 0x1000:7f90
  1000:7f27     BD 5C 00         MOV BP,0x5c
  1000:7f2a     FF 1E 08 05      CALLF [0x508]
  1000:7f2e     E8 F6 8C         CALL 0x1000:0c27
  1000:7f31     E8 DB 8C         CALL 0x1000:0c0f
  1000:7f34     E8 C0 86         CALL 0x1000:05f7
  1000:7f37     E8 41 C0         CALL 0x1000:3f7b
  1000:7f3a     A0 89 16         MOV AL,[0x1689]
  1000:7f3d     E8 9A C6         CALL 0x1000:45da
  1000:7f40     E8 F7 C5         CALL 0x1000:453a
  1000:7f43     E8 E7 C0         CALL 0x1000:402d
  1000:7f46     B5 C0            MOV CH,0xc0
  1000:7f48     E8 46 03         CALL 0x1000:8291
  1000:7f4b     A0 89 16         MOV AL,[0x1689]
  1000:7f4e     3C 04            CMP AL,0x4
  1000:7f50     7D 1A            JGE 0x1000:7f6c
  1000:7f52     BF 15 DC         MOV DI,0xdc15
  1000:7f55     8A 05            MOV AL,byte ptr [DI]
  1000:7f57     0A C0            OR AL,AL
  1000:7f59     2E C6 06 FA 7E 00   MOV byte ptr CS:[0x7efa],0x0
  1000:7f5f     74 03            JZ 0x1000:7f64
  1000:7f61     E9 54 CA         JMP 0x1000:49b8

LAB_1000_7f64:
  1000:7f64     32 C0            XOR AL,AL
  1000:7f66     A2 E2 16         MOV [0x16e2],AL
  1000:7f69     E9 4C CA         JMP 0x1000:49b8

LAB_1000_7f6c:
  1000:7f6c     BF 15 DC         MOV DI,0xdc15
  1000:7f6f     8A 05            MOV AL,byte ptr [DI]
  1000:7f71     3C 02            CMP AL,0x2
  1000:7f73     2E C6 06 FA 7E 00   MOV byte ptr CS:[0x7efa],0x0
  1000:7f79     72 03            JC 0x1000:7f7e
  1000:7f7b     E9 3A CA         JMP 0x1000:49b8

LAB_1000_7f7e:
  1000:7f7e     50               PUSH AX
  1000:7f7f     06               PUSH ES
  1000:7f80     8C D8            MOV AX,DS
  1000:7f82     8E C0            MOV ES,AX
  1000:7f84     B9 2F 00         MOV CX,0x2f
  1000:7f87     B0 00            MOV AL,0x0
  1000:7f89     F3 AA            STOSB.REP ES:DI
  1000:7f8b     07               POP ES
  1000:7f8c     58               POP AX
  1000:7f8d     E9 28 CA         JMP 0x1000:49b8

FUN_1000_7f90:
  1000:7f90     E8 7A C8         CALL 0x1000:480d
  1000:7f93     E8 4C C9         CALL 0x1000:48e2
  1000:7f96     BB 89 16         MOV BX,0x1689
  1000:7f99     D0 C8            ROR AL,0x1
  1000:7f9b     72 1A            JC 0x1000:7fb7
  1000:7f9d     D0 C8            ROR AL,0x1
  1000:7f9f     72 40            JC 0x1000:7fe1
  1000:7fa1     A8 10            TEST AL,0x10
  1000:7fa3     75 78            JNZ 0x1000:801d
  1000:7fa5     A8 20            TEST AL,0x20
  1000:7fa7     74 E7            JZ 0x1000:7f90
  1000:7fa9     A0 75 16         MOV AL,[0x1675]
  1000:7fac     E8 2B C6         CALL 0x1000:45da
  1000:7faf     A0 75 16         MOV AL,[0x1675]
  1000:7fb2     88 07            MOV byte ptr [BX],AL
  1000:7fb4     EB 67            JMP 0x1000:801d

LAB_1000_7fb7:
  1000:7fb7     8A 07            MOV AL,byte ptr [BX]
  1000:7fb9     E8 71 01         CALL 0x1000:812d
  1000:7fbc     8A E8            MOV CH,AL
  1000:7fbe     24 03            AND AL,0x3
  1000:7fc0     75 06            JNZ 0x1000:7fc8
  1000:7fc2     8A C5            MOV AL,CH
  1000:7fc4     04 04            ADD AL,0x4
  1000:7fc6     88 07            MOV byte ptr [BX],AL

LAB_1000_7fc8:
  1000:7fc8     FE 0F            DEC byte ptr [BX]
  1000:7fca     8A 07            MOV AL,byte ptr [BX]
  1000:7fcc     E8 9B 01         CALL 0x1000:816a
  1000:7fcf     E8 08 C6         CALL 0x1000:45da
  1000:7fd2     E8 65 C5         CALL 0x1000:453a
  1000:7fd5     B0 01            MOV AL,0x1
  1000:7fd7     A2 62 05         MOV [0x562],AL
  1000:7fda     B5 01            MOV CH,0x1
  1000:7fdc     E8 B2 02         CALL 0x1000:8291
  1000:7fdf     EB AF            JMP 0x1000:7f90

LAB_1000_7fe1:
  1000:7fe1     8A 07            MOV AL,byte ptr [BX]
  1000:7fe3     E8 47 01         CALL 0x1000:812d
  1000:7fe6     8A E8            MOV CH,AL
  1000:7fe8     24 03            AND AL,0x3
  1000:7fea     3C 03            CMP AL,0x3
  1000:7fec     75 06            JNZ 0x1000:7ff4
  1000:7fee     8A C5            MOV AL,CH
  1000:7ff0     2C 04            SUB AL,0x4
  1000:7ff2     88 07            MOV byte ptr [BX],AL

LAB_1000_7ff4:
  1000:7ff4     FE 07            INC byte ptr [BX]
  1000:7ff6     8A 07            MOV AL,byte ptr [BX]
  1000:7ff8     E8 6F 01         CALL 0x1000:816a
  1000:7ffb     E8 DC C5         CALL 0x1000:45da
  1000:7ffe     E8 39 C5         CALL 0x1000:453a
  1000:8001     B0 01            MOV AL,0x1
  1000:8003     A2 62 05         MOV [0x562],AL
  1000:8006     B5 02            MOV CH,0x2
  1000:8008     E8 86 02         CALL 0x1000:8291
  1000:800b     EB 83            JMP 0x1000:7f90

LAB_1000_801d:
  1000:801d     8A 2E 15 DC      MOV CH,byte ptr [0xdc15]
  1000:8021     8A 0E 75 16      MOV CL,byte ptr [0x1675]
  1000:8025     BB 89 16         MOV BX,0x1689
  1000:8028     8A 07            MOV AL,byte ptr [BX]
  1000:802a     24 07            AND AL,0x7
  1000:802c     8A F0            MOV DH,AL
  1000:802e     8A D8            MOV BL,AL
  1000:8030     32 FF            XOR BH,BH
  1000:8032     03 DB            ADD BX,BX

switchD:
  1000:8034     2E FF A7 0D 80   JMP word ptr CS:[BX + 0x800d]

caseD_0:
  1000:8039     E8 4F CD         CALL 0x1000:4d8b
  1000:803c     A0 75 16         MOV AL,[0x1675]
  1000:803f     A2 89 16         MOV [0x1689],AL
  1000:8042     EB D9            JMP 0x1000:801d

caseD_1:
  1000:8044     E9 82 00         JMP 0x1000:80c9

caseD_2:
  1000:8047     A0 F6 05         MOV AL,[0x5f6]
  1000:804a     0A C0            OR AL,AL
  1000:804c     75 03            JNZ 0x1000:8051
  1000:804e     E9 84 00         JMP 0x1000:80d5

LAB_1000_8051:
  1000:8051     A0 15 DC         MOV AL,[0xdc15]
  1000:8054     3C 02            CMP AL,0x2
  1000:8056     73 03            JNC 0x1000:805b
  1000:8058     EB 6F            JMP 0x1000:80c9

LAB_1000_805b:
  1000:805b     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:805f     0A C0            OR AL,AL
  1000:8061     75 03            JNZ 0x1000:8066
  1000:8063     EB 70            JMP 0x1000:80d5

LAB_1000_8066:
  1000:8066     EB 61            JMP 0x1000:80c9

caseD_5:
  1000:8069     8A 36 89 16      MOV DH,byte ptr [0x1689]
  1000:806d     80 F9 05         CMP CL,0x5
  1000:8070     74 57            JZ 0x1000:80c9
  1000:8072     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:8076     0A C0            OR AL,AL
  1000:8078     75 5B            JNZ 0x1000:80d5
  1000:807a     80 FD 02         CMP CH,0x2
  1000:807d     73 56            JNC 0x1000:80d5
  1000:807f     A0 F7 05         MOV AL,[0x5f7]
  1000:8082     0A C0            OR AL,AL
  1000:8084     74 4F            JZ 0x1000:80d5
  1000:8086     EB 41            JMP 0x1000:80c9

caseD_6:
  1000:8089     8A 36 89 16      MOV DH,byte ptr [0x1689]
  1000:808d     80 F9 06         CMP CL,0x6
  1000:8090     74 37            JZ 0x1000:80c9
  1000:8092     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:8096     0A C0            OR AL,AL
  1000:8098     75 3B            JNZ 0x1000:80d5
  1000:809a     80 FD 02         CMP CH,0x2
  1000:809d     73 36            JNC 0x1000:80d5
  1000:809f     A0 F8 05         MOV AL,[0x5f8]
  1000:80a2     0A C0            OR AL,AL
  1000:80a4     74 2F            JZ 0x1000:80d5
  1000:80a6     EB 21            JMP 0x1000:80c9

caseD_7:
  1000:80a9     8A 36 89 16      MOV DH,byte ptr [0x1689]
  1000:80ad     80 F9 07         CMP CL,0x7
  1000:80b0     74 17            JZ 0x1000:80c9
  1000:80b2     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:80b6     0A C0            OR AL,AL
  1000:80b8     75 1B            JNZ 0x1000:80d5
  1000:80ba     80 FD 02         CMP CH,0x2
  1000:80bd     73 16            JNC 0x1000:80d5
  1000:80bf     A0 F9 05         MOV AL,[0x5f9]
  1000:80c2     0A C0            OR AL,AL
  1000:80c4     74 0F            JZ 0x1000:80d5
  1000:80c6     EB 01            JMP 0x1000:80c9

LAB_1000_80c9:
  1000:80c9     B0 01            MOV AL,0x1
  1000:80cb     A2 62 05         MOV [0x562],AL
  1000:80ce     88 36 89 16      MOV byte ptr [0x1689],DH
  1000:80d2     8A C6            MOV AL,DH
  1000:80d4     C3               RET

LAB_1000_80d5:
  1000:80d5     B0 02            MOV AL,0x2
  1000:80d7     A2 62 05         MOV [0x562],AL
  1000:80da     E9 B3 FE         JMP 0x1000:7f90

caseD_3:
  1000:80dd     A0 15 DC         MOV AL,[0xdc15]
  1000:80e0     3C 02            CMP AL,0x2
  1000:80e2     73 20            JNC 0x1000:8104
  1000:80e4     2E A0 E1 4B      MOV AL,CS:[0x4be1]
  1000:80e8     0A C0            OR AL,AL
  1000:80ea     75 18            JNZ 0x1000:8104
  1000:80ec     E8 20 8B         CALL 0x1000:0c0f
  1000:80ef     A0 75 16         MOV AL,[0x1675]
  1000:80f2     3C 04            CMP AL,0x4
  1000:80f4     73 02            JNC 0x1000:80f8
  1000:80f6     B0 04            MOV AL,0x4

LAB_1000_80f8:
  1000:80f8     A2 89 16         MOV [0x1689],AL
  1000:80fb     E8 B0 00         CALL 0x1000:81ae
  1000:80fe     A0 89 16         MOV AL,[0x1689]
  1000:8101     E8 66 00         CALL 0x1000:816a

LAB_1000_8104:
  1000:8104     B5 40            MOV CH,0x40
  1000:8106     E8 88 01         CALL 0x1000:8291
  1000:8109     E9 84 FE         JMP 0x1000:7f90

caseD_4:
  1000:810c     E8 00 8B         CALL 0x1000:0c0f
  1000:810f     BF E2 52         MOV DI,0x52e2
  1000:8112     B0 04            MOV AL,0x4
  1000:8114     A2 89 16         MOV [0x1689],AL
  1000:8117     FE C8            DEC AL
  1000:8119     A2 89 16         MOV [0x1689],AL
  1000:811c     E8 8F 00         CALL 0x1000:81ae
  1000:811f     A0 89 16         MOV AL,[0x1689]
  1000:8122     E8 45 00         CALL 0x1000:816a
  1000:8125     B5 40            MOV CH,0x40
  1000:8127     E8 67 01         CALL 0x1000:8291
  1000:812a     E9 63 FE         JMP 0x1000:7f90

FUN_1000_812d:
  1000:812d     50               PUSH AX
  1000:812e     9C               PUSHF
  1000:812f     3C 04            CMP AL,0x4
  1000:8131     72 02            JC 0x1000:8135
  1000:8133     2C 04            SUB AL,0x4

LAB_1000_8135:
  1000:8135     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:8139     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:813d     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:8141     04 14            ADD AL,0x14
  1000:8143     D0 E0            SHL AL,0x1
  1000:8145     D0 E0            SHL AL,0x1
  1000:8147     D0 E0            SHL AL,0x1
  1000:8149     8A F0            MOV DH,AL
  1000:814b     B2 30            MOV DL,0x30
  1000:814d     8B FA            MOV DI,DX
  1000:814f     BA 02 08         MOV DX,0x802
  1000:8152     B3 07            MOV BL,0x7
  1000:8154     BD 10 00         MOV BP,0x10
  1000:8157     FF 1E 08 05      CALLF [0x508]
  1000:815b     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:815f     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:8163     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:8167     9D               POPF
  1000:8168     58               POP AX
  1000:8169     C3               RET

FUN_1000_816a:
  1000:816a     50               PUSH AX
  1000:816b     9C               PUSHF
  1000:816c     3C 04            CMP AL,0x4
  1000:816e     72 02            JC 0x1000:8172
  1000:8170     2C 04            SUB AL,0x4

LAB_1000_8172:
  1000:8172     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:8176     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:817a     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:817e     04 14            ADD AL,0x14
  1000:8180     8A F8            MOV BH,AL
  1000:8182     B3 18            MOV BL,0x18
  1000:8184     B0 3F            MOV AL,0x3f
  1000:8186     B9 FF 02         MOV CX,0x2ff
  1000:8189     BD 3C 00         MOV BP,0x3c
  1000:818c     FF 1E 08 05      CALLF [0x508]
  1000:8190     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:8194     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:8198     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:819c     9D               POPF
  1000:819d     58               POP AX
  1000:819e     C3               RET

FUN_1000_819f:
  1000:819f     56               PUSH SI
  1000:81a0     8B F2            MOV SI,DX

LAB_1000_81a2:
  1000:81a2     46               INC SI
  1000:81a3     2E 80 3C FF      CMP byte ptr CS:[SI],0xff
  1000:81a7     75 F9            JNZ 0x1000:81a2
  1000:81a9     8B D6            MOV DX,SI
  1000:81ab     42               INC DX
  1000:81ac     5E               POP SI
  1000:81ad     C3               RET

FUN_1000_81ae:
  1000:81ae     BB 19 14         MOV BX,0x1419
  1000:81b1     A0 89 16         MOV AL,[0x1689]
  1000:81b4     A8 04            TEST AL,0x4
  1000:81b6     75 5F            JNZ 0x1000:8217
  1000:81b8     8C C8            MOV AX,CS
  1000:81ba     8E C0            MOV ES,AX
  1000:81bc     BA E2 52         MOV DX,0x52e2
  1000:81bf     A0 75 16         MOV AL,[0x1675]
  1000:81c2     0A C0            OR AL,AL
  1000:81c4     B0 34            MOV AL,0x34
  1000:81c6     74 02            JZ 0x1000:81ca
  1000:81c8     B0 36            MOV AL,0x36

LAB_1000_81ca:
  1000:81ca     BD 38 00         MOV BP,0x38
  1000:81cd     FF 1E 08 05      CALLF [0x508]
  1000:81d1     A0 75 16         MOV AL,[0x1675]
  1000:81d4     3C 01            CMP AL,0x1
  1000:81d6     B0 34            MOV AL,0x34
  1000:81d8     74 02            JZ 0x1000:81dc
  1000:81da     B0 36            MOV AL,0x36

LAB_1000_81dc:
  1000:81dc     E8 C0 FF         CALL 0x1000:819f
  1000:81df     FE C7            INC BH
  1000:81e1     BD 38 00         MOV BP,0x38
  1000:81e4     FF 1E 08 05      CALLF [0x508]
  1000:81e8     A0 75 16         MOV AL,[0x1675]
  1000:81eb     3C 02            CMP AL,0x2
  1000:81ed     B0 34            MOV AL,0x34
  1000:81ef     74 02            JZ 0x1000:81f3
  1000:81f1     B0 36            MOV AL,0x36

LAB_1000_81f3:
  1000:81f3     E8 A9 FF         CALL 0x1000:819f
  1000:81f6     FE C7            INC BH
  1000:81f8     BD 38 00         MOV BP,0x38
  1000:81fb     FF 1E 08 05      CALLF [0x508]
  1000:81ff     A0 75 16         MOV AL,[0x1675]
  1000:8202     3C 03            CMP AL,0x3
  1000:8204     B0 36            MOV AL,0x36
  1000:8206     72 02            JC 0x1000:820a
  1000:8208     B0 34            MOV AL,0x34

LAB_1000_820a:
  1000:820a     E8 92 FF         CALL 0x1000:819f
  1000:820d     FE C7            INC BH
  1000:820f     BD 38 00         MOV BP,0x38
  1000:8212     FF 1E 08 05      CALLF [0x508]
  1000:8216     C3               RET

LAB_1000_8217:
  1000:8217     8C C8            MOV AX,CS
  1000:8219     8E C0            MOV ES,AX
  1000:821b     BA 8C 52         MOV DX,0x528c
  1000:821e     A0 75 16         MOV AL,[0x1675]
  1000:8221     3C 05            CMP AL,0x5
  1000:8223     B0 36            MOV AL,0x36
  1000:8225     73 02            JNC 0x1000:8229
  1000:8227     B0 34            MOV AL,0x34

LAB_1000_8229:
  1000:8229     BD 38 00         MOV BP,0x38
  1000:822c     FF 1E 08 05      CALLF [0x508]
  1000:8230     A0 F7 05         MOV AL,[0x5f7]
  1000:8233     E8 49 00         CALL 0x1000:827f
  1000:8236     A0 75 16         MOV AL,[0x1675]
  1000:8239     3C 05            CMP AL,0x5
  1000:823b     B0 34            MOV AL,0x34
  1000:823d     74 02            JZ 0x1000:8241
  1000:823f     B0 36            MOV AL,0x36

LAB_1000_8241:
  1000:8241     FE C7            INC BH
  1000:8243     BD 38 00         MOV BP,0x38
  1000:8246     FF 1E 08 05      CALLF [0x508]
  1000:824a     A0 F8 05         MOV AL,[0x5f8]
  1000:824d     E8 2F 00         CALL 0x1000:827f
  1000:8250     A0 75 16         MOV AL,[0x1675]
  1000:8253     3C 06            CMP AL,0x6
  1000:8255     B0 34            MOV AL,0x34
  1000:8257     74 02            JZ 0x1000:825b
  1000:8259     B0 36            MOV AL,0x36

LAB_1000_825b:
  1000:825b     FE C7            INC BH
  1000:825d     BD 38 00         MOV BP,0x38
  1000:8260     FF 1E 08 05      CALLF [0x508]
  1000:8264     A0 F9 05         MOV AL,[0x5f9]
  1000:8267     E8 15 00         CALL 0x1000:827f
  1000:826a     A0 75 16         MOV AL,[0x1675]
  1000:826d     3C 07            CMP AL,0x7
  1000:826f     B0 34            MOV AL,0x34
  1000:8271     74 02            JZ 0x1000:8275
  1000:8273     B0 36            MOV AL,0x36

LAB_1000_8275:
  1000:8275     FE C7            INC BH
  1000:8277     BD 38 00         MOV BP,0x38
  1000:827a     FF 1E 08 05      CALLF [0x508]
  1000:827e     C3               RET

FUN_1000_827f:
  1000:827f     02 C0            ADD AL,AL
  1000:8281     8A F0            MOV DH,AL
  1000:8283     02 C0            ADD AL,AL
  1000:8285     02 C0            ADD AL,AL
  1000:8287     02 C6            ADD AL,DH
  1000:8289     32 E4            XOR AH,AH
  1000:828b     05 92 52         ADD AX,0x5292
  1000:828e     8B D0            MOV DX,AX
  1000:8290     C3               RET

FUN_1000_8291:
  1000:8291     51               PUSH CX
  1000:8292     E8 4D C6         CALL 0x1000:48e2
  1000:8295     59               POP CX
  1000:8296     22 C5            AND AL,CH
  1000:8298     75 F7            JNZ 0x1000:8291
  1000:829a     C3               RET

FUN_1000_85c8:
  1000:85c8     E8 8E 00         CALL 0x1000:8659
  1000:85cb     0A C0            OR AL,AL
  1000:85cd     75 01            JNZ 0x1000:85d0
  1000:85cf     C3               RET

LAB_1000_85d0:
  1000:85d0     24 0F            AND AL,0xf
  1000:85d2     02 C0            ADD AL,AL
  1000:85d4     02 C0            ADD AL,AL
  1000:85d6     32 E4            XOR AH,AH
  1000:85d8     05 63 30         ADD AX,0x3063
  1000:85db     8B D8            MOV BX,AX
  1000:85dd     53               PUSH BX
  1000:85de     BD 5C 00         MOV BP,0x5c
  1000:85e1     FF 1E 08 05      CALLF [0x508]
  1000:85e5     5B               POP BX
  1000:85e6     8A 07            MOV AL,byte ptr [BX]
  1000:85e8     53               PUSH BX
  1000:85e9     E8 4B C5         CALL 0x1000:4b37
  1000:85ec     E8 20 86         CALL 0x1000:0c0f
  1000:85ef     5B               POP BX
  1000:85f0     43               INC BX
  1000:85f1     8A 2F            MOV CH,byte ptr [BX]
  1000:85f3     43               INC BX
  1000:85f4     8B 37            MOV SI,word ptr [BX]
  1000:85f6     81 C6 63 30      ADD SI,0x3063
  1000:85fa     E8 E8 00         CALL 0x1000:86e5
  1000:85fd     E8 0F 86         CALL 0x1000:0c0f
  1000:8600     B0 01            MOV AL,0x1
  1000:8602     C3               RET

FUN_1000_8659:
  1000:8659     BA B4 7C         MOV DX,0x7cb4
  1000:865c     E8 1B C8         CALL 0x1000:4e7a
  1000:865f     BA 24 00         MOV DX,0x24
  1000:8662     B5 04            MOV CH,0x4
  1000:8664     A0 27 16         MOV AL,[0x1627]
  1000:8667     3C 20            CMP AL,0x20
  1000:8669     72 02            JC 0x1000:866d
  1000:866b     FE CD            DEC CH

LAB_1000_866d:
  1000:866d     B1 EB            MOV CL,0xeb

LAB_1000_866f:
  1000:866f     8A 07            MOV AL,byte ptr [BX]
  1000:8671     3A C1            CMP AL,CL
  1000:8673     72 03            JC 0x1000:8678
  1000:8675     E8 1D 00         CALL 0x1000:8695

LAB_1000_8678:
  1000:8678     43               INC BX
  1000:8679     8A 07            MOV AL,byte ptr [BX]
  1000:867b     3A C1            CMP AL,CL
  1000:867d     72 03            JC 0x1000:8682
  1000:867f     E8 13 00         CALL 0x1000:8695

LAB_1000_8682:
  1000:8682     43               INC BX
  1000:8683     8A 07            MOV AL,byte ptr [BX]
  1000:8685     3A C1            CMP AL,CL
  1000:8687     72 03            JC 0x1000:868c
  1000:8689     E8 09 00         CALL 0x1000:8695

LAB_1000_868c:
  1000:868c     03 DA            ADD BX,DX
  1000:868e     FE CD            DEC CH
  1000:8690     75 DD            JNZ 0x1000:866f
  1000:8692     32 C0            XOR AL,AL
  1000:8694     C3               RET

FUN_1000_8695:
  1000:8695     50               PUSH AX
  1000:8696     8A 07            MOV AL,byte ptr [BX]
  1000:8698     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:869c     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:86a0     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:86a4     2C EB            SUB AL,0xeb
  1000:86a6     8A E8            MOV CH,AL
  1000:86a8     02 C0            ADD AL,AL
  1000:86aa     02 C5            ADD AL,CH
  1000:86ac     32 E4            XOR AH,AH
  1000:86ae     05 7E 74         ADD AX,0x747e
  1000:86b1     8B D8            MOV BX,AX
  1000:86b3     8A 07            MOV AL,byte ptr [BX]
  1000:86b5     24 70            AND AL,0x70
  1000:86b7     3C 40            CMP AL,0x40
  1000:86b9     74 12            JZ 0x1000:86cd
  1000:86bb     3C 50            CMP AL,0x50
  1000:86bd     74 0E            JZ 0x1000:86cd
  1000:86bf     87 1E 4A DC      XCHG word ptr [0xdc4a],BX
  1000:86c3     87 0E 4C DC      XCHG word ptr [0xdc4c],CX
  1000:86c7     87 16 4E DC      XCHG word ptr [0xdc4e],DX
  1000:86cb     58               POP AX
  1000:86cc     C3               RET

LAB_1000_86cd:
  1000:86cd     58               POP AX
  1000:86ce     59               POP CX
  1000:86cf     8A 07            MOV AL,byte ptr [BX]
  1000:86d1     C3               RET

FUN_1000_86e5:
  1000:86e5     2E 89 36 E1 86   MOV word ptr CS:[0x86e1],SI
  1000:86ea     56               PUSH SI

LAB_1000_86eb:
  1000:86eb     E8 F4 C1         CALL 0x1000:48e2
  1000:86ee     0A C0            OR AL,AL
  1000:86f0     75 F9            JNZ 0x1000:86eb

LAB_1000_86f2:
  1000:86f2     5E               POP SI
  1000:86f3     2E 8B 36 E1 86   MOV SI,word ptr CS:[0x86e1]
  1000:86f8     B2 00            MOV DL,0x0
  1000:86fa     2E C7 06 DE 86 00 00   MOV word ptr CS:[0x86de],0x0
  1000:8701     2E C6 06 E0 86 00   MOV byte ptr CS:[0x86e0],0x0
  1000:8707     BB 63 66         MOV BX,0x6663
  1000:870a     89 1E 86 16      MOV word ptr [0x1686],BX
  1000:870e     BB 21 15         MOV BX,0x1521
  1000:8711     8B FB            MOV DI,BX
  1000:8713     8C C8            MOV AX,CS
  1000:8715     8E C0            MOV ES,AX
  1000:8717     B4 01            MOV AH,0x1
  1000:8719     56               PUSH SI

LAB_1000_871a:
  1000:871a     50               PUSH AX
  1000:871b     53               PUSH BX
  1000:871c     52               PUSH DX
  1000:871d     B0 03            MOV AL,0x3
  1000:871f     BA D2 86         MOV DX,0x86d2
  1000:8722     BB 18 15         MOV BX,0x1518
  1000:8725     BD 38 00         MOV BP,0x38
  1000:8728     FF 1E 08 05      CALLF [0x508]
  1000:872c     5A               POP DX
  1000:872d     5B               POP BX
  1000:872e     58               POP AX

LAB_1000_872f:
  1000:872f     2E 80 3E E0 86 00   CMP byte ptr CS:[0x86e0],0x0
  1000:8735     74 0C            JZ 0x1000:8743
  1000:8737     2E 38 16 E0 86   CMP byte ptr CS:[0x86e0],DL
  1000:873c     77 05            JA 0x1000:8743
  1000:873e     B0 20            MOV AL,0x20
  1000:8740     EB 0F            JMP 0x1000:8751

LAB_1000_8743:
  1000:8743     8A 04            MOV AL,byte ptr [SI]
  1000:8745     0A C0            OR AL,AL
  1000:8747     75 08            JNZ 0x1000:8751
  1000:8749     2E C6 06 E0 86 09   MOV byte ptr CS:[0x86e0],0x9
  1000:874f     B0 20            MOV AL,0x20

LAB_1000_8751:
  1000:8751     50               PUSH AX
  1000:8752     57               PUSH DI
  1000:8753     52               PUSH DX
  1000:8754     2E A2 E3 86      MOV CS:[0x86e3],AL
  1000:8758     8C C8            MOV AX,CS
  1000:875a     8E C0            MOV ES,AX
  1000:875c     BA E3 86         MOV DX,0x86e3
  1000:875f     B0 33            MOV AL,0x33
  1000:8761     8B DF            MOV BX,DI
  1000:8763     BD 38 00         MOV BP,0x38
  1000:8766     FF 1E 08 05      CALLF [0x508]
  1000:876a     5A               POP DX
  1000:876b     5F               POP DI
  1000:876c     58               POP AX
  1000:876d     FE C2            INC DL
  1000:876f     2E 80 3E E0 86 01   CMP byte ptr CS:[0x86e0],0x1
  1000:8775     75 03            JNZ 0x1000:877a
  1000:8777     E9 78 FF         JMP 0x1000:86f2

LAB_1000_877a:
  1000:877a     46               INC SI
  1000:877b     47               INC DI
  1000:877c     3A E2            CMP AH,DL
  1000:877e     75 AF            JNZ 0x1000:872f
  1000:8780     2E 80 3E E0 86 00   CMP byte ptr CS:[0x86e0],0x0
  1000:8786     74 05            JZ 0x1000:878d
  1000:8788     2E FE 0E E0 86   DEC byte ptr CS:[0x86e0]

LAB_1000_878d:
  1000:878d     FE C4            INC AH
  1000:878f     2E FF 06 DE 86   INC word ptr CS:[0x86de]
  1000:8794     2E 83 3E DE 86 0A   CMP word ptr CS:[0x86de],0xa
  1000:879a     7D 05            JGE 0x1000:87a1
  1000:879c     5E               POP SI
  1000:879d     56               PUSH SI
  1000:879e     EB 04            JMP 0x1000:87a4

LAB_1000_87a1:
  1000:87a1     83 EE 09         SUB SI,0x9

LAB_1000_87a4:
  1000:87a4     B2 00            MOV DL,0x0
  1000:87a6     C7 06 B7 16 00 00   MOV word ptr [0x16b7],0x0
  1000:87ac     B9 1A 00         MOV CX,0x1a

LAB_1000_87af:
  1000:87af     39 0E B7 16      CMP word ptr [0x16b7],CX
  1000:87b3     72 FA            JC 0x1000:87af
  1000:87b5     80 FC 0A         CMP AH,0xa
  1000:87b8     7E 02            JLE 0x1000:87bc
  1000:87ba     FE CC            DEC AH

LAB_1000_87bc:
  1000:87bc     8A CC            MOV CL,AH
  1000:87be     32 ED            XOR CH,CH
  1000:87c0     2B F9            SUB DI,CX
  1000:87c2     50               PUSH AX
  1000:87c3     E8 1C C1         CALL 0x1000:48e2
  1000:87c6     0A C0            OR AL,AL
  1000:87c8     58               POP AX
  1000:87c9     74 02            JZ 0x1000:87cd
  1000:87cb     5E               POP SI
  1000:87cc     C3               RET

LAB_1000_87cd:
  1000:87cd     E9 4A FF         JMP 0x1000:871a

FUN_1000_8ce7:
  1000:8ce7     8C C8            MOV AX,CS
  1000:8ce9     8E C0            MOV ES,AX
  1000:8ceb     E8 44 00         CALL 0x1000:8d32
  1000:8cee     E8 E4 01         CALL 0x1000:8ed5
  1000:8cf1     E8 46 00         CALL 0x1000:8d3a
  1000:8cf4     E8 DF 00         CALL 0x1000:8dd6
  1000:8cf7     E8 E8 00         CALL 0x1000:8de2
  1000:8cfa     E8 01 00         CALL 0x1000:8cfe
  1000:8cfd     C3               RET

FUN_1000_8cfe:
  1000:8cfe     BF 48 8C         MOV DI,0x8c48
  1000:8d01     BE D4 8C         MOV SI,0x8cd4
  1000:8d04     B9 0F 00         MOV CX,0xf
  1000:8d07     33 DB            XOR BX,BX
  1000:8d09     32 E4            XOR AH,AH

LAB_1000_8d0b:
  1000:8d0b     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:8d0e     2E 32 05         XOR AL,byte ptr CS:[DI]
  1000:8d11     03 D8            ADD BX,AX
  1000:8d13     46               INC SI
  1000:8d14     47               INC DI
  1000:8d15     E2 F4            LOOP 0x1000:8d0b
  1000:8d17     2E 39 1E CC 8C   CMP word ptr CS:[0x8ccc],BX
  1000:8d1c     89 C0            MOV AX,AX
  1000:8d1e     C3               RET

FUN_1000_8d32:
  1000:8d32     BE 2D 8B         MOV SI,0x8b2d
  1000:8d35     FF 1E CB 05      CALLF [0x5cb]
  1000:8d39     C3               RET

FUN_1000_8d3a:
  1000:8d3a     B4 00            MOV AH,0x0
  1000:8d3c     CD 1A            INT 0x1a
  1000:8d3e     89 16 22 16      MOV word ptr [0x1622],DX
  1000:8d42     9A C0 04 00 10   CALLF 0x1000:04c0
  1000:8d47     33 DB            XOR BX,BX
  1000:8d49     24 0F            AND AL,0xf
  1000:8d4b     32 E4            XOR AH,AH
  1000:8d4d     8B D8            MOV BX,AX
  1000:8d4f     D1 E0            SHL AX,0x1
  1000:8d51     D1 E0            SHL AX,0x1
  1000:8d53     03 C3            ADD AX,BX
  1000:8d55     8B F8            MOV DI,AX
  1000:8d57     81 C7 58 8C      ADD DI,0x8c58
  1000:8d5b     B3 15            MOV BL,0x15
  1000:8d5d     2E 8A 05         MOV AL,byte ptr CS:[DI]
  1000:8d60     E8 47 00         CALL 0x1000:8daa
  1000:8d63     BE E4 8C         MOV SI,0x8ce4
  1000:8d66     B7 0B            MOV BH,0xb
  1000:8d68     B1 00            MOV CL,0x0
  1000:8d6a     57               PUSH DI
  1000:8d6b     BD 20 00         MOV BP,0x20
  1000:8d6e     FF 1E 08 05      CALLF [0x508]
  1000:8d72     5F               POP DI
  1000:8d73     2E 8A 45 01      MOV AL,byte ptr CS:[DI + 0x1]
  1000:8d77     E8 30 00         CALL 0x1000:8daa
  1000:8d7a     B7 0C            MOV BH,0xc
  1000:8d7c     BE E4 8C         MOV SI,0x8ce4
  1000:8d7f     B1 00            MOV CL,0x0
  1000:8d81     57               PUSH DI
  1000:8d82     BD 20 00         MOV BP,0x20
  1000:8d85     FF 1E 08 05      CALLF [0x508]
  1000:8d89     5F               POP DI
  1000:8d8a     2E 8A 45 02      MOV AL,byte ptr CS:[DI + 0x2]
  1000:8d8e     E8 19 00         CALL 0x1000:8daa
  1000:8d91     B7 0D            MOV BH,0xd
  1000:8d93     BE E4 8C         MOV SI,0x8ce4
  1000:8d96     B1 00            MOV CL,0x0
  1000:8d98     57               PUSH DI
  1000:8d99     BD 20 00         MOV BP,0x20
  1000:8d9c     FF 1E 08 05      CALLF [0x508]
  1000:8da0     5F               POP DI
  1000:8da1     2E 8B 45 03      MOV AX,word ptr CS:[DI + 0x3]
  1000:8da5     2E A3 CC 8C      MOV CS:[0x8ccc],AX
  1000:8da9     C3               RET

FUN_1000_8daa:
  1000:8daa     53               PUSH BX
  1000:8dab     32 E4            XOR AH,AH
  1000:8dad     B3 0A            MOV BL,0xa
  1000:8daf     F6 F3            DIV BL
  1000:8db1     0A C0            OR AL,AL
  1000:8db3     75 11            JNZ 0x1000:8dc6
  1000:8db5     8A C4            MOV AL,AH
  1000:8db7     04 30            ADD AL,0x30
  1000:8db9     B4 20            MOV AH,0x20
  1000:8dbb     2E A2 E4 8C      MOV CS:[0x8ce4],AL
  1000:8dbf     2E 88 26 E5 8C   MOV byte ptr CS:[0x8ce5],AH
  1000:8dc4     5B               POP BX
  1000:8dc5     C3               RET

LAB_1000_8dc6:
  1000:8dc6     04 30            ADD AL,0x30
  1000:8dc8     80 C4 30         ADD AH,0x30
  1000:8dcb     2E A2 E4 8C      MOV CS:[0x8ce4],AL
  1000:8dcf     2E 88 26 E5 8C   MOV byte ptr CS:[0x8ce5],AH
  1000:8dd4     5B               POP BX
  1000:8dd5     C3               RET

FUN_1000_8dd6:
  1000:8dd6     E8 0E 00         CALL 0x1000:8de7
  1000:8dd9     2E 80 3E D1 8C 01   CMP byte ptr CS:[0x8cd1],0x1
  1000:8ddf     75 F5            JNZ 0x1000:8dd6
  1000:8de1     C3               RET

FUN_1000_8de2:
  1000:8de2     FF 1E C7 05      CALLF [0x5c7]
  1000:8de6     C3               RET

FUN_1000_8de7:
  1000:8de7     2E C6 06 E5 8C 00   MOV byte ptr CS:[0x8ce5],0x0
  1000:8ded     B4 01            MOV AH,0x1
  1000:8def     CD 16            INT 0x16
  1000:8df1     75 01            JNZ 0x1000:8df4
  1000:8df3     C3               RET

LAB_1000_8df4:
  1000:8df4     B4 00            MOV AH,0x0
  1000:8df6     CD 16            INT 0x16
  1000:8df8     80 FC 0E         CMP AH,0xe
  1000:8dfb     75 36            JNZ 0x1000:8e33
  1000:8dfd     2E 80 3E CE 8C 00   CMP byte ptr CS:[0x8cce],0x0
  1000:8e03     75 03            JNZ 0x1000:8e08
  1000:8e05     E9 CC 00         JMP 0x1000:8ed4

LAB_1000_8e08:
  1000:8e08     E8 EE 00         CALL 0x1000:8ef9
  1000:8e0b     2E FE 0E CE 8C   DEC byte ptr CS:[0x8cce]
  1000:8e10     2E 80 3E CF 8C 00   CMP byte ptr CS:[0x8ccf],0x0
  1000:8e16     74 12            JZ 0x1000:8e2a
  1000:8e18     2E FE 0E CF 8C   DEC byte ptr CS:[0x8ccf]
  1000:8e1d     32 FF            XOR BH,BH
  1000:8e1f     2E 8A 1E CF 8C   MOV BL,byte ptr CS:[0x8ccf]
  1000:8e24     2E C6 87 D4 8C 20   MOV byte ptr CS:[BX + 0x8cd4],0x20

LAB_1000_8e2a:
  1000:8e2a     E8 F0 00         CALL 0x1000:8f1d
  1000:8e2d     E8 A5 00         CALL 0x1000:8ed5
  1000:8e30     E9 A1 00         JMP 0x1000:8ed4

LAB_1000_8e33:
  1000:8e33     80 FC 1C         CMP AH,0x1c
  1000:8e36     75 1B            JNZ 0x1000:8e53
  1000:8e38     2E C6 06 D1 8C 01   MOV byte ptr CS:[0x8cd1],0x1
  1000:8e3e     C6 06 9B 05 FF   MOV byte ptr [0x59b],0xff
  1000:8e43     32 FF            XOR BH,BH
  1000:8e45     2E 8A 1E CF 8C   MOV BL,byte ptr CS:[0x8ccf]
  1000:8e4a     2E C6 87 D4 8C 00   MOV byte ptr CS:[BX + 0x8cd4],0x0
  1000:8e50     E9 81 00         JMP 0x1000:8ed4

LAB_1000_8e53:
  1000:8e53     50               PUSH AX
  1000:8e54     2E 80 3E CE 8C 0F   CMP byte ptr CS:[0x8cce],0xf
  1000:8e5a     74 0B            JZ 0x1000:8e67
  1000:8e5c     E8 9A 00         CALL 0x1000:8ef9
  1000:8e5f     2E FE 06 CE 8C   INC byte ptr CS:[0x8cce]
  1000:8e64     E8 6E 00         CALL 0x1000:8ed5

LAB_1000_8e67:
  1000:8e67     58               POP AX
  1000:8e68     3C 5A            CMP AL,0x5a
  1000:8e6a     7E 02            JLE 0x1000:8e6e
  1000:8e6c     2C 20            SUB AL,0x20

LAB_1000_8e6e:
  1000:8e6e     3C 41            CMP AL,0x41
  1000:8e70     7C 03            JL 0x1000:8e75
  1000:8e72     EB 0A            JMP 0x1000:8e7e

LAB_1000_8e75:
  1000:8e75     3C 20            CMP AL,0x20
  1000:8e77     75 03            JNZ 0x1000:8e7c
  1000:8e79     EB 03            JMP 0x1000:8e7e

LAB_1000_8e7c:
  1000:8e7c     B0 40            MOV AL,0x40

LAB_1000_8e7e:
  1000:8e7e     2E 80 3E CF 8C 0F   CMP byte ptr CS:[0x8ccf],0xf
  1000:8e84     74 4E            JZ 0x1000:8ed4
  1000:8e86     2E 8A 1E CF 8C   MOV BL,byte ptr CS:[0x8ccf]
  1000:8e8b     32 FF            XOR BH,BH
  1000:8e8d     2E 88 87 D4 8C   MOV byte ptr CS:[BX + 0x8cd4],AL
  1000:8e92     2E A2 E4 8C      MOV CS:[0x8ce4],AL
  1000:8e96     53               PUSH BX
  1000:8e97     2E 8A 3E D0 8C   MOV BH,byte ptr CS:[0x8cd0]
  1000:8e9c     2E 8A 1E CF 8C   MOV BL,byte ptr CS:[0x8ccf]
  1000:8ea1     80 C3 0C         ADD BL,0xc
  1000:8ea4     D0 E3            SHL BL,0x1
  1000:8ea6     8B FB            MOV DI,BX
  1000:8ea8     5B               POP BX
  1000:8ea9     B0 FF            MOV AL,0xff
  1000:8eab     B2 02            MOV DL,0x2
  1000:8ead     B6 08            MOV DH,0x8
  1000:8eaf     BB 03 0F         MOV BX,0xf03
  1000:8eb2     BD 48 00         MOV BP,0x48
  1000:8eb5     FF 1E 08 05      CALLF [0x508]
  1000:8eb9     B1 00            MOV CL,0x0
  1000:8ebb     B7 10            MOV BH,0x10
  1000:8ebd     2E 8A 1E CF 8C   MOV BL,byte ptr CS:[0x8ccf]
  1000:8ec2     80 C3 0C         ADD BL,0xc
  1000:8ec5     BE E4 8C         MOV SI,0x8ce4
  1000:8ec8     BD 20 00         MOV BP,0x20
  1000:8ecb     FF 1E 08 05      CALLF [0x508]
  1000:8ecf     2E FE 06 CF 8C   INC byte ptr CS:[0x8ccf]

LAB_1000_8ed4:
  1000:8ed4     C3               RET

FUN_1000_8ed5:
  1000:8ed5     53               PUSH BX
  1000:8ed6     2E 8A 3E D0 8C   MOV BH,byte ptr CS:[0x8cd0]
  1000:8edb     2E 8A 1E CE 8C   MOV BL,byte ptr CS:[0x8cce]
  1000:8ee0     80 C3 0C         ADD BL,0xc
  1000:8ee3     D0 E3            SHL BL,0x1
  1000:8ee5     8B FB            MOV DI,BX
  1000:8ee7     5B               POP BX
  1000:8ee8     BB 00 0F         MOV BX,0xf00
  1000:8eeb     B2 02            MOV DL,0x2
  1000:8eed     B6 08            MOV DH,0x8
  1000:8eef     B0 FF            MOV AL,0xff
  1000:8ef1     BD 48 00         MOV BP,0x48
  1000:8ef4     FF 1E 08 05      CALLF [0x508]
  1000:8ef8     C3               RET

FUN_1000_8ef9:
  1000:8ef9     53               PUSH BX
  1000:8efa     2E 8A 3E D0 8C   MOV BH,byte ptr CS:[0x8cd0]
  1000:8eff     2E 8A 1E CE 8C   MOV BL,byte ptr CS:[0x8cce]
  1000:8f04     80 C3 0C         ADD BL,0xc
  1000:8f07     D0 E3            SHL BL,0x1
  1000:8f09     8B FB            MOV DI,BX
  1000:8f0b     5B               POP BX
  1000:8f0c     BB 03 0F         MOV BX,0xf03
  1000:8f0f     B2 02            MOV DL,0x2
  1000:8f11     B6 08            MOV DH,0x8
  1000:8f13     B0 FF            MOV AL,0xff
  1000:8f15     BD 48 00         MOV BP,0x48
  1000:8f18     FF 1E 08 05      CALLF [0x508]
  1000:8f1c     C3               RET

FUN_1000_8f1d:
  1000:8f1d     53               PUSH BX
  1000:8f1e     2E 8A 3E D0 8C   MOV BH,byte ptr CS:[0x8cd0]
  1000:8f23     2E 8A 1E CE 8C   MOV BL,byte ptr CS:[0x8cce]
  1000:8f28     80 C3 0C         ADD BL,0xc
  1000:8f2b     D0 E3            SHL BL,0x1
  1000:8f2d     8B FB            MOV DI,BX
  1000:8f2f     5B               POP BX
  1000:8f30     BB 03 0F         MOV BX,0xf03
  1000:8f33     B2 02            MOV DL,0x2
  1000:8f35     B6 08            MOV DH,0x8
  1000:8f37     B0 FF            MOV AL,0xff
  1000:8f39     BD 10 00         MOV BP,0x10
  1000:8f3c     FF 1E 08 05      CALLF [0x508]
  1000:8f40     C3               RET

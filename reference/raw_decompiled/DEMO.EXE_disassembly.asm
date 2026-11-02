; ============================================================================
; Linear Disassembly for: DEMO.EXE
; Architecture: 16-bit x86 Real Mode
; ============================================================================


entry:

caseD_3:

caseD_f:

caseD_11:

caseD_1d:

caseD_1e:

caseD_1f:

caseD_31:

caseD_51:

caseD_53:

caseD_54:

caseD_55:

caseD_56:

caseD_57:

caseD_58:

caseD_59:

caseD_ac:
  1000:0000     E9 23 02         JMP 0x1000:0226

caseD_c0:
  1000:0005     45               INC BP
  1000:0006     58               POP AX
  1000:0007     44               INC SP
  1000:0008     45               INC BP
  1000:0009     52               PUSH DX
  1000:000a     20 54 48         AND byte ptr [SI + 0x48],DL
  1000:000d     45               INC BP

caseD_9a:

caseD_e3:
  1000:000e     20 53 45         AND byte ptr [BP + DI + 0x45],DL
  1000:0011     43               INC BX
  1000:0012     4F               DEC DI
  1000:0013     4E               DEC SI
  1000:0014     44               INC SP
  1000:0015     20 43 4F         AND byte ptr [BP + DI + 0x4f],AL
  1000:0018     4E               DEC SI
  1000:0019     54               PUSH SP
  1000:001a     41               INC CX
  1000:001b     43               INC BX
  1000:001c     54               PUSH SP
  1000:001d     00 53 54         ADD byte ptr [BP + DI + 0x54],DL
  1000:0020     41               INC CX
  1000:0021     52               PUSH DX
  1000:0022     54               PUSH SP
  1000:0023     5C               POP SP
  1000:0024     50               PUSH AX
  1000:0025     52               PUSH DX
  1000:0026     41               INC CX
  1000:0027     43               INC BX
  1000:0028     54               PUSH SP
  1000:0029     49               DEC CX
  1000:002a     43               INC BX
  1000:002b     45               INC BP
  1000:002c     5C               POP SP
  1000:002d     4D               DEC BP
  1000:002e     55               PUSH BP
  1000:002f     53               PUSH BX
  1000:0030     49               DEC CX
  1000:0031     43               INC BX
  1000:0032     00 49 4E         ADD byte ptr [BX + DI + 0x4e],CL
  1000:0035     49               DEC CX
  1000:0036     54               PUSH SP
  1000:0037     49               DEC CX
  1000:0038     41               INC CX
  1000:0039     4C               DEC SP
  1000:003a     20 53 54         AND byte ptr [BP + DI + 0x54],DL
  1000:003d     41               INC CX
  1000:003e     52               PUSH DX
  1000:003f     54               PUSH SP
  1000:0040     21 00            AND word ptr [BX + SI],AX
  1000:0042     50               PUSH AX

caseD_22:
  1000:0043     52               PUSH DX
  1000:0044     41               INC CX
  1000:0045     43               INC BX
  1000:0046     54               PUSH SP
  1000:0047     49               DEC CX
  1000:0048     43               INC BX
  1000:0049     45               INC BP
  1000:004a     20 53 54         AND byte ptr [BP + DI + 0x54],DL
  1000:004d     41               INC CX
  1000:004e     52               PUSH DX
  1000:004f     54               PUSH SP
  1000:0050     21 00            AND word ptr [BX + SI],AX
  1000:0052     45               INC BP

caseD_25:
  1000:0053     58               POP AX
  1000:0054     49               DEC CX
  1000:0055     54               PUSH SP
  1000:0056     5C               POP SP
  1000:0057     52               PUSH DX
  1000:0058     45               INC BP
  1000:0059     53               PUSH BX
  1000:005a     54               PUSH SP
  1000:005b     4F               DEC DI
  1000:005c     52               PUSH DX
  1000:005d     45               INC BP
  1000:005e     5C               POP SP
  1000:005f     53               PUSH BX
  1000:0060     41               INC CX
  1000:0061     56               PUSH SI
  1000:0062     45               INC BP
  1000:0063     5C               POP SP
  1000:0064     4D               DEC BP
  1000:0065     55               PUSH BP
  1000:0066     53               PUSH BX
  1000:0067     49               DEC CX

caseD_28:
  1000:0068     43               INC BX
  1000:0069     00 45 58         ADD byte ptr [DI + 0x58],AL
  1000:006c     49               DEC CX
  1000:006d     54               PUSH SP
  1000:006e     5C               POP SP
  1000:006f     4F               DEC DI
  1000:0070     50               PUSH AX
  1000:0071     45               INC BP
  1000:0072     4E               DEC SI
  1000:0073     49               DEC CX
  1000:0074     4E               DEC SI
  1000:0075     47               INC DI
  1000:0076     20 54 48         AND byte ptr [SI + 0x48],DL
  1000:0079     45               INC BP
  1000:007a     4D               DEC BP
  1000:007b     45               INC BP
  1000:007c     5C               POP SP
  1000:007d     4D               DEC BP
  1000:007e     49               DEC CX
  1000:007f     53               PUSH BX
  1000:0080     53               PUSH BX
  1000:0081     49               DEC CX
  1000:0082     4F               DEC DI
  1000:0083     4E               DEC SI
  1000:0084     20 31            AND byte ptr [BX + DI],DH
  1000:0086     5C               POP SP
  1000:0087     4D               DEC BP
  1000:0088     49               DEC CX
  1000:0089     53               PUSH BX
  1000:008a     53               PUSH BX
  1000:008b     49               DEC CX
  1000:008c     4F               DEC DI
  1000:008d     4E               DEC SI
  1000:008e     20 32            AND byte ptr [BP + SI],DH
  1000:0090     5C               POP SP
  1000:0091     4D               DEC BP
  1000:0092     49               DEC CX
  1000:0093     53               PUSH BX
  1000:0094     53               PUSH BX
  1000:0095     49               DEC CX
  1000:0096     4F               DEC DI
  1000:0097     4E               DEC SI
  1000:0098     20 33            AND byte ptr [BP + DI],DH
  1000:009a     5C               POP SP
  1000:009b     4D               DEC BP
  1000:009c     49               DEC CX
  1000:009d     53               PUSH BX
  1000:009e     53               PUSH BX
  1000:009f     49               DEC CX
  1000:00a0     4F               DEC DI
  1000:00a1     4E               DEC SI
  1000:00a2     20 34            AND byte ptr [SI],DH
  1000:00a4     5C               POP SP
  1000:00a5     4D               DEC BP
  1000:00a6     49               DEC CX
  1000:00a7     53               PUSH BX
  1000:00a8     53               PUSH BX
  1000:00a9     49               DEC CX
  1000:00aa     4F               DEC DI
  1000:00ab     4E               DEC SI
  1000:00ac     20 35            AND byte ptr [DI],DH
  1000:00ae     5C               POP SP
  1000:00af     4D               DEC BP
  1000:00b0     49               DEC CX
  1000:00b1     53               PUSH BX
  1000:00b2     53               PUSH BX
  1000:00b3     49               DEC CX
  1000:00b4     4F               DEC DI
  1000:00b5     4E               DEC SI
  1000:00b6     20 36 5C 4D      AND byte ptr [0x4d5c],DH
  1000:00ba     49               DEC CX
  1000:00bb     53               PUSH BX
  1000:00bc     53               PUSH BX

caseD_96:
  1000:00bd     49               DEC CX
  1000:00be     4F               DEC DI

caseD_c5:
  1000:00bf     4E               DEC SI
  1000:00c0     20 37            AND byte ptr [BX],DH
  1000:00c2     5C               POP SP
  1000:00c3     4D               DEC BP
  1000:00c4     49               DEC CX
  1000:00c5     53               PUSH BX

caseD_e8:
  1000:00c6     53               PUSH BX
  1000:00c7     49               DEC CX
  1000:00c8     4F               DEC DI
  1000:00c9     4E               DEC SI
  1000:00ca     20 38            AND byte ptr [BX + SI],BH
  1000:00cc     5C               POP SP
  1000:00cd     4D               DEC BP
  1000:00ce     49               DEC CX
  1000:00cf     53               PUSH BX
  1000:00d0     53               PUSH BX
  1000:00d1     49               DEC CX
  1000:00d2     4F               DEC DI
  1000:00d3     4E               DEC SI
  1000:00d4     20 39            AND byte ptr [BX + DI],BH
  1000:00d6     5C               POP SP
  1000:00d7     4D               DEC BP
  1000:00d8     4F               DEC DI
  1000:00d9     4F               DEC DI
  1000:00da     4E               DEC SI
  1000:00db     20 4C 49         AND byte ptr [SI + 0x49],CL
  1000:00de     47               INC DI
  1000:00df     48               DEC AX
  1000:00e0     54               PUSH SP
  1000:00e1     20 53 4F         AND byte ptr [BP + DI + 0x4f],DL
  1000:00e4     4E               DEC SI
  1000:00e5     41               INC CX
  1000:00e6     54               PUSH SP
  1000:00e7     41               INC CX
  1000:00e8     00 2A            ADD byte ptr [BP + SI],CH
  1000:00ea     4D               DEC BP
  1000:00eb     55               PUSH BP
  1000:00ec     53               PUSH BX
  1000:00ed     49               DEC CX
  1000:00ee     43               INC BX
  1000:00ef     2A 00            SUB AL,byte ptr [BX + SI]
  1000:00f1     53               PUSH BX
  1000:00f2     45               INC BP
  1000:00f3     4C               DEC SP
  1000:00f4     45               INC BP
  1000:00f5     43               INC BX
  1000:00f6     54               PUSH SP
  1000:00f7     20 41 20         AND byte ptr [BX + DI + 0x20],AL
  1000:00fa     4E               DEC SI
  1000:00fb     55               PUSH BP
  1000:00fc     4D               DEC BP
  1000:00fd     42               INC DX
  1000:00fe     45               INC BP

caseD_52:
  1000:00ff     52               PUSH DX
  1000:0100     2E 00 2A         ADD byte ptr CS:[BP + SI],CH
  1000:0103     52               PUSH DX
  1000:0104     45               INC BP

caseD_5a:
  1000:0105     53               PUSH BX
  1000:0106     54               PUSH SP
  1000:0107     4F               DEC DI
  1000:0108     52               PUSH DX
  1000:0109     45               INC BP
  1000:010a     2A 00            SUB AL,byte ptr [BX + SI]
  1000:010c     2A 53 41         SUB DL,byte ptr [BP + DI + 0x41]
  1000:010f     56               PUSH SI
  1000:0110     45               INC BP
  1000:0111     2A 00            SUB AL,byte ptr [BX + SI]
  1000:0113     4D               DEC BP
  1000:0114     49               DEC CX
  1000:0115     53               PUSH BX
  1000:0116     53               PUSH BX
  1000:0117     49               DEC CX
  1000:0118     4F               DEC DI
  1000:0119     4E               DEC SI
  1000:011a     20 30            AND byte ptr [BX + SI],DH
  1000:011c     20 53 54         AND byte ptr [BP + DI + 0x54],DL
  1000:011f     41               INC CX
  1000:0120     52               PUSH DX
  1000:0121     54               PUSH SP
  1000:0122     21 00            AND word ptr [BX + SI],AX
  1000:0124     45               INC BP
  1000:0125     58               POP AX
  1000:0126     49               DEC CX
  1000:0127     54               PUSH SP
  1000:0128     5C               POP SP
  1000:0129     28 31            SUB byte ptr [BX + DI],DH
  1000:012b     29 5C 28         SUB word ptr [SI + 0x28],BX
  1000:012e     32 29            XOR CH,byte ptr [BX + DI]
  1000:0130     5C               POP SP
  1000:0131     28 33            SUB byte ptr [BP + DI],DH
  1000:0133     29 5C 28         SUB word ptr [SI + 0x28],BX
  1000:0136     34 29            XOR AL,0x29
  1000:0138     5C               POP SP
  1000:0139     28 35            SUB byte ptr [DI],DH
  1000:013b     29 5C 28         SUB word ptr [SI + 0x28],BX
  1000:013e     36 29 5C 28      SUB word ptr SS:[SI + 0x28],BX
  1000:0142     37               AAA
  1000:0143     29 5C 28         SUB word ptr [SI + 0x28],BX
  1000:0146     38 00            CMP byte ptr [BX + SI],AL
  1000:0148     53               PUSH BX
  1000:0149     55               PUSH BP
  1000:014a     52               PUSH DX
  1000:014b     45               INC BP
  1000:014c     3F               AAS
  1000:014d     20 20            AND byte ptr [BX + SI],AH
  1000:014f     20 59 45         AND byte ptr [BX + DI + 0x45],BL
  1000:0152     53               PUSH BX
  1000:0153     20 20            AND byte ptr [BX + SI],AH
  1000:0155     20 4E 4F         AND byte ptr [BP + 0x4f],CL

FUN_1000_0226:
  1000:0226     2E A2 0D 02      MOV CS:[0x20d],AL
  1000:022a     B8 26 0E         MOV AX,0xe26
  1000:022d     FA               CLI
  1000:022e     8C C8            MOV AX,CS
  1000:0230     A3 80 05         MOV [0x580],AX
  1000:0233     B8 0A 0B         MOV AX,0xb0a
  1000:0236     A3 7E 05         MOV [0x57e],AX
  1000:0239     FB               STI

LAB_1000_023a:
  1000:023a     2E 80 3E 0D 02 00   CMP byte ptr CS:[0x20d],0x0
  1000:0240     75 1D            JNZ 0x1000:025f
  1000:0242     E8 40 1D         CALL 0x1000:1f85
  1000:0245     2E C6 06 0D 02 01   MOV byte ptr CS:[0x20d],0x1
  1000:024b     80 3E 55 05 01   CMP byte ptr [0x555],0x1
  1000:0250     75 0D            JNZ 0x1000:025f

LAB_1000_0252:
  1000:0252     55               PUSH BP
  1000:0253     BD 02 00         MOV BP,0x2
  1000:0256     FF 1E 00 05      CALLF [0x500]
  1000:025a     5D               POP BP
  1000:025b     A8 40            TEST AL,0x40
  1000:025d     75 F3            JNZ 0x1000:0252

LAB_1000_025f:
  1000:025f     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:0264     74 08            JZ 0x1000:026e
  1000:0266     BE 7A 01         MOV SI,0x17a
  1000:0269     B9 20 00         MOV CX,0x20
  1000:026c     EB 06            JMP 0x1000:0274

LAB_1000_026e:
  1000:026e     BE 6A 01         MOV SI,0x16a
  1000:0271     B9 10 00         MOV CX,0x10

LAB_1000_0274:
  1000:0274     BF 20 26         MOV DI,0x2620
  1000:0277     8C D8            MOV AX,DS
  1000:0279     8E C0            MOV ES,AX
  1000:027b     8C C8            MOV AX,CS
  1000:027d     8E D8            MOV DS,AX
  1000:027f     F3 A4            MOVSB.REP ES:DI,SI
  1000:0281     8C C0            MOV AX,ES
  1000:0283     8E D8            MOV DS,AX
  1000:0285     BD 00 00         MOV BP,0x0
  1000:0288     FF 1E 08 05      CALLF [0x508]
  1000:028c     BD 0E 00         MOV BP,0xe
  1000:028f     FF 1E 08 05      CALLF [0x508]
  1000:0293     B0 07            MOV AL,0x7
  1000:0295     FF 1E 97 05      CALLF [0x597]
  1000:0299     E8 86 0A         CALL 0x1000:0d22
  1000:029c     E8 D9 0A         CALL 0x1000:0d78
  1000:029f     2E 80 3E 0D 02 02   CMP byte ptr CS:[0x20d],0x2
  1000:02a5     75 1D            JNZ 0x1000:02c4
  1000:02a7     E8 7C 0B         CALL 0x1000:0e26
  1000:02aa     2E C6 06 0D 02 01   MOV byte ptr CS:[0x20d],0x1
  1000:02b0     BD 00 00         MOV BP,0x0
  1000:02b3     FF 1E 08 05      CALLF [0x508]
  1000:02b7     BD 0E 00         MOV BP,0xe
  1000:02ba     FF 1E 08 05      CALLF [0x508]
  1000:02be     E8 61 0A         CALL 0x1000:0d22
  1000:02c1     E8 B4 0A         CALL 0x1000:0d78

LAB_1000_02c4:
  1000:02c4     BA 99 01         MOV DX,0x199
  1000:02c7     BB 40 26         MOV BX,0x2640
  1000:02ca     E8 41 05         CALL 0x1000:080e
  1000:02cd     BA A5 01         MOV DX,0x1a5
  1000:02d0     BB 20 16         MOV BX,0x1620
  1000:02d3     E8 38 05         CALL 0x1000:080e
  1000:02d6     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:02db     75 11            JNZ 0x1000:02ee
  1000:02dd     B9 01 08         MOV CX,0x801
  1000:02e0     BE 40 26         MOV SI,0x2640
  1000:02e3     BF 00 A4         MOV DI,0xa400
  1000:02e6     8C D8            MOV AX,DS
  1000:02e8     8E C0            MOV ES,AX
  1000:02ea     F3 A4            MOVSB.REP ES:DI,SI
  1000:02ec     EB 12            JMP 0x1000:0300

LAB_1000_02ee:
  1000:02ee     B9 01 08         MOV CX,0x801
  1000:02f1     BE 40 26         MOV SI,0x2640
  1000:02f4     BF 00 A4         MOV DI,0xa400
  1000:02f7     8C D8            MOV AX,DS
  1000:02f9     8E C0            MOV ES,AX
  1000:02fb     B0 05            MOV AL,0x5
  1000:02fd     E8 44 19         CALL 0x1000:1c44

LAB_1000_0300:
  1000:0300     BA 9F 01         MOV DX,0x19f
  1000:0303     BB 40 36         MOV BX,0x3640
  1000:0306     E8 05 05         CALL 0x1000:080e
  1000:0309     8B 1E 40 36      MOV BX,word ptr [0x3640]
  1000:030d     81 EB 00 60      SUB BX,0x6000
  1000:0311     81 C3 40 36      ADD BX,0x3640
  1000:0315     BF 40 46         MOV DI,0x4640
  1000:0318     E8 70 05         CALL 0x1000:088b
  1000:031b     E8 2B 0A         CALL 0x1000:0d49
  1000:031e     BD 0E 00         MOV BP,0xe
  1000:0321     FF 1E 08 05      CALLF [0x508]
  1000:0325     BE 40 36         MOV SI,0x3640
  1000:0328     81 C6 00 08      ADD SI,0x800
  1000:032c     8B FE            MOV DI,SI
  1000:032e     47               INC DI
  1000:032f     8C D9            MOV CX,DS
  1000:0331     8E C1            MOV ES,CX
  1000:0333     C6 04 FF         MOV byte ptr [SI],0xff
  1000:0336     B9 00 04         MOV CX,0x400
  1000:0339     F3 A4            MOVSB.REP ES:DI,SI
  1000:033b     BB B3 01         MOV BX,0x1b3

caseD_2f:

caseD_33:
  1000:033e     E8 E4 09         CALL 0x1000:0d25
  1000:0341     BE CB 01         MOV SI,0x1cb
  1000:0344     BF 40 46         MOV DI,0x4640
  1000:0347     B5 30            MOV CH,0x30

LAB_1000_0349:
  1000:0349     E8 44 08         CALL 0x1000:0b90
  1000:034c     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:034f     46               INC SI
  1000:0350     0A C0            OR AL,AL
  1000:0352     74 03            JZ 0x1000:0357
  1000:0354     EB 2A            JMP 0x1000:0380

LAB_1000_0357:
  1000:0357     C6 06 62 05 12   MOV byte ptr [0x562],0x12
  1000:035c     B3 00            MOV BL,0x0
  1000:035e     B7 04            MOV BH,0x4
  1000:0360     BD 06 00         MOV BP,0x6
  1000:0363     FF 1E 08 05      CALLF [0x508]
  1000:0367     B3 01            MOV BL,0x1
  1000:0369     B7 04            MOV BH,0x4
  1000:036b     BD 06 00         MOV BP,0x6
  1000:036e     FF 1E 08 05      CALLF [0x508]
  1000:0372     B3 02            MOV BL,0x2
  1000:0374     B7 04            MOV BH,0x4
  1000:0376     BD 06 00         MOV BP,0x6
  1000:0379     FF 1E 08 05      CALLF [0x508]
  1000:037d     E9 91 00         JMP 0x1000:0411

LAB_1000_0380:
  1000:0380     51               PUSH CX
  1000:0381     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:0386     74 04            JZ 0x1000:038c
  1000:0388     B3 03            MOV BL,0x3
  1000:038a     EB 02            JMP 0x1000:038e

LAB_1000_038c:
  1000:038c     8A D8            MOV BL,AL

LAB_1000_038e:
  1000:038e     BD 0A 00         MOV BP,0xa
  1000:0391     FF 1E 08 05      CALLF [0x508]
  1000:0395     BB 40 3E         MOV BX,0x3e40
  1000:0398     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:039d     75 08            JNZ 0x1000:03a7
  1000:039f     3C 01            CMP AL,0x1
  1000:03a1     74 04            JZ 0x1000:03a7
  1000:03a3     81 C3 00 02      ADD BX,0x200

LAB_1000_03a7:
  1000:03a7     53               PUSH BX
  1000:03a8     B9 00 02         MOV CX,0x200

LAB_1000_03ab:
  1000:03ab     8A 05            MOV AL,byte ptr [DI]
  1000:03ad     3A 07            CMP AL,byte ptr [BX]
  1000:03af     75 02            JNZ 0x1000:03b3
  1000:03b1     32 C0            XOR AL,AL

LAB_1000_03b3:
  1000:03b3     88 07            MOV byte ptr [BX],AL
  1000:03b5     43               INC BX
  1000:03b6     47               INC DI
  1000:03b7     E2 F2            LOOP 0x1000:03ab
  1000:03b9     5B               POP BX
  1000:03ba     57               PUSH DI
  1000:03bb     8B D3            MOV DX,BX
  1000:03bd     BD 30 00         MOV BP,0x30
  1000:03c0     FF 1E 08 05      CALLF [0x508]
  1000:03c4     5F               POP DI
  1000:03c5     59               POP CX
  1000:03c6     8A C5            MOV AL,CH
  1000:03c8     D0 C8            ROR AL,0x1
  1000:03ca     73 24            JNC 0x1000:03f0
  1000:03cc     B7 00            MOV BH,0x0
  1000:03ce     B3 00            MOV BL,0x0
  1000:03d0     BD 06 00         MOV BP,0x6
  1000:03d3     FF 1E 08 05      CALLF [0x508]
  1000:03d7     B7 00            MOV BH,0x0
  1000:03d9     B3 01            MOV BL,0x1
  1000:03db     BD 06 00         MOV BP,0x6
  1000:03de     FF 1E 08 05      CALLF [0x508]
  1000:03e2     B7 04            MOV BH,0x4
  1000:03e4     B3 02            MOV BL,0x2
  1000:03e6     BD 06 00         MOV BP,0x6
  1000:03e9     FF 1E 08 05      CALLF [0x508]
  1000:03ed     EB 22            JMP 0x1000:0411

LAB_1000_03f0:
  1000:03f0     B7 00            MOV BH,0x0
  1000:03f2     B3 00            MOV BL,0x0
  1000:03f4     BD 06 00         MOV BP,0x6
  1000:03f7     FF 1E 08 05      CALLF [0x508]
  1000:03fb     B7 04            MOV BH,0x4
  1000:03fd     B3 01            MOV BL,0x1
  1000:03ff     BD 06 00         MOV BP,0x6
  1000:0402     FF 1E 08 05      CALLF [0x508]
  1000:0406     B7 00            MOV BH,0x0
  1000:0408     B3 02            MOV BL,0x2
  1000:040a     BD 06 00         MOV BP,0x6
  1000:040d     FF 1E 08 05      CALLF [0x508]

LAB_1000_0411:
  1000:0411     E8 36 06         CALL 0x1000:0a4a
  1000:0414     0A C0            OR AL,AL
  1000:0416     75 1C            JNZ 0x1000:0434
  1000:0418     51               PUSH CX
  1000:0419     B9 0E 00         MOV CX,0xe
  1000:041c     E8 88 07         CALL 0x1000:0ba7
  1000:041f     3C 01            CMP AL,0x1
  1000:0421     75 03            JNZ 0x1000:0426
  1000:0423     59               POP CX
  1000:0424     EB 0E            JMP 0x1000:0434

LAB_1000_0426:
  1000:0426     59               POP CX
  1000:0427     FE CD            DEC CH
  1000:0429     74 03            JZ 0x1000:042e
  1000:042b     E9 1B FF         JMP 0x1000:0349

LAB_1000_042e:
  1000:042e     B9 20 03         MOV CX,0x320
  1000:0431     E8 16 07         CALL 0x1000:0b4a

LAB_1000_0434:
  1000:0434     B7 00            MOV BH,0x0
  1000:0436     B3 00            MOV BL,0x0
  1000:0438     BD 06 00         MOV BP,0x6
  1000:043b     FF 1E 08 05      CALLF [0x508]
  1000:043f     B7 00            MOV BH,0x0
  1000:0441     B3 01            MOV BL,0x1
  1000:0443     BD 06 00         MOV BP,0x6
  1000:0446     FF 1E 08 05      CALLF [0x508]
  1000:044a     B7 04            MOV BH,0x4
  1000:044c     B3 02            MOV BL,0x2
  1000:044e     BD 06 00         MOV BP,0x6
  1000:0451     FF 1E 08 05      CALLF [0x508]
  1000:0455     BD 0E 00         MOV BP,0xe
  1000:0458     FF 1E 08 05      CALLF [0x508]
  1000:045c     B3 02            MOV BL,0x2
  1000:045e     BD 0A 00         MOV BP,0xa
  1000:0461     FF 1E 08 05      CALLF [0x508]
  1000:0465     BA 40 94         MOV DX,0x9440
  1000:0468     BD 30 00         MOV BP,0x30
  1000:046b     FF 1E 08 05      CALLF [0x508]
  1000:046f     B3 0F            MOV BL,0xf
  1000:0471     B2 50            MOV DL,0x50
  1000:0473     B6 08            MOV DH,0x8
  1000:0475     BF 0D 68         MOV DI,0x680d
  1000:0478     BD 10 00         MOV BP,0x10
  1000:047b     FF 1E 08 05      CALLF [0x508]
  1000:047f     BF 0D 68         MOV DI,0x680d
  1000:0482     8C CB            MOV BX,CS
  1000:0484     8E C3            MOV ES,BX
  1000:0486     BB 03 00         MOV BX,0x3
  1000:0489     BD 2E 00         MOV BP,0x2e
  1000:048c     FF 1E 08 05      CALLF [0x508]
  1000:0490     BB BB 01         MOV BX,0x1bb
  1000:0493     E8 8F 08         CALL 0x1000:0d25

LAB_1000_0496:
  1000:0496     32 C0            XOR AL,AL
  1000:0498     2E A2 FC 01      MOV CS:[0x1fc],AL

LAB_1000_049c:
  1000:049c     32 C0            XOR AL,AL
  1000:049e     2E A2 FD 01      MOV CS:[0x1fd],AL
  1000:04a2     2E 8A 36 FC 01   MOV DH,byte ptr CS:[0x1fc]
  1000:04a7     B2 03            MOV DL,0x3
  1000:04a9     B9 B8 0B         MOV CX,0xbb8
  1000:04ac     52               PUSH DX
  1000:04ad     BF 22 82         MOV DI,0x8222
  1000:04b0     57               PUSH DI
  1000:04b1     8C CB            MOV BX,CS
  1000:04b3     8E C3            MOV ES,BX
  1000:04b5     BB 1E 00         MOV BX,0x1e
  1000:04b8     BD 2E 00         MOV BP,0x2e
  1000:04bb     FF 1E 08 05      CALLF [0x508]
  1000:04bf     5B               POP BX
  1000:04c0     5A               POP DX
  1000:04c1     E8 F9 01         CALL 0x1000:06bd
  1000:04c4     50               PUSH AX
  1000:04c5     9C               PUSHF

caseD_ed:
  1000:04c6     24 7F            AND AL,0x7f
  1000:04c8     2E A2 FC 01      MOV CS:[0x1fc],AL
  1000:04cc     B0 FF            MOV AL,0xff
  1000:04ce     2E A2 FD 01      MOV CS:[0x1fd],AL
  1000:04d2     9D               POPF
  1000:04d3     58               POP AX
  1000:04d4     73 1A            JNC 0x1000:04f0
  1000:04d6     E8 4D 09         CALL 0x1000:0e26
  1000:04d9     BD 00 00         MOV BP,0x0
  1000:04dc     FF 1E 08 05      CALLF [0x508]
  1000:04e0     BD 0E 00         MOV BP,0xe
  1000:04e3     FF 1E 08 05      CALLF [0x508]
  1000:04e7     E8 38 08         CALL 0x1000:0d22
  1000:04ea     E8 8B 08         CALL 0x1000:0d78
  1000:04ed     E9 D4 FD         JMP 0x1000:02c4

LAB_1000_04f0:
  1000:04f0     3C FF            CMP AL,0xff
  1000:04f2     75 02            JNZ 0x1000:04f6
  1000:04f4     EB A0            JMP 0x1000:0496

LAB_1000_04f6:
  1000:04f6     32 FF            XOR BH,BH
  1000:04f8     8A D8            MOV BL,AL
  1000:04fa     D1 E3            SHL BX,0x1

switchD:
  1000:04fc     2E FF A7 59 01   JMP word ptr CS:[BX + 0x159]

caseD_37:

caseD_38:

caseD_d7:
  1000:0505     F8               CLC
  1000:0506     9C               PUSHF
  1000:0507     50               PUSH AX

caseD_9c:

caseD_ae:

caseD_e5:
  1000:0508     FA               CLI
  1000:0509     B8 00 00         MOV AX,0x0
  1000:050c     A3 80 05         MOV [0x580],AX
  1000:050f     A3 7E 05         MOV [0x57e],AX
  1000:0512     FB               STI
  1000:0513     58               POP AX
  1000:0514     9D               POPF
  1000:0515     CB               RETF

caseD_0:
  1000:0516     E8 AB 02         CALL 0x1000:07c4
  1000:0519     BF 1A 86         MOV DI,0x861a
  1000:051c     8C CB            MOV BX,CS
  1000:051e     8E C3            MOV ES,BX
  1000:0520     BB 33 00         MOV BX,0x33
  1000:0523     BD 2E 00         MOV BP,0x2e
  1000:0526     FF 1E 08 05      CALLF [0x508]
  1000:052a     B0 01            MOV AL,0x1
  1000:052c     EB D7            JMP 0x1000:0505

caseD_b9:
  1000:0541     00 BD 2E 00      ADD byte ptr [DI + 0x2e],BH
  1000:0545     FF 1E 08 05      CALLF [0x508]
  1000:0549     B0 02            MOV AL,0x2
  1000:054b     EB B8            JMP 0x1000:0505

caseD_1:
  1000:054d     E8 74 02         CALL 0x1000:07c4
  1000:0550     BF 19 86         MOV DI,0x8619
  1000:0553     8C CB            MOV BX,CS

caseD_7a:
  1000:0555     8E C3            MOV ES,BX
  1000:0557     BB 42 00         MOV BX,0x42
  1000:055a     BD 2E 00         MOV BP,0x2e
  1000:055d     FF 1E 08 05      CALLF [0x508]
  1000:0561     B0 03            MOV AL,0x3
  1000:0563     EB A0            JMP 0x1000:0505

caseD_2:
  1000:0565     57               PUSH DI
  1000:0566     52               PUSH DX
  1000:0567     B3 0F            MOV BL,0xf
  1000:0569     BF 00 6E         MOV DI,0x6e00
  1000:056c     B6 5A            MOV DH,0x5a
  1000:056e     B2 50            MOV DL,0x50

caseD_e0:
  1000:0570     BD 10 00         MOV BP,0x10
  1000:0573     FF 1E 08 05      CALLF [0x508]
  1000:0577     5A               POP DX
  1000:0578     5F               POP DI
  1000:0579     BB 00 5A         MOV BX,0x5a00
  1000:057c     BF 00 59         MOV DI,0x5900
  1000:057f     B5 15            MOV CH,0x15
  1000:0581     B1 50            MOV CL,0x50
  1000:0583     B0 14            MOV AL,0x14

LAB_1000_0585:
  1000:0585     BD 22 00         MOV BP,0x22
  1000:0588     FF 1E 08 05      CALLF [0x508]
  1000:058c     81 EB 00 01      SUB BX,0x100
  1000:0590     81 EF 00 01      SUB DI,0x100
  1000:0594     FE C8            DEC AL
  1000:0596     75 ED            JNZ 0x1000:0585
  1000:0598     E8 3A 00         CALL 0x1000:05d5
  1000:059b     E8 03 00         CALL 0x1000:05a1
  1000:059e     E9 FB FE         JMP 0x1000:049c

FUN_1000_05a1:
  1000:05a1     57               PUSH DI
  1000:05a2     52               PUSH DX
  1000:05a3     B3 0F            MOV BL,0xf
  1000:05a5     BF 22 65         MOV DI,0x6522
  1000:05a8     B6 58            MOV DH,0x58
  1000:05aa     B2 50            MOV DL,0x50
  1000:05ac     BD 10 00         MOV BP,0x10
  1000:05af     FF 1E 08 05      CALLF [0x508]
  1000:05b3     5A               POP DX
  1000:05b4     5F               POP DI
  1000:05b5     BB 00 5A         MOV BX,0x5a00
  1000:05b8     BF 00 5B         MOV DI,0x5b00
  1000:05bb     B5 16            MOV CH,0x16
  1000:05bd     B1 50            MOV CL,0x50
  1000:05bf     B0 14            MOV AL,0x14

LAB_1000_05c1:
  1000:05c1     BD 26 00         MOV BP,0x26
  1000:05c4     FF 1E 08 05      CALLF [0x508]
  1000:05c8     81 C3 00 01      ADD BX,0x100
  1000:05cc     81 C7 00 01      ADD DI,0x100
  1000:05d0     FE C8            DEC AL
  1000:05d2     75 ED            JNZ 0x1000:05c1
  1000:05d4     C3               RET

FUN_1000_05d5:
  1000:05d5     BF 12 66         MOV DI,0x6612
  1000:05d8     8C CB            MOV BX,CS
  1000:05da     8E C3            MOV ES,BX
  1000:05dc     BB E9 00         MOV BX,0xe9
  1000:05df     BD 2E 00         MOV BP,0x2e
  1000:05e2     FF 1E 08 05      CALLF [0x508]
  1000:05e6     32 C0            XOR AL,AL
  1000:05e8     2E A2 0C 02      MOV CS:[0x20c],AL

LAB_1000_05ec:
  1000:05ec     2E 8A 36 0C 02   MOV DH,byte ptr CS:[0x20c]
  1000:05f1     B2 0C            MOV DL,0xc
  1000:05f3     BF 22 66         MOV DI,0x6622
  1000:05f6     BB 6A 00         MOV BX,0x6a
  1000:05f9     E8 A0 00         CALL 0x1000:069c
  1000:05fc     3C 00            CMP AL,0x0
  1000:05fe     75 16            JNZ 0x1000:0616
  1000:0600     FF 1E B3 05      CALLF [0x5b3]
  1000:0604     FF 1E BF 05      CALLF [0x5bf]
  1000:0608     FF 1E AF 05      CALLF [0x5af]
  1000:060c     E8 9E 01         CALL 0x1000:07ad
  1000:060f     2E C6 06 24 02 00   MOV byte ptr CS:[0x224],0x0
  1000:0615     C3               RET

LAB_1000_0616:
  1000:0616     A8 80            TEST AL,0x80
  1000:0618     74 02            JZ 0x1000:061c
  1000:061a     EB D0            JMP 0x1000:05ec

LAB_1000_061c:
  1000:061c     2E C6 06 24 02 01   MOV byte ptr CS:[0x224],0x1
  1000:0622     50               PUSH AX
  1000:0623     FF 1E B3 05      CALLF [0x5b3]
  1000:0627     FF 1E BF 05      CALLF [0x5bf]
  1000:062b     FF 1E AF 05      CALLF [0x5af]
  1000:062f     58               POP AX
  1000:0630     2E A2 0C 02      MOV CS:[0x20c],AL
  1000:0634     FE C8            DEC AL
  1000:0636     8A D8            MOV BL,AL
  1000:0638     32 FF            XOR BH,BH
  1000:063a     53               PUSH BX
  1000:063b     5B               POP BX
  1000:063c     2E 8A A7 19 02   MOV AH,byte ptr CS:[BX + 0x219]
  1000:0641     2E 88 26 25 02   MOV byte ptr CS:[0x225],AH
  1000:0646     80 FB 01         CMP BL,0x1
  1000:0649     7C 0A            JL 0x1000:0655
  1000:064b     80 FB 09         CMP BL,0x9
  1000:064e     7F 05            JG 0x1000:0655
  1000:0650     B0 00            MOV AL,0x0
  1000:0652     EB 03            JMP 0x1000:0657

LAB_1000_0655:
  1000:0655     B0 01            MOV AL,0x1

LAB_1000_0657:
  1000:0657     FF 1E AB 05      CALLF [0x5ab]
  1000:065b     EB 8F            JMP 0x1000:05ec

FUN_1000_065d:
  1000:065d     2E 80 3E 24 02 01   CMP byte ptr CS:[0x224],0x1
  1000:0663     74 01            JZ 0x1000:0666
  1000:0665     C3               RET

LAB_1000_0666:
  1000:0666     2E A0 0C 02      MOV AL,CS:[0x20c]
  1000:066a     FE C8            DEC AL
  1000:066c     3C 01            CMP AL,0x1
  1000:066e     7D 01            JGE 0x1000:0671
  1000:0670     C3               RET

LAB_1000_0671:
  1000:0671     3C 09            CMP AL,0x9
  1000:0673     7E 01            JLE 0x1000:0676
  1000:0675     C3               RET

LAB_1000_0676:
  1000:0676     50               PUSH AX
  1000:0677     FF 1E BB 05      CALLF [0x5bb]
  1000:067b     3C FF            CMP AL,0xff
  1000:067d     74 02            JZ 0x1000:0681
  1000:067f     58               POP AX
  1000:0680     C3               RET

LAB_1000_0681:
  1000:0681     58               POP AX
  1000:0682     8A D8            MOV BL,AL
  1000:0684     32 FF            XOR BH,BH
  1000:0686     53               PUSH BX
  1000:0687     5B               POP BX
  1000:0688     2E 8A 26 25 02   MOV AH,byte ptr CS:[0x225]
  1000:068d     80 F4 01         XOR AH,0x1
  1000:0690     2E 88 26 25 02   MOV byte ptr CS:[0x225],AH
  1000:0695     B0 00            MOV AL,0x0
  1000:0697     FF 1E AB 05      CALLF [0x5ab]
  1000:069b     C3               RET

FUN_1000_069c:
  1000:069c     2E 89 3E 5F 01   MOV word ptr CS:[0x15f],DI
  1000:06a1     8C C8            MOV AX,CS
  1000:06a3     8E C0            MOV ES,AX
  1000:06a5     BD 2E 00         MOV BP,0x2e
  1000:06a8     FF 1E 08 05      CALLF [0x508]
  1000:06ac     2E 8B 1E 5F 01   MOV BX,word ptr CS:[0x15f]
  1000:06b1     E8 09 00         CALL 0x1000:06bd
  1000:06b4     9C               PUSHF
  1000:06b5     3C FF            CMP AL,0xff
  1000:06b7     75 02            JNZ 0x1000:06bb
  1000:06b9     B0 00            MOV AL,0x0

LAB_1000_06bb:
  1000:06bb     9D               POPF
  1000:06bc     C3               RET

FUN_1000_06bd:
  1000:06bd     2E 89 1E FE 01   MOV word ptr CS:[0x1fe],BX

LAB_1000_06c2:
  1000:06c2     B8 02 0F         MOV AX,0xf02
  1000:06c5     E8 AA 00         CALL 0x1000:0772

LAB_1000_06c8:
  1000:06c8     E8 92 FF         CALL 0x1000:065d
  1000:06cb     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:06d0     75 04            JNZ 0x1000:06d6
  1000:06d2     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_06d6:
  1000:06d6     B9 05 00         MOV CX,0x5
  1000:06d9     E8 6E 04         CALL 0x1000:0b4a
  1000:06dc     E8 01 03         CALL 0x1000:09e0
  1000:06df     0A C0            OR AL,AL
  1000:06e1     75 E5            JNZ 0x1000:06c8
  1000:06e3     E8 64 03         CALL 0x1000:0a4a
  1000:06e6     0A C0            OR AL,AL
  1000:06e8     75 DE            JNZ 0x1000:06c8
  1000:06ea     2E A0 FD 01      MOV AL,CS:[0x1fd]
  1000:06ee     0A C0            OR AL,AL
  1000:06f0     75 03            JNZ 0x1000:06f5
  1000:06f2     E8 9B 04         CALL 0x1000:0b90

LAB_1000_06f5:
  1000:06f5     E8 65 FF         CALL 0x1000:065d
  1000:06f8     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:06fd     75 04            JNZ 0x1000:0703
  1000:06ff     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_0703:
  1000:0703     E8 DA 02         CALL 0x1000:09e0
  1000:0706     D0 C8            ROR AL,0x1
  1000:0708     72 3E            JC 0x1000:0748
  1000:070a     D0 C8            ROR AL,0x1
  1000:070c     72 4E            JC 0x1000:075c
  1000:070e     E8 39 03         CALL 0x1000:0a4a
  1000:0711     0A C0            OR AL,AL
  1000:0713     75 12            JNZ 0x1000:0727
  1000:0715     2E A0 FD 01      MOV AL,CS:[0x1fd]
  1000:0719     0A C0            OR AL,AL
  1000:071b     75 D8            JNZ 0x1000:06f5
  1000:071d     B9 E8 03         MOV CX,0x3e8
  1000:0720     E8 1D 04         CALL 0x1000:0b40
  1000:0723     72 D0            JC 0x1000:06f5
  1000:0725     F9               STC
  1000:0726     C3               RET

LAB_1000_0727:
  1000:0727     50               PUSH AX
  1000:0728     9C               PUSHF
  1000:0729     B8 00 0F         MOV AX,0xf00
  1000:072c     E8 43 00         CALL 0x1000:0772
  1000:072f     9D               POPF
  1000:0730     58               POP AX
  1000:0731     24 02            AND AL,0x2
  1000:0733     74 06            JZ 0x1000:073b
  1000:0735     32 C0            XOR AL,AL
  1000:0737     FE C8            DEC AL
  1000:0739     F8               CLC
  1000:073a     C3               RET

LAB_1000_073b:
  1000:073b     A0 75 05         MOV AL,[0x575]
  1000:073e     24 08            AND AL,0x8
  1000:0740     8A C6            MOV AL,DH
  1000:0742     74 01            JZ 0x1000:0745
  1000:0744     C3               RET

LAB_1000_0745:
  1000:0745     0C 80            OR AL,0x80
  1000:0747     C3               RET

LAB_1000_0748:
  1000:0748     B8 00 0F         MOV AX,0xf00
  1000:074b     E8 24 00         CALL 0x1000:0772
  1000:074e     FE CE            DEC DH
  1000:0750     78 03            JS 0x1000:0755
  1000:0752     E9 6D FF         JMP 0x1000:06c2

LAB_1000_0755:
  1000:0755     8A F2            MOV DH,DL
  1000:0757     FE CE            DEC DH
  1000:0759     E9 66 FF         JMP 0x1000:06c2

LAB_1000_075c:
  1000:075c     B8 00 0F         MOV AX,0xf00
  1000:075f     E8 10 00         CALL 0x1000:0772
  1000:0762     FE C6            INC DH
  1000:0764     8A C6            MOV AL,DH
  1000:0766     3A C2            CMP AL,DL
  1000:0768     73 03            JNC 0x1000:076d
  1000:076a     E9 55 FF         JMP 0x1000:06c2

LAB_1000_076d:
  1000:076d     B6 00            MOV DH,0x0
  1000:076f     E9 50 FF         JMP 0x1000:06c2

FUN_1000_0772:
  1000:0772     52               PUSH DX
  1000:0773     8A EE            MOV CH,DH
  1000:0775     FE C5            INC CH
  1000:0777     2E 8B 1E FE 01   MOV BX,word ptr CS:[0x1fe]
  1000:077c     81 EB 02 08      SUB BX,0x802
  1000:0780     BA 00 08         MOV DX,0x800

LAB_1000_0783:
  1000:0783     03 DA            ADD BX,DX
  1000:0785     FE CD            DEC CH
  1000:0787     75 FA            JNZ 0x1000:0783
  1000:0789     8B FB            MOV DI,BX
  1000:078b     8B D8            MOV BX,AX
  1000:078d     B6 08            MOV DH,0x8
  1000:078f     B2 02            MOV DL,0x2
  1000:0791     BE 20 26         MOV SI,0x2620
  1000:0794     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:0799     74 09            JZ 0x1000:07a4
  1000:079b     BD 16 00         MOV BP,0x16
  1000:079e     FF 1E 08 05      CALLF [0x508]
  1000:07a2     EB 07            JMP 0x1000:07ab

LAB_1000_07a4:
  1000:07a4     BD 14 00         MOV BP,0x14
  1000:07a7     FF 1E 08 05      CALLF [0x508]

LAB_1000_07ab:
  1000:07ab     5A               POP DX
  1000:07ac     C3               RET

FUN_1000_07ad:
  1000:07ad     57               PUSH DI
  1000:07ae     52               PUSH DX
  1000:07af     53               PUSH BX

caseD_9d:
  1000:07b0     B3 0F            MOV BL,0xf
  1000:07b2     BF 00 66         MOV DI,0x6600
  1000:07b5     B6 60            MOV DH,0x60
  1000:07b7     B2 50            MOV DL,0x50
  1000:07b9     BD 10 00         MOV BP,0x10
  1000:07bc     FF 1E 08 05      CALLF [0x508]
  1000:07c0     5B               POP BX
  1000:07c1     5A               POP DX
  1000:07c2     5F               POP DI
  1000:07c3     C3               RET

FUN_1000_07c4:
  1000:07c4     57               PUSH DI
  1000:07c5     52               PUSH DX
  1000:07c6     53               PUSH BX
  1000:07c7     B3 0F            MOV BL,0xf
  1000:07c9     BF 00 78         MOV DI,0x7800
  1000:07cc     B6 50            MOV DH,0x50
  1000:07ce     B2 50            MOV DL,0x50
  1000:07d0     BD 10 00         MOV BP,0x10
  1000:07d3     FF 1E 08 05      CALLF [0x508]
  1000:07d7     5B               POP BX
  1000:07d8     5A               POP DX
  1000:07d9     5F               POP DI
  1000:07da     C3               RET

caseD_cb:
  1000:0801     3C 3C            CMP AL,0x3c
  1000:0803     3C 3C            CMP AL,0x3c
  1000:0805     3C 07            CMP AL,0x7
  1000:0807     07               POP ES
  1000:0808     00 00            ADD byte ptr [BX + SI],AL

LAB_1000_080a:
  1000:080a     00 00            ADD byte ptr [BX + SI],AL

LAB_1000_080c:
  1000:080c     00 00            ADD byte ptr [BX + SI],AL

FUN_1000_080e:
  1000:080e     1E               PUSH DS
  1000:080f     8C D8            MOV AX,DS
  1000:0811     2E A3 0C 08      MOV CS:[0x80c],AX
  1000:0815     2E 89 1E 0A 08   MOV word ptr CS:[0x80a],BX
  1000:081a     87 D3            XCHG BX,DX
  1000:081c     2E 8A 07         MOV AL,byte ptr CS:[BX]
  1000:081f     FF 1E 9F 05      CALLF [0x59f]
  1000:0823     87 D3            XCHG BX,DX
  1000:0825     8C D8            MOV AX,DS
  1000:0827     8E C0            MOV ES,AX
  1000:0829     8C C8            MOV AX,CS
  1000:082b     8E D8            MOV DS,AX
  1000:082d     42               INC DX
  1000:082e     BB 0A 08         MOV BX,0x80a
  1000:0831     26 FF 1E CF 05   CALLF [0x5cf]
  1000:0836     1F               POP DS
  1000:0837     C3               RET

FUN_1000_0867:
  1000:0867     51               PUSH CX
  1000:0868     57               PUSH DI
  1000:0869     8B D3            MOV DX,BX
  1000:086b     8B DF            MOV BX,DI
  1000:086d     E8 9E FF         CALL 0x1000:080e
  1000:0870     5B               POP BX
  1000:0871     5F               POP DI
  1000:0872     EB 17            JMP 0x1000:088b

FUN_1000_088b:
  1000:088b     06               PUSH ES
  1000:088c     56               PUSH SI
  1000:088d     8C D8            MOV AX,DS
  1000:088f     8E C0            MOV ES,AX
  1000:0891     8B F3            MOV SI,BX
  1000:0893     32 ED            XOR CH,CH

LAB_1000_0895:
  1000:0895     AC               LODSB SI
  1000:0896     8A D8            MOV BL,AL
  1000:0898     80 E3 3F         AND BL,0x3f
  1000:089b     FE C3            INC BL
  1000:089d     8A CB            MOV CL,BL
  1000:089f     8A D8            MOV BL,AL
  1000:08a1     80 E3 C0         AND BL,0xc0
  1000:08a4     74 20            JZ 0x1000:08c6
  1000:08a6     D0 C3            ROL BL,0x1
  1000:08a8     73 16            JNC 0x1000:08c0
  1000:08aa     D0 C3            ROL BL,0x1
  1000:08ac     73 04            JNC 0x1000:08b2
  1000:08ae     F3 A4            MOVSB.REP ES:DI,SI
  1000:08b0     EB E3            JMP 0x1000:0895

LAB_1000_08b2:
  1000:08b2     8A C1            MOV AL,CL
  1000:08b4     FE C8            DEC AL
  1000:08b6     74 05            JZ 0x1000:08bd
  1000:08b8     AC               LODSB SI
  1000:08b9     F3 AA            STOSB.REP ES:DI
  1000:08bb     EB D8            JMP 0x1000:0895

LAB_1000_08bd:
  1000:08bd     5E               POP SI
  1000:08be     07               POP ES
  1000:08bf     C3               RET

LAB_1000_08c0:
  1000:08c0     B0 FF            MOV AL,0xff
  1000:08c2     F3 AA            STOSB.REP ES:DI
  1000:08c4     EB CF            JMP 0x1000:0895

LAB_1000_08c6:
  1000:08c6     32 C0            XOR AL,AL
  1000:08c8     F3 AA            STOSB.REP ES:DI
  1000:08ca     EB C9            JMP 0x1000:0895

FUN_1000_08cc:
  1000:08cc     2E A0 06 0B      MOV AL,CS:[0xb06]
  1000:08d0     8A E0            MOV AH,AL
  1000:08d2     02 C0            ADD AL,AL
  1000:08d4     02 C0            ADD AL,AL
  1000:08d6     02 C0            ADD AL,AL
  1000:08d8     02 C4            ADD AL,AH
  1000:08da     8A E0            MOV AH,AL
  1000:08dc     2E A0 08 0B      MOV AL,CS:[0xb08]
  1000:08e0     02 C4            ADD AL,AH
  1000:08e2     D0 C8            ROR AL,0x1
  1000:08e4     2E A2 06 0B      MOV CS:[0xb06],AL
  1000:08e8     C3               RET

FUN_1000_09e0:
  1000:09e0     B4 FF            MOV AH,0xff
  1000:09e2     A0 6B 05         MOV AL,[0x56b]
  1000:09e5     B1 06            MOV CL,0x6
  1000:09e7     A8 02            TEST AL,0x2
  1000:09e9     75 02            JNZ 0x1000:09ed
  1000:09eb     32 E1            XOR AH,CL

LAB_1000_09ed:
  1000:09ed     B1 02            MOV CL,0x2
  1000:09ef     A8 04            TEST AL,0x4
  1000:09f1     75 02            JNZ 0x1000:09f5
  1000:09f3     32 E1            XOR AH,CL

LAB_1000_09f5:
  1000:09f5     B1 0A            MOV CL,0xa
  1000:09f7     A8 08            TEST AL,0x8
  1000:09f9     75 02            JNZ 0x1000:09fd
  1000:09fb     32 E1            XOR AH,CL

LAB_1000_09fd:
  1000:09fd     B1 04            MOV CL,0x4
  1000:09ff     A8 10            TEST AL,0x10
  1000:0a01     75 02            JNZ 0x1000:0a05
  1000:0a03     32 E1            XOR AH,CL

LAB_1000_0a05:
  1000:0a05     B1 08            MOV CL,0x8
  1000:0a07     A8 40            TEST AL,0x40
  1000:0a09     75 02            JNZ 0x1000:0a0d
  1000:0a0b     32 E1            XOR AH,CL

LAB_1000_0a0d:
  1000:0a0d     B1 05            MOV CL,0x5
  1000:0a0f     A8 80            TEST AL,0x80
  1000:0a11     75 02            JNZ 0x1000:0a15
  1000:0a13     32 E1            XOR AH,CL

LAB_1000_0a15:
  1000:0a15     A0 6C 05         MOV AL,[0x56c]
  1000:0a18     B1 01            MOV CL,0x1
  1000:0a1a     A8 01            TEST AL,0x1
  1000:0a1c     75 02            JNZ 0x1000:0a20
  1000:0a1e     32 E1            XOR AH,CL

LAB_1000_0a20:
  1000:0a20     B1 09            MOV CL,0x9
  1000:0a22     A8 02            TEST AL,0x2
  1000:0a24     75 02            JNZ 0x1000:0a28
  1000:0a26     32 E1            XOR AH,CL

LAB_1000_0a28:
  1000:0a28     80 3E 55 05 01   CMP byte ptr [0x555],0x1
  1000:0a2d     75 14            JNZ 0x1000:0a43
  1000:0a2f     50               PUSH AX
  1000:0a30     55               PUSH BP
  1000:0a31     BD 02 00         MOV BP,0x2
  1000:0a34     FF 1E 00 05      CALLF [0x500]
  1000:0a38     5D               POP BP
  1000:0a39     8A C8            MOV CL,AL
  1000:0a3b     58               POP AX
  1000:0a3c     80 E1 0F         AND CL,0xf
  1000:0a3f     F6 D1            NOT CL
  1000:0a41     22 E1            AND AH,CL

LAB_1000_0a43:
  1000:0a43     F6 D4            NOT AH
  1000:0a45     8A C4            MOV AL,AH
  1000:0a47     24 0F            AND AL,0xf
  1000:0a49     C3               RET

FUN_1000_0a4a:
  1000:0a4a     B4 FF            MOV AH,0xff
  1000:0a4c     A0 70 05         MOV AL,[0x570]
  1000:0a4f     B1 FE            MOV CL,0xfe
  1000:0a51     A8 01            TEST AL,0x1
  1000:0a53     75 02            JNZ 0x1000:0a57
  1000:0a55     22 E1            AND AH,CL

LAB_1000_0a57:
  1000:0a57     B1 FD            MOV CL,0xfd
  1000:0a59     A8 04            TEST AL,0x4
  1000:0a5b     75 02            JNZ 0x1000:0a5f
  1000:0a5d     22 E1            AND AH,CL

LAB_1000_0a5f:
  1000:0a5f     A0 74 05         MOV AL,[0x574]
  1000:0a62     B1 FE            MOV CL,0xfe
  1000:0a64     A8 40            TEST AL,0x40
  1000:0a66     75 02            JNZ 0x1000:0a6a
  1000:0a68     22 E1            AND AH,CL

LAB_1000_0a6a:
  1000:0a6a     B1 FD            MOV CL,0xfd
  1000:0a6c     A8 80            TEST AL,0x80
  1000:0a6e     75 02            JNZ 0x1000:0a72
  1000:0a70     22 E1            AND AH,CL

LAB_1000_0a72:
  1000:0a72     A0 6C 05         MOV AL,[0x56c]
  1000:0a75     B1 FE            MOV CL,0xfe
  1000:0a77     A8 80            TEST AL,0x80
  1000:0a79     75 02            JNZ 0x1000:0a7d
  1000:0a7b     22 E1            AND AH,CL

LAB_1000_0a7d:
  1000:0a7d     A0 73 05         MOV AL,[0x573]
  1000:0a80     B1 FD            MOV CL,0xfd
  1000:0a82     A8 40            TEST AL,0x40
  1000:0a84     75 02            JNZ 0x1000:0a88
  1000:0a86     22 E1            AND AH,CL

LAB_1000_0a88:
  1000:0a88     80 3E 55 05 01   CMP byte ptr [0x555],0x1
  1000:0a8d     75 1D            JNZ 0x1000:0aac
  1000:0a8f     50               PUSH AX
  1000:0a90     55               PUSH BP
  1000:0a91     BD 02 00         MOV BP,0x2
  1000:0a94     FF 1E 00 05      CALLF [0x500]
  1000:0a98     5D               POP BP
  1000:0a99     8A C8            MOV CL,AL
  1000:0a9b     D0 E9            SHR CL,0x1
  1000:0a9d     D0 E9            SHR CL,0x1
  1000:0a9f     D0 E9            SHR CL,0x1
  1000:0aa1     D0 E9            SHR CL,0x1
  1000:0aa3     D0 E9            SHR CL,0x1
  1000:0aa5     D0 E9            SHR CL,0x1
  1000:0aa7     58               POP AX
  1000:0aa8     F6 D1            NOT CL
  1000:0aaa     22 E1            AND AH,CL

LAB_1000_0aac:
  1000:0aac     86 E0            XCHG AL,AH
  1000:0aae     F6 D0            NOT AL
  1000:0ab0     24 03            AND AL,0x3
  1000:0ab2     C3               RET

caseD_6d:
  1000:0ab8     04 00            ADD AL,0x0
  1000:0aba     FF 1E 00 05      CALLF [0x500]
  1000:0abe     5D               POP BP
  1000:0abf     8A C8            MOV CL,AL
  1000:0ac1     58               POP AX
  1000:0ac2     59               POP CX
  1000:0ac3     C3               RET

FUN_1000_0ac4:
  1000:0ac4     E8 83 FF         CALL 0x1000:0a4a
  1000:0ac7     0A C0            OR AL,AL
  1000:0ac9     75 01            JNZ 0x1000:0acc
  1000:0acb     C3               RET

LAB_1000_0acc:
  1000:0acc     F9               STC
  1000:0acd     C3               RET

LAB_1000_0ad1:
  1000:0ad1     51               PUSH CX
  1000:0ad2     E8 EF FF         CALL 0x1000:0ac4
  1000:0ad5     59               POP CX
  1000:0ad6     73 01            JNC 0x1000:0ad9
  1000:0ad8     C3               RET

caseD_a2:
  1000:0ad9     E8 64 00         CALL 0x1000:0b40
  1000:0adc     72 F3            JC 0x1000:0ad1
  1000:0ade     C3               RET

FUN_1000_0b40:
  1000:0b40     53               PUSH BX
  1000:0b41     2E 8B 1E 00 0B   MOV BX,word ptr CS:[0xb00]
  1000:0b46     2B D9            SUB BX,CX
  1000:0b48     5B               POP BX
  1000:0b49     C3               RET

FUN_1000_0b4a:
  1000:0b4a     E8 43 00         CALL 0x1000:0b90

LAB_1000_0b4d:
  1000:0b4d     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:0b52     75 04            JNZ 0x1000:0b58
  1000:0b54     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_0b58:
  1000:0b58     2E 39 0E 00 0B   CMP word ptr CS:[0xb00],CX
  1000:0b5d     72 EE            JC 0x1000:0b4d
  1000:0b5f     C3               RET

FUN_1000_0b90:
  1000:0b90     FA               CLI
  1000:0b91     2E C7 06 00 0B 00 00   MOV word ptr CS:[0xb00],0x0
  1000:0b98     FB               STI
  1000:0b99     C3               RET

FUN_1000_0ba7:
  1000:0ba7     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:0bac     75 04            JNZ 0x1000:0bb2
  1000:0bae     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_0bb2:
  1000:0bb2     F6 06 6C 05 80   TEST byte ptr [0x56c],0x80
  1000:0bb7     75 05            JNZ 0x1000:0bbe
  1000:0bb9     B0 01            MOV AL,0x1
  1000:0bbb     EB 0A            JMP 0x1000:0bc7

LAB_1000_0bbe:
  1000:0bbe     2E 39 0E 00 0B   CMP word ptr CS:[0xb00],CX
  1000:0bc3     72 E2            JC 0x1000:0ba7
  1000:0bc5     B0 00            MOV AL,0x0

LAB_1000_0bc7:
  1000:0bc7     C3               RET

LAB_1000_0cde:
  1000:0cde     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:0ce1     3C 00            CMP AL,0x0
  1000:0ce3     74 28            JZ 0x1000:0d0d
  1000:0ce5     3C 08            CMP AL,0x8
  1000:0ce7     7D 14            JGE 0x1000:0cfd
  1000:0ce9     04 08            ADD AL,0x8
  1000:0ceb     2E 88 04         MOV byte ptr CS:[SI],AL
  1000:0cee     8A F8            MOV BH,AL
  1000:0cf0     B3 08            MOV BL,0x8
  1000:0cf2     2A D9            SUB BL,CL
  1000:0cf4     BD 06 00         MOV BP,0x6
  1000:0cf7     FF 1E 08 05      CALLF [0x508]
  1000:0cfb     EB 10            JMP 0x1000:0d0d

LAB_1000_0cfd:
  1000:0cfd     B7 00            MOV BH,0x0
  1000:0cff     2E 88 3C         MOV byte ptr CS:[SI],BH
  1000:0d02     B3 08            MOV BL,0x8
  1000:0d04     2A D9            SUB BL,CL

caseD_77:
  1000:0d06     BD 06 00         MOV BP,0x6
  1000:0d09     FF 1E 08 05      CALLF [0x508]

LAB_1000_0d0d:
  1000:0d0d     46               INC SI
  1000:0d0e     E2 CE            LOOP 0x1000:0cde
  1000:0d10     2E FE 0E 7B 0C   DEC byte ptr CS:[0xc7b]
  1000:0d15     75 06            JNZ 0x1000:0d1d
  1000:0d17     2E C6 06 78 0C 00   MOV byte ptr CS:[0xc78],0x0

LAB_1000_0d1d:
  1000:0d1d     5B               POP BX
  1000:0d1e     59               POP CX
  1000:0d1f     5E               POP SI
  1000:0d20     5F               POP DI
  1000:0d21     C3               RET

FUN_1000_0d22:
  1000:0d22     BB 70 0C         MOV BX,0xc70

FUN_1000_0d25:
  1000:0d25     56               PUSH SI
  1000:0d26     57               PUSH DI
  1000:0d27     51               PUSH CX
  1000:0d28     8B F3            MOV SI,BX
  1000:0d2a     BF 7E 0C         MOV DI,0xc7e
  1000:0d2d     B9 08 00         MOV CX,0x8

LAB_1000_0d30:
  1000:0d30     2E 8A 3C         MOV BH,byte ptr CS:[SI]
  1000:0d33     2E 88 3D         MOV byte ptr CS:[DI],BH
  1000:0d36     47               INC DI
  1000:0d37     46               INC SI
  1000:0d38     B3 08            MOV BL,0x8
  1000:0d3a     2A D9            SUB BL,CL
  1000:0d3c     BD 06 00         MOV BP,0x6
  1000:0d3f     FF 1E 08 05      CALLF [0x508]
  1000:0d43     E2 EB            LOOP 0x1000:0d30
  1000:0d45     59               POP CX
  1000:0d46     5F               POP DI
  1000:0d47     5E               POP SI
  1000:0d48     C3               RET

FUN_1000_0d49:
  1000:0d49     B7 00            MOV BH,0x0
  1000:0d4b     EB 02            JMP 0x1000:0d4f

LAB_1000_0d4f:
  1000:0d4f     57               PUSH DI
  1000:0d50     51               PUSH CX
  1000:0d51     BF 7E 0C         MOV DI,0xc7e
  1000:0d54     B9 08 00         MOV CX,0x8

LAB_1000_0d57:
  1000:0d57     8A D9            MOV BL,CL
  1000:0d59     BD 06 00         MOV BP,0x6
  1000:0d5c     FF 1E 08 05      CALLF [0x508]
  1000:0d60     2E 88 3D         MOV byte ptr CS:[DI],BH
  1000:0d63     47               INC DI
  1000:0d64     E2 F1            LOOP 0x1000:0d57
  1000:0d66     59               POP CX
  1000:0d67     5F               POP DI
  1000:0d68     C3               RET

FUN_1000_0d78:
  1000:0d78     B0 14            MOV AL,0x14
  1000:0d7a     2E A2 7A 0C      MOV CS:[0xc7a],AL
  1000:0d7e     B0 02            MOV AL,0x2
  1000:0d80     FA               CLI
  1000:0d81     2E A2 78 0C      MOV CS:[0xc78],AL
  1000:0d85     2E C6 06 7B 0C 08   MOV byte ptr CS:[0xc7b],0x8
  1000:0d8b     2E A0 7A 0C      MOV AL,CS:[0xc7a]
  1000:0d8f     2E A2 79 0C      MOV CS:[0xc79],AL
  1000:0d93     FB               STI
  1000:0d94     C3               RET

LAB_1000_0d9e:
  1000:0d9e     2E A0 78 0C      MOV AL,CS:[0xc78]

caseD_67:
  1000:0da2     0A C0            OR AL,AL
  1000:0da4     75 F8            JNZ 0x1000:0d9e
  1000:0da6     C3               RET

caseD_69:
  1000:0e26     B8 2E 11         MOV AX,0x112e
  1000:0e29     8B C4            MOV AX,SP
  1000:0e2b     2E A3 22 0E      MOV CS:[0xe22],AX
  1000:0e2f     BD 0E 00         MOV BP,0xe
  1000:0e32     FF 1E 08 05      CALLF [0x508]
  1000:0e36     B4 5C            MOV AH,0x5c
  1000:0e38     B0 01            MOV AL,0x1
  1000:0e3a     FF 1E AB 05      CALLF [0x5ab]
  1000:0e3e     E8 E1 FE         CALL 0x1000:0d22
  1000:0e41     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:0e46     74 3E            JZ 0x1000:0e86
  1000:0e48     BB 08 0E         MOV BX,0xe08
  1000:0e4b     BF 40 36         MOV DI,0x3640
  1000:0e4e     B9 C0 74         MOV CX,0x74c0
  1000:0e51     E8 13 FA         CALL 0x1000:0867
  1000:0e54     B0 00            MOV AL,0x0
  1000:0e56     BE C0 74         MOV SI,0x74c0
  1000:0e59     BF 40 36         MOV DI,0x3640
  1000:0e5c     E8 E5 0D         CALL 0x1000:1c44
  1000:0e5f     2E C7 06 1E 0E 40 36   MOV word ptr CS:[0xe1e],0x3640
  1000:0e66     BB 12 0E         MOV BX,0xe12
  1000:0e69     BF 80 55         MOV DI,0x5580
  1000:0e6c     B9 D0 9B         MOV CX,0x9bd0
  1000:0e6f     E8 F5 F9         CALL 0x1000:0867
  1000:0e72     B0 01            MOV AL,0x1
  1000:0e74     BE D0 9B         MOV SI,0x9bd0
  1000:0e77     BF 80 55         MOV DI,0x5580
  1000:0e7a     E8 C7 0D         CALL 0x1000:1c44
  1000:0e7d     2E C7 06 20 0E 80 55   MOV word ptr CS:[0xe20],0x5580
  1000:0e84     EB 26            JMP 0x1000:0eac

LAB_1000_0e86:
  1000:0e86     BB 08 0E         MOV BX,0xe08
  1000:0e89     BF 40 36         MOV DI,0x3640
  1000:0e8c     B9 68 59         MOV CX,0x5968
  1000:0e8f     2E C7 06 1E 0E 68 59   MOV word ptr CS:[0xe1e],0x5968
  1000:0e96     E8 CE F9         CALL 0x1000:0867
  1000:0e99     BB 12 0E         MOV BX,0xe12
  1000:0e9c     BF 40 36         MOV DI,0x3640
  1000:0e9f     B9 90 7C         MOV CX,0x7c90
  1000:0ea2     2E C7 06 20 0E 90 7C   MOV word ptr CS:[0xe20],0x7c90
  1000:0ea9     E8 BB F9         CALL 0x1000:0867

LAB_1000_0eac:
  1000:0eac     B0 80            MOV AL,0x80
  1000:0eae     B5 19            MOV CH,0x19
  1000:0eb0     B1 37            MOV CL,0x37
  1000:0eb2     E8 C6 00         CALL 0x1000:0f7b
  1000:0eb5     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:0eba     75 2B            JNZ 0x1000:0ee7
  1000:0ebc     2E 8B 36 1E 0E   MOV SI,word ptr CS:[0xe1e]
  1000:0ec1     BB 00 07         MOV BX,0x700
  1000:0ec4     E8 F7 00         CALL 0x1000:0fbe
  1000:0ec7     BB 01 01         MOV BX,0x101
  1000:0eca     E8 F1 00         CALL 0x1000:0fbe
  1000:0ecd     BB 02 02         MOV BX,0x202
  1000:0ed0     E8 EB 00         CALL 0x1000:0fbe
  1000:0ed3     BB 04 04         MOV BX,0x404
  1000:0ed6     E8 E5 00         CALL 0x1000:0fbe
  1000:0ed9     BB 06 07         MOV BX,0x706
  1000:0edc     E8 EE 00         CALL 0x1000:0fcd
  1000:0edf     BB 07 07         MOV BX,0x707
  1000:0ee2     E8 E8 00         CALL 0x1000:0fcd
  1000:0ee5     EB 0E            JMP 0x1000:0ef5

LAB_1000_0ee7:
  1000:0ee7     2E 8B 36 1E 0E   MOV SI,word ptr CS:[0xe1e]
  1000:0eec     E8 ED 00         CALL 0x1000:0fdc
  1000:0eef     E8 F9 00         CALL 0x1000:0feb
  1000:0ef2     E8 05 01         CALL 0x1000:0ffa

LAB_1000_0ef5:
  1000:0ef5     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:0efa     74 2C            JZ 0x1000:0f28
  1000:0efc     2E 8B 36 20 0E   MOV SI,word ptr CS:[0xe20]
  1000:0f01     E8 14 01         CALL 0x1000:1018
  1000:0f04     E8 20 01         CALL 0x1000:1027
  1000:0f07     2E 80 3E 0D 02 02   CMP byte ptr CS:[0x20d],0x2
  1000:0f0d     75 17            JNZ 0x1000:0f26
  1000:0f0f     BB FE 0D         MOV BX,0xdfe
  1000:0f12     BF 40 36         MOV DI,0x3640
  1000:0f15     B9 40 3E         MOV CX,0x3e40
  1000:0f18     E8 4C F9         CALL 0x1000:0867
  1000:0f1b     B0 02            MOV AL,0x2
  1000:0f1d     BE 40 3E         MOV SI,0x3e40
  1000:0f20     BF 40 46         MOV DI,0x4640
  1000:0f23     E8 1E 0D         CALL 0x1000:1c44

LAB_1000_0f26:
  1000:0f26     EB 31            JMP 0x1000:0f59

LAB_1000_0f28:
  1000:0f28     2E 8B 36 20 0E   MOV SI,word ptr CS:[0xe20]
  1000:0f2d     BB 00 07         MOV BX,0x700
  1000:0f30     E8 D6 00         CALL 0x1000:1009
  1000:0f33     BB 01 01         MOV BX,0x101
  1000:0f36     E8 D0 00         CALL 0x1000:1009
  1000:0f39     BB 02 02         MOV BX,0x202
  1000:0f3c     E8 CA 00         CALL 0x1000:1009
  1000:0f3f     BB 04 04         MOV BX,0x404
  1000:0f42     E8 C4 00         CALL 0x1000:1009
  1000:0f45     2E 80 3E 0D 02 02   CMP byte ptr CS:[0x20d],0x2
  1000:0f4b     75 0C            JNZ 0x1000:0f59
  1000:0f4d     BB FE 0D         MOV BX,0xdfe
  1000:0f50     BF 40 36         MOV DI,0x3640
  1000:0f53     B9 40 46         MOV CX,0x4640
  1000:0f56     E8 0E F9         CALL 0x1000:0867

LAB_1000_0f59:
  1000:0f59     2E 80 3E 0D 02 01   CMP byte ptr CS:[0x20d],0x1
  1000:0f5f     74 10            JZ 0x1000:0f71
  1000:0f61     2E C7 06 24 0E D0 07   MOV word ptr CS:[0xe24],0x7d0
  1000:0f68     BE 15 19         MOV SI,0x1915
  1000:0f6b     BB 02 14         MOV BX,0x1402
  1000:0f6e     E8 FD 00         CALL 0x1000:106e

LAB_1000_0f71:
  1000:0f71     2E C7 06 24 0E E8 03   MOV word ptr CS:[0xe24],0x3e8
  1000:0f78     E9 BB 00         JMP 0x1000:1036

FUN_1000_0f7b:
  1000:0f7b     50               PUSH AX
  1000:0f7c     51               PUSH CX

LAB_1000_0f7d:
  1000:0f7d     E8 4C F9         CALL 0x1000:08cc
  1000:0f80     8A D0            MOV DL,AL

LAB_1000_0f82:
  1000:0f82     E8 47 F9         CALL 0x1000:08cc
  1000:0f85     24 03            AND AL,0x3
  1000:0f87     3C 03            CMP AL,0x3
  1000:0f89     74 F7            JZ 0x1000:0f82
  1000:0f8b     8A F0            MOV DH,AL
  1000:0f8d     3C 02            CMP AL,0x2
  1000:0f8f     72 09            JC 0x1000:0f9a

LAB_1000_0f91:
  1000:0f91     E8 38 F9         CALL 0x1000:08cc
  1000:0f94     3C 80            CMP AL,0x80
  1000:0f96     73 F9            JNC 0x1000:0f91
  1000:0f98     8A D0            MOV DL,AL

LAB_1000_0f9a:
  1000:0f9a     81 FA 58 02      CMP DX,0x258
  1000:0f9e     7F DD            JG 0x1000:0f7d
  1000:0fa0     E8 29 F9         CALL 0x1000:08cc
  1000:0fa3     3C 78            CMP AL,0x78
  1000:0fa5     73 F3            JNC 0x1000:0f9a
  1000:0fa7     02 C5            ADD AL,CH
  1000:0fa9     8A D8            MOV BL,AL
  1000:0fab     B7 00            MOV BH,0x0
  1000:0fad     B9 07 07         MOV CX,0x707
  1000:0fb0     BD 32 00         MOV BP,0x32
  1000:0fb3     FF 1E 08 05      CALLF [0x508]
  1000:0fb7     59               POP CX
  1000:0fb8     58               POP AX
  1000:0fb9     FE C8            DEC AL
  1000:0fbb     75 BE            JNZ 0x1000:0f7b
  1000:0fbd     C3               RET

FUN_1000_0fbe:
  1000:0fbe     BF 17 19         MOV DI,0x1917
  1000:0fc1     B6 37            MOV DH,0x37
  1000:0fc3     B2 1B            MOV DL,0x1b
  1000:0fc5     BD 14 00         MOV BP,0x14
  1000:0fc8     FF 1E 08 05      CALLF [0x508]
  1000:0fcc     C3               RET

FUN_1000_0fcd:
  1000:0fcd     BF 17 50         MOV DI,0x5017
  1000:0fd0     B6 1D            MOV DH,0x1d
  1000:0fd2     B2 1B            MOV DL,0x1b
  1000:0fd4     BD 14 00         MOV BP,0x14
  1000:0fd7     FF 1E 08 05      CALLF [0x508]
  1000:0fdb     C3               RET

FUN_1000_0fdc:
  1000:0fdc     BF 17 19         MOV DI,0x1917
  1000:0fdf     B6 37            MOV DH,0x37
  1000:0fe1     B2 1B            MOV DL,0x1b
  1000:0fe3     BD 46 00         MOV BP,0x46
  1000:0fe6     FF 1E 08 05      CALLF [0x508]
  1000:0fea     C3               RET

FUN_1000_0feb:
  1000:0feb     BF 17 19         MOV DI,0x1917
  1000:0fee     B6 37            MOV DH,0x37
  1000:0ff0     B2 1B            MOV DL,0x1b
  1000:0ff2     BD 4A 00         MOV BP,0x4a
  1000:0ff5     FF 1E 08 05      CALLF [0x508]
  1000:0ff9     C3               RET

FUN_1000_0ffa:
  1000:0ffa     BF 17 50         MOV DI,0x5017
  1000:0ffd     B6 1D            MOV DH,0x1d
  1000:0fff     B2 1B            MOV DL,0x1b
  1000:1001     BD 4A 00         MOV BP,0x4a
  1000:1004     FF 1E 08 05      CALLF [0x508]
  1000:1008     C3               RET

FUN_1000_1009:
  1000:1009     BF 0A 50         MOV DI,0x500a
  1000:100c     B6 41            MOV DH,0x41
  1000:100e     B2 42            MOV DL,0x42
  1000:1010     BD 14 00         MOV BP,0x14
  1000:1013     FF 1E 08 05      CALLF [0x508]
  1000:1017     C3               RET

FUN_1000_1018:
  1000:1018     BF 0A 50         MOV DI,0x500a
  1000:101b     B6 41            MOV DH,0x41
  1000:101d     B2 42            MOV DL,0x42
  1000:101f     BD 46 00         MOV BP,0x46
  1000:1022     FF 1E 08 05      CALLF [0x508]
  1000:1026     C3               RET

FUN_1000_1027:
  1000:1027     BF 0A 50         MOV DI,0x500a
  1000:102a     B6 41            MOV DH,0x41
  1000:102c     B2 42            MOV DL,0x42
  1000:102e     BD 4A 00         MOV BP,0x4a
  1000:1031     FF 1E 08 05      CALLF [0x508]
  1000:1035     C3               RET

FUN_1000_1036:
  1000:1036     B9 C8 00         MOV CX,0xc8
  1000:1039     E8 49 01         CALL 0x1000:1185
  1000:103c     E8 EF 00         CALL 0x1000:112e
  1000:103f     B9 96 00         MOV CX,0x96
  1000:1042     E8 40 01         CALL 0x1000:1185
  1000:1045     BE BC 11         MOV SI,0x11bc
  1000:1048     BB 02 14         MOV BX,0x1402
  1000:104b     E8 20 00         CALL 0x1000:106e
  1000:104e     B9 F4 01         MOV CX,0x1f4
  1000:1051     E8 31 01         CALL 0x1000:1185
  1000:1054     2E 80 3E 0D 02 02   CMP byte ptr CS:[0x20d],0x2
  1000:105a     75 09            JNZ 0x1000:1065
  1000:105c     BE 89 16         MOV SI,0x1689
  1000:105f     BB 02 14         MOV BX,0x1402
  1000:1062     E8 09 00         CALL 0x1000:106e

LAB_1000_1065:
  1000:1065     B9 5E 01         MOV CX,0x15e
  1000:1068     E8 1A 01         CALL 0x1000:1185
  1000:106b     EB 57            JMP 0x1000:10c4

FUN_1000_106e:
  1000:106e     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:1071     3C FF            CMP AL,0xff
  1000:1073     75 01            JNZ 0x1000:1076
  1000:1075     C3               RET

LAB_1000_1076:
  1000:1076     53               PUSH BX
  1000:1077     E8 B4 00         CALL 0x1000:112e
  1000:107a     B9 96 00         MOV CX,0x96
  1000:107d     E8 05 01         CALL 0x1000:1185
  1000:1080     5B               POP BX
  1000:1081     53               PUSH BX
  1000:1082     E8 0E 00         CALL 0x1000:1093
  1000:1085     E8 D1 00         CALL 0x1000:1159
  1000:1088     2E 8B 0E 24 0E   MOV CX,word ptr CS:[0xe24]
  1000:108d     E8 F5 00         CALL 0x1000:1185
  1000:1090     5B               POP BX
  1000:1091     EB DB            JMP 0x1000:106e

FUN_1000_1093:
  1000:1093     2E 89 1E 1C 0E   MOV word ptr CS:[0xe1c],BX
  1000:1098     8C C8            MOV AX,CS
  1000:109a     8E C0            MOV ES,AX
  1000:109c     B1 07            MOV CL,0x7
  1000:109e     BD 20 00         MOV BP,0x20
  1000:10a1     FF 1E 08 05      CALLF [0x508]
  1000:10a5     46               INC SI
  1000:10a6     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:10a9     3C 2F            CMP AL,0x2f
  1000:10ab     74 03            JZ 0x1000:10b0
  1000:10ad     C3               RET

LAB_1000_10b0:
  1000:10b0     2E 8B 1E 1C 0E   MOV BX,word ptr CS:[0xe1c]
  1000:10b5     81 C3 00 01      ADD BX,0x100

caseD_8c:
  1000:10b9     46               INC SI
  1000:10ba     2E 8A 04         MOV AL,byte ptr CS:[SI]
  1000:10bd     3C 2F            CMP AL,0x2f
  1000:10bf     74 EF            JZ 0x1000:10b0
  1000:10c1     EB D0            JMP 0x1000:1093

FUN_1000_10c4:
  1000:10c4     BD 1A 00         MOV BP,0x1a
  1000:10c7     FF 1E 08 05      CALLF [0x508]
  1000:10cb     E8 60 00         CALL 0x1000:112e
  1000:10ce     B9 F4 01         MOV CX,0x1f4
  1000:10d1     E8 B1 00         CALL 0x1000:1185
  1000:10d4     2E 80 3E 0D 02 02   CMP byte ptr CS:[0x20d],0x2
  1000:10da     75 1F            JNZ 0x1000:10fb
  1000:10dc     BE 40 46         MOV SI,0x4640
  1000:10df     BF 15 9D         MOV DI,0x9d15
  1000:10e2     B6 0A            MOV DH,0xa
  1000:10e4     B2 25            MOV DL,0x25
  1000:10e6     B8 EE FF         MOV AX,0xffee
  1000:10e9     B3 03            MOV BL,0x3
  1000:10eb     BD 12 00         MOV BP,0x12
  1000:10ee     FF 1E 08 05      CALLF [0x508]
  1000:10f2     E8 64 00         CALL 0x1000:1159
  1000:10f5     B9 64 00         MOV CX,0x64
  1000:10f8     E8 8A 00         CALL 0x1000:1185

LAB_1000_10fb:
  1000:10fb     B9 64 00         MOV CX,0x64
  1000:10fe     E8 84 00         CALL 0x1000:1185
  1000:1101     BE B0 0D         MOV SI,0xdb0
  1000:1104     BB 00 17         MOV BX,0x1700
  1000:1107     E8 89 FF         CALL 0x1000:1093
  1000:110a     BE D6 0D         MOV SI,0xdd6
  1000:110d     BB 00 18         MOV BX,0x1800
  1000:1110     E8 80 FF         CALL 0x1000:1093
  1000:1113     2E 8B 0E 24 0E   MOV CX,word ptr CS:[0xe24]
  1000:1118     E8 6A 00         CALL 0x1000:1185

LAB_1000_111b:
  1000:111b     FF 1E B3 05      CALLF [0x5b3]
  1000:111f     FF 1E BF 05      CALLF [0x5bf]
  1000:1123     FF 1E AF 05      CALLF [0x5af]
  1000:1127     2E A1 22 0E      MOV AX,CS:[0xe22]
  1000:112b     8B E0            MOV SP,AX
  1000:112d     C3               RET

FUN_1000_112e:
  1000:112e     06               PUSH ES
  1000:112f     1E               PUSH DS
  1000:1130     57               PUSH DI
  1000:1131     56               PUSH SI
  1000:1132     52               PUSH DX
  1000:1133     51               PUSH CX
  1000:1134     53               PUSH BX
  1000:1135     50               PUSH AX
  1000:1136     BD 1A 00         MOV BP,0x1a
  1000:1139     FF 1E 08 05      CALLF [0x508]
  1000:113d     BB 00 0F         MOV BX,0xf00
  1000:1140     B8 28 00         MOV AX,0x28
  1000:1143     B9 04 00         MOV CX,0x4
  1000:1146     BF 00 14         MOV DI,0x1400
  1000:1149     BD 2C 00         MOV BP,0x2c
  1000:114c     FF 1E 08 05      CALLF [0x508]
  1000:1150     58               POP AX
  1000:1151     5B               POP BX
  1000:1152     59               POP CX
  1000:1153     5A               POP DX
  1000:1154     5E               POP SI
  1000:1155     5F               POP DI
  1000:1156     1F               POP DS
  1000:1157     07               POP ES
  1000:1158     C3               RET

FUN_1000_1159:
  1000:1159     C3               RET

caseD_c1:
  1000:1175     BD 2C 00         MOV BP,0x2c
  1000:1178     FF 1E 08 05      CALLF [0x508]
  1000:117c     58               POP AX
  1000:117d     5B               POP BX
  1000:117e     59               POP CX
  1000:117f     5A               POP DX
  1000:1180     5E               POP SI
  1000:1181     5F               POP DI
  1000:1182     1F               POP DS
  1000:1183     07               POP ES
  1000:1184     C3               RET

FUN_1000_1185:
  1000:1185     E8 08 FA         CALL 0x1000:0b90

LAB_1000_1188:
  1000:1188     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:118d     75 04            JNZ 0x1000:1193
  1000:118f     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_1193:
  1000:1193     F6 06 6C 05 80   TEST byte ptr [0x56c],0x80
  1000:1198     75 03            JNZ 0x1000:119d
  1000:119a     E9 7E FF         JMP 0x1000:111b

LAB_1000_119d:
  1000:119d     80 3E 55 05 01   CMP byte ptr [0x555],0x1
  1000:11a2     75 10            JNZ 0x1000:11b4
  1000:11a4     55               PUSH BP
  1000:11a5     BD 02 00         MOV BP,0x2
  1000:11a8     FF 1E 00 05      CALLF [0x500]
  1000:11ac     5D               POP BP
  1000:11ad     A8 40            TEST AL,0x40
  1000:11af     74 03            JZ 0x1000:11b4
  1000:11b1     E9 67 FF         JMP 0x1000:111b

LAB_1000_11b4:
  1000:11b4     2E 39 0E 00 0B   CMP word ptr CS:[0xb00],CX
  1000:11b9     72 CD            JC 0x1000:1188
  1000:11bb     C3               RET

caseD_bc:
  1000:1620     20 48 49         AND byte ptr [BX + SI + 0x49],CL
  1000:1623     52               PUSH DX
  1000:1624     4F               DEC DI
  1000:1625     4D               DEC BP
  1000:1626     49               DEC CX
  1000:1627     20 4F 48         AND byte ptr [BX + 0x48],CL
  1000:162a     42               INC DX
  1000:162b     41               INC CX
  1000:162c     20 20            AND byte ptr [BX + SI],AH
  1000:162e     20 20            AND byte ptr [BX + SI],AH
  1000:1630     20 20            AND byte ptr [BX + SI],AH
  1000:1632     20 20            AND byte ptr [BX + SI],AH
  1000:1634     20 20            AND byte ptr [BX + SI],AH
  1000:1636     20 20            AND byte ptr [BX + SI],AH
  1000:1638     20 00            AND byte ptr [BX + SI],AL
  1000:163a     2F               DAS
  1000:163b     2F               DAS
  1000:163c     20 20            AND byte ptr [BX + SI],AH
  1000:163e     20 20            AND byte ptr [BX + SI],AH
  1000:1640     20 20            AND byte ptr [BX + SI],AH
  1000:1642     20 20            AND byte ptr [BX + SI],AH
  1000:1644     20 4D 41         AND byte ptr [DI + 0x41],CL
  1000:1647     53               PUSH BX
  1000:1648     41               INC CX
  1000:1649     48               DEC AX
  1000:164a     49               DEC CX
  1000:164b     4B               DEC BX
  1000:164c     4F               DEC DI
  1000:164d     20 59 4F         AND byte ptr [BX + DI + 0x4f],BL
  1000:1650     53               PUSH BX
  1000:1651     48               DEC AX
  1000:1652     49               DEC CX
  1000:1653     4D               DEC BP
  1000:1654     55               PUSH BP
  1000:1655     52               PUSH DX
  1000:1656     41               INC CX
  1000:1657     20 20            AND byte ptr [BX + SI],AH
  1000:1659     20 20            AND byte ptr [BX + SI],AH
  1000:165b     20 20            AND byte ptr [BX + SI],AH
  1000:165d     20 20            AND byte ptr [BX + SI],AH
  1000:165f     20 00            AND byte ptr [BX + SI],AL
  1000:1661     2F               DAS
  1000:1662     2F               DAS
  1000:1663     20 20            AND byte ptr [BX + SI],AH
  1000:1665     20 20            AND byte ptr [BX + SI],AH
  1000:1667     20 20            AND byte ptr [BX + SI],AH
  1000:1669     20 20            AND byte ptr [BX + SI],AH
  1000:166b     20 4D 45         AND byte ptr [DI + 0x45],CL
  1000:166e     43               INC BX
  1000:166f     41               INC CX
  1000:1670     4E               DEC SI
  1000:1671     4F               DEC DI
  1000:1672     20 41 53         AND byte ptr [BX + DI + 0x53],AL
  1000:1675     53               PUSH BX
  1000:1676     4F               DEC DI
  1000:1677     43               INC BX
  1000:1678     49               DEC CX
  1000:1679     41               INC CX
  1000:167a     54               PUSH SP
  1000:167b     45               INC BP
  1000:167c     53               PUSH BX
  1000:167d     20 20            AND byte ptr [BX + SI],AH
  1000:167f     20 20            AND byte ptr [BX + SI],AH
  1000:1681     20 20            AND byte ptr [BX + SI],AH
  1000:1683     20 20            AND byte ptr [BX + SI],AH
  1000:1685     20 20            AND byte ptr [BX + SI],AH
  1000:1687     00 FF            ADD BH,BH
  1000:1689     20 20            AND byte ptr [BX + SI],AH
  1000:168b     20 20            AND byte ptr [BX + SI],AH
  1000:168d     4D               DEC BP
  1000:168e     41               INC CX
  1000:168f     50               PUSH AX
  1000:1690     20 44 45         AND byte ptr [SI + 0x45],AL
  1000:1693     53               PUSH BX
  1000:1694     49               DEC CX
  1000:1695     47               INC DI
  1000:1696     4E               DEC SI
  1000:1697     45               INC BP
  1000:1698     52               PUSH DX
  1000:1699     2C 20            SUB AL,0x20
  1000:169b     47               INC DI
  1000:169c     41               INC CX
  1000:169d     4D               DEC BP
  1000:169e     45               INC BP
  1000:169f     20 41 52         AND byte ptr [BX + DI + 0x52],AL
  1000:16a2     52               PUSH DX
  1000:16a3     41               INC CX
  1000:16a4     4E               DEC SI
  1000:16a5     47               INC DI
  1000:16a6     49               DEC CX
  1000:16a7     4E               DEC SI
  1000:16a8     47               INC DI
  1000:16a9     20 20            AND byte ptr [BX + SI],AH
  1000:16ab     20 20            AND byte ptr [BX + SI],AH
  1000:16ad     00 2F            ADD byte ptr [BX],CH
  1000:16af     2F               DAS
  1000:16b0     20 20            AND byte ptr [BX + SI],AH
  1000:16b2     20 20            AND byte ptr [BX + SI],AH
  1000:16b4     20 20            AND byte ptr [BX + SI],AH
  1000:16b6     20 20            AND byte ptr [BX + SI],AH
  1000:16b8     20 20            AND byte ptr [BX + SI],AH
  1000:16ba     20 20            AND byte ptr [BX + SI],AH
  1000:16bc     4F               DEC DI
  1000:16bd     53               PUSH BX
  1000:16be     41               INC CX
  1000:16bf     4D               DEC BP
  1000:16c0     55               PUSH BP
  1000:16c1     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:16c4     52               PUSH DX
  1000:16c5     41               INC CX
  1000:16c6     44               INC SP
  1000:16c7     41               INC CX
  1000:16c8     20 20            AND byte ptr [BX + SI],AH
  1000:16ca     20 20            AND byte ptr [BX + SI],AH
  1000:16cc     20 20            AND byte ptr [BX + SI],AH
  1000:16ce     20 20            AND byte ptr [BX + SI],AH
  1000:16d0     20 20            AND byte ptr [BX + SI],AH
  1000:16d2     20 20            AND byte ptr [BX + SI],AH
  1000:16d4     00 20            ADD byte ptr [BX + SI],AH
  1000:16d6     20 20            AND byte ptr [BX + SI],AH
  1000:16d8     20 41 44         AND byte ptr [BX + DI + 0x44],AL
  1000:16db     44               INC SP
  1000:16dc     49               DEC CX
  1000:16dd     54               PUSH SP
  1000:16de     49               DEC CX
  1000:16df     4F               DEC DI
  1000:16e0     4E               DEC SI
  1000:16e1     41               INC CX
  1000:16e2     4C               DEC SP
  1000:16e3     20 47 52         AND byte ptr [BX + 0x52],AL
  1000:16e6     41               INC CX
  1000:16e7     50               PUSH AX
  1000:16e8     48               DEC AX
  1000:16e9     49               DEC CX
  1000:16ea     43               INC BX
  1000:16eb     20 44 45         AND byte ptr [SI + 0x45],AL
  1000:16ee     53               PUSH BX
  1000:16ef     49               DEC CX
  1000:16f0     47               INC DI
  1000:16f1     4E               DEC SI
  1000:16f2     45               INC BP
  1000:16f3     52               PUSH DX
  1000:16f4     53               PUSH BX
  1000:16f5     20 20            AND byte ptr [BX + SI],AH
  1000:16f7     20 20            AND byte ptr [BX + SI],AH
  1000:16f9     00 2F            ADD byte ptr [BX],CH
  1000:16fb     2F               DAS
  1000:16fc     20 20            AND byte ptr [BX + SI],AH
  1000:16fe     20 20            AND byte ptr [BX + SI],AH
  1000:1700     20 20            AND byte ptr [BX + SI],AH
  1000:1702     20 20            AND byte ptr [BX + SI],AH
  1000:1704     20 20            AND byte ptr [BX + SI],AH
  1000:1706     20 4D 41         AND byte ptr [DI + 0x41],CL
  1000:1709     53               PUSH BX
  1000:170a     41               INC CX
  1000:170b     48               DEC AX
  1000:170c     49               DEC CX
  1000:170d     4B               DEC BX
  1000:170e     4F               DEC DI
  1000:170f     20 49 4B         AND byte ptr [BX + DI + 0x4b],CL
  1000:1712     45               INC BP
  1000:1713     59               POP CX
  1000:1714     41               INC CX
  1000:1715     20 20            AND byte ptr [BX + SI],AH
  1000:1717     20 20            AND byte ptr [BX + SI],AH
  1000:1719     20 20            AND byte ptr [BX + SI],AH
  1000:171b     20 20            AND byte ptr [BX + SI],AH
  1000:171d     20 20            AND byte ptr [BX + SI],AH
  1000:171f     20 00            AND byte ptr [BX + SI],AL
  1000:1721     2F               DAS
  1000:1722     2F               DAS
  1000:1723     20 20            AND byte ptr [BX + SI],AH
  1000:1725     20 20            AND byte ptr [BX + SI],AH
  1000:1727     20 20            AND byte ptr [BX + SI],AH
  1000:1729     20 20            AND byte ptr [BX + SI],AH
  1000:172b     20 20            AND byte ptr [BX + SI],AH
  1000:172d     20 4D 41         AND byte ptr [DI + 0x41],CL
  1000:1730     53               PUSH BX
  1000:1731     41               INC CX
  1000:1732     54               PUSH SP
  1000:1733     4F               DEC DI
  1000:1734     53               PUSH BX
  1000:1735     48               DEC AX
  1000:1736     49               DEC CX
  1000:1737     20 41 5A         AND byte ptr [BX + DI + 0x5a],AL
  1000:173a     55               PUSH BP
  1000:173b     4D               DEC BP
  1000:173c     49               DEC CX
  1000:173d     20 20            AND byte ptr [BX + SI],AH
  1000:173f     20 20            AND byte ptr [BX + SI],AH
  1000:1741     20 20            AND byte ptr [BX + SI],AH
  1000:1743     20 20            AND byte ptr [BX + SI],AH
  1000:1745     20 20            AND byte ptr [BX + SI],AH
  1000:1747     00 20            ADD byte ptr [BX + SI],AH
  1000:1749     20 20            AND byte ptr [BX + SI],AH
  1000:174b     20 20            AND byte ptr [BX + SI],AH
  1000:174d     20 20            AND byte ptr [BX + SI],AH
  1000:174f     41               INC CX
  1000:1750     44               INC SP
  1000:1751     44               INC SP
  1000:1752     49               DEC CX
  1000:1753     54               PUSH SP
  1000:1754     49               DEC CX
  1000:1755     4F               DEC DI
  1000:1756     4E               DEC SI
  1000:1757     41               INC CX
  1000:1758     4C               DEC SP
  1000:1759     20 50 52         AND byte ptr [BX + SI + 0x52],DL
  1000:175c     4F               DEC DI
  1000:175d     47               INC DI
  1000:175e     52               PUSH DX
  1000:175f     41               INC CX
  1000:1760     4D               DEC BP
  1000:1761     4D               DEC BP
  1000:1762     45               INC BP
  1000:1763     52               PUSH DX
  1000:1764     53               PUSH BX
  1000:1765     20 20            AND byte ptr [BX + SI],AH
  1000:1767     20 20            AND byte ptr [BX + SI],AH
  1000:1769     20 20            AND byte ptr [BX + SI],AH
  1000:176b     20 00            AND byte ptr [BX + SI],AL
  1000:176d     2F               DAS
  1000:176e     2F               DAS
  1000:176f     20 20            AND byte ptr [BX + SI],AH
  1000:1771     20 20            AND byte ptr [BX + SI],AH
  1000:1773     20 20            AND byte ptr [BX + SI],AH
  1000:1775     20 20            AND byte ptr [BX + SI],AH
  1000:1777     20 20            AND byte ptr [BX + SI],AH
  1000:1779     20 20            AND byte ptr [BX + SI],AH
  1000:177b     4F               DEC DI
  1000:177c     53               PUSH BX
  1000:177d     41               INC CX
  1000:177e     4D               DEC BP
  1000:177f     55               PUSH BP
  1000:1780     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:1783     52               PUSH DX
  1000:1784     41               INC CX
  1000:1785     44               INC SP
  1000:1786     41               INC CX
  1000:1787     20 20            AND byte ptr [BX + SI],AH
  1000:1789     20 20            AND byte ptr [BX + SI],AH
  1000:178b     20 20            AND byte ptr [BX + SI],AH
  1000:178d     20 20            AND byte ptr [BX + SI],AH
  1000:178f     20 20            AND byte ptr [BX + SI],AH
  1000:1791     20 20            AND byte ptr [BX + SI],AH
  1000:1793     00 2F            ADD byte ptr [BX],CH
  1000:1795     2F               DAS
  1000:1796     20 20            AND byte ptr [BX + SI],AH
  1000:1798     20 20            AND byte ptr [BX + SI],AH
  1000:179a     20 20            AND byte ptr [BX + SI],AH
  1000:179c     20 20            AND byte ptr [BX + SI],AH
  1000:179e     54               PUSH SP
  1000:179f     4F               DEC DI
  1000:17a0     53               PUSH BX
  1000:17a1     48               DEC AX
  1000:17a2     49               DEC CX
  1000:17a3     4D               DEC BP
  1000:17a4     49               DEC CX
  1000:17a5     43               INC BX
  1000:17a6     48               DEC AX
  1000:17a7     49               DEC CX
  1000:17a8     20 4D 41         AND byte ptr [DI + 0x41],CL
  1000:17ab     53               PUSH BX
  1000:17ac     55               PUSH BP
  1000:17ad     42               INC DX
  1000:17ae     55               PUSH BP
  1000:17af     43               INC BX
  1000:17b0     48               DEC AX
  1000:17b1     49               DEC CX
  1000:17b2     20 20            AND byte ptr [BX + SI],AH
  1000:17b4     20 20            AND byte ptr [BX + SI],AH
  1000:17b6     20 20            AND byte ptr [BX + SI],AH
  1000:17b8     20 20            AND byte ptr [BX + SI],AH
  1000:17ba     00 20            ADD byte ptr [BX + SI],AH
  1000:17bc     20 20            AND byte ptr [BX + SI],AH
  1000:17be     4D               DEC BP
  1000:17bf     55               PUSH BP
  1000:17c0     53               PUSH BX
  1000:17c1     49               DEC CX
  1000:17c2     43               INC BX
  1000:17c3     20 45 44         AND byte ptr [DI + 0x44],AL
  1000:17c6     49               DEC CX
  1000:17c7     54               PUSH SP
  1000:17c8     49               DEC CX
  1000:17c9     4E               DEC SI
  1000:17ca     47               INC DI
  1000:17cb     20 26 20 53      AND byte ptr [0x5320],AH
  1000:17cf     4F               DEC DI
  1000:17d0     55               PUSH BP
  1000:17d1     4E               DEC SI
  1000:17d2     44               INC SP
  1000:17d3     20 45 46         AND byte ptr [DI + 0x46],AL
  1000:17d6     46               INC SI
  1000:17d7     45               INC BP
  1000:17d8     43               INC BX
  1000:17d9     54               PUSH SP
  1000:17da     53               PUSH BX
  1000:17db     20 20            AND byte ptr [BX + SI],AH
  1000:17dd     20 20            AND byte ptr [BX + SI],AH
  1000:17df     00 2F            ADD byte ptr [BX],CH
  1000:17e1     2F               DAS
  1000:17e2     20 20            AND byte ptr [BX + SI],AH
  1000:17e4     20 20            AND byte ptr [BX + SI],AH
  1000:17e6     20 20            AND byte ptr [BX + SI],AH
  1000:17e8     20 20            AND byte ptr [BX + SI],AH
  1000:17ea     20 54 41         AND byte ptr [SI + 0x41],DL
  1000:17ed     44               INC SP
  1000:17ee     41               INC CX
  1000:17ef     53               PUSH BX
  1000:17f0     48               DEC AX
  1000:17f1     49               DEC CX
  1000:17f2     20 53 48         AND byte ptr [BP + DI + 0x48],DL
  1000:17f5     49               DEC CX
  1000:17f6     4D               DEC BP
  1000:17f7     41               INC CX
  1000:17f8     59               POP CX
  1000:17f9     41               INC CX
  1000:17fa     4D               DEC BP
  1000:17fb     41               INC CX
  1000:17fc     20 20            AND byte ptr [BX + SI],AH
  1000:17fe     20 20            AND byte ptr [BX + SI],AH
  1000:1800     20 20            AND byte ptr [BX + SI],AH
  1000:1802     20 20            AND byte ptr [BX + SI],AH
  1000:1804     20 20            AND byte ptr [BX + SI],AH
  1000:1806     00 20            ADD byte ptr [BX + SI],AH
  1000:1808     20 20            AND byte ptr [BX + SI],AH
  1000:180a     20 20            AND byte ptr [BX + SI],AH
  1000:180c     20 20            AND byte ptr [BX + SI],AH
  1000:180e     4D               DEC BP
  1000:180f     55               PUSH BP
  1000:1810     53               PUSH BX
  1000:1811     49               DEC CX
  1000:1812     43               INC BX
  1000:1813     20 4D 49         AND byte ptr [DI + 0x49],CL
  1000:1816     44               INC SP
  1000:1817     49               DEC CX
  1000:1818     20 43 4F         AND byte ptr [BP + DI + 0x4f],AL
  1000:181b     4E               DEC SI
  1000:181c     56               PUSH SI
  1000:181d     45               INC BP
  1000:181e     52               PUSH DX
  1000:181f     53               PUSH BX
  1000:1820     49               DEC CX
  1000:1821     4F               DEC DI
  1000:1822     4E               DEC SI
  1000:1823     20 20            AND byte ptr [BX + SI],AH
  1000:1825     20 20            AND byte ptr [BX + SI],AH
  1000:1827     20 20            AND byte ptr [BX + SI],AH
  1000:1829     20 20            AND byte ptr [BX + SI],AH
  1000:182b     00 2F            ADD byte ptr [BX],CH
  1000:182d     2F               DAS
  1000:182e     20 20            AND byte ptr [BX + SI],AH
  1000:1830     20 20            AND byte ptr [BX + SI],AH
  1000:1832     20 20            AND byte ptr [BX + SI],AH
  1000:1834     20 20            AND byte ptr [BX + SI],AH
  1000:1836     20 20            AND byte ptr [BX + SI],AH
  1000:1838     20 20            AND byte ptr [BX + SI],AH
  1000:183a     52               PUSH DX
  1000:183b     4F               DEC DI
  1000:183c     42               INC DX
  1000:183d     20 41 54         AND byte ptr [BX + DI + 0x54],AL
  1000:1840     45               INC BP
  1000:1841     4C               DEC SP
  1000:1842     53               PUSH BX
  1000:1843     41               INC CX
  1000:1844     50               PUSH AX
  1000:1845     20 20            AND byte ptr [BX + SI],AH
  1000:1847     20 20            AND byte ptr [BX + SI],AH
  1000:1849     20 20            AND byte ptr [BX + SI],AH
  1000:184b     20 20            AND byte ptr [BX + SI],AH
  1000:184d     20 20            AND byte ptr [BX + SI],AH
  1000:184f     20 20            AND byte ptr [BX + SI],AH
  1000:1851     20 00            AND byte ptr [BX + SI],AL
  1000:1853     2F               DAS
  1000:1854     2F               DAS
  1000:1855     20 20            AND byte ptr [BX + SI],AH
  1000:1857     20 20            AND byte ptr [BX + SI],AH
  1000:1859     20 20            AND byte ptr [BX + SI],AH
  1000:185b     20 20            AND byte ptr [BX + SI],AH
  1000:185d     20 20            AND byte ptr [BX + SI],AH
  1000:185f     20 20            AND byte ptr [BX + SI],AH
  1000:1861     20 4B 45         AND byte ptr [BP + DI + 0x45],CL
  1000:1864     4E               DEC SI
  1000:1865     20 41 4C         AND byte ptr [BX + DI + 0x4c],AL
  1000:1868     4C               DEC SP
  1000:1869     45               INC BP
  1000:186a     4E               DEC SI
  1000:186b     20 20            AND byte ptr [BX + SI],AH
  1000:186d     20 20            AND byte ptr [BX + SI],AH
  1000:186f     20 20            AND byte ptr [BX + SI],AH
  1000:1871     20 20            AND byte ptr [BX + SI],AH
  1000:1873     20 20            AND byte ptr [BX + SI],AH
  1000:1875     20 20            AND byte ptr [BX + SI],AH
  1000:1877     20 20            AND byte ptr [BX + SI],AH
  1000:1879     00 20            ADD byte ptr [BX + SI],AH
  1000:187b     20 20            AND byte ptr [BX + SI],AH
  1000:187d     20 20            AND byte ptr [BX + SI],AH
  1000:187f     20 45 4E         AND byte ptr [DI + 0x4e],AL
  1000:1882     47               INC DI
  1000:1883     4C               DEC SP
  1000:1884     49               DEC CX
  1000:1885     53               PUSH BX
  1000:1886     48               DEC AX
  1000:1887     20 54 45         AND byte ptr [SI + 0x45],DL
  1000:188a     58               POP AX
  1000:188b     54               PUSH SP
  1000:188c     20 54 52         AND byte ptr [SI + 0x52],DL
  1000:188f     41               INC CX
  1000:1890     4E               DEC SI
  1000:1891     53               PUSH BX
  1000:1892     4C               DEC SP
  1000:1893     41               INC CX
  1000:1894     54               PUSH SP
  1000:1895     49               DEC CX
  1000:1896     4F               DEC DI
  1000:1897     4E               DEC SI
  1000:1898     20 20            AND byte ptr [BX + SI],AH
  1000:189a     20 20            AND byte ptr [BX + SI],AH
  1000:189c     20 20            AND byte ptr [BX + SI],AH
  1000:189e     00 2F            ADD byte ptr [BX],CH
  1000:18a0     2F               DAS
  1000:18a1     20 20            AND byte ptr [BX + SI],AH
  1000:18a3     20 20            AND byte ptr [BX + SI],AH
  1000:18a5     20 20            AND byte ptr [BX + SI],AH
  1000:18a7     20 20            AND byte ptr [BX + SI],AH
  1000:18a9     20 20            AND byte ptr [BX + SI],AH
  1000:18ab     41               INC CX
  1000:18ac     4B               DEC BX
  1000:18ad     49               DEC CX
  1000:18ae     4B               DEC BX
  1000:18af     4F               DEC DI
  1000:18b0     20 53 4B         AND byte ptr [BP + DI + 0x4b],DL
  1000:18b3     4A               DEC DX
  1000:18b4     45               INC BP
  1000:18b5     4C               DEC SP
  1000:18b6     4C               DEC SP
  1000:18b7     45               INC BP
  1000:18b8     52               PUSH DX
  1000:18b9     55               PUSH BP
  1000:18ba     50               PUSH AX
  1000:18bb     20 20            AND byte ptr [BX + SI],AH
  1000:18bd     20 20            AND byte ptr [BX + SI],AH
  1000:18bf     20 20            AND byte ptr [BX + SI],AH
  1000:18c1     20 20            AND byte ptr [BX + SI],AH
  1000:18c3     20 20            AND byte ptr [BX + SI],AH
  1000:18c5     00 2F            ADD byte ptr [BX],CH
  1000:18c7     2F               DAS
  1000:18c8     20 20            AND byte ptr [BX + SI],AH
  1000:18ca     20 20            AND byte ptr [BX + SI],AH
  1000:18cc     20 20            AND byte ptr [BX + SI],AH
  1000:18ce     20 20            AND byte ptr [BX + SI],AH
  1000:18d0     20 20            AND byte ptr [BX + SI],AH
  1000:18d2     20 20            AND byte ptr [BX + SI],AH
  1000:18d4     20 4D 49         AND byte ptr [DI + 0x49],CL
  1000:18d7     43               INC BX
  1000:18d8     4B               DEC BX
  1000:18d9     49               DEC CX
  1000:18da     45               INC BP
  1000:18db     20 4C 45         AND byte ptr [SI + 0x45],CL
  1000:18de     45               INC BP
  1000:18df     20 20            AND byte ptr [BX + SI],AH
  1000:18e1     20 20            AND byte ptr [BX + SI],AH
  1000:18e3     20 20            AND byte ptr [BX + SI],AH
  1000:18e5     20 20            AND byte ptr [BX + SI],AH
  1000:18e7     20 20            AND byte ptr [BX + SI],AH
  1000:18e9     20 20            AND byte ptr [BX + SI],AH
  1000:18eb     20 00            AND byte ptr [BX + SI],AL
  1000:18ed     2F               DAS
  1000:18ee     2F               DAS
  1000:18ef     20 20            AND byte ptr [BX + SI],AH
  1000:18f1     20 20            AND byte ptr [BX + SI],AH
  1000:18f3     20 20            AND byte ptr [BX + SI],AH
  1000:18f5     20 20            AND byte ptr [BX + SI],AH
  1000:18f7     20 20            AND byte ptr [BX + SI],AH
  1000:18f9     20 20            AND byte ptr [BX + SI],AH
  1000:18fb     59               POP CX
  1000:18fc     4F               DEC DI
  1000:18fd     4B               DEC BX
  1000:18fe     4F               DEC DI
  1000:18ff     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:1902     59               POP CX
  1000:1903     41               INC CX
  1000:1904     53               PUSH BX
  1000:1905     48               DEC AX
  1000:1906     49               DEC CX
  1000:1907     20 20            AND byte ptr [BX + SI],AH
  1000:1909     20 20            AND byte ptr [BX + SI],AH
  1000:190b     20 20            AND byte ptr [BX + SI],AH
  1000:190d     20 20            AND byte ptr [BX + SI],AH
  1000:190f     20 20            AND byte ptr [BX + SI],AH
  1000:1911     20 20            AND byte ptr [BX + SI],AH
  1000:1913     00 FF            ADD BH,BH
  1000:1915     54               PUSH SP
  1000:1916     48               DEC AX
  1000:1917     45               INC BP
  1000:1918     20 53 45         AND byte ptr [BP + DI + 0x45],DL
  1000:191b     43               INC BX
  1000:191c     4F               DEC DI
  1000:191d     4E               DEC SI
  1000:191e     44               INC SP
  1000:191f     20 4E 45         AND byte ptr [BP + 0x45],CL
  1000:1922     44               INC SP
  1000:1923     49               DEC CX
  1000:1924     41               INC CX
  1000:1925     4D               DEC BP
  1000:1926     20 49 4E         AND byte ptr [BX + DI + 0x4e],CL
  1000:1929     43               INC BX
  1000:192a     49               DEC CX
  1000:192b     44               INC SP
  1000:192c     45               INC BP
  1000:192d     4E               DEC SI
  1000:192e     54               PUSH SP
  1000:192f     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:1932     53               PUSH BX
  1000:1933     20 45 4E         AND byte ptr [DI + 0x4e],AL
  1000:1936     44               INC SP
  1000:1937     45               INC BP
  1000:1938     44               INC SP
  1000:1939     2E 00 57 49      ADD byte ptr CS:[BX + 0x49],DL
  1000:193d     54               PUSH SP
  1000:193e     48               DEC AX
  1000:193f     20 4F 4E         AND byte ptr [BX + 0x4e],CL
  1000:1942     4C               DEC SP
  1000:1943     59               POP CX
  1000:1944     20 4D 49         AND byte ptr [DI + 0x49],CL
  1000:1947     4E               DEC SI
  1000:1948     55               PUSH BP
  1000:1949     54               PUSH SP
  1000:194a     45               INC BP
  1000:194b     53               PUSH BX
  1000:194c     20 4C 45         AND byte ptr [SI + 0x45],CL
  1000:194f     46               INC SI
  1000:1950     54               PUSH SP
  1000:1951     20 54 4F         AND byte ptr [SI + 0x4f],DL
  1000:1954     20 53 50         AND byte ptr [BP + DI + 0x50],DL
  1000:1957     41               INC CX
  1000:1958     52               PUSH DX
  1000:1959     45               INC BP
  1000:195a     2C 00            SUB AL,0x0
  1000:195c     2F               DAS
  1000:195d     4E               DEC SI
  1000:195e     45               INC BP
  1000:195f     44               INC SP
  1000:1960     49               DEC CX
  1000:1961     41               INC CX
  1000:1962     4D               DEC BP
  1000:1963     27               DAA
  1000:1964     53               PUSH BX
  1000:1965     20 43 45         AND byte ptr [BP + DI + 0x45],AL
  1000:1968     4E               DEC SI
  1000:1969     54               PUSH SP
  1000:196a     52               PUSH DX
  1000:196b     41               INC CX
  1000:196c     4C               DEC SP
  1000:196d     20 42 52         AND byte ptr [BP + SI + 0x52],AL
  1000:1970     41               INC CX
  1000:1971     49               DEC CX
  1000:1972     4E               DEC SI
  1000:1973     2C 20            SUB AL,0x20
  1000:1975     41               INC CX
  1000:1976     20 4D 41         AND byte ptr [DI + 0x41],CL
  1000:1979     4D               DEC BP
  1000:197a     4D               DEC BP
  1000:197b     4F               DEC DI
  1000:197c     54               PUSH SP
  1000:197d     48               DEC AX
  1000:197e     00 2F            ADD byte ptr [BX],CH
  1000:1980     48               DEC AX
  1000:1981     59               POP CX
  1000:1982     42               INC DX
  1000:1983     52               PUSH DX
  1000:1984     49               DEC CX
  1000:1985     44               INC SP
  1000:1986     20 54 48         AND byte ptr [SI + 0x48],DL
  1000:1989     45               INC BP
  1000:198a     58               POP AX
  1000:198b     44               INC SP
  1000:198c     45               INC BP
  1000:198d     52               PUSH DX
  1000:198e     2C 20            SUB AL,0x20
  1000:1990     57               PUSH DI
  1000:1991     41               INC CX
  1000:1992     53               PUSH BX
  1000:1993     20 41 4E         AND byte ptr [BX + DI + 0x4e],AL
  1000:1996     4E               DEC SI
  1000:1997     49               DEC CX
  1000:1998     48               DEC AX
  1000:1999     49               DEC CX
  1000:199a     4C               DEC SP
  1000:199b     41               INC CX
  1000:199c     54               PUSH SP
  1000:199d     45               INC BP
  1000:199e     44               INC SP
  1000:199f     2E 20 20         AND byte ptr CS:[BX + SI],AH
  1000:19a2     20 20            AND byte ptr [BX + SI],AH
  1000:19a4     20 20            AND byte ptr [BX + SI],AH
  1000:19a6     20 20            AND byte ptr [BX + SI],AH
  1000:19a8     20 20            AND byte ptr [BX + SI],AH
  1000:19aa     20 20            AND byte ptr [BX + SI],AH
  1000:19ac     20 20            AND byte ptr [BX + SI],AH
  1000:19ae     20 20            AND byte ptr [BX + SI],AH
  1000:19b0     20 20            AND byte ptr [BX + SI],AH
  1000:19b2     20 20            AND byte ptr [BX + SI],AH
  1000:19b4     20 20            AND byte ptr [BX + SI],AH
  1000:19b6     20 20            AND byte ptr [BX + SI],AH
  1000:19b8     20 20            AND byte ptr [BX + SI],AH
  1000:19ba     00 2F            ADD byte ptr [BX],CH
  1000:19bc     20 00            AND byte ptr [BX + SI],AL
  1000:19be     43               INC BX
  1000:19bf     41               INC CX
  1000:19c0     55               PUSH BP
  1000:19c1     47               INC DI
  1000:19c2     48               DEC AX
  1000:19c3     54               PUSH SP
  1000:19c4     20 49 4E         AND byte ptr [BX + DI + 0x4e],CL
  1000:19c7     20 54 48         AND byte ptr [SI + 0x48],DL
  1000:19ca     45               INC BP
  1000:19cb     20 45 41         AND byte ptr [DI + 0x41],AL
  1000:19ce     52               PUSH DX
  1000:19cf     54               PUSH SP
  1000:19d0     48               DEC AX
  1000:19d1     27               DAA
  1000:19d2     53               PUSH BX
  1000:19d3     20 47 52         AND byte ptr [BX + 0x52],AL
  1000:19d6     41               INC CX
  1000:19d7     56               PUSH SI
  1000:19d8     49               DEC CX
  1000:19d9     54               PUSH SP
  1000:19da     59               POP CX
  1000:19db     2C 20            SUB AL,0x20
  1000:19dd     4E               DEC SI
  1000:19de     45               INC BP
  1000:19df     44               INC SP
  1000:19e0     49               DEC CX
  1000:19e1     41               INC CX
  1000:19e2     4D               DEC BP
  1000:19e3     00 2F            ADD byte ptr [BX],CH
  1000:19e5     4E               DEC SI
  1000:19e6     4F               DEC DI
  1000:19e7     57               PUSH DI
  1000:19e8     20 4F 52         AND byte ptr [BX + 0x52],CL
  1000:19eb     42               INC DX
  1000:19ec     49               DEC CX
  1000:19ed     54               PUSH SP
  1000:19ee     53               PUSH BX
  1000:19ef     20 54 48         AND byte ptr [SI + 0x48],DL
  1000:19f2     45               INC BP
  1000:19f3     20 45 41         AND byte ptr [DI + 0x41],AL
  1000:19f6     52               PUSH DX
  1000:19f7     54               PUSH SP
  1000:19f8     48               DEC AX
  1000:19f9     20 41 53         AND byte ptr [BX + DI + 0x53],AL
  1000:19fc     20 41 20         AND byte ptr [BX + DI + 0x20],AL
  1000:19ff     53               PUSH BX
  1000:1a00     45               INC BP
  1000:1a01     43               INC BX
  1000:1a02     4F               DEC DI
  1000:1a03     4E               DEC SI
  1000:1a04     44               INC SP
  1000:1a05     20 4D 4F         AND byte ptr [DI + 0x4f],CL
  1000:1a08     4F               DEC DI
  1000:1a09     4E               DEC SI
  1000:1a0a     2E 00 2F         ADD byte ptr CS:[BX],CH
  1000:1a0d     20 00            AND byte ptr [BX + SI],AL
  1000:1a0f     46               INC SI
  1000:1a10     4F               DEC DI
  1000:1a11     55               PUSH BP
  1000:1a12     52               PUSH DX
  1000:1a13     20 59 45         AND byte ptr [BX + DI + 0x45],BL
  1000:1a16     41               INC CX
  1000:1a17     52               PUSH DX
  1000:1a18     53               PUSH BX
  1000:1a19     20 45 41         AND byte ptr [DI + 0x41],AL
  1000:1a1c     52               PUSH DX
  1000:1a1d     4C               DEC SP
  1000:1a1e     49               DEC CX
  1000:1a1f     45               INC BP
  1000:1a20     52               PUSH DX
  1000:1a21     2C 20            SUB AL,0x20
  1000:1a23     4E               DEC SI
  1000:1a24     45               INC BP
  1000:1a25     44               INC SP
  1000:1a26     49               DEC CX
  1000:1a27     41               INC CX
  1000:1a28     4D               DEC BP
  1000:1a29     27               DAA
  1000:1a2a     53               PUSH BX
  1000:1a2b     20 43 45         AND byte ptr [BP + DI + 0x45],AL
  1000:1a2e     4E               DEC SI
  1000:1a2f     54               PUSH SP
  1000:1a30     52               PUSH DX
  1000:1a31     41               INC CX
  1000:1a32     4C               DEC SP
  1000:1a33     00 2F            ADD byte ptr [BX],CH
  1000:1a35     42               INC DX
  1000:1a36     52               PUSH DX
  1000:1a37     41               INC CX
  1000:1a38     49               DEC CX
  1000:1a39     4E               DEC SI
  1000:1a3a     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:1a3d     44               INC SP
  1000:1a3e     20 4C 4F         AND byte ptr [SI + 0x4f],CL
  1000:1a41     43               INC BX
  1000:1a42     41               INC CX
  1000:1a43     54               PUSH SP
  1000:1a44     45               INC BP
  1000:1a45     44               INC SP
  1000:1a46     20 41 4E         AND byte ptr [BX + DI + 0x4e],AL
  1000:1a49     44               INC SP
  1000:1a4a     20 52 45         AND byte ptr [BP + SI + 0x45],DL
  1000:1a4d     53               PUSH BX
  1000:1a4e     43               INC BX
  1000:1a4f     55               PUSH BP
  1000:1a50     45               INC BP
  1000:1a51     44               INC SP
  1000:1a52     20 41 52         AND byte ptr [BX + DI + 0x52],AL
  1000:1a55     54               PUSH SP
  1000:1a56     48               DEC AX
  1000:1a57     55               PUSH BP
  1000:1a58     52               PUSH DX
  1000:1a59     2E 00 2F         ADD byte ptr CS:[BX],CH
  1000:1a5c     48               DEC AX
  1000:1a5d     49               DEC CX
  1000:1a5e     53               PUSH BX
  1000:1a5f     20 44 45         AND byte ptr [SI + 0x45],AL
  1000:1a62     53               PUSH BX
  1000:1a63     49               DEC CX
  1000:1a64     52               PUSH DX
  1000:1a65     45               INC BP
  1000:1a66     20 54 4F         AND byte ptr [SI + 0x4f],DL
  1000:1a69     20 53 45         AND byte ptr [BP + DI + 0x45],DL
  1000:1a6c     45               INC BP
  1000:1a6d     20 4A 4F         AND byte ptr [BP + SI + 0x4f],CL
  1000:1a70     41               INC CX
  1000:1a71     4E               DEC SI
  1000:1a72     4E               DEC SI
  1000:1a73     41               INC CX
  1000:1a74     20 4F 4E         AND byte ptr [BX + 0x4e],CL
  1000:1a77     43               INC BX
  1000:1a78     45               INC BP
  1000:1a79     20 41 47         AND byte ptr [BX + DI + 0x47],AL
  1000:1a7c     41               INC CX
  1000:1a7d     49               DEC CX
  1000:1a7e     4E               DEC SI
  1000:1a7f     00 2F            ADD byte ptr [BX],CH
  1000:1a81     43               INC BX
  1000:1a82     41               INC CX
  1000:1a83     55               PUSH BP
  1000:1a84     53               PUSH BX
  1000:1a85     45               INC BP
  1000:1a86     44               INC SP
  1000:1a87     20 4E 45         AND byte ptr [BP + 0x45],CL
  1000:1a8a     44               INC SP
  1000:1a8b     49               DEC CX
  1000:1a8c     41               INC CX
  1000:1a8d     4D               DEC BP
  1000:1a8e     20 54 4F         AND byte ptr [SI + 0x4f],DL
  1000:1a91     20 48 45         AND byte ptr [BX + SI + 0x45],CL
  1000:1a94     41               INC CX
  1000:1a95     44               INC SP
  1000:1a96     20 54 4F         AND byte ptr [SI + 0x4f],DL
  1000:1a99     57               PUSH DI
  1000:1a9a     41               INC CX
  1000:1a9b     52               PUSH DX
  1000:1a9c     44               INC SP
  1000:1a9d     53               PUSH BX
  1000:1a9e     20 45 41         AND byte ptr [DI + 0x41],AL
  1000:1aa1     52               PUSH DX
  1000:1aa2     54               PUSH SP
  1000:1aa3     48               DEC AX
  1000:1aa4     2E 00 4A 4F      ADD byte ptr CS:[BP + SI + 0x4f],CL
  1000:1aa8     41               INC CX
  1000:1aa9     4E               DEC SI
  1000:1aaa     4E               DEC SI
  1000:1aab     41               INC CX
  1000:1aac     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:1aaf     53               PUSH BX
  1000:1ab0     20 4E 4F         AND byte ptr [BP + 0x4f],CL
  1000:1ab3     57               PUSH DI
  1000:1ab4     20 42 45         AND byte ptr [BP + SI + 0x45],AL
  1000:1ab7     45               INC BP
  1000:1ab8     4E               DEC SI
  1000:1ab9     20 52 45         AND byte ptr [BP + SI + 0x45],DL
  1000:1abc     55               PUSH BP
  1000:1abd     4E               DEC SI
  1000:1abe     49               DEC CX
  1000:1abf     54               PUSH SP
  1000:1ac0     45               INC BP
  1000:1ac1     44               INC SP
  1000:1ac2     20 57 49         AND byte ptr [BX + 0x49],DL
  1000:1ac5     54               PUSH SP
  1000:1ac6     48               DEC AX
  1000:1ac7     20 20            AND byte ptr [BX + SI],AH
  1000:1ac9     20 20            AND byte ptr [BX + SI],AH
  1000:1acb     00 2F            ADD byte ptr [BX],CH
  1000:1acd     41               INC CX
  1000:1ace     52               PUSH DX
  1000:1acf     54               PUSH SP
  1000:1ad0     48               DEC AX
  1000:1ad1     55               PUSH BP
  1000:1ad2     52               PUSH DX
  1000:1ad3     2C 20            SUB AL,0x20
  1000:1ad5     41               INC CX
  1000:1ad6     4E               DEC SI
  1000:1ad7     44               INC SP
  1000:1ad8     20 57 49         AND byte ptr [BX + 0x49],DL
  1000:1adb     54               PUSH SP
  1000:1adc     48               DEC AX
  1000:1add     20 54 48         AND byte ptr [SI + 0x48],DL
  1000:1ae0     45               INC BP
  1000:1ae1     20 4E 45         AND byte ptr [BP + 0x45],CL
  1000:1ae4     44               INC SP
  1000:1ae5     49               DEC CX
  1000:1ae6     41               INC CX
  1000:1ae7     4D               DEC BP
  1000:1ae8     27               DAA
  1000:1ae9     53               PUSH BX
  1000:1aea     20 44 41         AND byte ptr [SI + 0x41],AL
  1000:1aed     54               PUSH SP
  1000:1aee     41               INC CX
  1000:1aef     00 2F            ADD byte ptr [BX],CH
  1000:1af1     42               INC DX
  1000:1af2     41               INC CX
  1000:1af3     4E               DEC SI
  1000:1af4     4B               DEC BX
  1000:1af5     53               PUSH BX
  1000:1af6     2C 20            SUB AL,0x20
  1000:1af8     54               PUSH SP
  1000:1af9     48               DEC AX
  1000:1afa     45               INC BP
  1000:1afb     20 54 57         AND byte ptr [SI + 0x57],DL
  1000:1afe     4F               DEC DI
  1000:1aff     20 48 41         AND byte ptr [BX + SI + 0x41],CL
  1000:1b02     56               PUSH SI
  1000:1b03     45               INC BP
  1000:1b04     20 52 45         AND byte ptr [BP + SI + 0x45],DL
  1000:1b07     54               PUSH SP
  1000:1b08     55               PUSH BP
  1000:1b09     52               PUSH DX
  1000:1b0a     4E               DEC SI
  1000:1b0b     45               INC BP
  1000:1b0c     44               INC SP
  1000:1b0d     20 53 41         AND byte ptr [BP + DI + 0x41],DL
  1000:1b10     46               INC SI
  1000:1b11     45               INC BP
  1000:1b12     4C               DEC SP
  1000:1b13     59               POP CX
  1000:1b14     00 2F            ADD byte ptr [BX],CH
  1000:1b16     54               PUSH SP
  1000:1b17     4F               DEC DI
  1000:1b18     20 45 41         AND byte ptr [DI + 0x41],AL
  1000:1b1b     52               PUSH DX
  1000:1b1c     54               PUSH SP
  1000:1b1d     48               DEC AX
  1000:1b1e     2E 20 20         AND byte ptr CS:[BX + SI],AH
  1000:1b21     20 20            AND byte ptr [BX + SI],AH
  1000:1b23     20 20            AND byte ptr [BX + SI],AH
  1000:1b25     20 20            AND byte ptr [BX + SI],AH
  1000:1b27     20 20            AND byte ptr [BX + SI],AH
  1000:1b29     20 20            AND byte ptr [BX + SI],AH
  1000:1b2b     20 20            AND byte ptr [BX + SI],AH
  1000:1b2d     20 20            AND byte ptr [BX + SI],AH
  1000:1b2f     20 20            AND byte ptr [BX + SI],AH
  1000:1b31     20 20            AND byte ptr [BX + SI],AH
  1000:1b33     20 20            AND byte ptr [BX + SI],AH
  1000:1b35     20 00            AND byte ptr [BX + SI],AL
  1000:1b37     4E               DEC SI
  1000:1b38     45               INC BP
  1000:1b39     44               INC SP
  1000:1b3a     49               DEC CX
  1000:1b3b     41               INC CX
  1000:1b3c     4D               DEC BP
  1000:1b3d     27               DAA
  1000:1b3e     53               PUSH BX
  1000:1b3f     20 45 58         AND byte ptr [DI + 0x58],AL
  1000:1b42     54               PUSH SP
  1000:1b43     52               PUSH DX
  1000:1b44     41               INC CX
  1000:1b45     4F               DEC DI
  1000:1b46     52               PUSH DX
  1000:1b47     44               INC SP
  1000:1b48     49               DEC CX
  1000:1b49     4E               DEC SI
  1000:1b4a     41               INC CX
  1000:1b4b     52               PUSH DX
  1000:1b4c     59               POP CX
  1000:1b4d     20 54 45         AND byte ptr [SI + 0x45],DL
  1000:1b50     43               INC BX
  1000:1b51     48               DEC AX
  1000:1b52     4E               DEC SI
  1000:1b53     4F               DEC DI
  1000:1b54     4C               DEC SP
  1000:1b55     4F               DEC DI
  1000:1b56     47               INC DI
  1000:1b57     59               POP CX
  1000:1b58     20 43 41         AND byte ptr [BP + DI + 0x41],AL
  1000:1b5b     4E               DEC SI
  1000:1b5c     00 2F            ADD byte ptr [BX],CH
  1000:1b5e     4E               DEC SI
  1000:1b5f     4F               DEC DI
  1000:1b60     57               PUSH DI
  1000:1b61     20 42 45         AND byte ptr [BP + SI + 0x45],AL
  1000:1b64     20 54 41         AND byte ptr [SI + 0x41],DL
  1000:1b67     50               PUSH AX
  1000:1b68     50               PUSH AX
  1000:1b69     45               INC BP
  1000:1b6a     44               INC SP
  1000:1b6b     20 42 59         AND byte ptr [BP + SI + 0x59],AL
  1000:1b6e     20 45 41         AND byte ptr [DI + 0x41],AL
  1000:1b71     52               PUSH DX
  1000:1b72     54               PUSH SP
  1000:1b73     48               DEC AX
  1000:1b74     20 53 43         AND byte ptr [BP + DI + 0x43],DL
  1000:1b77     49               DEC CX
  1000:1b78     45               INC BP
  1000:1b79     4E               DEC SI
  1000:1b7a     54               PUSH SP
  1000:1b7b     49               DEC CX
  1000:1b7c     53               PUSH BX
  1000:1b7d     54               PUSH SP
  1000:1b7e     53               PUSH BX
  1000:1b7f     20 46 4F         AND byte ptr [BP + 0x4f],AL
  1000:1b82     52               PUSH DX
  1000:1b83     20 00            AND byte ptr [BX + SI],AL
  1000:1b85     2F               DAS
  1000:1b86     46               INC SI
  1000:1b87     55               PUSH BP
  1000:1b88     54               PUSH SP
  1000:1b89     55               PUSH BP
  1000:1b8a     52               PUSH DX
  1000:1b8b     45               INC BP
  1000:1b8c     20 53 50         AND byte ptr [BP + DI + 0x50],DL
  1000:1b8f     41               INC CX
  1000:1b90     43               INC BX
  1000:1b91     45               INC BP
  1000:1b92     20 45 58         AND byte ptr [DI + 0x58],AL
  1000:1b95     50               PUSH AX
  1000:1b96     4C               DEC SP
  1000:1b97     4F               DEC DI
  1000:1b98     52               PUSH DX
  1000:1b99     41               INC CX
  1000:1b9a     54               PUSH SP
  1000:1b9b     49               DEC CX
  1000:1b9c     4F               DEC DI
  1000:1b9d     4E               DEC SI
  1000:1b9e     2E 00 54 48      ADD byte ptr CS:[SI + 0x48],DL
  1000:1ba2     41               INC CX
  1000:1ba3     4E               DEC SI
  1000:1ba4     4B               DEC BX
  1000:1ba5     53               PUSH BX
  1000:1ba6     20 54 4F         AND byte ptr [SI + 0x4f],DL
  1000:1ba9     20 59 4F         AND byte ptr [BX + DI + 0x4f],BL
  1000:1bac     55               PUSH BP
  1000:1bad     52               PUSH DX
  1000:1bae     20 4F 55         AND byte ptr [BX + 0x55],CL
  1000:1bb1     54               PUSH SP
  1000:1bb2     53               PUSH BX
  1000:1bb3     54               PUSH SP
  1000:1bb4     41               INC CX
  1000:1bb5     4E               DEC SI
  1000:1bb6     44               INC SP
  1000:1bb7     49               DEC CX
  1000:1bb8     4E               DEC SI
  1000:1bb9     47               INC DI
  1000:1bba     20 45 46         AND byte ptr [DI + 0x46],AL
  1000:1bbd     46               INC SI
  1000:1bbe     4F               DEC DI
  1000:1bbf     52               PUSH DX
  1000:1bc0     54               PUSH SP
  1000:1bc1     53               PUSH BX
  1000:1bc2     2C 00            SUB AL,0x0
  1000:1bc4     2F               DAS
  1000:1bc5     54               PUSH SP
  1000:1bc6     48               DEC AX
  1000:1bc7     45               INC BP
  1000:1bc8     20 45 4E         AND byte ptr [DI + 0x4e],AL
  1000:1bcb     54               PUSH SP
  1000:1bcc     49               DEC CX
  1000:1bcd     52               PUSH DX
  1000:1bce     45               INC BP
  1000:1bcf     20 48 55         AND byte ptr [BX + SI + 0x55],CL
  1000:1bd2     4D               DEC BP
  1000:1bd3     41               INC CX
  1000:1bd4     4E               DEC SI
  1000:1bd5     20 52 41         AND byte ptr [BP + SI + 0x41],DL
  1000:1bd8     43               INC BX
  1000:1bd9     45               INC BP
  1000:1bda     2C 20            SUB AL,0x20
  1000:1bdc     53               PUSH BX
  1000:1bdd     41               INC CX
  1000:1bde     56               PUSH SI
  1000:1bdf     45               INC BP
  1000:1be0     44               INC SP
  1000:1be1     20 46 52         AND byte ptr [BP + 0x52],AL
  1000:1be4     4F               DEC DI
  1000:1be5     4D               DEC BP
  1000:1be6     00 2F            ADD byte ptr [BX],CH
  1000:1be8     4F               DEC DI
  1000:1be9     42               INC DX
  1000:1bea     4C               DEC SP
  1000:1beb     49               DEC CX
  1000:1bec     54               PUSH SP
  1000:1bed     45               INC BP
  1000:1bee     52               PUSH DX
  1000:1bef     41               INC CX
  1000:1bf0     54               PUSH SP
  1000:1bf1     49               DEC CX
  1000:1bf2     4F               DEC DI
  1000:1bf3     4E               DEC SI
  1000:1bf4     2C 20            SUB AL,0x20
  1000:1bf6     43               INC BX
  1000:1bf7     41               INC CX
  1000:1bf8     4E               DEC SI
  1000:1bf9     20 42 45         AND byte ptr [BP + SI + 0x45],AL
  1000:1bfc     4E               DEC SI
  1000:1bfd     45               INC BP
  1000:1bfe     46               INC SI
  1000:1bff     49               DEC CX
  1000:1c00     54               PUSH SP
  1000:1c01     20 46 52         AND byte ptr [BP + 0x52],AL
  1000:1c04     4F               DEC DI
  1000:1c05     4D               DEC BP
  1000:1c06     00 2F            ADD byte ptr [BX],CH
  1000:1c08     4E               DEC SI
  1000:1c09     45               INC BP
  1000:1c0a     44               INC SP
  1000:1c0b     49               DEC CX
  1000:1c0c     41               INC CX
  1000:1c0d     4D               DEC BP
  1000:1c0e     27               DAA
  1000:1c0f     53               PUSH BX
  1000:1c10     20 53 45         AND byte ptr [BP + DI + 0x45],DL
  1000:1c13     43               INC BX
  1000:1c14     52               PUSH DX
  1000:1c15     45               INC BP
  1000:1c16     54               PUSH SP
  1000:1c17     53               PUSH BX
  1000:1c18     2E 00 FF         ADD BH,BH
  1000:1c1b     00 00            ADD byte ptr [BX + SI],AL
  1000:1c1d     00 00            ADD byte ptr [BX + SI],AL
  1000:1c1f     00 00            ADD byte ptr [BX + SI],AL
  1000:1c21     00 00            ADD byte ptr [BX + SI],AL
  1000:1c23     00 00            ADD byte ptr [BX + SI],AL

FUN_1000_1c44:
  1000:1c44     3C 00            CMP AL,0x0
  1000:1c46     74 21            JZ 0x1000:1c69
  1000:1c48     3C 01            CMP AL,0x1
  1000:1c4a     75 03            JNZ 0x1000:1c4f
  1000:1c4c     EB 3A            JMP 0x1000:1c88

LAB_1000_1c4f:
  1000:1c4f     3C 02            CMP AL,0x2
  1000:1c51     75 03            JNZ 0x1000:1c56
  1000:1c53     EB 48            JMP 0x1000:1c9d

LAB_1000_1c56:
  1000:1c56     3C 03            CMP AL,0x3
  1000:1c58     75 03            JNZ 0x1000:1c5d
  1000:1c5a     EB 4D            JMP 0x1000:1ca9

LAB_1000_1c5d:
  1000:1c5d     3C 04            CMP AL,0x4
  1000:1c5f     74 4F            JZ 0x1000:1cb0
  1000:1c61     3C 05            CMP AL,0x5
  1000:1c63     75 03            JNZ 0x1000:1c68
  1000:1c65     EB 4D            JMP 0x1000:1cb4

LAB_1000_1c68:
  1000:1c68     C3               RET

LAB_1000_1c69:
  1000:1c69     8C D8            MOV AX,DS
  1000:1c6b     8E C0            MOV ES,AX
  1000:1c6d     B5 37            MOV CH,0x37
  1000:1c6f     B1 1B            MOV CL,0x1b
  1000:1c71     E8 C6 01         CALL 0x1000:1e3a
  1000:1c74     B5 37            MOV CH,0x37
  1000:1c76     B1 1B            MOV CL,0x1b
  1000:1c78     E8 3D 00         CALL 0x1000:1cb8
  1000:1c7b     2E 03 36 22 1C   ADD SI,word ptr CS:[0x1c22]
  1000:1c80     B5 1D            MOV CH,0x1d
  1000:1c82     B1 1B            MOV CL,0x1b
  1000:1c84     E8 B8 00         CALL 0x1000:1d3f
  1000:1c87     C3               RET

LAB_1000_1c88:
  1000:1c88     8C D8            MOV AX,DS
  1000:1c8a     8E C0            MOV ES,AX
  1000:1c8c     B5 41            MOV CH,0x41
  1000:1c8e     B1 42            MOV CL,0x42
  1000:1c90     E8 A7 01         CALL 0x1000:1e3a
  1000:1c93     B5 41            MOV CH,0x41
  1000:1c95     B1 42            MOV CL,0x42
  1000:1c97     B0 07            MOV AL,0x7
  1000:1c99     E8 1C 00         CALL 0x1000:1cb8
  1000:1c9c     C3               RET

LAB_1000_1c9d:
  1000:1c9d     8C D8            MOV AX,DS
  1000:1c9f     8E C0            MOV ES,AX
  1000:1ca1     B5 0A            MOV CH,0xa
  1000:1ca3     B1 25            MOV CL,0x25
  1000:1ca5     E8 0C 01         CALL 0x1000:1db4
  1000:1ca8     C3               RET

LAB_1000_1ca9:
  1000:1ca9     B9 57 00         MOV CX,0x57
  1000:1cac     E8 F3 01         CALL 0x1000:1ea2
  1000:1caf     C3               RET

LAB_1000_1cb0:
  1000:1cb0     E8 41 01         CALL 0x1000:1df4
  1000:1cb3     C3               RET

LAB_1000_1cb4:
  1000:1cb4     E8 C3 01         CALL 0x1000:1e7a
  1000:1cb7     C3               RET

FUN_1000_1cb8:
  1000:1cb8     8A C5            MOV AL,CH
  1000:1cba     32 E4            XOR AH,AH
  1000:1cbc     32 FF            XOR BH,BH
  1000:1cbe     8A D9            MOV BL,CL
  1000:1cc0     F7 E3            MUL BX
  1000:1cc2     2E A3 20 1C      MOV CS:[0x1c20],AX
  1000:1cc6     8B C8            MOV CX,AX
  1000:1cc8     D1 E0            SHL AX,0x1
  1000:1cca     2E A3 22 1C      MOV CS:[0x1c22],AX

LAB_1000_1cce:
  1000:1cce     32 DB            XOR BL,BL
  1000:1cd0     2E 03 36 22 1C   ADD SI,word ptr CS:[0x1c22]
  1000:1cd5     8A 04            MOV AL,byte ptr [SI]
  1000:1cd7     D0 E0            SHL AL,0x1
  1000:1cd9     D0 E0            SHL AL,0x1
  1000:1cdb     D0 D3            RCL BL,0x1
  1000:1cdd     2E 2B 36 20 1C   SUB SI,word ptr CS:[0x1c20]
  1000:1ce2     8A 24            MOV AH,byte ptr [SI]
  1000:1ce4     D0 E4            SHL AH,0x1
  1000:1ce6     D0 E4            SHL AH,0x1
  1000:1ce8     D0 D3            RCL BL,0x1
  1000:1cea     2E 2B 36 20 1C   SUB SI,word ptr CS:[0x1c20]
  1000:1cef     8A 14            MOV DL,byte ptr [SI]
  1000:1cf1     D0 E2            SHL DL,0x1
  1000:1cf3     D0 E2            SHL DL,0x1
  1000:1cf5     D0 D3            RCL BL,0x1
  1000:1cf7     D0 E3            SHL BL,0x1
  1000:1cf9     D0 E0            SHL AL,0x1
  1000:1cfb     D0 E0            SHL AL,0x1
  1000:1cfd     D0 D3            RCL BL,0x1
  1000:1cff     D0 E4            SHL AH,0x1
  1000:1d01     D0 E4            SHL AH,0x1
  1000:1d03     D0 D3            RCL BL,0x1
  1000:1d05     D0 E2            SHL DL,0x1
  1000:1d07     D0 E2            SHL DL,0x1
  1000:1d09     D0 D3            RCL BL,0x1
  1000:1d0b     86 C3            XCHG BL,AL
  1000:1d0d     AA               STOSB ES:DI
  1000:1d0e     86 C3            XCHG BL,AL
  1000:1d10     32 DB            XOR BL,BL
  1000:1d12     D0 E0            SHL AL,0x1
  1000:1d14     D0 E0            SHL AL,0x1
  1000:1d16     D0 D3            RCL BL,0x1
  1000:1d18     D0 E4            SHL AH,0x1
  1000:1d1a     D0 E4            SHL AH,0x1
  1000:1d1c     D0 D3            RCL BL,0x1
  1000:1d1e     D0 E2            SHL DL,0x1
  1000:1d20     D0 E2            SHL DL,0x1
  1000:1d22     D0 D3            RCL BL,0x1
  1000:1d24     D0 E3            SHL BL,0x1
  1000:1d26     D0 E0            SHL AL,0x1
  1000:1d28     D0 E0            SHL AL,0x1
  1000:1d2a     D0 D3            RCL BL,0x1
  1000:1d2c     D0 E4            SHL AH,0x1
  1000:1d2e     D0 E4            SHL AH,0x1
  1000:1d30     D0 D3            RCL BL,0x1
  1000:1d32     D0 E2            SHL DL,0x1
  1000:1d34     D0 E2            SHL DL,0x1
  1000:1d36     D0 D3            RCL BL,0x1
  1000:1d38     8A C3            MOV AL,BL
  1000:1d3a     AA               STOSB ES:DI
  1000:1d3b     46               INC SI
  1000:1d3c     E2 90            LOOP 0x1000:1cce
  1000:1d3e     C3               RET

FUN_1000_1d3f:
  1000:1d3f     8A C5            MOV AL,CH
  1000:1d41     32 E4            XOR AH,AH
  1000:1d43     32 FF            XOR BH,BH
  1000:1d45     8A D9            MOV BL,CL
  1000:1d47     F7 E3            MUL BX
  1000:1d49     2E A3 20 1C      MOV CS:[0x1c20],AX
  1000:1d4d     8B C8            MOV CX,AX
  1000:1d4f     BA 70 60         MOV DX,0x6070
  1000:1d52     B7 06            MOV BH,0x6

LAB_1000_1d54:
  1000:1d54     32 DB            XOR BL,BL
  1000:1d56     2E 03 36 20 1C   ADD SI,word ptr CS:[0x1c20]
  1000:1d5b     8A 04            MOV AL,byte ptr [SI]
  1000:1d5d     D0 E0            SHL AL,0x1
  1000:1d5f     D0 E0            SHL AL,0x1
  1000:1d61     73 02            JNC 0x1000:1d65
  1000:1d63     8A DA            MOV BL,DL

LAB_1000_1d65:
  1000:1d65     2E 2B 36 20 1C   SUB SI,word ptr CS:[0x1c20]
  1000:1d6a     8A 24            MOV AH,byte ptr [SI]
  1000:1d6c     D0 E4            SHL AH,0x1
  1000:1d6e     D0 E4            SHL AH,0x1
  1000:1d70     73 02            JNC 0x1000:1d74
  1000:1d72     0A DE            OR BL,DH

LAB_1000_1d74:
  1000:1d74     D0 E0            SHL AL,0x1
  1000:1d76     D0 E0            SHL AL,0x1
  1000:1d78     73 03            JNC 0x1000:1d7d
  1000:1d7a     80 CB 07         OR BL,0x7

LAB_1000_1d7d:
  1000:1d7d     D0 E4            SHL AH,0x1
  1000:1d7f     D0 E4            SHL AH,0x1
  1000:1d81     73 02            JNC 0x1000:1d85
  1000:1d83     0A DF            OR BL,BH

LAB_1000_1d85:
  1000:1d85     86 C3            XCHG BL,AL
  1000:1d87     AA               STOSB ES:DI
  1000:1d88     86 C3            XCHG BL,AL
  1000:1d8a     32 DB            XOR BL,BL
  1000:1d8c     D0 E0            SHL AL,0x1
  1000:1d8e     D0 E0            SHL AL,0x1
  1000:1d90     73 02            JNC 0x1000:1d94
  1000:1d92     8A DA            MOV BL,DL

LAB_1000_1d94:
  1000:1d94     D0 E4            SHL AH,0x1
  1000:1d96     D0 E4            SHL AH,0x1
  1000:1d98     73 02            JNC 0x1000:1d9c
  1000:1d9a     0A DE            OR BL,DH

LAB_1000_1d9c:
  1000:1d9c     D0 E0            SHL AL,0x1
  1000:1d9e     D0 E0            SHL AL,0x1
  1000:1da0     73 03            JNC 0x1000:1da5
  1000:1da2     80 CB 07         OR BL,0x7

LAB_1000_1da5:
  1000:1da5     D0 E4            SHL AH,0x1
  1000:1da7     D0 E4            SHL AH,0x1
  1000:1da9     73 02            JNC 0x1000:1dad
  1000:1dab     0A DF            OR BL,BH

LAB_1000_1dad:
  1000:1dad     8A C3            MOV AL,BL
  1000:1daf     AA               STOSB ES:DI
  1000:1db0     46               INC SI
  1000:1db1     E2 A1            LOOP 0x1000:1d54
  1000:1db3     C3               RET

FUN_1000_1db4:
  1000:1db4     8A C5            MOV AL,CH
  1000:1db6     32 E4            XOR AH,AH
  1000:1db8     32 FF            XOR BH,BH
  1000:1dba     8A D9            MOV BL,CL
  1000:1dbc     F7 E3            MUL BX
  1000:1dbe     2E A3 20 1C      MOV CS:[0x1c20],AX
  1000:1dc2     8B C8            MOV CX,AX
  1000:1dc4     32 FF            XOR BH,BH

LAB_1000_1dc6:
  1000:1dc6     AC               LODSB SI
  1000:1dc7     8A D0            MOV DL,AL
  1000:1dc9     32 DB            XOR BL,BL
  1000:1dcb     D0 E2            SHL DL,0x1
  1000:1dcd     D0 E2            SHL DL,0x1
  1000:1dcf     D0 D3            RCL BL,0x1
  1000:1dd1     D0 E2            SHL DL,0x1
  1000:1dd3     D0 E2            SHL DL,0x1
  1000:1dd5     D0 D3            RCL BL,0x1
  1000:1dd7     2E 8A 87 24 1C   MOV AL,byte ptr CS:[BX + 0x1c24]
  1000:1ddc     AA               STOSB ES:DI
  1000:1ddd     32 DB            XOR BL,BL
  1000:1ddf     D0 E2            SHL DL,0x1
  1000:1de1     D0 E2            SHL DL,0x1
  1000:1de3     D0 D3            RCL BL,0x1
  1000:1de5     D0 E2            SHL DL,0x1
  1000:1de7     D0 E2            SHL DL,0x1
  1000:1de9     D0 D3            RCL BL,0x1
  1000:1deb     2E 8A 87 24 1C   MOV AL,byte ptr CS:[BX + 0x1c24]
  1000:1df0     AA               STOSB ES:DI
  1000:1df1     E2 D3            LOOP 0x1000:1dc6
  1000:1df3     C3               RET

FUN_1000_1df4:
  1000:1df4     8A C6            MOV AL,DH
  1000:1df6     32 E4            XOR AH,AH
  1000:1df8     32 F6            XOR DH,DH
  1000:1dfa     F7 E2            MUL DX
  1000:1dfc     8B C8            MOV CX,AX
  1000:1dfe     8A D3            MOV DL,BL
  1000:1e00     D0 E3            SHL BL,0x1
  1000:1e02     D0 E3            SHL BL,0x1
  1000:1e04     D0 E3            SHL BL,0x1
  1000:1e06     D0 E3            SHL BL,0x1
  1000:1e08     8A F3            MOV DH,BL

LAB_1000_1e0a:
  1000:1e0a     32 DB            XOR BL,BL
  1000:1e0c     AC               LODSB SI
  1000:1e0d     D0 E0            SHL AL,0x1
  1000:1e0f     D0 E0            SHL AL,0x1
  1000:1e11     73 02            JNC 0x1000:1e15
  1000:1e13     8A DE            MOV BL,DH

LAB_1000_1e15:
  1000:1e15     D0 E0            SHL AL,0x1
  1000:1e17     D0 E0            SHL AL,0x1
  1000:1e19     73 02            JNC 0x1000:1e1d
  1000:1e1b     0A DA            OR BL,DL

LAB_1000_1e1d:
  1000:1e1d     86 C3            XCHG BL,AL
  1000:1e1f     AA               STOSB ES:DI
  1000:1e20     86 C3            XCHG BL,AL
  1000:1e22     32 DB            XOR BL,BL
  1000:1e24     D0 E0            SHL AL,0x1
  1000:1e26     D0 E0            SHL AL,0x1
  1000:1e28     73 02            JNC 0x1000:1e2c
  1000:1e2a     8A DE            MOV BL,DH

LAB_1000_1e2c:
  1000:1e2c     D0 E0            SHL AL,0x1
  1000:1e2e     D0 E0            SHL AL,0x1
  1000:1e30     73 02            JNC 0x1000:1e34
  1000:1e32     0A DA            OR BL,DL

LAB_1000_1e34:
  1000:1e34     8A C3            MOV AL,BL
  1000:1e36     AA               STOSB ES:DI
  1000:1e37     E2 D1            LOOP 0x1000:1e0a
  1000:1e39     C3               RET

FUN_1000_1e3a:
  1000:1e3a     8A C5            MOV AL,CH
  1000:1e3c     32 E4            XOR AH,AH
  1000:1e3e     32 FF            XOR BH,BH
  1000:1e40     8A D9            MOV BL,CL
  1000:1e42     F7 E3            MUL BX
  1000:1e44     2E A3 20 1C      MOV CS:[0x1c20],AX
  1000:1e48     8B C8            MOV CX,AX
  1000:1e4a     32 FF            XOR BH,BH

LAB_1000_1e4c:
  1000:1e4c     AC               LODSB SI
  1000:1e4d     8A D0            MOV DL,AL
  1000:1e4f     32 DB            XOR BL,BL
  1000:1e51     D0 C2            ROL DL,0x1
  1000:1e53     D0 C2            ROL DL,0x1
  1000:1e55     D0 D3            RCL BL,0x1
  1000:1e57     D0 C2            ROL DL,0x1
  1000:1e59     D0 C2            ROL DL,0x1
  1000:1e5b     D0 D3            RCL BL,0x1
  1000:1e5d     2E 8A 87 24 1C   MOV AL,byte ptr CS:[BX + 0x1c24]
  1000:1e62     AA               STOSB ES:DI
  1000:1e63     32 DB            XOR BL,BL
  1000:1e65     D0 C2            ROL DL,0x1
  1000:1e67     D0 C2            ROL DL,0x1
  1000:1e69     D0 D3            RCL BL,0x1
  1000:1e6b     D0 C2            ROL DL,0x1
  1000:1e6d     D0 C2            ROL DL,0x1
  1000:1e6f     D0 D3            RCL BL,0x1
  1000:1e71     2E 8A 87 24 1C   MOV AL,byte ptr CS:[BX + 0x1c24]
  1000:1e76     AA               STOSB ES:DI
  1000:1e77     E2 D3            LOOP 0x1000:1e4c
  1000:1e79     C3               RET

FUN_1000_1e7a:
  1000:1e7a     32 FF            XOR BH,BH

LAB_1000_1e7c:
  1000:1e7c     AC               LODSB SI
  1000:1e7d     8A D8            MOV BL,AL
  1000:1e7f     8A E0            MOV AH,AL
  1000:1e81     80 E3 F0         AND BL,0xf0
  1000:1e84     D0 EB            SHR BL,0x1
  1000:1e86     D0 EB            SHR BL,0x1
  1000:1e88     D0 EB            SHR BL,0x1
  1000:1e8a     D0 EB            SHR BL,0x1
  1000:1e8c     32 FF            XOR BH,BH
  1000:1e8e     2E 8A 87 2C 1C   MOV AL,byte ptr CS:[BX + 0x1c2c]
  1000:1e93     AA               STOSB ES:DI
  1000:1e94     8A DC            MOV BL,AH
  1000:1e96     80 E3 0F         AND BL,0xf
  1000:1e99     2E 8A 87 2C 1C   MOV AL,byte ptr CS:[BX + 0x1c2c]
  1000:1e9e     AA               STOSB ES:DI
  1000:1e9f     E2 DB            LOOP 0x1000:1e7c
  1000:1ea1     C3               RET

FUN_1000_1ea2:
  1000:1ea2     51               PUSH CX
  1000:1ea3     B9 08 00         MOV CX,0x8

LAB_1000_1ea6:
  1000:1ea6     8A 04            MOV AL,byte ptr [SI]
  1000:1ea8     8A 64 02         MOV AH,byte ptr [SI + 0x2]
  1000:1eab     33 DB            XOR BX,BX
  1000:1ead     33 D2            XOR DX,DX
  1000:1eaf     D0 E4            SHL AH,0x1
  1000:1eb1     D0 D3            RCL BL,0x1
  1000:1eb3     D0 E0            SHL AL,0x1
  1000:1eb5     D0 D3            RCL BL,0x1
  1000:1eb7     2E 8A 97 3C 1C   MOV DL,byte ptr CS:[BX + 0x1c3c]
  1000:1ebc     32 DB            XOR BL,BL
  1000:1ebe     D0 E4            SHL AH,0x1
  1000:1ec0     D0 E4            SHL AH,0x1
  1000:1ec2     D0 D3            RCL BL,0x1
  1000:1ec4     D0 E0            SHL AL,0x1
  1000:1ec6     D0 E0            SHL AL,0x1
  1000:1ec8     D0 D3            RCL BL,0x1
  1000:1eca     2E 0A 97 40 1C   OR DL,byte ptr CS:[BX + 0x1c40]
  1000:1ecf     26 88 15         MOV byte ptr ES:[DI],DL
  1000:1ed2     47               INC DI
  1000:1ed3     33 DB            XOR BX,BX
  1000:1ed5     33 D2            XOR DX,DX
  1000:1ed7     D0 E4            SHL AH,0x1
  1000:1ed9     D0 E4            SHL AH,0x1
  1000:1edb     D0 D3            RCL BL,0x1
  1000:1edd     D0 E0            SHL AL,0x1
  1000:1edf     D0 E0            SHL AL,0x1
  1000:1ee1     D0 D3            RCL BL,0x1
  1000:1ee3     2E 8A 97 3C 1C   MOV DL,byte ptr CS:[BX + 0x1c3c]
  1000:1ee8     32 DB            XOR BL,BL
  1000:1eea     D0 E4            SHL AH,0x1
  1000:1eec     D0 E4            SHL AH,0x1
  1000:1eee     D0 D3            RCL BL,0x1
  1000:1ef0     D0 E0            SHL AL,0x1
  1000:1ef2     D0 E0            SHL AL,0x1
  1000:1ef4     D0 D3            RCL BL,0x1
  1000:1ef6     2E 0A 97 40 1C   OR DL,byte ptr CS:[BX + 0x1c40]
  1000:1efb     26 88 15         MOV byte ptr ES:[DI],DL
  1000:1efe     47               INC DI

caseD_9b:

caseD_9e:

caseD_ad:

caseD_e4:
  1000:1eff     46               INC SI
  1000:1f00     8A 04            MOV AL,byte ptr [SI]
  1000:1f02     8A 64 02         MOV AH,byte ptr [SI + 0x2]
  1000:1f05     33 DB            XOR BX,BX
  1000:1f07     33 D2            XOR DX,DX
  1000:1f09     D0 E4            SHL AH,0x1
  1000:1f0b     D0 D3            RCL BL,0x1
  1000:1f0d     D0 E0            SHL AL,0x1
  1000:1f0f     D0 D3            RCL BL,0x1
  1000:1f11     2E 8A 97 3C 1C   MOV DL,byte ptr CS:[BX + 0x1c3c]
  1000:1f16     32 DB            XOR BL,BL
  1000:1f18     D0 E4            SHL AH,0x1
  1000:1f1a     D0 E4            SHL AH,0x1
  1000:1f1c     D0 D3            RCL BL,0x1
  1000:1f1e     D0 E0            SHL AL,0x1
  1000:1f20     D0 E0            SHL AL,0x1
  1000:1f22     D0 D3            RCL BL,0x1
  1000:1f24     2E 0A 97 40 1C   OR DL,byte ptr CS:[BX + 0x1c40]
  1000:1f29     26 88 15         MOV byte ptr ES:[DI],DL
  1000:1f2c     47               INC DI
  1000:1f2d     33 DB            XOR BX,BX
  1000:1f2f     33 D2            XOR DX,DX
  1000:1f31     D0 E4            SHL AH,0x1
  1000:1f33     D0 E4            SHL AH,0x1
  1000:1f35     D0 D3            RCL BL,0x1
  1000:1f37     D0 E0            SHL AL,0x1
  1000:1f39     D0 E0            SHL AL,0x1
  1000:1f3b     D0 D3            RCL BL,0x1
  1000:1f3d     2E 8A 97 3C 1C   MOV DL,byte ptr CS:[BX + 0x1c3c]
  1000:1f42     32 DB            XOR BL,BL
  1000:1f44     D0 E4            SHL AH,0x1
  1000:1f46     D0 E4            SHL AH,0x1
  1000:1f48     D0 D3            RCL BL,0x1
  1000:1f4a     D0 E0            SHL AL,0x1
  1000:1f4c     D0 E0            SHL AL,0x1
  1000:1f4e     D0 D3            RCL BL,0x1
  1000:1f50     2E 0A 97 40 1C   OR DL,byte ptr CS:[BX + 0x1c40]
  1000:1f55     26 88 15         MOV byte ptr ES:[DI],DL
  1000:1f58     47               INC DI
  1000:1f59     83 C6 03         ADD SI,0x3
  1000:1f5c     49               DEC CX
  1000:1f5d     74 03            JZ 0x1000:1f62
  1000:1f5f     E9 44 FF         JMP 0x1000:1ea6

LAB_1000_1f62:
  1000:1f62     59               POP CX
  1000:1f63     49               DEC CX
  1000:1f64     74 03            JZ 0x1000:1f69
  1000:1f66     E9 39 FF         JMP 0x1000:1ea2

LAB_1000_1f69:
  1000:1f69     C3               RET

FUN_1000_1f85:
  1000:1f85     1E               PUSH DS
  1000:1f86     2E 89 26 83 1F   MOV word ptr CS:[0x1f83],SP
  1000:1f8b     8C C8            MOV AX,CS
  1000:1f8d     8E C0            MOV ES,AX
  1000:1f8f     BA 70 1F         MOV DX,0x1f70
  1000:1f92     BD 08 00         MOV BP,0x8
  1000:1f95     FF 1E 08 05      CALLF [0x508]
  1000:1f99     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:1f9e     75 0A            JNZ 0x1000:1faa
  1000:1fa0     BA CE 03         MOV DX,0x3ce
  1000:1fa3     B0 03            MOV AL,0x3
  1000:1fa5     EE               OUT DX,AL
  1000:1fa6     42               INC DX
  1000:1fa7     B0 00            MOV AL,0x0
  1000:1fa9     EE               OUT DX,AL

LAB_1000_1faa:
  1000:1faa     BF 00 00         MOV DI,0x0
  1000:1fad     B9 5A 00         MOV CX,0x5a
  1000:1fb0     BE 50 23         MOV SI,0x2350

LAB_1000_1fb3:
  1000:1fb3     E8 DA EB         CALL 0x1000:0b90
  1000:1fb6     56               PUSH SI
  1000:1fb7     E8 BE 00         CALL 0x1000:2078
  1000:1fba     5E               POP SI
  1000:1fbb     2E 8A 24         MOV AH,byte ptr CS:[SI]
  1000:1fbe     46               INC SI
  1000:1fbf     32 C0            XOR AL,AL
  1000:1fc1     03 F8            ADD DI,AX
  1000:1fc3     51               PUSH CX
  1000:1fc4     B9 03 00         MOV CX,0x3
  1000:1fc7     E8 7B 00         CALL 0x1000:2045
  1000:1fca     59               POP CX
  1000:1fcb     E2 E6            LOOP 0x1000:1fb3
  1000:1fcd     B9 5A 00         MOV CX,0x5a

LAB_1000_1fd0:
  1000:1fd0     56               PUSH SI
  1000:1fd1     E8 BC EB         CALL 0x1000:0b90
  1000:1fd4     E8 A1 00         CALL 0x1000:2078
  1000:1fd7     5E               POP SI
  1000:1fd8     4E               DEC SI
  1000:1fd9     2E 8A 24         MOV AH,byte ptr CS:[SI]
  1000:1fdc     32 C0            XOR AL,AL
  1000:1fde     2B F8            SUB DI,AX
  1000:1fe0     51               PUSH CX
  1000:1fe1     B9 03 00         MOV CX,0x3
  1000:1fe4     E8 5E 00         CALL 0x1000:2045
  1000:1fe7     59               POP CX
  1000:1fe8     E2 E6            LOOP 0x1000:1fd0
  1000:1fea     E8 F5 00         CALL 0x1000:20e2
  1000:1fed     B7 07            MOV BH,0x7
  1000:1fef     B3 08            MOV BL,0x8
  1000:1ff1     BD 06 00         MOV BP,0x6
  1000:1ff4     FF 1E 08 05      CALLF [0x508]
  1000:1ff8     B9 46 00         MOV CX,0x46
  1000:1ffb     E8 44 00         CALL 0x1000:2042
  1000:1ffe     E8 33 01         CALL 0x1000:2134
  1000:2001     51               PUSH CX
  1000:2002     B9 FA 00         MOV CX,0xfa
  1000:2005     E8 3A 00         CALL 0x1000:2042
  1000:2008     59               POP CX
  1000:2009     E8 72 01         CALL 0x1000:217e
  1000:200c     51               PUSH CX
  1000:200d     B9 64 00         MOV CX,0x64
  1000:2010     E8 2F 00         CALL 0x1000:2042
  1000:2013     59               POP CX
  1000:2014     E8 48 02         CALL 0x1000:225f
  1000:2017     51               PUSH CX
  1000:2018     B9 FA 00         MOV CX,0xfa
  1000:201b     E8 24 00         CALL 0x1000:2042
  1000:201e     59               POP CX
  1000:201f     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:2024     75 0A            JNZ 0x1000:2030
  1000:2026     BA CE 03         MOV DX,0x3ce
  1000:2029     B0 03            MOV AL,0x3
  1000:202b     EE               OUT DX,AL
  1000:202c     42               INC DX
  1000:202d     B0 00            MOV AL,0x0
  1000:202f     EE               OUT DX,AL

LAB_1000_2030:
  1000:2030     E8 95 01         CALL 0x1000:21c8
  1000:2033     51               PUSH CX
  1000:2034     B9 EE 02         MOV CX,0x2ee
  1000:2037     E8 08 00         CALL 0x1000:2042
  1000:203a     59               POP CX

LAB_1000_203b:
  1000:203b     2E 8B 26 83 1F   MOV SP,word ptr CS:[0x1f83]
  1000:2040     1F               POP DS
  1000:2041     C3               RET

FUN_1000_2042:
  1000:2042     E8 4B EB         CALL 0x1000:0b90

FUN_1000_2045:
  1000:2045     80 3E 5B 05 01   CMP byte ptr [0x55b],0x1
  1000:204a     75 04            JNZ 0x1000:2050
  1000:204c     FF 2E 8B 05      JMPF [0x58b]

LAB_1000_2050:
  1000:2050     F6 06 6C 05 80   TEST byte ptr [0x56c],0x80
  1000:2055     75 02            JNZ 0x1000:2059
  1000:2057     EB E2            JMP 0x1000:203b

LAB_1000_2059:
  1000:2059     80 3E 55 05 01   CMP byte ptr [0x555],0x1
  1000:205e     75 0F            JNZ 0x1000:206f
  1000:2060     55               PUSH BP
  1000:2061     BD 02 00         MOV BP,0x2
  1000:2064     FF 1E 00 05      CALLF [0x500]
  1000:2068     5D               POP BP
  1000:2069     A8 40            TEST AL,0x40
  1000:206b     74 02            JZ 0x1000:206f
  1000:206d     EB CC            JMP 0x1000:203b

LAB_1000_206f:
  1000:206f     2E 39 0E 00 0B   CMP word ptr CS:[0xb00],CX
  1000:2074     72 CF            JC 0x1000:2045
  1000:2076     C3               RET

FUN_1000_2078:
  1000:2078     51               PUSH CX
  1000:2079     57               PUSH DI
  1000:207a     56               PUSH SI
  1000:207b     2E 80 3E 77 20 00   CMP byte ptr CS:[0x2077],0x0
  1000:2081     75 3C            JNZ 0x1000:20bf
  1000:2083     2E C6 06 77 20 01   MOV byte ptr CS:[0x2077],0x1
  1000:2089     57               PUSH DI
  1000:208a     8C D8            MOV AX,DS
  1000:208c     8E C0            MOV ES,AX
  1000:208e     BF 40 36         MOV DI,0x3640
  1000:2091     B3 08            MOV BL,0x8
  1000:2093     B9 14 00         MOV CX,0x14
  1000:2096     BE 24 28         MOV SI,0x2824
  1000:2099     B0 43            MOV AL,0x43
  1000:209b     E8 74 01         CALL 0x1000:2212
  1000:209e     5F               POP DI
  1000:209f     2E C6 06 77 20 01   MOV byte ptr CS:[0x2077],0x1
  1000:20a5     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:20aa     74 13            JZ 0x1000:20bf
  1000:20ac     57               PUSH DI
  1000:20ad     BE 40 36         MOV SI,0x3640
  1000:20b0     BF 40 46         MOV DI,0x4640
  1000:20b3     B0 04            MOV AL,0x4
  1000:20b5     B2 14            MOV DL,0x14
  1000:20b7     B6 43            MOV DH,0x43

caseD_88:
  1000:20b9     B3 0F            MOV BL,0xf
  1000:20bb     E8 86 FB         CALL 0x1000:1c44
  1000:20be     5F               POP DI

LAB_1000_20bf:
  1000:20bf     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:20c4     75 05            JNZ 0x1000:20cb
  1000:20c6     BE 40 36         MOV SI,0x3640
  1000:20c9     EB 03            JMP 0x1000:20ce

LAB_1000_20cb:
  1000:20cb     BE 40 46         MOV SI,0x4640

LAB_1000_20ce:
  1000:20ce     B2 14            MOV DL,0x14
  1000:20d0     B6 43            MOV DH,0x43
  1000:20d2     B3 08            MOV BL,0x8
  1000:20d4     B8 EE FF         MOV AX,0xffee
  1000:20d7     BD 12 00         MOV BP,0x12
  1000:20da     FF 1E 08 05      CALLF [0x508]
  1000:20de     5E               POP SI
  1000:20df     5F               POP DI
  1000:20e0     59               POP CX
  1000:20e1     C3               RET

FUN_1000_20e2:
  1000:20e2     51               PUSH CX
  1000:20e3     8C D8            MOV AX,DS
  1000:20e5     8E C0            MOV ES,AX
  1000:20e7     BF 40 36         MOV DI,0x3640
  1000:20ea     B9 12 00         MOV CX,0x12
  1000:20ed     BE E8 2A         MOV SI,0x2ae8
  1000:20f0     B0 2C            MOV AL,0x2c
  1000:20f2     E8 1D 01         CALL 0x1000:2212
  1000:20f5     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:20fa     75 0C            JNZ 0x1000:2108
  1000:20fc     BE 40 36         MOV SI,0x3640
  1000:20ff     B2 12            MOV DL,0x12
  1000:2101     B6 2C            MOV DH,0x2c
  1000:2103     BF 00 03         MOV DI,0x300
  1000:2106     EB 1E            JMP 0x1000:2126

LAB_1000_2108:
  1000:2108     BE 40 36         MOV SI,0x3640
  1000:210b     BF F8 51         MOV DI,0x51f8
  1000:210e     B0 04            MOV AL,0x4
  1000:2110     B2 12            MOV DL,0x12
  1000:2112     B6 2C            MOV DH,0x2c
  1000:2114     B3 01            MOV BL,0x1
  1000:2116     E8 2B FB         CALL 0x1000:1c44
  1000:2119     E8 00 02         CALL 0x1000:231c
  1000:211c     BE 40 46         MOV SI,0x4640
  1000:211f     B2 14            MOV DL,0x14
  1000:2121     B6 43            MOV DH,0x43
  1000:2123     BF 00 00         MOV DI,0x0

LAB_1000_2126:
  1000:2126     B3 01            MOV BL,0x1
  1000:2128     B8 EE FF         MOV AX,0xffee
  1000:212b     BD 12 00         MOV BP,0x12
  1000:212e     FF 1E 08 05      CALLF [0x508]
  1000:2132     59               POP CX
  1000:2133     C3               RET

FUN_1000_2134:
  1000:2134     51               PUSH CX
  1000:2135     8C D8            MOV AX,DS
  1000:2137     8E C0            MOV ES,AX
  1000:2139     BF 40 36         MOV DI,0x3640
  1000:213c     B9 2C 00         MOV CX,0x2c
  1000:213f     BE 82 2C         MOV SI,0x2c82
  1000:2142     B0 1F            MOV AL,0x1f
  1000:2144     E8 CB 00         CALL 0x1000:2212
  1000:2147     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:214c     75 05            JNZ 0x1000:2153
  1000:214e     BE 40 36         MOV SI,0x3640
  1000:2151     EB 16            JMP 0x1000:2169

LAB_1000_2153:
  1000:2153     57               PUSH DI
  1000:2154     BE 40 36         MOV SI,0x3640
  1000:2157     BF 40 46         MOV DI,0x4640
  1000:215a     B0 04            MOV AL,0x4
  1000:215c     B2 2C            MOV DL,0x2c
  1000:215e     B6 1F            MOV DH,0x1f
  1000:2160     B3 0A            MOV BL,0xa
  1000:2162     E8 DF FA         CALL 0x1000:1c44
  1000:2165     5F               POP DI
  1000:2166     BE 40 46         MOV SI,0x4640

LAB_1000_2169:
  1000:2169     BF 14 11         MOV DI,0x1114
  1000:216c     B3 0A            MOV BL,0xa
  1000:216e     B2 2C            MOV DL,0x2c
  1000:2170     B6 1F            MOV DH,0x1f
  1000:2172     B8 EE FF         MOV AX,0xffee
  1000:2175     BD 12 00         MOV BP,0x12
  1000:2178     FF 1E 08 05      CALLF [0x508]
  1000:217c     59               POP CX
  1000:217d     C3               RET

FUN_1000_217e:
  1000:217e     51               PUSH CX
  1000:217f     8C D8            MOV AX,DS
  1000:2181     8E C0            MOV ES,AX
  1000:2183     BF 40 36         MOV DI,0x3640
  1000:2186     B9 0A 00         MOV CX,0xa
  1000:2189     BE 98 25         MOV SI,0x2598
  1000:218c     B0 0D            MOV AL,0xd
  1000:218e     E8 81 00         CALL 0x1000:2212
  1000:2191     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:2196     75 05            JNZ 0x1000:219d
  1000:2198     BE 40 36         MOV SI,0x3640
  1000:219b     EB 16            JMP 0x1000:21b3

LAB_1000_219d:
  1000:219d     57               PUSH DI
  1000:219e     BE 40 36         MOV SI,0x3640
  1000:21a1     BF 40 46         MOV DI,0x4640
  1000:21a4     B0 04            MOV AL,0x4
  1000:21a6     B2 0A            MOV DL,0xa
  1000:21a8     B6 0D            MOV DH,0xd
  1000:21aa     B3 0F            MOV BL,0xf
  1000:21ac     E8 95 FA         CALL 0x1000:1c44
  1000:21af     5F               POP DI
  1000:21b0     BE 40 46         MOV SI,0x4640

LAB_1000_21b3:
  1000:21b3     BF 0A 50         MOV DI,0x500a
  1000:21b6     B3 0F            MOV BL,0xf
  1000:21b8     B2 0A            MOV DL,0xa
  1000:21ba     B6 0D            MOV DH,0xd
  1000:21bc     B8 EE FF         MOV AX,0xffee
  1000:21bf     BD 12 00         MOV BP,0x12
  1000:21c2     FF 1E 08 05      CALLF [0x508]
  1000:21c6     59               POP CX
  1000:21c7     C3               RET

FUN_1000_21c8:
  1000:21c8     51               PUSH CX
  1000:21c9     8C D8            MOV AX,DS
  1000:21cb     8E C0            MOV ES,AX
  1000:21cd     BF 40 36         MOV DI,0x3640
  1000:21d0     B9 1C 00         MOV CX,0x1c
  1000:21d3     BE B8 23         MOV SI,0x23b8
  1000:21d6     B0 12            MOV AL,0x12
  1000:21d8     E8 37 00         CALL 0x1000:2212
  1000:21db     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:21e0     75 05            JNZ 0x1000:21e7
  1000:21e2     BE 40 36         MOV SI,0x3640
  1000:21e5     EB 14            JMP 0x1000:21fb

LAB_1000_21e7:
  1000:21e7     BE 40 36         MOV SI,0x3640
  1000:21ea     BF 40 46         MOV DI,0x4640
  1000:21ed     B0 04            MOV AL,0x4
  1000:21ef     B2 1C            MOV DL,0x1c
  1000:21f1     B6 12            MOV DH,0x12
  1000:21f3     B3 0F            MOV BL,0xf
  1000:21f5     E8 4C FA         CALL 0x1000:1c44
  1000:21f8     BE 40 46         MOV SI,0x4640

LAB_1000_21fb:
  1000:21fb     BF 1B AD         MOV DI,0xad1b
  1000:21fe     B3 0F            MOV BL,0xf
  1000:2200     B2 1C            MOV DL,0x1c
  1000:2202     B6 12            MOV DH,0x12
  1000:2204     B8 EE FF         MOV AX,0xffee
  1000:2207     BD 12 00         MOV BP,0x12
  1000:220a     FF 1E 08 05      CALLF [0x508]
  1000:220e     59               POP CX
  1000:220f     C3               RET

FUN_1000_2212:
  1000:2212     50               PUSH AX
  1000:2213     2E 89 0E 10 22   MOV word ptr CS:[0x2210],CX
  1000:2218     BD 0A 00         MOV BP,0xa
  1000:221b     FF 1E 08 05      CALLF [0x508]
  1000:221f     58               POP AX

LAB_1000_2220:
  1000:2220     2E 8B 0E 10 22   MOV CX,word ptr CS:[0x2210]

LAB_1000_2225:
  1000:2225     2E 8A 24         MOV AH,byte ptr CS:[SI]
  1000:2228     F6 C4 80         TEST AH,0x80
  1000:222b     75 0A            JNZ 0x1000:2237
  1000:222d     EB 1D            JMP 0x1000:224c

LAB_1000_2230:
  1000:2230     E2 F3            LOOP 0x1000:2225
  1000:2232     FE C8            DEC AL
  1000:2234     75 EA            JNZ 0x1000:2220
  1000:2236     C3               RET

LAB_1000_2237:
  1000:2237     F6 DC            NEG AH
  1000:2239     2A CC            SUB CL,AH
  1000:223b     FE C4            INC AH
  1000:223d     46               INC SI
  1000:223e     2E 8A 1C         MOV BL,byte ptr CS:[SI]

LAB_1000_2241:
  1000:2241     26 88 1D         MOV byte ptr ES:[DI],BL
  1000:2244     47               INC DI
  1000:2245     FE CC            DEC AH
  1000:2247     75 F8            JNZ 0x1000:2241
  1000:2249     46               INC SI
  1000:224a     EB E4            JMP 0x1000:2230

LAB_1000_224c:
  1000:224c     2A CC            SUB CL,AH
  1000:224e     FE C4            INC AH

LAB_1000_2250:
  1000:2250     46               INC SI
  1000:2251     2E 8A 1C         MOV BL,byte ptr CS:[SI]
  1000:2254     26 88 1D         MOV byte ptr ES:[DI],BL
  1000:2257     47               INC DI
  1000:2258     FE CC            DEC AH
  1000:225a     75 F4            JNZ 0x1000:2250
  1000:225c     46               INC SI
  1000:225d     EB D1            JMP 0x1000:2230

FUN_1000_225f:
  1000:225f     50               PUSH AX
  1000:2260     57               PUSH DI
  1000:2261     56               PUSH SI
  1000:2262     1E               PUSH DS
  1000:2263     55               PUSH BP
  1000:2264     8C D8            MOV AX,DS
  1000:2266     8E C0            MOV ES,AX
  1000:2268     26 80 3E 58 05 00   CMP byte ptr ES:[0x558],0x0
  1000:226e     75 09            JNZ 0x1000:2279
  1000:2270     BA BA 30         MOV DX,0x30ba
  1000:2273     8C C8            MOV AX,CS
  1000:2275     8E D8            MOV DS,AX
  1000:2277     EB 14            JMP 0x1000:228d

LAB_1000_2279:
  1000:2279     1E               PUSH DS
  1000:227a     8C C8            MOV AX,CS
  1000:227c     8E D8            MOV DS,AX
  1000:227e     BE BA 30         MOV SI,0x30ba
  1000:2281     BF 40 46         MOV DI,0x4640
  1000:2284     B0 03            MOV AL,0x3
  1000:2286     E8 BB F9         CALL 0x1000:1c44
  1000:2289     1F               POP DS
  1000:228a     BA 40 46         MOV DX,0x4640

LAB_1000_228d:
  1000:228d     BF 18 41         MOV DI,0x4118
  1000:2290     BD 9A 3B         MOV BP,0x3b9a
  1000:2293     B9 08 00         MOV CX,0x8
  1000:2296     33 C0            XOR AX,AX

LAB_1000_2298:
  1000:2298     51               PUSH CX
  1000:2299     57               PUSH DI
  1000:229a     B9 10 00         MOV CX,0x10

LAB_1000_229d:
  1000:229d     2E 8A 46 00      MOV AL,byte ptr CS:[BP + 0x0]
  1000:22a1     45               INC BP
  1000:22a2     0A C0            OR AL,AL
  1000:22a4     78 03            JS 0x1000:22a9
  1000:22a6     E8 58 00         CALL 0x1000:2301

LAB_1000_22a9:
  1000:22a9     83 C7 02         ADD DI,0x2
  1000:22ac     E2 EF            LOOP 0x1000:229d
  1000:22ae     5F               POP DI
  1000:22af     81 C7 00 08      ADD DI,0x800
  1000:22b3     59               POP CX
  1000:22b4     E2 E2            LOOP 0x1000:2298
  1000:22b6     5D               POP BP
  1000:22b7     1F               POP DS
  1000:22b8     80 3E 58 05 00   CMP byte ptr [0x558],0x0
  1000:22bd     75 0A            JNZ 0x1000:22c9
  1000:22bf     BE 24 26         MOV SI,0x2624
  1000:22c2     1E               PUSH DS
  1000:22c3     8C C8            MOV AX,CS
  1000:22c5     8E D8            MOV DS,AX
  1000:22c7     EB 1F            JMP 0x1000:22e8

LAB_1000_22c9:
  1000:22c9     1E               PUSH DS
  1000:22ca     8C D8            MOV AX,DS
  1000:22cc     8E C0            MOV ES,AX
  1000:22ce     8C C8            MOV AX,CS
  1000:22d0     8E D8            MOV DS,AX
  1000:22d2     BE 24 26         MOV SI,0x2624
  1000:22d5     BF 40 46         MOV DI,0x4640
  1000:22d8     B0 04            MOV AL,0x4
  1000:22da     B2 20            MOV DL,0x20
  1000:22dc     B6 10            MOV DH,0x10
  1000:22de     B3 0F            MOV BL,0xf
  1000:22e0     E8 61 F9         CALL 0x1000:1c44
  1000:22e3     1F               POP DS
  1000:22e4     BE 40 46         MOV SI,0x4640
  1000:22e7     1E               PUSH DS

LAB_1000_22e8:
  1000:22e8     BF 18 89         MOV DI,0x8918
  1000:22eb     B6 10            MOV DH,0x10
  1000:22ed     B2 20            MOV DL,0x20
  1000:22ef     B3 0F            MOV BL,0xf
  1000:22f1     B8 EE FF         MOV AX,0xffee
  1000:22f4     BD 12 00         MOV BP,0x12
  1000:22f7     26 FF 1E 08 05   CALLF [0x508]
  1000:22fc     1F               POP DS
  1000:22fd     5E               POP SI
  1000:22fe     5F               POP DI
  1000:22ff     58               POP AX
  1000:2300     C3               RET

FUN_1000_2301:
  1000:2301     50               PUSH AX
  1000:2302     52               PUSH DX
  1000:2303     03 C0            ADD AX,AX
  1000:2305     03 C0            ADD AX,AX
  1000:2307     03 C0            ADD AX,AX
  1000:2309     03 C0            ADD AX,AX
  1000:230b     03 C0            ADD AX,AX
  1000:230d     03 D0            ADD DX,AX
  1000:230f     55               PUSH BP
  1000:2310     BD 50 00         MOV BP,0x50
  1000:2313     26 FF 1E 08 05   CALLF [0x508]
  1000:2318     5D               POP BP
  1000:2319     5A               POP DX
  1000:231a     58               POP AX
  1000:231b     C3               RET

FUN_1000_231c:
  1000:231c     BF B8 46         MOV DI,0x46b8
  1000:231f     BE F8 51         MOV SI,0x51f8
  1000:2322     B9 2C 00         MOV CX,0x2c

LAB_1000_2325:
  1000:2325     51               PUSH CX
  1000:2326     B9 24 00         MOV CX,0x24

LAB_1000_2329:
  1000:2329     32 DB            XOR BL,BL
  1000:232b     AC               LODSB SI
  1000:232c     8A 3D            MOV BH,byte ptr [DI]
  1000:232e     8A E0            MOV AH,AL
  1000:2330     24 0F            AND AL,0xf
  1000:2332     74 03            JZ 0x1000:2337
  1000:2334     80 E7 F0         AND BH,0xf0

LAB_1000_2337:
  1000:2337     80 E4 F0         AND AH,0xf0
  1000:233a     74 03            JZ 0x1000:233f
  1000:233c     80 E7 0F         AND BH,0xf

LAB_1000_233f:
  1000:233f     0A C4            OR AL,AH
  1000:2341     0A C7            OR AL,BH
  1000:2343     88 05            MOV byte ptr [DI],AL
  1000:2345     47               INC DI
  1000:2346     E2 E1            LOOP 0x1000:2329
  1000:2348     83 C7 04         ADD DI,0x4
  1000:234b     59               POP CX
  1000:234c     E2 D7            LOOP 0x1000:2325
  1000:234e     C3               RET

caseD_8e:
  1000:2620     00 00            ADD byte ptr [BX + SI],AL
  1000:2622     00 00            ADD byte ptr [BX + SI],AL
  1000:2624     00 1F            ADD byte ptr [BX],BL
  1000:2626     FF F0            PUSH AX
  1000:2628     00 FC            ADD AH,BH
  1000:262a     00 00            ADD byte ptr [BX + SI],AL
  1000:262c     1F               POP DS

caseD_4:

caseD_7:
  1000:2a20     00 04            ADD byte ptr [SI],AL
  1000:2a22     04 4A            ADD AL,0x4a

caseD_e1:
  1000:2be8     FC               CLD
  1000:2be9     00 0F            ADD byte ptr [BX],CL
  1000:2beb     FD               STD
  1000:2bec     FF 00            INC word ptr [BX + SI]
  1000:2bee     FC               CLD
  1000:2bef     F9               STC
  1000:2bf0     00 03            ADD byte ptr [BP + DI],AL
  1000:2bf2     01 FF            ADD DI,DI

caseD_66:
  1000:2e00     01 FF            ADD DI,DI
  1000:2e02     E0 03            LOOPNZ 0x1000:2e07
  1000:2e04     FF 80 00 00      INC word ptr [BX + SI + 0x0]

caseD_f9:
  1000:2e08     01 FF            ADD DI,DI
  1000:2e0a     E0 00            LOOPNZ 0x1000:2e0c

LAB_1000_2e0c:
  1000:2e0c     00 1F            ADD byte ptr [BX],BL
  1000:2e0e     FC               CLD
  1000:2e0f     1F               POP DS
  1000:2e10     FC               CLD
  1000:2e11     FC               CLD
  1000:2e12     00 03            ADD byte ptr [BP + DI],AL
  1000:2e14     01 FF            ADD DI,DI
  1000:2e16     FF F0            PUSH AX
  1000:2e18     FE 00            INC byte ptr [BX + SI]
  1000:2e1a     04 03            ADD AL,0x3
  1000:2e1c     FF 80 0F FF      INC word ptr [BX + SI + 0xff0f]
  1000:2e20     FC               CLD
  1000:2e21     00 15            ADD byte ptr [DI],DL
  1000:2e23     03 FF            ADD DI,DI
  1000:2e25     80 00 00         ADD byte ptr [BX + SI],0x0
  1000:2e28     0B FF            OR DI,DI
  1000:2e2a     E0 03            LOOPNZ 0x1000:2e2f
  1000:2e2c     FF 80 00 00      INC word ptr [BX + SI + 0x0]
  1000:2e30     0B FF            OR DI,DI
  1000:2e32     E0 00            LOOPNZ 0x1000:2e34

LAB_1000_2e34:
  1000:2e34     00 3F            ADD byte ptr [BX],BH
  1000:2e36     F8               CLC
  1000:2e37     0F FE FC         PADDD MM7,MM4
  1000:2e3a     00 03            ADD byte ptr [BP + DI],AL
  1000:2e3c     00 3F            ADD byte ptr [BX],BH

caseD_70:
  1000:2efb     FE 00            INC byte ptr [BX + SI]
  1000:2efd     03 FF            ADD DI,DI
  1000:2eff     80 0F FE         OR byte ptr [BX],0xfe
  1000:2f02     FC               CLD
  1000:2f03     00 16 03 FF      ADD byte ptr [0xff03],DL
  1000:2f07     80 00 02         ADD byte ptr [BX + SI],0x2

caseD_f7:
  1000:30b5     00 00            ADD byte ptr [BX + SI],AL
  1000:30b7     00 00            ADD byte ptr [BX + SI],AL
  1000:30b9     00 00            ADD byte ptr [BX + SI],AL
  1000:30bb     00 00            ADD byte ptr [BX + SI],AL
  1000:30bd     00 00            ADD byte ptr [BX + SI],AL
  1000:30bf     00 00            ADD byte ptr [BX + SI],AL
  1000:30c1     00 00            ADD byte ptr [BX + SI],AL
  1000:30c3     00 00            ADD byte ptr [BX + SI],AL
  1000:30c5     00 00            ADD byte ptr [BX + SI],AL
  1000:30c7     00 00            ADD byte ptr [BX + SI],AL
  1000:30c9     00 00            ADD byte ptr [BX + SI],AL
  1000:30cb     00 00            ADD byte ptr [BX + SI],AL
  1000:30cd     00 00            ADD byte ptr [BX + SI],AL
  1000:30cf     01 00            ADD word ptr [BX + SI],AX
  1000:30d1     00 00            ADD byte ptr [BX + SI],AL
  1000:30d3     0F 00 00         SLDT word ptr [BX + SI]
  1000:30d6     00 7A 00         ADD byte ptr [BP + SI + 0x0],BH
  1000:30d9     05 00 00         ADD AX,0x0
  1000:30dc     00 00            ADD byte ptr [BX + SI],AL
  1000:30de     00 00            ADD byte ptr [BX + SI],AL
  1000:30e0     00 00            ADD byte ptr [BX + SI],AL
  1000:30e2     00 3F            ADD byte ptr [BX],BH
  1000:30e4     00 00            ADD byte ptr [BX + SI],AL
  1000:30e6     07               POP ES
  1000:30e7     EA 00 15 3E A0   JMPF 0xa000:18e0

caseD_d9:

caseD_dd:
  1000:3640     FF F0            PUSH AX
  1000:3642     FD               STD
  1000:3643     0E               PUSH CS
  1000:3644     FF F0            PUSH AX
  1000:3646     FD               STD
  1000:3647     0B FF            OR DI,DI
  1000:3649     F4               HLT

; ============================================================================
; Linear Disassembly for: INSTALL.EXE
; Architecture: 16-bit x86 Real Mode
; ============================================================================


FUN_1000_0010:
  1000:0010     55               PUSH BP
  1000:0011     8B EC            MOV BP,SP
  1000:0013     B8 70 00         MOV AX,0x70
  1000:0016     E8 3B 18         CALL 0x1000:1854
  1000:0019     C7 46 FE 00 00   MOV word ptr [BP + -0x2],0x0
  1000:001e     C7 46 94 FF FF   MOV word ptr [BP + -0x6c],0xffff
  1000:0023     C7 46 96 FF FF   MOV word ptr [BP + -0x6a],0xffff
  1000:0028     C7 46 9C FF FF   MOV word ptr [BP + -0x64],0xffff
  1000:002d     C7 46 A2 FF FF   MOV word ptr [BP + -0x5e],0xffff
  1000:0032     C7 46 98 FF FF   MOV word ptr [BP + -0x68],0xffff
  1000:0037     C7 46 90 FF FF   MOV word ptr [BP + -0x70],0xffff
  1000:003c     C7 46 9E FF FF   MOV word ptr [BP + -0x62],0xffff
  1000:0041     C7 46 A0 01 00   MOV word ptr [BP + -0x60],0x1
  1000:0046     C7 46 92 00 00   MOV word ptr [BP + -0x6e],0x0
  1000:004b     C7 46 9A 00 00   MOV word ptr [BP + -0x66],0x0
  1000:0050     B8 01 00         MOV AX,0x1
  1000:0053     50               PUSH AX
  1000:0054     E8 19 0D         CALL 0x1000:0d70
  1000:0057     83 C4 02         ADD SP,0x2
  1000:005a     E8 E1 14         CALL 0x1000:153e
  1000:005d     E8 04 02         CALL 0x1000:0264
  1000:0060     E8 13 09         CALL 0x1000:0976
  1000:0063     B8 42 00         MOV AX,0x42
  1000:0066     50               PUSH AX
  1000:0067     B8 44 00         MOV AX,0x44
  1000:006a     50               PUSH AX
  1000:006b     B8 5B 00         MOV AX,0x5b
  1000:006e     50               PUSH AX
  1000:006f     E8 EC 0D         CALL 0x1000:0e5e
  1000:0072     83 C4 06         ADD SP,0x6

LAB_1000_0075:
  1000:0075     83 7E A0 06      CMP word ptr [BP + -0x60],0x6
  1000:0079     7E 03            JLE 0x1000:007e
  1000:007b     E9 B0 00         JMP 0x1000:012e

LAB_1000_007e:
  1000:007e     8B 46 A0         MOV AX,word ptr [BP + -0x60]
  1000:0081     3D 06 00         CMP AX,0x6
  1000:0084     77 78            JA 0x1000:00fe
  1000:0086     03 C0            ADD AX,AX
  1000:0088     93               XCHG AX,BX

switchD:
  1000:0089     2E FF A7 F0 00   JMP word ptr CS:[BX + 0xf0]

caseD_0:
  1000:008e     B8 02 00         MOV AX,0x2
  1000:0091     50               PUSH AX
  1000:0092     B8 06 01         MOV AX,0x106
  1000:0095     50               PUSH AX
  1000:0096     B8 09 01         MOV AX,0x109
  1000:0099     50               PUSH AX
  1000:009a     B8 0F 01         MOV AX,0x10f
  1000:009d     50               PUSH AX
  1000:009e     E8 BD 0D         CALL 0x1000:0e5e
  1000:00a1     83 C4 08         ADD SP,0x8
  1000:00a4     3D 79 00         CMP AX,0x79
  1000:00a7     75 1B            JNZ 0x1000:00c4
  1000:00a9     2B C0            SUB AX,AX
  1000:00ab     50               PUSH AX
  1000:00ac     E8 C1 0C         CALL 0x1000:0d70
  1000:00af     83 C4 02         ADD SP,0x2
  1000:00b2     E8 E7 14         CALL 0x1000:159c
  1000:00b5     2B C0            SUB AX,AX
  1000:00b7     50               PUSH AX
  1000:00b8     E8 C9 16         CALL 0x1000:1784
  1000:00bb     83 C4 02         ADD SP,0x2

caseD_1:
  1000:00be     E8 4D 03         CALL 0x1000:040e
  1000:00c1     EB 10            JMP 0x1000:00d3

LAB_1000_00c4:
  1000:00c4     C7 46 92 00 00   MOV word ptr [BP + -0x6e],0x0
  1000:00c9     C7 46 A0 00 00   MOV word ptr [BP + -0x60],0x0
  1000:00ce     EB 2E            JMP 0x1000:00fe

caseD_2:
  1000:00d0     E8 DD 04         CALL 0x1000:05b0

LAB_1000_00d3:
  1000:00d3     89 46 92         MOV word ptr [BP + -0x6e],AX
  1000:00d6     EB 26            JMP 0x1000:00fe

caseD_3:
  1000:00d8     E8 EB 03         CALL 0x1000:04c6
  1000:00db     EB F6            JMP 0x1000:00d3

caseD_4:
  1000:00de     E8 87 05         CALL 0x1000:0668
  1000:00e1     EB F0            JMP 0x1000:00d3

caseD_5:
  1000:00e4     E8 39 06         CALL 0x1000:0720
  1000:00e7     EB EA            JMP 0x1000:00d3

caseD_6:
  1000:00ea     E8 B1 06         CALL 0x1000:079e
  1000:00ed     EB E4            JMP 0x1000:00d3

default:
  1000:00fe     8B 46 92         MOV AX,word ptr [BP + -0x6e]
  1000:0101     3D FE FF         CMP AX,0xfffe
  1000:0104     74 1C            JZ 0x1000:0122
  1000:0106     3D FF FF         CMP AX,0xffff
  1000:0109     74 0B            JZ 0x1000:0116

LAB_1000_010b:
  1000:010b     FF 46 A0         INC word ptr [BP + -0x60]

LAB_1000_010e:
  1000:010e     C7 46 9A 00 00   MOV word ptr [BP + -0x66],0x0
  1000:0113     E9 5F FF         JMP 0x1000:0075

LAB_1000_0116:
  1000:0116     FF 4E A0         DEC word ptr [BP + -0x60]
  1000:0119     C7 46 9A FF FF   MOV word ptr [BP + -0x66],0xffff
  1000:011e     E9 54 FF         JMP 0x1000:0075

LAB_1000_0122:
  1000:0122     83 7E 9A FF      CMP word ptr [BP + -0x66],-0x1
  1000:0126     75 E3            JNZ 0x1000:010b
  1000:0128     FF 4E A0         DEC word ptr [BP + -0x60]
  1000:012b     EB E1            JMP 0x1000:010e

LAB_1000_012e:
  1000:012e     E8 0B 00         CALL 0x1000:013c
  1000:0131     E8 FA 06         CALL 0x1000:082e
  1000:0134     E8 65 14         CALL 0x1000:159c
  1000:0137     8B E5            MOV SP,BP
  1000:0139     5D               POP BP
  1000:013a     C3               RET

FUN_1000_013c:
  1000:013c     55               PUSH BP
  1000:013d     8B EC            MOV BP,SP
  1000:013f     B8 04 00         MOV AX,0x4
  1000:0142     E8 0F 17         CALL 0x1000:1854
  1000:0145     B8 42 01         MOV AX,0x142
  1000:0148     50               PUSH AX
  1000:0149     E8 EC 0B         CALL 0x1000:0d38
  1000:014c     83 C4 02         ADD SP,0x2
  1000:014f     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0152     0B C0            OR AX,AX
  1000:0154     7D 03            JGE 0x1000:0159
  1000:0156     E9 F7 00         JMP 0x1000:0250

LAB_1000_0159:
  1000:0159     B8 2E 0E         MOV AX,0xe2e
  1000:015c     50               PUSH AX
  1000:015d     E8 18 1B         CALL 0x1000:1c78
  1000:0160     83 C4 02         ADD SP,0x2
  1000:0163     50               PUSH AX
  1000:0164     B8 2E 0E         MOV AX,0xe2e
  1000:0167     50               PUSH AX
  1000:0168     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:016b     E8 C4 19         CALL 0x1000:1b32
  1000:016e     83 C4 06         ADD SP,0x6
  1000:0171     B8 02 00         MOV AX,0x2
  1000:0174     50               PUSH AX
  1000:0175     B8 4F 01         MOV AX,0x14f
  1000:0178     50               PUSH AX
  1000:0179     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:017c     E8 B3 19         CALL 0x1000:1b32
  1000:017f     83 C4 06         ADD SP,0x6
  1000:0182     B8 D6 10         MOV AX,0x10d6
  1000:0185     50               PUSH AX
  1000:0186     E8 EF 1A         CALL 0x1000:1c78
  1000:0189     83 C4 02         ADD SP,0x2
  1000:018c     50               PUSH AX
  1000:018d     B8 D6 10         MOV AX,0x10d6
  1000:0190     50               PUSH AX
  1000:0191     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0194     E8 9B 19         CALL 0x1000:1b32
  1000:0197     83 C4 06         ADD SP,0x6
  1000:019a     B8 02 00         MOV AX,0x2
  1000:019d     50               PUSH AX
  1000:019e     B8 52 01         MOV AX,0x152
  1000:01a1     50               PUSH AX
  1000:01a2     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:01a5     E8 8A 19         CALL 0x1000:1b32
  1000:01a8     83 C4 06         ADD SP,0x6
  1000:01ab     B8 8E 0D         MOV AX,0xd8e
  1000:01ae     50               PUSH AX
  1000:01af     E8 C6 1A         CALL 0x1000:1c78
  1000:01b2     83 C4 02         ADD SP,0x2
  1000:01b5     50               PUSH AX
  1000:01b6     B8 8E 0D         MOV AX,0xd8e
  1000:01b9     50               PUSH AX
  1000:01ba     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:01bd     E8 72 19         CALL 0x1000:1b32
  1000:01c0     83 C4 06         ADD SP,0x6
  1000:01c3     B8 02 00         MOV AX,0x2
  1000:01c6     50               PUSH AX
  1000:01c7     B8 55 01         MOV AX,0x155
  1000:01ca     50               PUSH AX
  1000:01cb     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:01ce     E8 61 19         CALL 0x1000:1b32
  1000:01d1     83 C4 06         ADD SP,0x6
  1000:01d4     B8 26 11         MOV AX,0x1126
  1000:01d7     50               PUSH AX
  1000:01d8     E8 9D 1A         CALL 0x1000:1c78
  1000:01db     83 C4 02         ADD SP,0x2
  1000:01de     50               PUSH AX
  1000:01df     B8 26 11         MOV AX,0x1126
  1000:01e2     50               PUSH AX
  1000:01e3     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:01e6     E8 49 19         CALL 0x1000:1b32
  1000:01e9     83 C4 06         ADD SP,0x6
  1000:01ec     B8 02 00         MOV AX,0x2
  1000:01ef     50               PUSH AX
  1000:01f0     B8 58 01         MOV AX,0x158
  1000:01f3     50               PUSH AX
  1000:01f4     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:01f7     E8 38 19         CALL 0x1000:1b32
  1000:01fa     83 C4 06         ADD SP,0x6
  1000:01fd     B8 D8 11         MOV AX,0x11d8
  1000:0200     50               PUSH AX
  1000:0201     E8 74 1A         CALL 0x1000:1c78
  1000:0204     83 C4 02         ADD SP,0x2
  1000:0207     50               PUSH AX
  1000:0208     B8 D8 11         MOV AX,0x11d8
  1000:020b     50               PUSH AX
  1000:020c     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:020f     E8 20 19         CALL 0x1000:1b32
  1000:0212     83 C4 06         ADD SP,0x6
  1000:0215     B8 02 00         MOV AX,0x2
  1000:0218     50               PUSH AX
  1000:0219     B8 5B 01         MOV AX,0x15b
  1000:021c     50               PUSH AX
  1000:021d     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0220     E8 0F 19         CALL 0x1000:1b32
  1000:0223     83 C4 06         ADD SP,0x6
  1000:0226     B8 DE 0D         MOV AX,0xdde
  1000:0229     50               PUSH AX
  1000:022a     E8 4B 1A         CALL 0x1000:1c78
  1000:022d     83 C4 02         ADD SP,0x2
  1000:0230     50               PUSH AX
  1000:0231     B8 DE 0D         MOV AX,0xdde
  1000:0234     50               PUSH AX
  1000:0235     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0238     E8 F7 18         CALL 0x1000:1b32
  1000:023b     83 C4 06         ADD SP,0x6
  1000:023e     B8 02 00         MOV AX,0x2
  1000:0241     50               PUSH AX
  1000:0242     B8 5E 01         MOV AX,0x15e
  1000:0245     50               PUSH AX
  1000:0246     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0249     E8 E6 18         CALL 0x1000:1b32
  1000:024c     8B E5            MOV SP,BP
  1000:024e     5D               POP BP
  1000:024f     C3               RET

LAB_1000_0250:
  1000:0250     B8 61 01         MOV AX,0x161
  1000:0253     50               PUSH AX
  1000:0254     B8 63 01         MOV AX,0x163
  1000:0257     50               PUSH AX
  1000:0258     B8 77 01         MOV AX,0x177
  1000:025b     50               PUSH AX
  1000:025c     E8 FF 0B         CALL 0x1000:0e5e
  1000:025f     8B E5            MOV SP,BP
  1000:0261     5D               POP BP
  1000:0262     C3               RET

FUN_1000_0264:
  1000:0264     55               PUSH BP
  1000:0265     8B EC            MOV BP,SP
  1000:0267     B8 08 00         MOV AX,0x8
  1000:026a     E8 E7 15         CALL 0x1000:1854
  1000:026d     E8 F0 0E         CALL 0x1000:1160
  1000:0270     B8 03 00         MOV AX,0x3
  1000:0273     50               PUSH AX
  1000:0274     B8 50 00         MOV AX,0x50
  1000:0277     50               PUSH AX
  1000:0278     2B C0            SUB AX,AX
  1000:027a     50               PUSH AX
  1000:027b     50               PUSH AX
  1000:027c     8D 46 F8         LEA AX,[BP + -0x8]
  1000:027f     50               PUSH AX
  1000:0280     E8 3D 0D         CALL 0x1000:0fc0
  1000:0283     83 C4 0A         ADD SP,0xa
  1000:0286     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0289     50               PUSH AX
  1000:028a     E8 17 0E         CALL 0x1000:10a4
  1000:028d     83 C4 02         ADD SP,0x2
  1000:0290     B8 9D 01         MOV AX,0x19d
  1000:0293     50               PUSH AX
  1000:0294     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0297     50               PUSH AX
  1000:0298     E8 6D 08         CALL 0x1000:0b08
  1000:029b     83 C4 04         ADD SP,0x4
  1000:029e     B8 01 00         MOV AX,0x1
  1000:02a1     50               PUSH AX
  1000:02a2     50               PUSH AX
  1000:02a3     8D 46 F8         LEA AX,[BP + -0x8]
  1000:02a6     50               PUSH AX
  1000:02a7     E8 44 0D         CALL 0x1000:0fee
  1000:02aa     83 C4 06         ADD SP,0x6
  1000:02ad     B8 02 00         MOV AX,0x2
  1000:02b0     50               PUSH AX
  1000:02b1     8D 46 F8         LEA AX,[BP + -0x8]
  1000:02b4     50               PUSH AX
  1000:02b5     B8 C7 01         MOV AX,0x1c7
  1000:02b8     50               PUSH AX
  1000:02b9     E8 B4 10         CALL 0x1000:1370
  1000:02bc     8B E5            MOV SP,BP
  1000:02be     5D               POP BP
  1000:02bf     C3               RET

FUN_1000_02c0:
  1000:02c0     55               PUSH BP
  1000:02c1     8B EC            MOV BP,SP
  1000:02c3     B8 16 00         MOV AX,0x16
  1000:02c6     E8 8B 15         CALL 0x1000:1854
  1000:02c9     57               PUSH DI
  1000:02ca     56               PUSH SI
  1000:02cb     C7 46 F2 00 00   MOV word ptr [BP + -0xe],0x0
  1000:02d0     C7 46 EA 32 00   MOV word ptr [BP + -0x16],0x32
  1000:02d5     8B 46 0A         MOV AX,word ptr [BP + 0xa]
  1000:02d8     8D 7E F8         LEA DI,[BP + -0x8]
  1000:02db     8B F0            MOV SI,AX
  1000:02dd     16               PUSH SS
  1000:02de     07               POP ES
  1000:02df     A5               MOVSW ES:DI,SI
  1000:02e0     A5               MOVSW ES:DI,SI
  1000:02e1     A5               MOVSW ES:DI,SI
  1000:02e2     A5               MOVSW ES:DI,SI
  1000:02e3     E8 7A 0E         CALL 0x1000:1160
  1000:02e6     8D 46 F8         LEA AX,[BP + -0x8]
  1000:02e9     50               PUSH AX
  1000:02ea     E8 3F 09         CALL 0x1000:0c2c
  1000:02ed     83 C4 02         ADD SP,0x2
  1000:02f0     89 46 F6         MOV word ptr [BP + -0xa],AX
  1000:02f3     B8 E1 01         MOV AX,0x1e1
  1000:02f6     50               PUSH AX
  1000:02f7     8D 46 F8         LEA AX,[BP + -0x8]
  1000:02fa     50               PUSH AX
  1000:02fb     E8 0A 08         CALL 0x1000:0b08
  1000:02fe     83 C4 04         ADD SP,0x4
  1000:0301     B8 01 00         MOV AX,0x1
  1000:0304     50               PUSH AX
  1000:0305     50               PUSH AX
  1000:0306     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0309     50               PUSH AX
  1000:030a     E8 E1 0C         CALL 0x1000:0fee
  1000:030d     83 C4 06         ADD SP,0x6
  1000:0310     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0313     50               PUSH AX
  1000:0314     E8 8D 0D         CALL 0x1000:10a4
  1000:0317     83 C4 02         ADD SP,0x2
  1000:031a     B8 01 00         MOV AX,0x1
  1000:031d     50               PUSH AX
  1000:031e     B8 04 00         MOV AX,0x4
  1000:0321     50               PUSH AX
  1000:0322     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0325     50               PUSH AX
  1000:0326     E8 C5 0C         CALL 0x1000:0fee
  1000:0329     83 C4 06         ADD SP,0x6
  1000:032c     B8 02 00         MOV AX,0x2
  1000:032f     50               PUSH AX
  1000:0330     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0333     50               PUSH AX
  1000:0334     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:0337     E8 36 10         CALL 0x1000:1370
  1000:033a     83 C4 06         ADD SP,0x6
  1000:033d     A1 80 0E         MOV AX,[0xe80]
  1000:0340     2B 46 F8         SUB AX,word ptr [BP + -0x8]
  1000:0343     05 02 00         ADD AX,0x2
  1000:0346     50               PUSH AX
  1000:0347     2B C0            SUB AX,AX
  1000:0349     50               PUSH AX
  1000:034a     8D 46 F8         LEA AX,[BP + -0x8]
  1000:034d     50               PUSH AX
  1000:034e     E8 CB 0C         CALL 0x1000:101c
  1000:0351     83 C4 06         ADD SP,0x6
  1000:0354     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:0357     89 46 EE         MOV word ptr [BP + -0x12],AX
  1000:035a     E9 95 00         JMP 0x1000:03f2

LAB_1000_035e:
  1000:035e     8B 46 EE         MOV AX,word ptr [BP + -0x12]
  1000:0361     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:0364     C7 46 F4 00 00   MOV word ptr [BP + -0xc],0x0
  1000:0369     C7 46 EC 00 00   MOV word ptr [BP + -0x14],0x0
  1000:036e     EB 21            JMP 0x1000:0391

LAB_1000_0370:
  1000:0370     E8 ED 0D         CALL 0x1000:1160

LAB_1000_0373:
  1000:0373     B8 02 00         MOV AX,0x2
  1000:0376     50               PUSH AX
  1000:0377     8D 46 F8         LEA AX,[BP + -0x8]
  1000:037a     50               PUSH AX
  1000:037b     8B 5E EC         MOV BX,word ptr [BP + -0x14]
  1000:037e     D1 E3            SHL BX,0x1
  1000:0380     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:0383     FF 30            PUSH word ptr [BX + SI]
  1000:0385     E8 E8 0F         CALL 0x1000:1370
  1000:0388     83 C4 06         ADD SP,0x6
  1000:038b     FF 46 F8         INC word ptr [BP + -0x8]
  1000:038e     FF 46 EC         INC word ptr [BP + -0x14]

LAB_1000_0391:
  1000:0391     8B 5E EC         MOV BX,word ptr [BP + -0x14]
  1000:0394     D1 E3            SHL BX,0x1
  1000:0396     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:0399     83 38 00         CMP word ptr [BX + SI],0x0
  1000:039c     74 10            JZ 0x1000:03ae
  1000:039e     FF 46 F4         INC word ptr [BP + -0xc]
  1000:03a1     8B 46 EC         MOV AX,word ptr [BP + -0x14]
  1000:03a4     39 46 08         CMP word ptr [BP + 0x8],AX
  1000:03a7     75 C7            JNZ 0x1000:0370
  1000:03a9     E8 A8 0D         CALL 0x1000:1154
  1000:03ac     EB C5            JMP 0x1000:0373

LAB_1000_03ae:
  1000:03ae     E8 BB 0D         CALL 0x1000:116c
  1000:03b1     3D 0D 00         CMP AX,0xd
  1000:03b4     74 17            JZ 0x1000:03cd
  1000:03b6     3D 1B 00         CMP AX,0x1b
  1000:03b9     74 0D            JZ 0x1000:03c8
  1000:03bb     3D 00 48         CMP AX,0x4800
  1000:03be     74 14            JZ 0x1000:03d4
  1000:03c0     3D 00 50         CMP AX,0x5000
  1000:03c3     74 1D            JZ 0x1000:03e2
  1000:03c5     EB 2B            JMP 0x1000:03f2

LAB_1000_03c8:
  1000:03c8     C7 46 08 FF FF   MOV word ptr [BP + 0x8],0xffff

LAB_1000_03cd:
  1000:03cd     C7 46 F2 01 00   MOV word ptr [BP + -0xe],0x1
  1000:03d2     EB 1E            JMP 0x1000:03f2

LAB_1000_03d4:
  1000:03d4     FF 4E 08         DEC word ptr [BP + 0x8]
  1000:03d7     79 19            JNS 0x1000:03f2
  1000:03d9     8B 46 F4         MOV AX,word ptr [BP + -0xc]
  1000:03dc     48               DEC AX
  1000:03dd     89 46 08         MOV word ptr [BP + 0x8],AX
  1000:03e0     EB 10            JMP 0x1000:03f2

LAB_1000_03e2:
  1000:03e2     FF 46 08         INC word ptr [BP + 0x8]
  1000:03e5     8B 46 F4         MOV AX,word ptr [BP + -0xc]
  1000:03e8     39 46 08         CMP word ptr [BP + 0x8],AX
  1000:03eb     7C 05            JL 0x1000:03f2
  1000:03ed     C7 46 08 00 00   MOV word ptr [BP + 0x8],0x0

LAB_1000_03f2:
  1000:03f2     83 7E F2 00      CMP word ptr [BP + -0xe],0x0
  1000:03f6     75 03            JNZ 0x1000:03fb
  1000:03f8     E9 63 FF         JMP 0x1000:035e

LAB_1000_03fb:
  1000:03fb     FF 76 F6         PUSH word ptr [BP + -0xa]
  1000:03fe     E8 DD 08         CALL 0x1000:0cde
  1000:0401     83 C4 02         ADD SP,0x2
  1000:0404     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:0407     5E               POP SI
  1000:0408     5F               POP DI
  1000:0409     8B E5            MOV SP,BP
  1000:040b     5D               POP BP
  1000:040c     C3               RET

FUN_1000_040e:
  1000:040e     55               PUSH BP
  1000:040f     8B EC            MOV BP,SP
  1000:0411     B8 34 00         MOV AX,0x34
  1000:0414     E8 3D 14         CALL 0x1000:1854
  1000:0417     57               PUSH DI
  1000:0418     56               PUSH SI
  1000:0419     C7 46 CE 00 00   MOV word ptr [BP + -0x32],0x0
  1000:041e     C7 46 CC 00 00   MOV word ptr [BP + -0x34],0x0
  1000:0423     C7 46 CE 00 00   MOV word ptr [BP + -0x32],0x0
  1000:0428     EB 25            JMP 0x1000:044f

LAB_1000_042a:
  1000:042a     80 BC 28 12 00   CMP byte ptr [SI + 0x1228],0x0
  1000:042f     75 1B            JNZ 0x1000:044c
  1000:0431     8B 7E CC         MOV DI,word ptr [BP + -0x34]
  1000:0434     D1 E7            SHL DI,0x1
  1000:0436     8B 84 2A 12      MOV AX,word ptr [SI + 0x122a]
  1000:043a     89 43 D0         MOV word ptr [BP + DI + -0x30],AX
  1000:043d     8B 7E CC         MOV DI,word ptr [BP + -0x34]
  1000:0440     FF 46 CC         INC word ptr [BP + -0x34]
  1000:0443     D1 E7            SHL DI,0x1
  1000:0445     8B 84 2C 12      MOV AX,word ptr [SI + 0x122c]
  1000:0449     89 43 E4         MOV word ptr [BP + DI + -0x1c],AX

LAB_1000_044c:
  1000:044c     FF 46 CE         INC word ptr [BP + -0x32]

LAB_1000_044f:
  1000:044f     8B 46 CE         MOV AX,word ptr [BP + -0x32]
  1000:0452     8B C8            MOV CX,AX
  1000:0454     D1 E0            SHL AX,0x1
  1000:0456     03 C1            ADD AX,CX
  1000:0458     D1 E0            SHL AX,0x1
  1000:045a     8B F0            MOV SI,AX
  1000:045c     80 BC 28 12 FF   CMP byte ptr [SI + 0x1228],0xff
  1000:0461     75 C7            JNZ 0x1000:042a
  1000:0463     8B 76 CC         MOV SI,word ptr [BP + -0x34]
  1000:0466     D1 E6            SHL SI,0x1
  1000:0468     C7 42 E4 00 00   MOV word ptr [BP + SI + -0x1c],0x0
  1000:046d     8D 7E F8         LEA DI,[BP + -0x8]
  1000:0470     BE 38 01         MOV SI,0x138
  1000:0473     16               PUSH SS
  1000:0474     07               POP ES
  1000:0475     A5               MOVSW ES:DI,SI
  1000:0476     A5               MOVSW ES:DI,SI
  1000:0477     A5               MOVSW ES:DI,SI
  1000:0478     A5               MOVSW ES:DI,SI
  1000:0479     B8 04 00         MOV AX,0x4
  1000:047c     50               PUSH AX
  1000:047d     B8 05 00         MOV AX,0x5
  1000:0480     50               PUSH AX
  1000:0481     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0484     50               PUSH AX
  1000:0485     E8 66 0B         CALL 0x1000:0fee
  1000:0488     83 C4 06         ADD SP,0x6
  1000:048b     8D 46 F8         LEA AX,[BP + -0x8]
  1000:048e     50               PUSH AX
  1000:048f     2B C0            SUB AX,AX
  1000:0491     50               PUSH AX
  1000:0492     8D 46 E4         LEA AX,[BP + -0x1c]
  1000:0495     50               PUSH AX
  1000:0496     B8 0E 02         MOV AX,0x20e
  1000:0499     50               PUSH AX
  1000:049a     E8 23 FE         CALL 0x1000:02c0
  1000:049d     83 C4 08         ADD SP,0x8
  1000:04a0     89 46 CE         MOV word ptr [BP + -0x32],AX
  1000:04a3     3D FF FF         CMP AX,0xffff
  1000:04a6     74 15            JZ 0x1000:04bd
  1000:04a8     8B F0            MOV SI,AX
  1000:04aa     D1 E6            SHL SI,0x1
  1000:04ac     FF 72 D0         PUSH word ptr [BP + SI + -0x30]
  1000:04af     B8 46 02         MOV AX,0x246
  1000:04b2     50               PUSH AX
  1000:04b3     B8 2E 0E         MOV AX,0xe2e
  1000:04b6     50               PUSH AX
  1000:04b7     E8 7A 18         CALL 0x1000:1d34
  1000:04ba     83 C4 06         ADD SP,0x6

LAB_1000_04bd:
  1000:04bd     8B 46 CE         MOV AX,word ptr [BP + -0x32]
  1000:04c0     5E               POP SI
  1000:04c1     5F               POP DI
  1000:04c2     8B E5            MOV SP,BP
  1000:04c4     5D               POP BP
  1000:04c5     C3               RET

FUN_1000_04c6:
  1000:04c6     55               PUSH BP
  1000:04c7     8B EC            MOV BP,SP
  1000:04c9     B8 22 00         MOV AX,0x22
  1000:04cc     E8 85 13         CALL 0x1000:1854
  1000:04cf     57               PUSH DI
  1000:04d0     56               PUSH SI
  1000:04d1     C7 46 E0 00 00   MOV word ptr [BP + -0x20],0x0
  1000:04d6     C7 46 DE 00 00   MOV word ptr [BP + -0x22],0x0
  1000:04db     C7 46 FE 01 00   MOV word ptr [BP + -0x2],0x1
  1000:04e0     C7 46 E2 49 02   MOV word ptr [BP + -0x1e],0x249
  1000:04e5     8B 76 DE         MOV SI,word ptr [BP + -0x22]
  1000:04e8     FF 46 DE         INC word ptr [BP + -0x22]
  1000:04eb     D1 E6            SHL SI,0x1
  1000:04ed     C7 42 EC 4E 02   MOV word ptr [BP + SI + -0x14],0x24e
  1000:04f2     C7 46 E0 00 00   MOV word ptr [BP + -0x20],0x0
  1000:04f7     EB 2B            JMP 0x1000:0524

LAB_1000_04fa:
  1000:04fa     80 BC 28 12 02   CMP byte ptr [SI + 0x1228],0x2
  1000:04ff     75 20            JNZ 0x1000:0521
  1000:0501     8B 7E DE         MOV DI,word ptr [BP + -0x22]
  1000:0504     D1 E7            SHL DI,0x1
  1000:0506     8B 84 2A 12      MOV AX,word ptr [SI + 0x122a]
  1000:050a     89 43 E2         MOV word ptr [BP + DI + -0x1e],AX
  1000:050d     8B 7E DE         MOV DI,word ptr [BP + -0x22]
  1000:0510     FF 46 DE         INC word ptr [BP + -0x22]
  1000:0513     D1 E7            SHL DI,0x1
  1000:0515     8B 84 2C 12      MOV AX,word ptr [SI + 0x122c]
  1000:0519     89 43 EC         MOV word ptr [BP + DI + -0x14],AX
  1000:051c     C7 46 FE 00 00   MOV word ptr [BP + -0x2],0x0

LAB_1000_0521:
  1000:0521     FF 46 E0         INC word ptr [BP + -0x20]

LAB_1000_0524:
  1000:0524     8B 46 E0         MOV AX,word ptr [BP + -0x20]
  1000:0527     8B C8            MOV CX,AX
  1000:0529     D1 E0            SHL AX,0x1
  1000:052b     03 C1            ADD AX,CX
  1000:052d     D1 E0            SHL AX,0x1
  1000:052f     8B F0            MOV SI,AX
  1000:0531     80 BC 28 12 FF   CMP byte ptr [SI + 0x1228],0xff
  1000:0536     75 C2            JNZ 0x1000:04fa
  1000:0538     8B 76 DE         MOV SI,word ptr [BP + -0x22]
  1000:053b     D1 E6            SHL SI,0x1
  1000:053d     C7 42 EC 00 00   MOV word ptr [BP + SI + -0x14],0x0
  1000:0542     83 7E FE 01      CMP word ptr [BP + -0x2],0x1
  1000:0546     75 0E            JNZ 0x1000:0556
  1000:0548     C7 46 E0 FE FF   MOV word ptr [BP + -0x20],0xfffe
  1000:054d     B8 F2 02         MOV AX,0x2f2
  1000:0550     50               PUSH AX
  1000:0551     B8 74 02         MOV AX,0x274
  1000:0554     EB 45            JMP 0x1000:059b

LAB_1000_0556:
  1000:0556     8D 7E F6         LEA DI,[BP + -0xa]
  1000:0559     BE 38 01         MOV SI,0x138
  1000:055c     16               PUSH SS
  1000:055d     07               POP ES
  1000:055e     A5               MOVSW ES:DI,SI
  1000:055f     A5               MOVSW ES:DI,SI
  1000:0560     A5               MOVSW ES:DI,SI
  1000:0561     A5               MOVSW ES:DI,SI
  1000:0562     B8 04 00         MOV AX,0x4
  1000:0565     50               PUSH AX
  1000:0566     B8 05 00         MOV AX,0x5
  1000:0569     50               PUSH AX
  1000:056a     8D 46 F6         LEA AX,[BP + -0xa]
  1000:056d     50               PUSH AX
  1000:056e     E8 7D 0A         CALL 0x1000:0fee
  1000:0571     83 C4 06         ADD SP,0x6
  1000:0574     8D 46 F6         LEA AX,[BP + -0xa]
  1000:0577     50               PUSH AX
  1000:0578     2B C0            SUB AX,AX
  1000:057a     50               PUSH AX
  1000:057b     8D 46 EC         LEA AX,[BP + -0x14]
  1000:057e     50               PUSH AX
  1000:057f     B8 77 02         MOV AX,0x277
  1000:0582     50               PUSH AX
  1000:0583     E8 3A FD         CALL 0x1000:02c0
  1000:0586     83 C4 08         ADD SP,0x8
  1000:0589     89 46 E0         MOV word ptr [BP + -0x20],AX
  1000:058c     3D FF FF         CMP AX,0xffff
  1000:058f     74 15            JZ 0x1000:05a6
  1000:0591     8B F0            MOV SI,AX
  1000:0593     D1 E6            SHL SI,0x1
  1000:0595     FF 72 E2         PUSH word ptr [BP + SI + -0x1e]
  1000:0598     B8 EF 02         MOV AX,0x2ef

LAB_1000_059b:
  1000:059b     50               PUSH AX
  1000:059c     B8 8E 0D         MOV AX,0xd8e
  1000:059f     50               PUSH AX
  1000:05a0     E8 91 17         CALL 0x1000:1d34
  1000:05a3     83 C4 06         ADD SP,0x6

LAB_1000_05a6:
  1000:05a6     8B 46 E0         MOV AX,word ptr [BP + -0x20]
  1000:05a9     5E               POP SI
  1000:05aa     5F               POP DI
  1000:05ab     8B E5            MOV SP,BP
  1000:05ad     5D               POP BP
  1000:05ae     C3               RET

FUN_1000_05b0:
  1000:05b0     55               PUSH BP
  1000:05b1     8B EC            MOV BP,SP
  1000:05b3     B8 5C 00         MOV AX,0x5c
  1000:05b6     E8 9B 12         CALL 0x1000:1854
  1000:05b9     57               PUSH DI
  1000:05ba     56               PUSH SI
  1000:05bb     C7 46 A6 00 00   MOV word ptr [BP + -0x5a],0x0
  1000:05c0     C7 46 A4 00 00   MOV word ptr [BP + -0x5c],0x0
  1000:05c5     C7 46 A6 00 00   MOV word ptr [BP + -0x5a],0x0
  1000:05ca     EB 25            JMP 0x1000:05f1

LAB_1000_05cc:
  1000:05cc     80 BC 28 12 01   CMP byte ptr [SI + 0x1228],0x1
  1000:05d1     75 1B            JNZ 0x1000:05ee
  1000:05d3     8B 7E A4         MOV DI,word ptr [BP + -0x5c]
  1000:05d6     D1 E7            SHL DI,0x1
  1000:05d8     8B 84 2A 12      MOV AX,word ptr [SI + 0x122a]
  1000:05dc     89 43 A8         MOV word ptr [BP + DI + -0x58],AX
  1000:05df     8B 7E A4         MOV DI,word ptr [BP + -0x5c]
  1000:05e2     FF 46 A4         INC word ptr [BP + -0x5c]
  1000:05e5     D1 E7            SHL DI,0x1
  1000:05e7     8B 84 2C 12      MOV AX,word ptr [SI + 0x122c]
  1000:05eb     89 43 D0         MOV word ptr [BP + DI + -0x30],AX

LAB_1000_05ee:
  1000:05ee     FF 46 A6         INC word ptr [BP + -0x5a]

LAB_1000_05f1:
  1000:05f1     8B 46 A6         MOV AX,word ptr [BP + -0x5a]
  1000:05f4     8B C8            MOV CX,AX
  1000:05f6     D1 E0            SHL AX,0x1
  1000:05f8     03 C1            ADD AX,CX
  1000:05fa     D1 E0            SHL AX,0x1
  1000:05fc     8B F0            MOV SI,AX
  1000:05fe     80 BC 28 12 FF   CMP byte ptr [SI + 0x1228],0xff
  1000:0603     75 C7            JNZ 0x1000:05cc
  1000:0605     8B 76 A4         MOV SI,word ptr [BP + -0x5c]
  1000:0608     D1 E6            SHL SI,0x1
  1000:060a     C7 42 D0 00 00   MOV word ptr [BP + SI + -0x30],0x0
  1000:060f     8D 7E F8         LEA DI,[BP + -0x8]
  1000:0612     BE 38 01         MOV SI,0x138
  1000:0615     16               PUSH SS
  1000:0616     07               POP ES
  1000:0617     A5               MOVSW ES:DI,SI
  1000:0618     A5               MOVSW ES:DI,SI
  1000:0619     A5               MOVSW ES:DI,SI
  1000:061a     A5               MOVSW ES:DI,SI
  1000:061b     B8 04 00         MOV AX,0x4
  1000:061e     50               PUSH AX
  1000:061f     B8 05 00         MOV AX,0x5
  1000:0622     50               PUSH AX
  1000:0623     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0626     50               PUSH AX
  1000:0627     E8 C4 09         CALL 0x1000:0fee
  1000:062a     83 C4 06         ADD SP,0x6
  1000:062d     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0630     50               PUSH AX
  1000:0631     2B C0            SUB AX,AX
  1000:0633     50               PUSH AX
  1000:0634     8D 46 D0         LEA AX,[BP + -0x30]
  1000:0637     50               PUSH AX
  1000:0638     B8 F7 02         MOV AX,0x2f7
  1000:063b     50               PUSH AX
  1000:063c     E8 81 FC         CALL 0x1000:02c0
  1000:063f     83 C4 08         ADD SP,0x8
  1000:0642     89 46 A6         MOV word ptr [BP + -0x5a],AX
  1000:0645     3D FF FF         CMP AX,0xffff
  1000:0648     74 15            JZ 0x1000:065f
  1000:064a     8B F0            MOV SI,AX
  1000:064c     D1 E6            SHL SI,0x1
  1000:064e     FF 72 A8         PUSH word ptr [BP + SI + -0x58]
  1000:0651     B8 32 03         MOV AX,0x332
  1000:0654     50               PUSH AX
  1000:0655     B8 D6 10         MOV AX,0x10d6
  1000:0658     50               PUSH AX
  1000:0659     E8 D8 16         CALL 0x1000:1d34
  1000:065c     83 C4 06         ADD SP,0x6

LAB_1000_065f:
  1000:065f     8B 46 A6         MOV AX,word ptr [BP + -0x5a]
  1000:0662     5E               POP SI
  1000:0663     5F               POP DI
  1000:0664     8B E5            MOV SP,BP
  1000:0666     5D               POP BP
  1000:0667     C3               RET

FUN_1000_0668:
  1000:0668     55               PUSH BP
  1000:0669     8B EC            MOV BP,SP
  1000:066b     B8 34 00         MOV AX,0x34
  1000:066e     E8 E3 11         CALL 0x1000:1854
  1000:0671     57               PUSH DI
  1000:0672     56               PUSH SI
  1000:0673     C7 46 CE 00 00   MOV word ptr [BP + -0x32],0x0
  1000:0678     C7 46 CC 00 00   MOV word ptr [BP + -0x34],0x0
  1000:067d     C7 46 CE 00 00   MOV word ptr [BP + -0x32],0x0
  1000:0682     EB 25            JMP 0x1000:06a9

LAB_1000_0684:
  1000:0684     80 BC 28 12 04   CMP byte ptr [SI + 0x1228],0x4
  1000:0689     75 1B            JNZ 0x1000:06a6
  1000:068b     8B 7E CC         MOV DI,word ptr [BP + -0x34]
  1000:068e     D1 E7            SHL DI,0x1
  1000:0690     8B 84 2A 12      MOV AX,word ptr [SI + 0x122a]
  1000:0694     89 43 D0         MOV word ptr [BP + DI + -0x30],AX
  1000:0697     8B 7E CC         MOV DI,word ptr [BP + -0x34]
  1000:069a     FF 46 CC         INC word ptr [BP + -0x34]
  1000:069d     D1 E7            SHL DI,0x1
  1000:069f     8B 84 2C 12      MOV AX,word ptr [SI + 0x122c]
  1000:06a3     89 43 E4         MOV word ptr [BP + DI + -0x1c],AX

LAB_1000_06a6:
  1000:06a6     FF 46 CE         INC word ptr [BP + -0x32]

LAB_1000_06a9:
  1000:06a9     8B 46 CE         MOV AX,word ptr [BP + -0x32]
  1000:06ac     8B C8            MOV CX,AX
  1000:06ae     D1 E0            SHL AX,0x1
  1000:06b0     03 C1            ADD AX,CX
  1000:06b2     D1 E0            SHL AX,0x1
  1000:06b4     8B F0            MOV SI,AX
  1000:06b6     80 BC 28 12 FF   CMP byte ptr [SI + 0x1228],0xff
  1000:06bb     75 C7            JNZ 0x1000:0684
  1000:06bd     8B 76 CC         MOV SI,word ptr [BP + -0x34]
  1000:06c0     D1 E6            SHL SI,0x1
  1000:06c2     C7 42 E4 00 00   MOV word ptr [BP + SI + -0x1c],0x0
  1000:06c7     8D 7E F8         LEA DI,[BP + -0x8]
  1000:06ca     BE 38 01         MOV SI,0x138
  1000:06cd     16               PUSH SS
  1000:06ce     07               POP ES
  1000:06cf     A5               MOVSW ES:DI,SI
  1000:06d0     A5               MOVSW ES:DI,SI
  1000:06d1     A5               MOVSW ES:DI,SI
  1000:06d2     A5               MOVSW ES:DI,SI
  1000:06d3     B8 04 00         MOV AX,0x4
  1000:06d6     50               PUSH AX
  1000:06d7     B8 05 00         MOV AX,0x5
  1000:06da     50               PUSH AX
  1000:06db     8D 46 F8         LEA AX,[BP + -0x8]
  1000:06de     50               PUSH AX
  1000:06df     E8 0C 09         CALL 0x1000:0fee
  1000:06e2     83 C4 06         ADD SP,0x6
  1000:06e5     8D 46 F8         LEA AX,[BP + -0x8]
  1000:06e8     50               PUSH AX
  1000:06e9     2B C0            SUB AX,AX
  1000:06eb     50               PUSH AX
  1000:06ec     8D 46 E4         LEA AX,[BP + -0x1c]
  1000:06ef     50               PUSH AX
  1000:06f0     B8 35 03         MOV AX,0x335
  1000:06f3     50               PUSH AX
  1000:06f4     E8 C9 FB         CALL 0x1000:02c0
  1000:06f7     83 C4 08         ADD SP,0x8
  1000:06fa     89 46 CE         MOV word ptr [BP + -0x32],AX
  1000:06fd     3D FF FF         CMP AX,0xffff
  1000:0700     74 15            JZ 0x1000:0717
  1000:0702     8B F0            MOV SI,AX
  1000:0704     D1 E6            SHL SI,0x1
  1000:0706     FF 72 D0         PUSH word ptr [BP + SI + -0x30]
  1000:0709     B8 6D 03         MOV AX,0x36d
  1000:070c     50               PUSH AX
  1000:070d     B8 26 11         MOV AX,0x1126
  1000:0710     50               PUSH AX
  1000:0711     E8 20 16         CALL 0x1000:1d34
  1000:0714     83 C4 06         ADD SP,0x6

LAB_1000_0717:
  1000:0717     8B 46 CE         MOV AX,word ptr [BP + -0x32]
  1000:071a     5E               POP SI
  1000:071b     5F               POP DI
  1000:071c     8B E5            MOV SP,BP
  1000:071e     5D               POP BP
  1000:071f     C3               RET

FUN_1000_0720:
  1000:0720     55               PUSH BP
  1000:0721     8B EC            MOV BP,SP
  1000:0723     B8 16 00         MOV AX,0x16
  1000:0726     E8 2B 11         CALL 0x1000:1854
  1000:0729     57               PUSH DI
  1000:072a     56               PUSH SI
  1000:072b     C7 46 EC 00 00   MOV word ptr [BP + -0x14],0x0
  1000:0730     C7 46 EA 00 00   MOV word ptr [BP + -0x16],0x0
  1000:0735     C7 46 EE 70 03   MOV word ptr [BP + -0x12],0x370
  1000:073a     C7 46 F0 75 03   MOV word ptr [BP + -0x10],0x375
  1000:073f     C7 46 F2 00 00   MOV word ptr [BP + -0xe],0x0
  1000:0744     8D 7E F8         LEA DI,[BP + -0x8]
  1000:0747     BE 38 01         MOV SI,0x138
  1000:074a     16               PUSH SS
  1000:074b     07               POP ES
  1000:074c     A5               MOVSW ES:DI,SI
  1000:074d     A5               MOVSW ES:DI,SI
  1000:074e     A5               MOVSW ES:DI,SI
  1000:074f     A5               MOVSW ES:DI,SI
  1000:0750     B8 06 00         MOV AX,0x6
  1000:0753     50               PUSH AX
  1000:0754     B8 0A 00         MOV AX,0xa
  1000:0757     50               PUSH AX
  1000:0758     8D 46 F8         LEA AX,[BP + -0x8]
  1000:075b     50               PUSH AX
  1000:075c     E8 8F 08         CALL 0x1000:0fee
  1000:075f     83 C4 06         ADD SP,0x6
  1000:0762     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0765     50               PUSH AX
  1000:0766     2B C0            SUB AX,AX
  1000:0768     50               PUSH AX
  1000:0769     8D 46 EE         LEA AX,[BP + -0x12]
  1000:076c     50               PUSH AX
  1000:076d     B8 7A 03         MOV AX,0x37a
  1000:0770     50               PUSH AX
  1000:0771     E8 4C FB         CALL 0x1000:02c0
  1000:0774     83 C4 08         ADD SP,0x8
  1000:0777     89 46 EC         MOV word ptr [BP + -0x14],AX
  1000:077a     3D FF FF         CMP AX,0xffff
  1000:077d     74 15            JZ 0x1000:0794
  1000:077f     8B F0            MOV SI,AX
  1000:0781     D1 E6            SHL SI,0x1
  1000:0783     FF 72 EE         PUSH word ptr [BP + SI + -0x12]
  1000:0786     B8 EC 03         MOV AX,0x3ec
  1000:0789     50               PUSH AX
  1000:078a     B8 D8 11         MOV AX,0x11d8
  1000:078d     50               PUSH AX
  1000:078e     E8 A3 15         CALL 0x1000:1d34
  1000:0791     83 C4 06         ADD SP,0x6

LAB_1000_0794:
  1000:0794     8B 46 EC         MOV AX,word ptr [BP + -0x14]
  1000:0797     5E               POP SI
  1000:0798     5F               POP DI
  1000:0799     8B E5            MOV SP,BP
  1000:079b     5D               POP BP
  1000:079c     C3               RET

FUN_1000_079e:
  1000:079e     55               PUSH BP
  1000:079f     8B EC            MOV BP,SP
  1000:07a1     B8 14 00         MOV AX,0x14
  1000:07a4     E8 AD 10         CALL 0x1000:1854
  1000:07a7     57               PUSH DI
  1000:07a8     56               PUSH SI
  1000:07a9     C7 46 EE 00 00   MOV word ptr [BP + -0x12],0x0
  1000:07ae     C7 46 EC 00 00   MOV word ptr [BP + -0x14],0x0
  1000:07b3     C7 46 F0 EF 03   MOV word ptr [BP + -0x10],0x3ef
  1000:07b8     C7 46 F2 09 04   MOV word ptr [BP + -0xe],0x409
  1000:07bd     C7 46 F4 00 00   MOV word ptr [BP + -0xc],0x0
  1000:07c2     8D 7E F8         LEA DI,[BP + -0x8]
  1000:07c5     BE 38 01         MOV SI,0x138
  1000:07c8     16               PUSH SS
  1000:07c9     07               POP ES
  1000:07ca     A5               MOVSW ES:DI,SI
  1000:07cb     A5               MOVSW ES:DI,SI
  1000:07cc     A5               MOVSW ES:DI,SI
  1000:07cd     A5               MOVSW ES:DI,SI
  1000:07ce     B8 05 00         MOV AX,0x5
  1000:07d1     50               PUSH AX
  1000:07d2     B8 0A 00         MOV AX,0xa
  1000:07d5     50               PUSH AX
  1000:07d6     8D 46 F8         LEA AX,[BP + -0x8]
  1000:07d9     50               PUSH AX
  1000:07da     E8 11 08         CALL 0x1000:0fee
  1000:07dd     83 C4 06         ADD SP,0x6
  1000:07e0     8D 46 F8         LEA AX,[BP + -0x8]
  1000:07e3     50               PUSH AX
  1000:07e4     2B C0            SUB AX,AX
  1000:07e6     50               PUSH AX
  1000:07e7     8D 46 F0         LEA AX,[BP + -0x10]
  1000:07ea     50               PUSH AX
  1000:07eb     B8 28 04         MOV AX,0x428
  1000:07ee     50               PUSH AX
  1000:07ef     E8 CE FA         CALL 0x1000:02c0
  1000:07f2     83 C4 08         ADD SP,0x8
  1000:07f5     89 46 EE         MOV word ptr [BP + -0x12],AX
  1000:07f8     3D FF FF         CMP AX,0xffff
  1000:07fb     74 09            JZ 0x1000:0806
  1000:07fd     0B C0            OR AX,AX
  1000:07ff     74 0F            JZ 0x1000:0810
  1000:0801     3D 01 00         CMP AX,0x1
  1000:0804     74 1E            JZ 0x1000:0824

LAB_1000_0806:
  1000:0806     8B 46 EE         MOV AX,word ptr [BP + -0x12]
  1000:0809     5E               POP SI
  1000:080a     5F               POP DI
  1000:080b     8B E5            MOV SP,BP
  1000:080d     5D               POP BP
  1000:080e     C3               RET

LAB_1000_0810:
  1000:0810     B8 AC 04         MOV AX,0x4ac
  1000:0813     50               PUSH AX
  1000:0814     B8 B7 04         MOV AX,0x4b7

LAB_1000_0817:
  1000:0817     50               PUSH AX
  1000:0818     B8 DE 0D         MOV AX,0xdde
  1000:081b     50               PUSH AX
  1000:081c     E8 15 15         CALL 0x1000:1d34
  1000:081f     83 C4 06         ADD SP,0x6
  1000:0822     EB E2            JMP 0x1000:0806

LAB_1000_0824:
  1000:0824     B8 BA 04         MOV AX,0x4ba
  1000:0827     50               PUSH AX
  1000:0828     B8 C7 04         MOV AX,0x4c7
  1000:082b     EB EA            JMP 0x1000:0817

FUN_1000_082e:
  1000:082e     55               PUSH BP
  1000:082f     8B EC            MOV BP,SP
  1000:0831     B8 3A 00         MOV AX,0x3a
  1000:0834     E8 1D 10         CALL 0x1000:1854
  1000:0837     C7 46 F2 00 00   MOV word ptr [BP + -0xe],0x0
  1000:083c     E8 DD 0C         CALL 0x1000:151c
  1000:083f     89 46 F0         MOV word ptr [BP + -0x10],AX
  1000:0842     E9 24 01         JMP 0x1000:0969

LAB_1000_0846:
  1000:0846     B8 CA 04         MOV AX,0x4ca
  1000:0849     50               PUSH AX
  1000:084a     B8 E4 04         MOV AX,0x4e4
  1000:084d     50               PUSH AX
  1000:084e     B8 F9 04         MOV AX,0x4f9
  1000:0851     50               PUSH AX
  1000:0852     E8 09 06         CALL 0x1000:0e5e
  1000:0855     83 C4 06         ADD SP,0x6
  1000:0858     89 46 EE         MOV word ptr [BP + -0x12],AX
  1000:085b     3D 1B 00         CMP AX,0x1b
  1000:085e     75 03            JNZ 0x1000:0863
  1000:0860     E9 DD 00         JMP 0x1000:0940

LAB_1000_0863:
  1000:0863     2D 61 00         SUB AX,0x61
  1000:0866     89 46 F4         MOV word ptr [BP + -0xc],AX
  1000:0869     50               PUSH AX
  1000:086a     E8 87 0C         CALL 0x1000:14f4
  1000:086d     83 C4 02         ADD SP,0x2
  1000:0870     E8 A9 0C         CALL 0x1000:151c
  1000:0873     89 46 F4         MOV word ptr [BP + -0xc],AX
  1000:0876     0B C0            OR AX,AX
  1000:0878     75 03            JNZ 0x1000:087d
  1000:087a     E9 A5 00         JMP 0x1000:0922

LAB_1000_087d:
  1000:087d     C7 46 F2 01 00   MOV word ptr [BP + -0xe],0x1
  1000:0882     B8 7B 05         MOV AX,0x57b
  1000:0885     50               PUSH AX
  1000:0886     B8 7D 05         MOV AX,0x57d
  1000:0889     50               PUSH AX
  1000:088a     B8 85 05         MOV AX,0x585
  1000:088d     50               PUSH AX
  1000:088e     E8 CD 05         CALL 0x1000:0e5e
  1000:0891     83 C4 06         ADD SP,0x6
  1000:0894     B8 19 00         MOV AX,0x19
  1000:0897     50               PUSH AX
  1000:0898     B8 50 00         MOV AX,0x50
  1000:089b     50               PUSH AX
  1000:089c     2B C0            SUB AX,AX
  1000:089e     50               PUSH AX
  1000:089f     50               PUSH AX
  1000:08a0     8D 46 F8         LEA AX,[BP + -0x8]
  1000:08a3     50               PUSH AX
  1000:08a4     E8 19 07         CALL 0x1000:0fc0
  1000:08a7     83 C4 0A         ADD SP,0xa
  1000:08aa     8D 46 F8         LEA AX,[BP + -0x8]
  1000:08ad     50               PUSH AX
  1000:08ae     E8 7B 03         CALL 0x1000:0c2c
  1000:08b1     83 C4 02         ADD SP,0x2
  1000:08b4     89 46 F6         MOV word ptr [BP + -0xa],AX
  1000:08b7     8D 46 F8         LEA AX,[BP + -0x8]
  1000:08ba     50               PUSH AX
  1000:08bb     E8 E6 07         CALL 0x1000:10a4
  1000:08be     83 C4 02         ADD SP,0x2
  1000:08c1     2B C0            SUB AX,AX
  1000:08c3     50               PUSH AX
  1000:08c4     E8 A9 04         CALL 0x1000:0d70
  1000:08c7     83 C4 02         ADD SP,0x2
  1000:08ca     A0 D4 10         MOV AL,[0x10d4]
  1000:08cd     98               CBW
  1000:08ce     50               PUSH AX
  1000:08cf     8B 46 F0         MOV AX,word ptr [BP + -0x10]
  1000:08d2     05 61 00         ADD AX,0x61
  1000:08d5     50               PUSH AX
  1000:08d6     FF 76 EE         PUSH word ptr [BP + -0x12]
  1000:08d9     B8 D9 05         MOV AX,0x5d9
  1000:08dc     50               PUSH AX
  1000:08dd     8D 46 C6         LEA AX,[BP + -0x3a]
  1000:08e0     50               PUSH AX
  1000:08e1     E8 50 14         CALL 0x1000:1d34
  1000:08e4     83 C4 0A         ADD SP,0xa
  1000:08e7     FF 76 F0         PUSH word ptr [BP + -0x10]
  1000:08ea     E8 07 0C         CALL 0x1000:14f4
  1000:08ed     83 C4 02         ADD SP,0x2
  1000:08f0     8D 46 C6         LEA AX,[BP + -0x3a]
  1000:08f3     50               PUSH AX
  1000:08f4     E8 6F 15         CALL 0x1000:1e66
  1000:08f7     83 C4 02         ADD SP,0x2
  1000:08fa     40               INC AX
  1000:08fb     75 19            JNZ 0x1000:0916
  1000:08fd     B8 EF 05         MOV AX,0x5ef
  1000:0900     50               PUSH AX
  1000:0901     B8 F1 05         MOV AX,0x5f1
  1000:0904     50               PUSH AX
  1000:0905     B8 08 06         MOV AX,0x608
  1000:0908     50               PUSH AX
  1000:0909     E8 E8 14         CALL 0x1000:1df4
  1000:090c     83 C4 02         ADD SP,0x2
  1000:090f     50               PUSH AX
  1000:0910     E8 4B 05         CALL 0x1000:0e5e
  1000:0913     83 C4 06         ADD SP,0x6

LAB_1000_0916:
  1000:0916     FF 76 F6         PUSH word ptr [BP + -0xa]
  1000:0919     E8 58 13         CALL 0x1000:1c74
  1000:091c     83 C4 02         ADD SP,0x2
  1000:091f     EB 3F            JMP 0x1000:0960

LAB_1000_0922:
  1000:0922     FF 76 F0         PUSH word ptr [BP + -0x10]
  1000:0925     E8 CC 0B         CALL 0x1000:14f4
  1000:0928     83 C4 02         ADD SP,0x2
  1000:092b     B8 0F 06         MOV AX,0x60f
  1000:092e     50               PUSH AX
  1000:092f     B8 11 06         MOV AX,0x611
  1000:0932     50               PUSH AX
  1000:0933     B8 28 06         MOV AX,0x628
  1000:0936     50               PUSH AX
  1000:0937     E8 24 05         CALL 0x1000:0e5e
  1000:093a     83 C4 06         ADD SP,0x6
  1000:093d     EB 2A            JMP 0x1000:0969

LAB_1000_0940:
  1000:0940     FF 76 F0         PUSH word ptr [BP + -0x10]
  1000:0943     E8 AE 0B         CALL 0x1000:14f4
  1000:0946     83 C4 02         ADD SP,0x2
  1000:0949     C7 46 F2 01 00   MOV word ptr [BP + -0xe],0x1
  1000:094e     B8 4A 06         MOV AX,0x64a
  1000:0951     50               PUSH AX
  1000:0952     B8 4C 06         MOV AX,0x64c
  1000:0955     50               PUSH AX
  1000:0956     B8 60 06         MOV AX,0x660
  1000:0959     50               PUSH AX
  1000:095a     E8 01 05         CALL 0x1000:0e5e
  1000:095d     83 C4 06         ADD SP,0x6

LAB_1000_0960:
  1000:0960     2B C0            SUB AX,AX
  1000:0962     50               PUSH AX
  1000:0963     E8 0A 04         CALL 0x1000:0d70
  1000:0966     83 C4 02         ADD SP,0x2

LAB_1000_0969:
  1000:0969     83 7E F2 00      CMP word ptr [BP + -0xe],0x0
  1000:096d     75 03            JNZ 0x1000:0972
  1000:096f     E9 D4 FE         JMP 0x1000:0846

LAB_1000_0972:
  1000:0972     8B E5            MOV SP,BP
  1000:0974     5D               POP BP
  1000:0975     C3               RET

FUN_1000_0976:
  1000:0976     55               PUSH BP
  1000:0977     8B EC            MOV BP,SP
  1000:0979     B8 8C 00         MOV AX,0x8c
  1000:097c     E8 D5 0E         CALL 0x1000:1854
  1000:097f     56               PUSH SI
  1000:0980     C7 46 A8 00 00   MOV word ptr [BP + -0x58],0x0
  1000:0985     B8 00 02         MOV AX,0x200
  1000:0988     50               PUSH AX
  1000:0989     E8 E4 12         CALL 0x1000:1c70
  1000:098c     83 C4 02         ADD SP,0x2
  1000:098f     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0992     B8 34 01         MOV AX,0x134
  1000:0995     50               PUSH AX
  1000:0996     B8 75 06         MOV AX,0x675
  1000:0999     50               PUSH AX
  1000:099a     8D 46 AE         LEA AX,[BP + -0x52]
  1000:099d     50               PUSH AX
  1000:099e     E8 93 13         CALL 0x1000:1d34
  1000:09a1     83 C4 06         ADD SP,0x6
  1000:09a4     8D 86 7C FF      LEA AX,[BP + 0xff7c]
  1000:09a8     50               PUSH AX
  1000:09a9     2B C0            SUB AX,AX
  1000:09ab     50               PUSH AX
  1000:09ac     8D 46 AE         LEA AX,[BP + -0x52]
  1000:09af     50               PUSH AX
  1000:09b0     E8 BD 0A         CALL 0x1000:1470
  1000:09b3     83 C4 06         ADD SP,0x6
  1000:09b6     40               INC AX
  1000:09b7     75 03            JNZ 0x1000:09bc
  1000:09b9     E9 2D 01         JMP 0x1000:0ae9

LAB_1000_09bc:
  1000:09bc     8D 46 9A         LEA AX,[BP + -0x66]
  1000:09bf     50               PUSH AX
  1000:09c0     B8 2C 01         MOV AX,0x12c
  1000:09c3     50               PUSH AX
  1000:09c4     B8 81 06         MOV AX,0x681
  1000:09c7     50               PUSH AX
  1000:09c8     8D 46 AE         LEA AX,[BP + -0x52]
  1000:09cb     50               PUSH AX
  1000:09cc     E8 65 13         CALL 0x1000:1d34
  1000:09cf     83 C4 08         ADD SP,0x8
  1000:09d2     B8 00 80         MOV AX,0x8000
  1000:09d5     50               PUSH AX
  1000:09d6     8D 46 9A         LEA AX,[BP + -0x66]
  1000:09d9     50               PUSH AX
  1000:09da     E8 C9 0E         CALL 0x1000:18a6
  1000:09dd     83 C4 04         ADD SP,0x4
  1000:09e0     89 86 76 FF      MOV word ptr [BP + 0xff76],AX
  1000:09e4     0B C0            OR AX,AX
  1000:09e6     7D 03            JGE 0x1000:09eb
  1000:09e8     E9 F5 00         JMP 0x1000:0ae0

LAB_1000_09eb:
  1000:09eb     8B 46 A8         MOV AX,word ptr [BP + -0x58]
  1000:09ee     8B C8            MOV CX,AX
  1000:09f0     D1 E0            SHL AX,0x1
  1000:09f2     03 C1            ADD AX,CX
  1000:09f4     D1 E0            SHL AX,0x1
  1000:09f6     05 28 12         ADD AX,0x1228
  1000:09f9     89 46 AC         MOV word ptr [BP + -0x54],AX
  1000:09fc     B8 00 01         MOV AX,0x100
  1000:09ff     50               PUSH AX
  1000:0a00     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0a03     FF B6 76 FF      PUSH word ptr [BP + 0xff76]
  1000:0a07     E8 3E 10         CALL 0x1000:1a48
  1000:0a0a     83 C4 06         ADD SP,0x6
  1000:0a0d     FF B6 76 FF      PUSH word ptr [BP + 0xff76]
  1000:0a11     E8 58 0E         CALL 0x1000:186c
  1000:0a14     83 C4 02         ADD SP,0x2
  1000:0a17     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:0a1a     05 04 00         ADD AX,0x4
  1000:0a1d     89 46 AA         MOV word ptr [BP + -0x56],AX
  1000:0a20     8B D8            MOV BX,AX
  1000:0a22     81 3F 21 43      CMP word ptr [BX],0x4321
  1000:0a26     74 03            JZ 0x1000:0a2b
  1000:0a28     E9 B5 00         JMP 0x1000:0ae0

LAB_1000_0a2b:
  1000:0a2b     81 7F 02 65 87   CMP word ptr [BX + 0x2],0x8765
  1000:0a30     74 03            JZ 0x1000:0a35
  1000:0a32     E9 AB 00         JMP 0x1000:0ae0

LAB_1000_0a35:
  1000:0a35     8B 5E AC         MOV BX,word ptr [BP + -0x54]
  1000:0a38     8B 76 FE         MOV SI,word ptr [BP + -0x2]
  1000:0a3b     8A 44 08         MOV AL,byte ptr [SI + 0x8]
  1000:0a3e     88 07            MOV byte ptr [BX],AL
  1000:0a40     C7 86 78 FF 09 00   MOV word ptr [BP + 0xff78],0x9
  1000:0a46     8B 9E 78 FF      MOV BX,word ptr [BP + 0xff78]
  1000:0a4a     FF 86 78 FF      INC word ptr [BP + 0xff78]
  1000:0a4e     8B 76 FE         MOV SI,word ptr [BP + -0x2]
  1000:0a51     8A 00            MOV AL,byte ptr [BX + SI]
  1000:0a53     98               CBW
  1000:0a54     89 86 74 FF      MOV word ptr [BP + 0xff74],AX
  1000:0a58     EB 0C            JMP 0x1000:0a66

LAB_1000_0a5a:
  1000:0a5a     FF 86 7A FF      INC word ptr [BP + 0xff7a]
  1000:0a5e     FF 86 78 FF      INC word ptr [BP + 0xff78]
  1000:0a62     FF 8E 74 FF      DEC word ptr [BP + 0xff74]

LAB_1000_0a66:
  1000:0a66     83 BE 74 FF 00   CMP word ptr [BP + 0xff74],0x0
  1000:0a6b     75 ED            JNZ 0x1000:0a5a
  1000:0a6d     8D 46 9A         LEA AX,[BP + -0x66]
  1000:0a70     50               PUSH AX
  1000:0a71     E8 40 13         CALL 0x1000:1db4
  1000:0a74     83 C4 02         ADD SP,0x2
  1000:0a77     8B 5E AC         MOV BX,word ptr [BP + -0x54]
  1000:0a7a     89 47 02         MOV word ptr [BX + 0x2],AX
  1000:0a7d     8B 9E 78 FF      MOV BX,word ptr [BP + 0xff78]
  1000:0a81     FF 86 78 FF      INC word ptr [BP + 0xff78]
  1000:0a85     8B 76 FE         MOV SI,word ptr [BP + -0x2]
  1000:0a88     8A 00            MOV AL,byte ptr [BX + SI]
  1000:0a8a     98               CBW
  1000:0a8b     89 86 74 FF      MOV word ptr [BP + 0xff74],AX
  1000:0a8f     40               INC AX
  1000:0a90     50               PUSH AX
  1000:0a91     E8 DC 11         CALL 0x1000:1c70
  1000:0a94     83 C4 02         ADD SP,0x2
  1000:0a97     8B 5E AC         MOV BX,word ptr [BP + -0x54]
  1000:0a9a     89 47 04         MOV word ptr [BX + 0x4],AX
  1000:0a9d     89 86 7A FF      MOV word ptr [BP + 0xff7a],AX
  1000:0aa1     EB 1C            JMP 0x1000:0abf

LAB_1000_0aa4:
  1000:0aa4     8B 9E 78 FF      MOV BX,word ptr [BP + 0xff78]
  1000:0aa8     FF 86 78 FF      INC word ptr [BP + 0xff78]
  1000:0aac     8B 76 FE         MOV SI,word ptr [BP + -0x2]
  1000:0aaf     8A 00            MOV AL,byte ptr [BX + SI]
  1000:0ab1     8B 9E 7A FF      MOV BX,word ptr [BP + 0xff7a]
  1000:0ab5     FF 86 7A FF      INC word ptr [BP + 0xff7a]
  1000:0ab9     88 07            MOV byte ptr [BX],AL
  1000:0abb     FF 8E 74 FF      DEC word ptr [BP + 0xff74]

LAB_1000_0abf:
  1000:0abf     83 BE 74 FF 00   CMP word ptr [BP + 0xff74],0x0
  1000:0ac4     75 DE            JNZ 0x1000:0aa4
  1000:0ac6     8B 9E 7A FF      MOV BX,word ptr [BP + 0xff7a]
  1000:0aca     C6 07 00         MOV byte ptr [BX],0x0
  1000:0acd     FF 46 A8         INC word ptr [BP + -0x58]
  1000:0ad0     8B 5E A8         MOV BX,word ptr [BP + -0x58]
  1000:0ad3     8B C3            MOV AX,BX
  1000:0ad5     D1 E3            SHL BX,0x1
  1000:0ad7     03 D8            ADD BX,AX
  1000:0ad9     D1 E3            SHL BX,0x1
  1000:0adb     C6 87 28 12 FF   MOV byte ptr [BX + 0x1228],0xff

LAB_1000_0ae0:
  1000:0ae0     E8 E5 09         CALL 0x1000:14c8
  1000:0ae3     40               INC AX
  1000:0ae4     74 03            JZ 0x1000:0ae9
  1000:0ae6     E9 D3 FE         JMP 0x1000:09bc

LAB_1000_0ae9:
  1000:0ae9     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0aec     E8 85 11         CALL 0x1000:1c74
  1000:0aef     83 C4 02         ADD SP,0x2
  1000:0af2     8B 5E A8         MOV BX,word ptr [BP + -0x58]
  1000:0af5     8B C3            MOV AX,BX
  1000:0af7     D1 E3            SHL BX,0x1
  1000:0af9     03 D8            ADD BX,AX
  1000:0afb     D1 E3            SHL BX,0x1
  1000:0afd     C6 87 28 12 FF   MOV byte ptr [BX + 0x1228],0xff
  1000:0b02     5E               POP SI
  1000:0b03     8B E5            MOV SP,BP
  1000:0b05     5D               POP BP
  1000:0b06     C3               RET

FUN_1000_0b08:
  1000:0b08     55               PUSH BP
  1000:0b09     8B EC            MOV BP,SP
  1000:0b0b     B8 0A 00         MOV AX,0xa
  1000:0b0e     E8 43 0D         CALL 0x1000:1854
  1000:0b11     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0b14     8B 47 02         MOV AX,word ptr [BX + 0x2]
  1000:0b17     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0b1a     8B 07            MOV AX,word ptr [BX]
  1000:0b1c     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:0b1f     8B 47 06         MOV AX,word ptr [BX + 0x6]
  1000:0b22     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:0b25     8B 47 04         MOV AX,word ptr [BX + 0x4]
  1000:0b28     89 46 F6         MOV word ptr [BP + -0xa],AX
  1000:0b2b     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:0b2e     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0b31     E8 62 02         CALL 0x1000:0d96
  1000:0b34     83 C4 04         ADD SP,0x4
  1000:0b37     B8 DA 00         MOV AX,0xda
  1000:0b3a     50               PUSH AX
  1000:0b3b     E8 0E 04         CALL 0x1000:0f4c
  1000:0b3e     83 C4 02         ADD SP,0x2
  1000:0b41     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:0b44     40               INC AX
  1000:0b45     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:0b48     EB 0D            JMP 0x1000:0b57

LAB_1000_0b4a:
  1000:0b4a     B8 C4 00         MOV AX,0xc4
  1000:0b4d     50               PUSH AX
  1000:0b4e     E8 FB 03         CALL 0x1000:0f4c
  1000:0b51     83 C4 02         ADD SP,0x2
  1000:0b54     FF 46 FC         INC word ptr [BP + -0x4]

LAB_1000_0b57:
  1000:0b57     8B 46 FA         MOV AX,word ptr [BP + -0x6]
  1000:0b5a     48               DEC AX
  1000:0b5b     3B 46 FC         CMP AX,word ptr [BP + -0x4]
  1000:0b5e     7F EA            JG 0x1000:0b4a
  1000:0b60     B8 B7 00         MOV AX,0xb7
  1000:0b63     50               PUSH AX
  1000:0b64     E8 E5 03         CALL 0x1000:0f4c
  1000:0b67     83 C4 02         ADD SP,0x2
  1000:0b6a     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:0b6d     48               DEC AX
  1000:0b6e     50               PUSH AX
  1000:0b6f     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0b72     E8 21 02         CALL 0x1000:0d96
  1000:0b75     83 C4 04         ADD SP,0x4
  1000:0b78     B8 D4 00         MOV AX,0xd4
  1000:0b7b     50               PUSH AX
  1000:0b7c     E8 CD 03         CALL 0x1000:0f4c
  1000:0b7f     83 C4 02         ADD SP,0x2
  1000:0b82     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:0b85     40               INC AX
  1000:0b86     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:0b89     EB 0E            JMP 0x1000:0b99

LAB_1000_0b8c:
  1000:0b8c     B8 CD 00         MOV AX,0xcd
  1000:0b8f     50               PUSH AX
  1000:0b90     E8 B9 03         CALL 0x1000:0f4c
  1000:0b93     83 C4 02         ADD SP,0x2
  1000:0b96     FF 46 FC         INC word ptr [BP + -0x4]

LAB_1000_0b99:
  1000:0b99     8B 46 FA         MOV AX,word ptr [BP + -0x6]
  1000:0b9c     48               DEC AX
  1000:0b9d     3B 46 FC         CMP AX,word ptr [BP + -0x4]
  1000:0ba0     7F EA            JG 0x1000:0b8c
  1000:0ba2     B8 BC 00         MOV AX,0xbc
  1000:0ba5     50               PUSH AX
  1000:0ba6     E8 A3 03         CALL 0x1000:0f4c
  1000:0ba9     83 C4 02         ADD SP,0x2
  1000:0bac     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:0baf     40               INC AX
  1000:0bb0     50               PUSH AX
  1000:0bb1     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0bb4     E8 DF 01         CALL 0x1000:0d96
  1000:0bb7     83 C4 04         ADD SP,0x4
  1000:0bba     EB 2E            JMP 0x1000:0bea

LAB_1000_0bbc:
  1000:0bbc     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:0bbf     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0bc2     E8 D1 01         CALL 0x1000:0d96
  1000:0bc5     83 C4 04         ADD SP,0x4
  1000:0bc8     B8 B3 00         MOV AX,0xb3
  1000:0bcb     50               PUSH AX
  1000:0bcc     E8 7D 03         CALL 0x1000:0f4c
  1000:0bcf     83 C4 02         ADD SP,0x2
  1000:0bd2     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:0bd5     8B 46 FA         MOV AX,word ptr [BP + -0x6]
  1000:0bd8     48               DEC AX
  1000:0bd9     50               PUSH AX
  1000:0bda     E8 B9 01         CALL 0x1000:0d96
  1000:0bdd     83 C4 04         ADD SP,0x4
  1000:0be0     B8 BA 00         MOV AX,0xba
  1000:0be3     50               PUSH AX
  1000:0be4     E8 65 03         CALL 0x1000:0f4c
  1000:0be7     83 C4 02         ADD SP,0x2

LAB_1000_0bea:
  1000:0bea     FF 46 F8         INC word ptr [BP + -0x8]
  1000:0bed     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:0bf0     48               DEC AX
  1000:0bf1     3B 46 F8         CMP AX,word ptr [BP + -0x8]
  1000:0bf4     7F C6            JG 0x1000:0bbc
  1000:0bf6     83 7E 06 00      CMP word ptr [BP + 0x6],0x0
  1000:0bfa     74 2B            JZ 0x1000:0c27
  1000:0bfc     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:0bff     48               DEC AX
  1000:0c00     50               PUSH AX
  1000:0c01     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:0c04     E8 71 10         CALL 0x1000:1c78
  1000:0c07     83 C4 02         ADD SP,0x2
  1000:0c0a     8B 4E FA         MOV CX,word ptr [BP + -0x6]
  1000:0c0d     2B 4E FE         SUB CX,word ptr [BP + -0x2]
  1000:0c10     2B C8            SUB CX,AX
  1000:0c12     D1 E9            SHR CX,0x1
  1000:0c14     03 4E FE         ADD CX,word ptr [BP + -0x2]
  1000:0c17     51               PUSH CX
  1000:0c18     E8 7B 01         CALL 0x1000:0d96
  1000:0c1b     83 C4 04         ADD SP,0x4
  1000:0c1e     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:0c21     E8 50 03         CALL 0x1000:0f74
  1000:0c24     83 C4 02         ADD SP,0x2

LAB_1000_0c27:
  1000:0c27     8B E5            MOV SP,BP
  1000:0c29     5D               POP BP
  1000:0c2a     C3               RET

FUN_1000_0c2c:
  1000:0c2c     55               PUSH BP
  1000:0c2d     8B EC            MOV BP,SP
  1000:0c2f     B8 08 00         MOV AX,0x8
  1000:0c32     E8 1F 0C         CALL 0x1000:1854
  1000:0c35     56               PUSH SI
  1000:0c36     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0c39     8B 47 06         MOV AX,word ptr [BX + 0x6]
  1000:0c3c     2B 47 02         SUB AX,word ptr [BX + 0x2]
  1000:0c3f     8B 4F 04         MOV CX,word ptr [BX + 0x4]
  1000:0c42     2B 0F            SUB CX,word ptr [BX]
  1000:0c44     F7 E9            IMUL CX
  1000:0c46     D1 E0            SHL AX,0x1
  1000:0c48     05 08 00         ADD AX,0x8
  1000:0c4b     50               PUSH AX
  1000:0c4c     E8 21 10         CALL 0x1000:1c70
  1000:0c4f     83 C4 02         ADD SP,0x2
  1000:0c52     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:0c55     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:0c58     8B D8            MOV BX,AX
  1000:0c5a     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:0c5e     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:0c61     8B 04            MOV AX,word ptr [SI]
  1000:0c63     89 07            MOV word ptr [BX],AX
  1000:0c65     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:0c68     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:0c6c     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:0c6f     8B 44 02         MOV AX,word ptr [SI + 0x2]
  1000:0c72     89 07            MOV word ptr [BX],AX
  1000:0c74     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:0c77     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:0c7b     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:0c7e     8B 44 04         MOV AX,word ptr [SI + 0x4]
  1000:0c81     89 07            MOV word ptr [BX],AX
  1000:0c83     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:0c86     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:0c8a     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:0c8d     8B 44 06         MOV AX,word ptr [SI + 0x6]
  1000:0c90     89 07            MOV word ptr [BX],AX
  1000:0c92     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0c95     8B 07            MOV AX,word ptr [BX]
  1000:0c97     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:0c9a     EB 27            JMP 0x1000:0cc3

LAB_1000_0c9c:
  1000:0c9c     FF 46 FE         INC word ptr [BP + -0x2]

LAB_1000_0c9f:
  1000:0c9f     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0ca2     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:0ca5     39 47 06         CMP word ptr [BX + 0x6],AX
  1000:0ca8     7E 16            JLE 0x1000:0cc0
  1000:0caa     FF 76 FC         PUSH word ptr [BP + -0x4]
  1000:0cad     50               PUSH AX
  1000:0cae     E8 FB 00         CALL 0x1000:0dac
  1000:0cb1     83 C4 04         ADD SP,0x4
  1000:0cb4     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:0cb7     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:0cbb     89 07            MOV word ptr [BX],AX
  1000:0cbd     EB DD            JMP 0x1000:0c9c

LAB_1000_0cc0:
  1000:0cc0     FF 46 FC         INC word ptr [BP + -0x4]

LAB_1000_0cc3:
  1000:0cc3     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0cc6     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:0cc9     39 47 04         CMP word ptr [BX + 0x4],AX
  1000:0ccc     7E 08            JLE 0x1000:0cd6
  1000:0cce     8B 47 02         MOV AX,word ptr [BX + 0x2]
  1000:0cd1     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0cd4     EB C9            JMP 0x1000:0c9f

LAB_1000_0cd6:
  1000:0cd6     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:0cd9     5E               POP SI
  1000:0cda     8B E5            MOV SP,BP
  1000:0cdc     5D               POP BP
  1000:0cdd     C3               RET

FUN_1000_0cde:
  1000:0cde     55               PUSH BP
  1000:0cdf     8B EC            MOV BP,SP
  1000:0ce1     B8 06 00         MOV AX,0x6
  1000:0ce4     E8 6D 0B         CALL 0x1000:1854
  1000:0ce7     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:0cea     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0ced     83 46 04 08      ADD word ptr [BP + 0x4],0x8
  1000:0cf1     8B D8            MOV BX,AX
  1000:0cf3     8B 07            MOV AX,word ptr [BX]
  1000:0cf5     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:0cf8     EB 27            JMP 0x1000:0d21

LAB_1000_0cfa:
  1000:0cfa     FF 46 FC         INC word ptr [BP + -0x4]

LAB_1000_0cfd:
  1000:0cfd     8B 5E FE         MOV BX,word ptr [BP + -0x2]
  1000:0d00     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:0d03     39 47 06         CMP word ptr [BX + 0x6],AX
  1000:0d06     7E 16            JLE 0x1000:0d1e
  1000:0d08     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:0d0b     50               PUSH AX
  1000:0d0c     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0d0f     83 46 04 02      ADD word ptr [BP + 0x4],0x2
  1000:0d13     FF 37            PUSH word ptr [BX]
  1000:0d15     E8 E6 00         CALL 0x1000:0dfe
  1000:0d18     83 C4 06         ADD SP,0x6
  1000:0d1b     EB DD            JMP 0x1000:0cfa

LAB_1000_0d1e:
  1000:0d1e     FF 46 FA         INC word ptr [BP + -0x6]

LAB_1000_0d21:
  1000:0d21     8B 5E FE         MOV BX,word ptr [BP + -0x2]
  1000:0d24     8B 46 FA         MOV AX,word ptr [BP + -0x6]
  1000:0d27     39 47 04         CMP word ptr [BX + 0x4],AX
  1000:0d2a     7E 08            JLE 0x1000:0d34
  1000:0d2c     8B 47 02         MOV AX,word ptr [BX + 0x2]
  1000:0d2f     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:0d32     EB C9            JMP 0x1000:0cfd

LAB_1000_0d34:
  1000:0d34     8B E5            MOV SP,BP
  1000:0d36     5D               POP BP
  1000:0d37     C3               RET

FUN_1000_0d38:
  1000:0d38     55               PUSH BP
  1000:0d39     8B EC            MOV BP,SP
  1000:0d3b     B8 02 00         MOV AX,0x2
  1000:0d3e     E8 13 0B         CALL 0x1000:1854
  1000:0d41     B8 01 82         MOV AX,0x8201
  1000:0d44     50               PUSH AX
  1000:0d45     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:0d48     E8 5B 0B         CALL 0x1000:18a6
  1000:0d4b     83 C4 04         ADD SP,0x4
  1000:0d4e     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0d51     40               INC AX
  1000:0d52     75 14            JNZ 0x1000:0d68
  1000:0d54     B8 80 01         MOV AX,0x180
  1000:0d57     50               PUSH AX
  1000:0d58     B8 01 81         MOV AX,0x8101
  1000:0d5b     50               PUSH AX
  1000:0d5c     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:0d5f     E8 44 0B         CALL 0x1000:18a6
  1000:0d62     83 C4 06         ADD SP,0x6
  1000:0d65     89 46 FE         MOV word ptr [BP + -0x2],AX

LAB_1000_0d68:
  1000:0d68     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:0d6b     8B E5            MOV SP,BP
  1000:0d6d     5D               POP BP
  1000:0d6e     C3               RET

FUN_1000_0d70:
  1000:0d70     55               PUSH BP
  1000:0d71     8B EC            MOV BP,SP
  1000:0d73     33 C0            XOR AX,AX
  1000:0d75     E8 DC 0A         CALL 0x1000:1854
  1000:0d78     C6 06 81 0D 00   MOV byte ptr [0xd81],0x0
  1000:0d7d     C6 06 80 0D 03   MOV byte ptr [0xd80],0x3
  1000:0d82     B8 CA 11         MOV AX,0x11ca
  1000:0d85     50               PUSH AX
  1000:0d86     B8 80 0D         MOV AX,0xd80
  1000:0d89     50               PUSH AX
  1000:0d8a     B8 10 00         MOV AX,0x10
  1000:0d8d     50               PUSH AX
  1000:0d8e     E8 25 0F         CALL 0x1000:1cb6
  1000:0d91     83 C4 06         ADD SP,0x6
  1000:0d94     5D               POP BP
  1000:0d95     C3               RET

FUN_1000_0d96:
  1000:0d96     55               PUSH BP
  1000:0d97     8B EC            MOV BP,SP
  1000:0d99     33 C0            XOR AX,AX
  1000:0d9b     E8 B6 0A         CALL 0x1000:1854
  1000:0d9e     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:0da1     A3 7E 0E         MOV [0xe7e],AX
  1000:0da4     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:0da7     A3 80 0E         MOV [0xe80],AX
  1000:0daa     5D               POP BP
  1000:0dab     C3               RET

FUN_1000_0dac:
  1000:0dac     55               PUSH BP
  1000:0dad     8B EC            MOV BP,SP
  1000:0daf     33 C0            XOR AX,AX
  1000:0db1     E8 A0 0A         CALL 0x1000:1854
  1000:0db4     C6 06 81 0D 02   MOV byte ptr [0xd81],0x2
  1000:0db9     8A 46 04         MOV AL,byte ptr [BP + 0x4]
  1000:0dbc     A2 86 0D         MOV [0xd86],AL
  1000:0dbf     8A 46 06         MOV AL,byte ptr [BP + 0x6]
  1000:0dc2     A2 87 0D         MOV [0xd87],AL
  1000:0dc5     C6 06 83 0D 00   MOV byte ptr [0xd83],0x0
  1000:0dca     B8 CA 11         MOV AX,0x11ca
  1000:0dcd     50               PUSH AX
  1000:0dce     B8 80 0D         MOV AX,0xd80
  1000:0dd1     50               PUSH AX
  1000:0dd2     B8 10 00         MOV AX,0x10
  1000:0dd5     50               PUSH AX
  1000:0dd6     E8 DD 0E         CALL 0x1000:1cb6
  1000:0dd9     83 C4 06         ADD SP,0x6
  1000:0ddc     C6 06 81 0D 08   MOV byte ptr [0xd81],0x8
  1000:0de1     C6 06 83 0D 00   MOV byte ptr [0xd83],0x0
  1000:0de6     B8 CA 11         MOV AX,0x11ca
  1000:0de9     50               PUSH AX
  1000:0dea     B8 80 0D         MOV AX,0xd80
  1000:0ded     50               PUSH AX
  1000:0dee     B8 10 00         MOV AX,0x10
  1000:0df1     50               PUSH AX
  1000:0df2     E8 C1 0E         CALL 0x1000:1cb6
  1000:0df5     83 C4 06         ADD SP,0x6
  1000:0df8     A1 CA 11         MOV AX,[0x11ca]
  1000:0dfb     5D               POP BP
  1000:0dfc     C3               RET

FUN_1000_0dfe:
  1000:0dfe     55               PUSH BP
  1000:0dff     8B EC            MOV BP,SP
  1000:0e01     33 C0            XOR AX,AX
  1000:0e03     E8 4E 0A         CALL 0x1000:1854
  1000:0e06     C6 06 81 0D 02   MOV byte ptr [0xd81],0x2
  1000:0e0b     8A 46 06         MOV AL,byte ptr [BP + 0x6]
  1000:0e0e     A2 86 0D         MOV [0xd86],AL
  1000:0e11     8A 46 08         MOV AL,byte ptr [BP + 0x8]
  1000:0e14     A2 87 0D         MOV [0xd87],AL
  1000:0e17     C6 06 83 0D 00   MOV byte ptr [0xd83],0x0
  1000:0e1c     B8 CA 11         MOV AX,0x11ca
  1000:0e1f     50               PUSH AX
  1000:0e20     B8 80 0D         MOV AX,0xd80
  1000:0e23     50               PUSH AX
  1000:0e24     B8 10 00         MOV AX,0x10
  1000:0e27     50               PUSH AX
  1000:0e28     E8 8B 0E         CALL 0x1000:1cb6
  1000:0e2b     83 C4 06         ADD SP,0x6
  1000:0e2e     C6 06 81 0D 09   MOV byte ptr [0xd81],0x9
  1000:0e33     8A 46 04         MOV AL,byte ptr [BP + 0x4]
  1000:0e36     A2 80 0D         MOV [0xd80],AL
  1000:0e39     C6 06 83 0D 00   MOV byte ptr [0xd83],0x0
  1000:0e3e     8A 46 05         MOV AL,byte ptr [BP + 0x5]
  1000:0e41     A2 82 0D         MOV [0xd82],AL
  1000:0e44     C7 06 84 0D 01 00   MOV word ptr [0xd84],0x1
  1000:0e4a     B8 CA 11         MOV AX,0x11ca
  1000:0e4d     50               PUSH AX
  1000:0e4e     B8 80 0D         MOV AX,0xd80
  1000:0e51     50               PUSH AX
  1000:0e52     B8 10 00         MOV AX,0x10
  1000:0e55     50               PUSH AX
  1000:0e56     E8 5D 0E         CALL 0x1000:1cb6
  1000:0e59     83 C4 06         ADD SP,0x6
  1000:0e5c     5D               POP BP
  1000:0e5d     C3               RET

FUN_1000_0e5e:
  1000:0e5e     55               PUSH BP
  1000:0e5f     8B EC            MOV BP,SP
  1000:0e61     B8 16 00         MOV AX,0x16
  1000:0e64     E8 ED 09         CALL 0x1000:1854
  1000:0e67     C7 46 EC 03 00   MOV word ptr [BP + -0x14],0x3
  1000:0e6c     C7 46 F2 00 00   MOV word ptr [BP + -0xe],0x0
  1000:0e71     2B C0            SUB AX,AX
  1000:0e73     50               PUSH AX
  1000:0e74     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0e77     50               PUSH AX
  1000:0e78     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:0e7b     E8 1A 03         CALL 0x1000:1198
  1000:0e7e     83 C4 06         ADD SP,0x6
  1000:0e81     83 7E 06 00      CMP word ptr [BP + 0x6],0x0
  1000:0e85     74 20            JZ 0x1000:0ea7
  1000:0e87     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:0e8a     E8 EB 0D         CALL 0x1000:1c78
  1000:0e8d     83 C4 02         ADD SP,0x2
  1000:0e90     05 02 00         ADD AX,0x2
  1000:0e93     3B 46 FE         CMP AX,word ptr [BP + -0x2]
  1000:0e96     76 0F            JBE 0x1000:0ea7
  1000:0e98     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:0e9b     E8 DA 0D         CALL 0x1000:1c78
  1000:0e9e     83 C4 02         ADD SP,0x2
  1000:0ea1     05 02 00         ADD AX,0x2
  1000:0ea4     89 46 FE         MOV word ptr [BP + -0x2],AX

LAB_1000_0ea7:
  1000:0ea7     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0eaa     50               PUSH AX
  1000:0eab     E8 BE 01         CALL 0x1000:106c
  1000:0eae     83 C4 02         ADD SP,0x2
  1000:0eb1     B8 FE FF         MOV AX,0xfffe
  1000:0eb4     50               PUSH AX
  1000:0eb5     50               PUSH AX
  1000:0eb6     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0eb9     50               PUSH AX
  1000:0eba     E8 31 01         CALL 0x1000:0fee
  1000:0ebd     83 C4 06         ADD SP,0x6
  1000:0ec0     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0ec3     50               PUSH AX
  1000:0ec4     E8 65 FD         CALL 0x1000:0c2c
  1000:0ec7     83 C4 02         ADD SP,0x2
  1000:0eca     89 46 F4         MOV word ptr [BP + -0xc],AX
  1000:0ecd     E8 90 02         CALL 0x1000:1160
  1000:0ed0     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:0ed3     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0ed6     50               PUSH AX
  1000:0ed7     E8 2E FC         CALL 0x1000:0b08
  1000:0eda     83 C4 04         ADD SP,0x4
  1000:0edd     B8 02 00         MOV AX,0x2
  1000:0ee0     50               PUSH AX
  1000:0ee1     50               PUSH AX
  1000:0ee2     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0ee5     50               PUSH AX
  1000:0ee6     E8 05 01         CALL 0x1000:0fee
  1000:0ee9     83 C4 06         ADD SP,0x6
  1000:0eec     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0eef     50               PUSH AX
  1000:0ef0     E8 B1 01         CALL 0x1000:10a4
  1000:0ef3     83 C4 02         ADD SP,0x2
  1000:0ef6     B8 02 00         MOV AX,0x2
  1000:0ef9     50               PUSH AX
  1000:0efa     8D 46 F8         LEA AX,[BP + -0x8]
  1000:0efd     50               PUSH AX
  1000:0efe     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:0f01     E8 6C 04         CALL 0x1000:1370
  1000:0f04     83 C4 06         ADD SP,0x6
  1000:0f07     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:0f0a     E8 C9 0E         CALL 0x1000:1dd6
  1000:0f0d     83 C4 02         ADD SP,0x2
  1000:0f10     EB 26            JMP 0x1000:0f38

LAB_1000_0f12:
  1000:0f12     E8 57 02         CALL 0x1000:116c
  1000:0f15     50               PUSH AX
  1000:0f16     E8 87 0D         CALL 0x1000:1ca0
  1000:0f19     83 C4 02         ADD SP,0x2
  1000:0f1c     89 46 EE         MOV word ptr [BP + -0x12],AX
  1000:0f1f     80 7E EE 00      CMP byte ptr [BP + -0x12],0x0
  1000:0f23     74 13            JZ 0x1000:0f38
  1000:0f25     50               PUSH AX
  1000:0f26     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:0f29     E8 5E 0E         CALL 0x1000:1d8a
  1000:0f2c     83 C4 04         ADD SP,0x4
  1000:0f2f     0B C0            OR AX,AX
  1000:0f31     74 05            JZ 0x1000:0f38
  1000:0f33     C7 46 F2 01 00   MOV word ptr [BP + -0xe],0x1

LAB_1000_0f38:
  1000:0f38     83 7E F2 00      CMP word ptr [BP + -0xe],0x0
  1000:0f3c     74 D4            JZ 0x1000:0f12
  1000:0f3e     FF 76 F4         PUSH word ptr [BP + -0xc]
  1000:0f41     E8 9A FD         CALL 0x1000:0cde
  1000:0f44     8B 46 EE         MOV AX,word ptr [BP + -0x12]
  1000:0f47     8B E5            MOV SP,BP
  1000:0f49     5D               POP BP
  1000:0f4a     C3               RET

FUN_1000_0f4c:
  1000:0f4c     55               PUSH BP
  1000:0f4d     8B EC            MOV BP,SP
  1000:0f4f     33 C0            XOR AX,AX
  1000:0f51     E8 00 09         CALL 0x1000:1854
  1000:0f54     8A 26 82 10      MOV AH,byte ptr [0x1082]
  1000:0f58     2A C0            SUB AL,AL
  1000:0f5a     09 46 04         OR word ptr [BP + 0x4],AX
  1000:0f5d     FF 36 80 0E      PUSH word ptr [0xe80]
  1000:0f61     FF 36 7E 0E      PUSH word ptr [0xe7e]
  1000:0f65     FF 06 7E 0E      INC word ptr [0xe7e]
  1000:0f69     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:0f6c     E8 8F FE         CALL 0x1000:0dfe
  1000:0f6f     83 C4 06         ADD SP,0x6
  1000:0f72     5D               POP BP
  1000:0f73     C3               RET

FUN_1000_0f74:
  1000:0f74     55               PUSH BP
  1000:0f75     8B EC            MOV BP,SP
  1000:0f77     B8 04 00         MOV AX,0x4
  1000:0f7a     E8 D7 08         CALL 0x1000:1854
  1000:0f7d     A1 7E 0E         MOV AX,[0xe7e]
  1000:0f80     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:0f83     EB 2B            JMP 0x1000:0fb0

LAB_1000_0f86:
  1000:0f86     80 7E FC 0D      CMP byte ptr [BP + -0x4],0xd
  1000:0f8a     75 14            JNZ 0x1000:0fa0
  1000:0f8c     A1 80 0E         MOV AX,[0xe80]
  1000:0f8f     40               INC AX
  1000:0f90     50               PUSH AX
  1000:0f91     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:0f94     E8 FF FD         CALL 0x1000:0d96
  1000:0f97     83 C4 04         ADD SP,0x4
  1000:0f9a     FF 46 04         INC word ptr [BP + 0x4]
  1000:0f9d     EB 11            JMP 0x1000:0fb0

LAB_1000_0fa0:
  1000:0fa0     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0fa3     FF 46 04         INC word ptr [BP + 0x4]
  1000:0fa6     8A 07            MOV AL,byte ptr [BX]
  1000:0fa8     98               CBW
  1000:0fa9     50               PUSH AX
  1000:0faa     E8 9F FF         CALL 0x1000:0f4c
  1000:0fad     83 C4 02         ADD SP,0x2

LAB_1000_0fb0:
  1000:0fb0     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0fb3     8A 07            MOV AL,byte ptr [BX]
  1000:0fb5     88 46 FC         MOV byte ptr [BP + -0x4],AL
  1000:0fb8     0A C0            OR AL,AL
  1000:0fba     75 CA            JNZ 0x1000:0f86
  1000:0fbc     8B E5            MOV SP,BP
  1000:0fbe     5D               POP BP
  1000:0fbf     C3               RET

FUN_1000_0fc0:
  1000:0fc0     55               PUSH BP
  1000:0fc1     8B EC            MOV BP,SP
  1000:0fc3     33 C0            XOR AX,AX
  1000:0fc5     E8 8C 08         CALL 0x1000:1854
  1000:0fc8     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0fcb     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:0fce     89 47 02         MOV word ptr [BX + 0x2],AX
  1000:0fd1     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0fd4     8B 46 0A         MOV AX,word ptr [BP + 0xa]
  1000:0fd7     89 47 06         MOV word ptr [BX + 0x6],AX
  1000:0fda     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0fdd     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:0fe0     89 07            MOV word ptr [BX],AX
  1000:0fe2     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0fe5     8B 46 0C         MOV AX,word ptr [BP + 0xc]
  1000:0fe8     89 47 04         MOV word ptr [BX + 0x4],AX
  1000:0feb     5D               POP BP
  1000:0fec     C3               RET

FUN_1000_0fee:
  1000:0fee     55               PUSH BP
  1000:0fef     8B EC            MOV BP,SP
  1000:0ff1     33 C0            XOR AX,AX
  1000:0ff3     E8 5E 08         CALL 0x1000:1854
  1000:0ff6     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:0ff9     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:0ffc     01 07            ADD word ptr [BX],AX
  1000:0ffe     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1001     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:1004     29 47 04         SUB word ptr [BX + 0x4],AX
  1000:1007     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:100a     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:100d     01 47 02         ADD word ptr [BX + 0x2],AX
  1000:1010     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1013     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:1016     29 47 06         SUB word ptr [BX + 0x6],AX
  1000:1019     5D               POP BP
  1000:101a     C3               RET

FUN_1000_101c:
  1000:101c     55               PUSH BP
  1000:101d     8B EC            MOV BP,SP
  1000:101f     33 C0            XOR AX,AX
  1000:1021     E8 30 08         CALL 0x1000:1854
  1000:1024     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1027     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:102a     01 07            ADD word ptr [BX],AX
  1000:102c     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:102f     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:1032     01 47 04         ADD word ptr [BX + 0x4],AX
  1000:1035     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1038     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:103b     01 47 02         ADD word ptr [BX + 0x2],AX
  1000:103e     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1041     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:1044     01 47 06         ADD word ptr [BX + 0x6],AX
  1000:1047     5D               POP BP
  1000:1048     C3               RET

FUN_1000_104a:
  1000:104a     55               PUSH BP
  1000:104b     8B EC            MOV BP,SP
  1000:104d     33 C0            XOR AX,AX
  1000:104f     E8 02 08         CALL 0x1000:1854
  1000:1052     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:1055     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1058     2B 07            SUB AX,word ptr [BX]
  1000:105a     50               PUSH AX
  1000:105b     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:105e     2B 47 02         SUB AX,word ptr [BX + 0x2]
  1000:1061     50               PUSH AX
  1000:1062     53               PUSH BX
  1000:1063     E8 B6 FF         CALL 0x1000:101c
  1000:1066     83 C4 06         ADD SP,0x6
  1000:1069     5D               POP BP
  1000:106a     C3               RET

FUN_1000_106c:
  1000:106c     55               PUSH BP
  1000:106d     8B EC            MOV BP,SP
  1000:106f     B8 04 00         MOV AX,0x4
  1000:1072     E8 DF 07         CALL 0x1000:1854
  1000:1075     56               PUSH SI
  1000:1076     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1079     8B F3            MOV SI,BX
  1000:107b     8B 04            MOV AX,word ptr [SI]
  1000:107d     2B 47 04         SUB AX,word ptr [BX + 0x4]
  1000:1080     05 19 00         ADD AX,0x19
  1000:1083     99               CWD
  1000:1084     2B C2            SUB AX,DX
  1000:1086     D1 F8            SAR AX,0x1
  1000:1088     50               PUSH AX
  1000:1089     8B 44 02         MOV AX,word ptr [SI + 0x2]
  1000:108c     2B 47 06         SUB AX,word ptr [BX + 0x6]
  1000:108f     05 50 00         ADD AX,0x50
  1000:1092     99               CWD
  1000:1093     2B C2            SUB AX,DX
  1000:1095     D1 F8            SAR AX,0x1
  1000:1097     50               PUSH AX
  1000:1098     53               PUSH BX
  1000:1099     E8 AE FF         CALL 0x1000:104a
  1000:109c     83 C4 06         ADD SP,0x6
  1000:109f     5E               POP SI
  1000:10a0     8B E5            MOV SP,BP
  1000:10a2     5D               POP BP
  1000:10a3     C3               RET

FUN_1000_10a4:
  1000:10a4     55               PUSH BP
  1000:10a5     8B EC            MOV BP,SP
  1000:10a7     B8 04 00         MOV AX,0x4
  1000:10aa     E8 A7 07         CALL 0x1000:1854
  1000:10ad     E8 B0 00         CALL 0x1000:1160
  1000:10b0     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:10b3     8B 07            MOV AX,word ptr [BX]
  1000:10b5     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:10b8     EB 1D            JMP 0x1000:10d7

LAB_1000_10ba:
  1000:10ba     FF 46 FE         INC word ptr [BP + -0x2]

LAB_1000_10bd:
  1000:10bd     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:10c0     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:10c3     39 47 06         CMP word ptr [BX + 0x6],AX
  1000:10c6     7E 0C            JLE 0x1000:10d4
  1000:10c8     B8 20 00         MOV AX,0x20
  1000:10cb     50               PUSH AX
  1000:10cc     E8 7D FE         CALL 0x1000:0f4c
  1000:10cf     83 C4 02         ADD SP,0x2
  1000:10d2     EB E6            JMP 0x1000:10ba

LAB_1000_10d4:
  1000:10d4     FF 46 FC         INC word ptr [BP + -0x4]

LAB_1000_10d7:
  1000:10d7     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:10da     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:10dd     39 47 04         CMP word ptr [BX + 0x4],AX
  1000:10e0     7E 16            JLE 0x1000:10f8
  1000:10e2     50               PUSH AX
  1000:10e3     FF 77 02         PUSH word ptr [BX + 0x2]
  1000:10e6     E8 AD FC         CALL 0x1000:0d96
  1000:10e9     83 C4 04         ADD SP,0x4
  1000:10ec     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:10ef     8B 47 02         MOV AX,word ptr [BX + 0x2]
  1000:10f2     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:10f5     EB C6            JMP 0x1000:10bd

LAB_1000_10f8:
  1000:10f8     8B E5            MOV SP,BP
  1000:10fa     5D               POP BP
  1000:10fb     C3               RET

FUN_1000_10fc:
  1000:10fc     55               PUSH BP
  1000:10fd     8B EC            MOV BP,SP
  1000:10ff     B8 04 00         MOV AX,0x4
  1000:1102     E8 4F 07         CALL 0x1000:1854
  1000:1105     E8 4C 00         CALL 0x1000:1154
  1000:1108     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:110b     8B 07            MOV AX,word ptr [BX]
  1000:110d     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:1110     EB 1D            JMP 0x1000:112f

LAB_1000_1112:
  1000:1112     FF 46 FE         INC word ptr [BP + -0x2]

LAB_1000_1115:
  1000:1115     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1118     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:111b     39 47 06         CMP word ptr [BX + 0x6],AX
  1000:111e     7E 0C            JLE 0x1000:112c
  1000:1120     B8 20 00         MOV AX,0x20
  1000:1123     50               PUSH AX
  1000:1124     E8 25 FE         CALL 0x1000:0f4c
  1000:1127     83 C4 02         ADD SP,0x2
  1000:112a     EB E6            JMP 0x1000:1112

LAB_1000_112c:
  1000:112c     FF 46 FC         INC word ptr [BP + -0x4]

LAB_1000_112f:
  1000:112f     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1132     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:1135     39 47 04         CMP word ptr [BX + 0x4],AX
  1000:1138     7E 16            JLE 0x1000:1150
  1000:113a     50               PUSH AX
  1000:113b     FF 77 02         PUSH word ptr [BX + 0x2]
  1000:113e     E8 55 FC         CALL 0x1000:0d96
  1000:1141     83 C4 04         ADD SP,0x4
  1000:1144     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1147     8B 47 02         MOV AX,word ptr [BX + 0x2]
  1000:114a     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:114d     EB C6            JMP 0x1000:1115

LAB_1000_1150:
  1000:1150     8B E5            MOV SP,BP
  1000:1152     5D               POP BP
  1000:1153     C3               RET

FUN_1000_1154:
  1000:1154     33 C0            XOR AX,AX
  1000:1156     E8 FB 06         CALL 0x1000:1854
  1000:1159     C7 06 82 10 70 00   MOV word ptr [0x1082],0x70
  1000:115f     C3               RET

FUN_1000_1160:
  1000:1160     33 C0            XOR AX,AX
  1000:1162     E8 EF 06         CALL 0x1000:1854
  1000:1165     C7 06 82 10 07 00   MOV word ptr [0x1082],0x7
  1000:116b     C3               RET

FUN_1000_116c:
  1000:116c     33 C0            XOR AX,AX
  1000:116e     E8 E3 06         CALL 0x1000:1854
  1000:1171     C6 06 81 0D 00   MOV byte ptr [0xd81],0x0
  1000:1176     B8 CA 11         MOV AX,0x11ca
  1000:1179     50               PUSH AX
  1000:117a     B8 80 0D         MOV AX,0xd80
  1000:117d     50               PUSH AX
  1000:117e     B8 16 00         MOV AX,0x16
  1000:1181     50               PUSH AX
  1000:1182     E8 31 0B         CALL 0x1000:1cb6
  1000:1185     83 C4 06         ADD SP,0x6
  1000:1188     80 3E CA 11 00   CMP byte ptr [0x11ca],0x0
  1000:118d     74 05            JZ 0x1000:1194
  1000:118f     C6 06 CB 11 00   MOV byte ptr [0x11cb],0x0

LAB_1000_1194:
  1000:1194     A1 CA 11         MOV AX,[0x11ca]
  1000:1197     C3               RET

FUN_1000_1198:
  1000:1198     55               PUSH BP
  1000:1199     8B EC            MOV BP,SP
  1000:119b     B8 0A 00         MOV AX,0xa
  1000:119e     E8 B3 06         CALL 0x1000:1854
  1000:11a1     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:11a4     C7 07 00 00      MOV word ptr [BX],0x0
  1000:11a8     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:11ab     C7 47 02 00 00   MOV word ptr [BX + 0x2],0x0
  1000:11b0     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:11b3     C7 47 04 00 00   MOV word ptr [BX + 0x4],0x0
  1000:11b8     83 7E 08 00      CMP word ptr [BP + 0x8],0x0
  1000:11bc     74 0C            JZ 0x1000:11ca
  1000:11be     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:11c1     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:11c4     89 47 06         MOV word ptr [BX + 0x6],AX
  1000:11c7     EB 09            JMP 0x1000:11d2

LAB_1000_11ca:
  1000:11ca     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:11cd     C7 47 06 32 00   MOV word ptr [BX + 0x6],0x32

LAB_1000_11d2:
  1000:11d2     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:11d5     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:11d8     C7 46 F8 00 00   MOV word ptr [BP + -0x8],0x0
  1000:11dd     C7 46 F6 00 00   MOV word ptr [BP + -0xa],0x0
  1000:11e2     EB 37            JMP 0x1000:121b

LAB_1000_11e4:
  1000:11e4     8B 46 FA         MOV AX,word ptr [BP + -0x6]
  1000:11e7     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:11ea     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:11ed     FF 77 06         PUSH word ptr [BX + 0x6]
  1000:11f0     8D 46 FA         LEA AX,[BP + -0x6]
  1000:11f3     50               PUSH AX
  1000:11f4     E8 4D 00         CALL 0x1000:1244
  1000:11f7     83 C4 04         ADD SP,0x4
  1000:11fa     50               PUSH AX
  1000:11fb     2B C0            SUB AX,AX
  1000:11fd     50               PUSH AX
  1000:11fe     FF 76 FC         PUSH word ptr [BP + -0x4]
  1000:1201     E8 1E 02         CALL 0x1000:1422
  1000:1204     83 C4 06         ADD SP,0x6
  1000:1207     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:120a     FF 46 F8         INC word ptr [BP + -0x8]
  1000:120d     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:1210     39 46 FE         CMP word ptr [BP + -0x2],AX
  1000:1213     7E 06            JLE 0x1000:121b
  1000:1215     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:1218     89 46 F6         MOV word ptr [BP + -0xa],AX

LAB_1000_121b:
  1000:121b     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:121e     80 3F 00         CMP byte ptr [BX],0x0
  1000:1221     75 C1            JNZ 0x1000:11e4
  1000:1223     83 7E 08 00      CMP word ptr [BP + 0x8],0x0
  1000:1227     75 0E            JNZ 0x1000:1237
  1000:1229     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:122c     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:122f     39 47 06         CMP word ptr [BX + 0x6],AX
  1000:1232     7E 03            JLE 0x1000:1237
  1000:1234     89 47 06         MOV word ptr [BX + 0x6],AX

LAB_1000_1237:
  1000:1237     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:123a     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:123d     89 47 04         MOV word ptr [BX + 0x4],AX
  1000:1240     8B E5            MOV SP,BP
  1000:1242     5D               POP BP
  1000:1243     C3               RET

FUN_1000_1244:
  1000:1244     55               PUSH BP
  1000:1245     8B EC            MOV BP,SP
  1000:1247     B8 0A 00         MOV AX,0xa
  1000:124a     E8 07 06         CALL 0x1000:1854
  1000:124d     C7 46 F8 00 00   MOV word ptr [BP + -0x8],0x0
  1000:1252     C7 46 F6 00 00   MOV word ptr [BP + -0xa],0x0
  1000:1257     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:125a     8B 07            MOV AX,word ptr [BX]
  1000:125c     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:125f     89 46 FA         MOV word ptr [BP + -0x6],AX

LAB_1000_1262:
  1000:1262     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1265     8B 1F            MOV BX,word ptr [BX]
  1000:1267     8A 07            MOV AL,byte ptr [BX]
  1000:1269     88 46 FE         MOV byte ptr [BP + -0x2],AL
  1000:126c     3C 0D            CMP AL,0xd
  1000:126e     75 3A            JNZ 0x1000:12aa
  1000:1270     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1273     8B 1F            MOV BX,word ptr [BX]
  1000:1275     80 7F 01 0A      CMP byte ptr [BX + 0x1],0xa
  1000:1279     75 05            JNZ 0x1000:1280
  1000:127b     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:127e     FF 07            INC word ptr [BX]

LAB_1000_1280:
  1000:1280     83 7E F6 00      CMP word ptr [BP + -0xa],0x0
  1000:1284     74 54            JZ 0x1000:12da
  1000:1286     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:1289     2B C0            SUB AX,AX
  1000:128b     50               PUSH AX
  1000:128c     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:128f     E8 90 01         CALL 0x1000:1422
  1000:1292     83 C4 06         ADD SP,0x6
  1000:1295     3B 46 06         CMP AX,word ptr [BP + 0x6]
  1000:1298     7E 40            JLE 0x1000:12da

LAB_1000_129a:
  1000:129a     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:129d     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:12a0     89 07            MOV word ptr [BX],AX
  1000:12a2     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:12a5     8B E5            MOV SP,BP
  1000:12a7     5D               POP BP
  1000:12a8     C3               RET

LAB_1000_12aa:
  1000:12aa     80 7E FE 0A      CMP byte ptr [BP + -0x2],0xa
  1000:12ae     75 36            JNZ 0x1000:12e6
  1000:12b0     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:12b3     8B 1F            MOV BX,word ptr [BX]
  1000:12b5     80 7F 01 0D      CMP byte ptr [BX + 0x1],0xd
  1000:12b9     75 05            JNZ 0x1000:12c0
  1000:12bb     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:12be     FF 07            INC word ptr [BX]

LAB_1000_12c0:
  1000:12c0     83 7E F6 00      CMP word ptr [BP + -0xa],0x0
  1000:12c4     74 14            JZ 0x1000:12da
  1000:12c6     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:12c9     2B C0            SUB AX,AX
  1000:12cb     50               PUSH AX
  1000:12cc     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:12cf     E8 50 01         CALL 0x1000:1422
  1000:12d2     83 C4 06         ADD SP,0x6
  1000:12d5     3B 46 06         CMP AX,word ptr [BP + 0x6]
  1000:12d8     7F C0            JG 0x1000:129a

LAB_1000_12da:
  1000:12da     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:12dd     FF 07            INC word ptr [BX]

LAB_1000_12df:
  1000:12df     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:12e2     8B E5            MOV SP,BP
  1000:12e4     5D               POP BP
  1000:12e5     C3               RET

LAB_1000_12e6:
  1000:12e6     80 7E FE 00      CMP byte ptr [BP + -0x2],0x0
  1000:12ea     75 1C            JNZ 0x1000:1308
  1000:12ec     83 7E F6 00      CMP word ptr [BP + -0xa],0x0
  1000:12f0     74 ED            JZ 0x1000:12df
  1000:12f2     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:12f5     2B C0            SUB AX,AX
  1000:12f7     50               PUSH AX
  1000:12f8     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:12fb     E8 24 01         CALL 0x1000:1422
  1000:12fe     83 C4 06         ADD SP,0x6
  1000:1301     3B 46 06         CMP AX,word ptr [BP + 0x6]
  1000:1304     7E D9            JLE 0x1000:12df
  1000:1306     EB 92            JMP 0x1000:129a

LAB_1000_1308:
  1000:1308     80 7E FE 20      CMP byte ptr [BP + -0x2],0x20
  1000:130c     75 28            JNZ 0x1000:1336
  1000:130e     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:1311     2B C0            SUB AX,AX
  1000:1313     50               PUSH AX
  1000:1314     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:1317     E8 08 01         CALL 0x1000:1422
  1000:131a     83 C4 06         ADD SP,0x6
  1000:131d     3B 46 06         CMP AX,word ptr [BP + 0x6]
  1000:1320     7E 03            JLE 0x1000:1325
  1000:1322     E9 75 FF         JMP 0x1000:129a

LAB_1000_1325:
  1000:1325     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1328     8B 07            MOV AX,word ptr [BX]
  1000:132a     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:132d     FF 46 FC         INC word ptr [BP + -0x4]
  1000:1330     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:1333     89 46 F6         MOV word ptr [BP + -0xa],AX

LAB_1000_1336:
  1000:1336     FF 46 F8         INC word ptr [BP + -0x8]
  1000:1339     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:133c     FF 07            INC word ptr [BX]
  1000:133e     83 7E F6 00      CMP word ptr [BP + -0xa],0x0
  1000:1342     74 03            JZ 0x1000:1347
  1000:1344     E9 1B FF         JMP 0x1000:1262

LAB_1000_1347:
  1000:1347     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:134a     2B C0            SUB AX,AX
  1000:134c     50               PUSH AX
  1000:134d     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:1350     E8 CF 00         CALL 0x1000:1422
  1000:1353     83 C4 06         ADD SP,0x6
  1000:1356     3B 46 06         CMP AX,word ptr [BP + 0x6]
  1000:1359     7D 03            JGE 0x1000:135e
  1000:135b     E9 04 FF         JMP 0x1000:1262

LAB_1000_135e:
  1000:135e     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:1361     01 46 FC         ADD word ptr [BP + -0x4],AX
  1000:1364     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1367     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:136a     89 07            MOV word ptr [BX],AX
  1000:136c     E9 70 FF         JMP 0x1000:12df

FUN_1000_1370:
  1000:1370     55               PUSH BP
  1000:1371     8B EC            MOV BP,SP
  1000:1373     B8 0E 00         MOV AX,0xe
  1000:1376     E8 DB 04         CALL 0x1000:1854
  1000:1379     C7 46 F2 00 00   MOV word ptr [BP + -0xe],0x0
  1000:137e     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:1381     8B 47 06         MOV AX,word ptr [BX + 0x6]
  1000:1384     2B 47 02         SUB AX,word ptr [BX + 0x2]
  1000:1387     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:138a     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:138d     89 46 F6         MOV word ptr [BP + -0xa],AX

LAB_1000_1390:
  1000:1390     8B 5E F6         MOV BX,word ptr [BP + -0xa]
  1000:1393     80 3F 00         CMP byte ptr [BX],0x0
  1000:1396     75 03            JNZ 0x1000:139b
  1000:1398     E9 83 00         JMP 0x1000:141e

LAB_1000_139b:
  1000:139b     8B C3            MOV AX,BX
  1000:139d     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:13a0     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:13a3     8D 46 F6         LEA AX,[BP + -0xa]
  1000:13a6     50               PUSH AX
  1000:13a7     E8 9A FE         CALL 0x1000:1244
  1000:13aa     83 C4 04         ADD SP,0x4
  1000:13ad     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:13b0     50               PUSH AX
  1000:13b1     2B C0            SUB AX,AX
  1000:13b3     50               PUSH AX
  1000:13b4     FF 76 FC         PUSH word ptr [BP + -0x4]
  1000:13b7     E8 68 00         CALL 0x1000:1422
  1000:13ba     83 C4 06         ADD SP,0x6
  1000:13bd     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:13c0     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:13c3     0B C0            OR AX,AX
  1000:13c5     74 0A            JZ 0x1000:13d1
  1000:13c7     3D 01 00         CMP AX,0x1
  1000:13ca     74 4A            JZ 0x1000:1416
  1000:13cc     3D 02 00         CMP AX,0x2
  1000:13cf     74 09            JZ 0x1000:13da

LAB_1000_13d1:
  1000:13d1     C7 46 F4 00 00   MOV word ptr [BP + -0xc],0x0
  1000:13d6     EB 10            JMP 0x1000:13e8

LAB_1000_13da:
  1000:13da     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:13dd     2B 46 FE         SUB AX,word ptr [BP + -0x2]
  1000:13e0     99               CWD
  1000:13e1     2B C2            SUB AX,DX
  1000:13e3     D1 F8            SAR AX,0x1

LAB_1000_13e5:
  1000:13e5     89 46 F4         MOV word ptr [BP + -0xc],AX

LAB_1000_13e8:
  1000:13e8     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:13eb     8B 07            MOV AX,word ptr [BX]
  1000:13ed     03 46 F2         ADD AX,word ptr [BP + -0xe]
  1000:13f0     50               PUSH AX
  1000:13f1     8B 47 02         MOV AX,word ptr [BX + 0x2]
  1000:13f4     03 46 F4         ADD AX,word ptr [BP + -0xc]
  1000:13f7     50               PUSH AX
  1000:13f8     E8 9B F9         CALL 0x1000:0d96
  1000:13fb     83 C4 04         ADD SP,0x4
  1000:13fe     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:1401     2B C0            SUB AX,AX
  1000:1403     50               PUSH AX
  1000:1404     FF 76 FC         PUSH word ptr [BP + -0x4]
  1000:1407     E8 3A 00         CALL 0x1000:1444
  1000:140a     83 C4 06         ADD SP,0x6
  1000:140d     FF 46 F2         INC word ptr [BP + -0xe]
  1000:1410     E9 7D FF         JMP 0x1000:1390

LAB_1000_1416:
  1000:1416     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:1419     2B 46 FE         SUB AX,word ptr [BP + -0x2]
  1000:141c     EB C7            JMP 0x1000:13e5

LAB_1000_141e:
  1000:141e     8B E5            MOV SP,BP
  1000:1420     5D               POP BP
  1000:1421     C3               RET

FUN_1000_1422:
  1000:1422     55               PUSH BP
  1000:1423     8B EC            MOV BP,SP
  1000:1425     33 C0            XOR AX,AX
  1000:1427     E8 2A 04         CALL 0x1000:1854
  1000:142a     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:142d     5D               POP BP
  1000:142e     C3               RET

FUN_1000_1430:
  1000:1430     55               PUSH BP
  1000:1431     8B EC            MOV BP,SP
  1000:1433     33 C0            XOR AX,AX
  1000:1435     E8 1C 04         CALL 0x1000:1854
  1000:1438     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:143b     E8 3A 08         CALL 0x1000:1c78
  1000:143e     83 C4 02         ADD SP,0x2
  1000:1441     5D               POP BP
  1000:1442     C3               RET

FUN_1000_1444:
  1000:1444     55               PUSH BP
  1000:1445     8B EC            MOV BP,SP
  1000:1447     33 C0            XOR AX,AX
  1000:1449     E8 08 04         CALL 0x1000:1854
  1000:144c     56               PUSH SI
  1000:144d     EB 14            JMP 0x1000:1463

LAB_1000_1450:
  1000:1450     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:1453     FF 46 06         INC word ptr [BP + 0x6]
  1000:1456     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:1459     8A 00            MOV AL,byte ptr [BX + SI]
  1000:145b     98               CBW
  1000:145c     50               PUSH AX
  1000:145d     E8 EC FA         CALL 0x1000:0f4c
  1000:1460     83 C4 02         ADD SP,0x2

LAB_1000_1463:
  1000:1463     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:1466     FF 4E 08         DEC word ptr [BP + 0x8]
  1000:1469     0B C0            OR AX,AX
  1000:146b     75 E3            JNZ 0x1000:1450
  1000:146d     5E               POP SI
  1000:146e     5D               POP BP
  1000:146f     C3               RET

FUN_1000_1470:
  1000:1470     55               PUSH BP
  1000:1471     8B EC            MOV BP,SP
  1000:1473     33 C0            XOR AX,AX
  1000:1475     E8 DC 03         CALL 0x1000:1854
  1000:1478     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:147b     A3 86 0D         MOV [0xd86],AX
  1000:147e     C6 06 81 0D 1A   MOV byte ptr [0xd81],0x1a
  1000:1483     B8 CA 11         MOV AX,0x11ca
  1000:1486     50               PUSH AX
  1000:1487     B8 80 0D         MOV AX,0xd80
  1000:148a     50               PUSH AX
  1000:148b     B8 21 00         MOV AX,0x21
  1000:148e     50               PUSH AX
  1000:148f     E8 24 08         CALL 0x1000:1cb6
  1000:1492     83 C4 06         ADD SP,0x6
  1000:1495     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:1498     A3 86 0D         MOV [0xd86],AX
  1000:149b     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:149e     A3 84 0D         MOV [0xd84],AX
  1000:14a1     C6 06 81 0D 4E   MOV byte ptr [0xd81],0x4e
  1000:14a6     B8 CA 11         MOV AX,0x11ca
  1000:14a9     50               PUSH AX
  1000:14aa     B8 80 0D         MOV AX,0xd80
  1000:14ad     50               PUSH AX
  1000:14ae     B8 21 00         MOV AX,0x21
  1000:14b1     50               PUSH AX
  1000:14b2     E8 01 08         CALL 0x1000:1cb6
  1000:14b5     83 C4 06         ADD SP,0x6
  1000:14b8     83 3E D6 11 00   CMP word ptr [0x11d6],0x0
  1000:14bd     74 05            JZ 0x1000:14c4
  1000:14bf     B8 FF FF         MOV AX,0xffff
  1000:14c2     5D               POP BP
  1000:14c3     C3               RET

LAB_1000_14c4:
  1000:14c4     2B C0            SUB AX,AX
  1000:14c6     5D               POP BP
  1000:14c7     C3               RET

FUN_1000_14c8:
  1000:14c8     33 C0            XOR AX,AX
  1000:14ca     E8 87 03         CALL 0x1000:1854
  1000:14cd     C6 06 81 0D 4F   MOV byte ptr [0xd81],0x4f
  1000:14d2     B8 CA 11         MOV AX,0x11ca
  1000:14d5     50               PUSH AX
  1000:14d6     B8 80 0D         MOV AX,0xd80
  1000:14d9     50               PUSH AX
  1000:14da     B8 21 00         MOV AX,0x21
  1000:14dd     50               PUSH AX
  1000:14de     E8 D5 07         CALL 0x1000:1cb6
  1000:14e1     83 C4 06         ADD SP,0x6
  1000:14e4     83 3E D6 11 00   CMP word ptr [0x11d6],0x0
  1000:14e9     74 05            JZ 0x1000:14f0
  1000:14eb     B8 FF FF         MOV AX,0xffff
  1000:14ee     C3               RET

LAB_1000_14f0:
  1000:14f0     2B C0            SUB AX,AX
  1000:14f2     C3               RET

FUN_1000_14f4:
  1000:14f4     55               PUSH BP
  1000:14f5     8B EC            MOV BP,SP
  1000:14f7     33 C0            XOR AX,AX
  1000:14f9     E8 58 03         CALL 0x1000:1854
  1000:14fc     C6 06 81 0D 0E   MOV byte ptr [0xd81],0xe
  1000:1501     8A 46 04         MOV AL,byte ptr [BP + 0x4]
  1000:1504     A2 86 0D         MOV [0xd86],AL
  1000:1507     B8 CA 11         MOV AX,0x11ca
  1000:150a     50               PUSH AX
  1000:150b     B8 80 0D         MOV AX,0xd80
  1000:150e     50               PUSH AX
  1000:150f     B8 21 00         MOV AX,0x21
  1000:1512     50               PUSH AX
  1000:1513     E8 A0 07         CALL 0x1000:1cb6
  1000:1516     83 C4 06         ADD SP,0x6
  1000:1519     5D               POP BP
  1000:151a     C3               RET

FUN_1000_151c:
  1000:151c     33 C0            XOR AX,AX
  1000:151e     E8 33 03         CALL 0x1000:1854
  1000:1521     C6 06 81 0D 19   MOV byte ptr [0xd81],0x19
  1000:1526     B8 CA 11         MOV AX,0x11ca
  1000:1529     50               PUSH AX
  1000:152a     B8 80 0D         MOV AX,0xd80
  1000:152d     50               PUSH AX
  1000:152e     B8 21 00         MOV AX,0x21
  1000:1531     50               PUSH AX
  1000:1532     E8 81 07         CALL 0x1000:1cb6
  1000:1535     83 C4 06         ADD SP,0x6
  1000:1538     A0 CA 11         MOV AL,[0x11ca]
  1000:153b     2A E4            SUB AH,AH
  1000:153d     C3               RET

FUN_1000_153e:
  1000:153e     33 C0            XOR AX,AX
  1000:1540     E8 11 03         CALL 0x1000:1854
  1000:1543     83 3E 40 01 01   CMP word ptr [0x140],0x1
  1000:1548     75 51            JNZ 0x1000:159b
  1000:154a     C6 06 DF 0C 03   MOV byte ptr [0xcdf],0x3
  1000:154f     C6 06 E1 0C 00   MOV byte ptr [0xce1],0x0
  1000:1554     B8 D0 0C         MOV AX,0xcd0
  1000:1557     50               PUSH AX
  1000:1558     B8 DE 0C         MOV AX,0xcde
  1000:155b     50               PUSH AX
  1000:155c     B8 10 00         MOV AX,0x10
  1000:155f     50               PUSH AX
  1000:1560     E8 53 07         CALL 0x1000:1cb6
  1000:1563     83 C4 06         ADD SP,0x6
  1000:1566     A0 D5 0C         MOV AL,[0xcd5]
  1000:1569     2A E4            SUB AH,AH
  1000:156b     A3 C8 11         MOV [0x11c8],AX
  1000:156e     A0 D4 0C         MOV AL,[0xcd4]
  1000:1571     A3 76 11         MOV [0x1176],AX
  1000:1574     C6 06 DF 0C 01   MOV byte ptr [0xcdf],0x1
  1000:1579     C6 06 E3 0C 31   MOV byte ptr [0xce3],0x31
  1000:157e     C6 06 E2 0C 01   MOV byte ptr [0xce2],0x1
  1000:1583     B8 D0 0C         MOV AX,0xcd0
  1000:1586     50               PUSH AX
  1000:1587     B8 DE 0C         MOV AX,0xcde
  1000:158a     50               PUSH AX
  1000:158b     B8 10 00         MOV AX,0x10
  1000:158e     50               PUSH AX
  1000:158f     E8 24 07         CALL 0x1000:1cb6
  1000:1592     83 C4 06         ADD SP,0x6
  1000:1595     C7 06 40 01 00 00   MOV word ptr [0x140],0x0

LAB_1000_159b:
  1000:159b     C3               RET

FUN_1000_159c:
  1000:159c     33 C0            XOR AX,AX
  1000:159e     E8 B3 02         CALL 0x1000:1854
  1000:15a1     83 3E 40 01 00   CMP word ptr [0x140],0x0
  1000:15a6     75 23            JNZ 0x1000:15cb
  1000:15a8     C6 06 DF 0C 01   MOV byte ptr [0xcdf],0x1
  1000:15ad     A0 C8 11         MOV AL,[0x11c8]
  1000:15b0     A2 E3 0C         MOV [0xce3],AL
  1000:15b3     A0 76 11         MOV AL,[0x1176]
  1000:15b6     A2 E2 0C         MOV [0xce2],AL
  1000:15b9     B8 D0 0C         MOV AX,0xcd0
  1000:15bc     50               PUSH AX
  1000:15bd     B8 DE 0C         MOV AX,0xcde
  1000:15c0     50               PUSH AX
  1000:15c1     B8 10 00         MOV AX,0x10
  1000:15c4     50               PUSH AX
  1000:15c5     E8 EE 06         CALL 0x1000:1cb6
  1000:15c8     83 C4 06         ADD SP,0x6

LAB_1000_15cb:
  1000:15cb     C3               RET

entry:
  1000:15cc     B4 30            MOV AH,0x30
  1000:15ce     CD 21            INT 0x21
  1000:15d0     3C 02            CMP AL,0x2
  1000:15d2     73 05            JNC 0x1000:15d9
  1000:15d4     33 C0            XOR AX,AX
  1000:15d6     06               PUSH ES
  1000:15d7     50               PUSH AX
  1000:15d8     CB               RETF

LAB_1000_15d9:
  1000:15d9     BF 37 13         MOV DI,0x1337
  1000:15dc     8B 36 02 00      MOV SI,word ptr [0x2]
  1000:15e0     2B F7            SUB SI,DI
  1000:15e2     81 FE 00 10      CMP SI,0x1000
  1000:15e6     72 03            JC 0x1000:15eb
  1000:15e8     BE 00 10         MOV SI,0x1000

LAB_1000_15eb:
  1000:15eb     FA               CLI
  1000:15ec     8E D7            MOV SS,DI
  1000:15ee     81 C4 9E 12      ADD SP,0x129e
  1000:15f2     FB               STI
  1000:15f3     73 10            JNC 0x1000:1605
  1000:15f5     16               PUSH SS
  1000:15f6     1F               POP DS
  1000:15f7     E8 FC 08         CALL 0x1000:1ef6
  1000:15fa     33 C0            XOR AX,AX
  1000:15fc     50               PUSH AX
  1000:15fd     E8 75 0B         CALL 0x1000:2175
  1000:1600     B8 FF 4C         MOV AX,0x4cff
  1000:1603     CD 21            INT 0x21

LAB_1000_1605:
  1000:1605     8B C6            MOV AX,SI
  1000:1607     B1 04            MOV CL,0x4
  1000:1609     D3 E0            SHL AX,CL
  1000:160b     48               DEC AX
  1000:160c     36 A3 8C 06      MOV SS:[0x68c],AX
  1000:1610     BB 8E 06         MOV BX,0x68e
  1000:1613     36 8C 17         MOV word ptr SS:[BX],SS
  1000:1616     83 E4 FE         AND SP,0xfffe
  1000:1619     36 89 67 04      MOV word ptr SS:[BX + 0x4],SP
  1000:161d     B8 FE FF         MOV AX,0xfffe
  1000:1620     50               PUSH AX
  1000:1621     36 89 67 0A      MOV word ptr SS:[BX + 0xa],SP
  1000:1625     F7 D0            NOT AX
  1000:1627     50               PUSH AX
  1000:1628     36 89 67 06      MOV word ptr SS:[BX + 0x6],SP
  1000:162c     36 89 67 08      MOV word ptr SS:[BX + 0x8],SP
  1000:1630     36 89 26 88 06   MOV word ptr SS:[0x688],SP
  1000:1635     03 F7            ADD SI,DI
  1000:1637     89 36 02 00      MOV word ptr [0x2],SI
  1000:163b     8C C3            MOV BX,ES
  1000:163d     2B DE            SUB BX,SI
  1000:163f     F7 DB            NEG BX
  1000:1641     B4 4A            MOV AH,0x4a
  1000:1643     CD 21            INT 0x21
  1000:1645     36 8C 1E C8 06   MOV word ptr SS:[0x6c8],DS
  1000:164a     16               PUSH SS
  1000:164b     07               POP ES
  1000:164c     FC               CLD
  1000:164d     BF D0 0C         MOV DI,0xcd0
  1000:1650     B9 A0 12         MOV CX,0x12a0
  1000:1653     2B CF            SUB CX,DI
  1000:1655     33 C0            XOR AX,AX
  1000:1657     F3 AA            STOSB.REP ES:DI
  1000:1659     16               PUSH SS
  1000:165a     1F               POP DS
  1000:165b     8B 0E CC 0B      MOV CX,word ptr [0xbcc]
  1000:165f     E3 02            JCXZ 0x1000:1663
  1000:1661     FF D1            CALL CX

LAB_1000_1663:
  1000:1663     E8 66 0A         CALL 0x1000:20cc
  1000:1666     E8 D5 08         CALL 0x1000:1f3e
  1000:1669     33 ED            XOR BP,BP
  1000:166b     E8 48 00         CALL 0x1000:16b6
  1000:166e     16               PUSH SS
  1000:166f     1F               POP DS
  1000:1670     FF 36 E9 06      PUSH word ptr [0x6e9]
  1000:1674     FF 36 E7 06      PUSH word ptr [0x6e7]
  1000:1678     FF 36 E5 06      PUSH word ptr [0x6e5]
  1000:167c     E8 91 E9         CALL 0x1000:0010
  1000:167f     50               PUSH AX
  1000:1680     E8 01 01         CALL 0x1000:1784
  1000:1683     C3               RET

FUN_1000_1694:
  1000:1694     50               PUSH AX
  1000:1695     E8 5E 08         CALL 0x1000:1ef6
  1000:1698     E8 DA 0A         CALL 0x1000:2175
  1000:169b     36 81 3E CE 0B D6 D6   CMP word ptr SS:[0xbce],0xd6d6
  1000:16a2     75 07            JNZ 0x1000:16ab
  1000:16a4     58               POP AX
  1000:16a5     50               PUSH AX
  1000:16a6     36 FF 16 D2 0B   CALL word ptr SS:[0xbd2]

LAB_1000_16ab:
  1000:16ab     B8 FF 00         MOV AX,0xff
  1000:16ae     50               PUSH AX
  1000:16af     FF 16 8A 06      CALL word ptr [0x68a]
  1000:16b3     37               AAA
  1000:16b4     13 00            ADC AX,word ptr [BX + SI]

FUN_1000_16b6:
  1000:16b6     B8 00 35         MOV AX,0x3500
  1000:16b9     CD 21            INT 0x21
  1000:16bb     89 1E B4 06      MOV word ptr [0x6b4],BX
  1000:16bf     8C 06 B6 06      MOV word ptr [0x6b6],ES
  1000:16c3     0E               PUSH CS
  1000:16c4     1F               POP DS
  1000:16c5     B8 00 25         MOV AX,0x2500
  1000:16c8     BA 84 16         MOV DX,0x1684
  1000:16cb     CD 21            INT 0x21
  1000:16cd     16               PUSH SS
  1000:16ce     1F               POP DS
  1000:16cf     83 3E DE 0B 00   CMP word ptr [0xbde],0x0
  1000:16d4     74 36            JZ 0x1000:170c
  1000:16d6     8C 0E E0 0B      MOV word ptr [0xbe0],CS
  1000:16da     8C 0E E8 0B      MOV word ptr [0xbe8],CS
  1000:16de     8E 06 C8 06      MOV ES,word ptr [0x6c8]
  1000:16e2     26 8B 36 2C 00   MOV SI,word ptr ES:[0x2c]
  1000:16e7     C5 06 E2 0B      LDS AX,[0xbe2]
  1000:16eb     8C DA            MOV DX,DS
  1000:16ed     33 DB            XOR BX,BX
  1000:16ef     36 FF 1E DE 0B   CALLF [0xbde]
  1000:16f4     73 05            JNC 0x1000:16fb
  1000:16f6     16               PUSH SS
  1000:16f7     1F               POP DS
  1000:16f8     E9 1B 08         JMP 0x1000:1f16

LAB_1000_16fb:
  1000:16fb     36 C5 06 E6 0B   LDS AX,SS:[0xbe6]
  1000:1700     8C DA            MOV DX,DS
  1000:1702     BB 03 00         MOV BX,0x3
  1000:1705     36 FF 1E DE 0B   CALLF [0xbde]
  1000:170a     16               PUSH SS
  1000:170b     1F               POP DS

LAB_1000_170c:
  1000:170c     8E 06 C8 06      MOV ES,word ptr [0x6c8]
  1000:1710     26 8B 0E 2C 00   MOV CX,word ptr ES:[0x2c]
  1000:1715     E3 3E            JCXZ 0x1000:1755
  1000:1717     8E C1            MOV ES,CX
  1000:1719     33 FF            XOR DI,DI

LAB_1000_171b:
  1000:171b     26 80 3D 00      CMP byte ptr ES:[DI],0x0
  1000:171f     74 34            JZ 0x1000:1755
  1000:1721     B9 0D 00         MOV CX,0xd
  1000:1724     BE A6 06         MOV SI,0x6a6
  1000:1727     F3 A6            CMPSB.REPE ES:DI,SI
  1000:1729     74 0B            JZ 0x1000:1736
  1000:172b     B9 FF 7F         MOV CX,0x7fff
  1000:172e     33 C0            XOR AX,AX
  1000:1730     F2 AE            SCASB.REPNE ES:DI
  1000:1732     75 21            JNZ 0x1000:1755
  1000:1734     EB E5            JMP 0x1000:171b

LAB_1000_1736:
  1000:1736     06               PUSH ES
  1000:1737     1E               PUSH DS
  1000:1738     07               POP ES
  1000:1739     1F               POP DS
  1000:173a     8B F7            MOV SI,DI
  1000:173c     BF D1 06         MOV DI,0x6d1
  1000:173f     B1 04            MOV CL,0x4

LAB_1000_1741:
  1000:1741     AC               LODSB SI
  1000:1742     2C 41            SUB AL,0x41
  1000:1744     72 0D            JC 0x1000:1753
  1000:1746     D2 E0            SHL AL,CL
  1000:1748     92               XCHG AX,DX
  1000:1749     AC               LODSB SI
  1000:174a     2C 41            SUB AL,0x41
  1000:174c     72 05            JC 0x1000:1753
  1000:174e     0A C2            OR AL,DL
  1000:1750     AA               STOSB ES:DI
  1000:1751     EB EE            JMP 0x1000:1741

LAB_1000_1753:
  1000:1753     16               PUSH SS
  1000:1754     1F               POP DS

LAB_1000_1755:
  1000:1755     BB 04 00         MOV BX,0x4

LAB_1000_1758:
  1000:1758     80 A7 D1 06 BF   AND byte ptr [BX + 0x6d1],0xbf
  1000:175d     B8 00 44         MOV AX,0x4400
  1000:1760     CD 21            INT 0x21
  1000:1762     72 0A            JC 0x1000:176e
  1000:1764     F6 C2 80         TEST DL,0x80
  1000:1767     74 05            JZ 0x1000:176e
  1000:1769     80 8F D1 06 40   OR byte ptr [BX + 0x6d1],0x40

LAB_1000_176e:
  1000:176e     4B               DEC BX
  1000:176f     79 E7            JNS 0x1000:1758
  1000:1771     BE EA 0B         MOV SI,0xbea
  1000:1774     BF EA 0B         MOV DI,0xbea
  1000:1777     E8 C7 00         CALL 0x1000:1841
  1000:177a     BE EA 0B         MOV SI,0xbea
  1000:177d     BF EA 0B         MOV DI,0xbea
  1000:1780     E8 AF 00         CALL 0x1000:1832
  1000:1783     C3               RET

FUN_1000_1784:
  1000:1784     55               PUSH BP
  1000:1785     8B EC            MOV BP,SP
  1000:1787     33 C9            XOR CX,CX
  1000:1789     EB 1A            JMP 0x1000:17a5

LAB_1000_17a5:
  1000:17a5     51               PUSH CX
  1000:17a6     0A C9            OR CL,CL
  1000:17a8     75 1E            JNZ 0x1000:17c8
  1000:17aa     BE 74 0D         MOV SI,0xd74
  1000:17ad     BF 74 0D         MOV DI,0xd74
  1000:17b0     E8 7F 00         CALL 0x1000:1832
  1000:17b3     BE EA 0B         MOV SI,0xbea
  1000:17b6     BF EC 0B         MOV DI,0xbec
  1000:17b9     E8 76 00         CALL 0x1000:1832
  1000:17bc     81 3E CE 0B D6 D6   CMP word ptr [0xbce],0xd6d6
  1000:17c2     75 04            JNZ 0x1000:17c8
  1000:17c4     FF 16 D4 0B      CALL word ptr [0xbd4]

LAB_1000_17c8:
  1000:17c8     BE EC 0B         MOV SI,0xbec
  1000:17cb     BF EC 0B         MOV DI,0xbec
  1000:17ce     E8 61 00         CALL 0x1000:1832
  1000:17d1     BE EC 0B         MOV SI,0xbec
  1000:17d4     BF EC 0B         MOV DI,0xbec
  1000:17d7     E8 67 00         CALL 0x1000:1841
  1000:17da     E8 3F 07         CALL 0x1000:1f1c
  1000:17dd     0B C0            OR AX,AX
  1000:17df     74 11            JZ 0x1000:17f2
  1000:17e1     58               POP AX
  1000:17e2     0A E4            OR AH,AH
  1000:17e4     50               PUSH AX
  1000:17e5     75 0B            JNZ 0x1000:17f2
  1000:17e7     83 7E 04 00      CMP word ptr [BP + 0x4],0x0
  1000:17eb     75 05            JNZ 0x1000:17f2
  1000:17ed     C7 46 04 FF 00   MOV word ptr [BP + 0x4],0xff

LAB_1000_17f2:
  1000:17f2     E8 10 00         CALL 0x1000:1805
  1000:17f5     58               POP AX
  1000:17f6     0A E4            OR AH,AH
  1000:17f8     75 07            JNZ 0x1000:1801
  1000:17fa     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:17fd     B4 4C            MOV AH,0x4c
  1000:17ff     CD 21            INT 0x21

LAB_1000_1801:
  1000:1801     5F               POP DI
  1000:1802     5E               POP SI
  1000:1803     5D               POP BP
  1000:1804     C3               RET

FUN_1000_1805:
  1000:1805     8B 0E E0 0B      MOV CX,word ptr [0xbe0]
  1000:1809     E3 07            JCXZ 0x1000:1812
  1000:180b     BB 02 00         MOV BX,0x2
  1000:180e     FF 1E DE 0B      CALLF [0xbde]

LAB_1000_1812:
  1000:1812     1E               PUSH DS
  1000:1813     C5 16 B4 06      LDS DX,[0x6b4]
  1000:1817     B8 00 25         MOV AX,0x2500
  1000:181a     CD 21            INT 0x21
  1000:181c     1F               POP DS
  1000:181d     80 3E F2 06 00   CMP byte ptr [0x6f2],0x0
  1000:1822     74 0D            JZ 0x1000:1831
  1000:1824     1E               PUSH DS
  1000:1825     A0 F3 06         MOV AL,[0x6f3]
  1000:1828     C5 16 F4 06      LDS DX,[0x6f4]
  1000:182c     B4 25            MOV AH,0x25
  1000:182e     CD 21            INT 0x21
  1000:1830     1F               POP DS

LAB_1000_1831:
  1000:1831     C3               RET

FUN_1000_1832:
  1000:1832     3B F7            CMP SI,DI
  1000:1834     73 0A            JNC 0x1000:1840
  1000:1836     4F               DEC DI
  1000:1837     4F               DEC DI
  1000:1838     8B 0D            MOV CX,word ptr [DI]
  1000:183a     E3 F6            JCXZ 0x1000:1832
  1000:183c     FF D1            CALL CX
  1000:183e     EB F2            JMP 0x1000:1832

LAB_1000_1840:
  1000:1840     C3               RET

FUN_1000_1841:
  1000:1841     3B F7            CMP SI,DI
  1000:1843     73 0E            JNC 0x1000:1853
  1000:1845     83 EF 04         SUB DI,0x4
  1000:1848     8B 05            MOV AX,word ptr [DI]
  1000:184a     0B 45 02         OR AX,word ptr [DI + 0x2]
  1000:184d     74 F2            JZ 0x1000:1841
  1000:184f     FF 1D            CALLF [DI]
  1000:1851     EB EE            JMP 0x1000:1841

LAB_1000_1853:
  1000:1853     C3               RET

FUN_1000_1854:
  1000:1854     59               POP CX
  1000:1855     8B DC            MOV BX,SP
  1000:1857     2B D8            SUB BX,AX
  1000:1859     72 0A            JC 0x1000:1865
  1000:185b     3B 1E FA 06      CMP BX,word ptr [0x6fa]
  1000:185f     72 04            JC 0x1000:1865
  1000:1861     8B E3            MOV SP,BX
  1000:1863     FF E1            JMP CX

LAB_1000_1865:
  1000:1865     51               PUSH CX
  1000:1866     33 C0            XOR AX,AX
  1000:1868     E9 29 FE         JMP 0x1000:1694

FUN_1000_186c:
  1000:186c     55               PUSH BP
  1000:186d     8B EC            MOV BP,SP
  1000:186f     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1872     3B 1E CF 06      CMP BX,word ptr [0x6cf]
  1000:1876     72 06            JC 0x1000:187e
  1000:1878     B8 00 09         MOV AX,0x900
  1000:187b     F9               STC
  1000:187c     EB 0B            JMP 0x1000:1889

LAB_1000_187e:
  1000:187e     B4 3E            MOV AH,0x3e
  1000:1880     CD 21            INT 0x21
  1000:1882     72 05            JC 0x1000:1889
  1000:1884     C6 87 D1 06 00   MOV byte ptr [BX + 0x6d1],0x0

LAB_1000_1889:
  1000:1889     E9 1E 09         JMP 0x1000:21aa

FUN_1000_18a6:
  1000:18a6     55               PUSH BP
  1000:18a7     8B EC            MOV BP,SP
  1000:18a9     83 EC 04         SUB SP,0x4
  1000:18ac     32 FF            XOR BH,BH
  1000:18ae     88 7E FE         MOV byte ptr [BP + -0x2],BH
  1000:18b1     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:18b4     8B C8            MOV CX,AX
  1000:18b6     C6 46 FC 00      MOV byte ptr [BP + -0x4],0x0
  1000:18ba     A9 00 80         TEST AX,0x8000
  1000:18bd     75 10            JNZ 0x1000:18cf
  1000:18bf     A9 00 40         TEST AX,0x4000
  1000:18c2     75 07            JNZ 0x1000:18cb
  1000:18c4     F6 06 95 07 80   TEST byte ptr [0x795],0x80
  1000:18c9     75 04            JNZ 0x1000:18cf

LAB_1000_18cb:
  1000:18cb     C6 46 FC 80      MOV byte ptr [BP + -0x4],0x80

LAB_1000_18cf:
  1000:18cf     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:18d2     24 03            AND AL,0x3
  1000:18d4     0A C7            OR AL,BH
  1000:18d6     B4 3D            MOV AH,0x3d
  1000:18d8     CD 21            INT 0x21
  1000:18da     73 12            JNC 0x1000:18ee
  1000:18dc     3D 02 00         CMP AX,0x2
  1000:18df     75 09            JNZ 0x1000:18ea
  1000:18e1     F7 C1 00 01      TEST CX,0x100
  1000:18e5     74 03            JZ 0x1000:18ea
  1000:18e7     E9 9F 00         JMP 0x1000:1989

LAB_1000_18ea:
  1000:18ea     F9               STC
  1000:18eb     E9 D1 08         JMP 0x1000:21bf

LAB_1000_18ee:
  1000:18ee     93               XCHG AX,BX
  1000:18ef     8B C1            MOV AX,CX
  1000:18f1     25 00 05         AND AX,0x500
  1000:18f4     3D 00 05         CMP AX,0x500
  1000:18f7     75 09            JNZ 0x1000:1902
  1000:18f9     B4 3E            MOV AH,0x3e
  1000:18fb     CD 21            INT 0x21
  1000:18fd     B8 00 11         MOV AX,0x1100
  1000:1900     EB E8            JMP 0x1000:18ea

LAB_1000_1902:
  1000:1902     C6 46 FD 01      MOV byte ptr [BP + -0x3],0x1
  1000:1906     B8 00 44         MOV AX,0x4400
  1000:1909     CD 21            INT 0x21
  1000:190b     F6 C2 80         TEST DL,0x80
  1000:190e     74 04            JZ 0x1000:1914
  1000:1910     80 4E FC 40      OR byte ptr [BP + -0x4],0x40

LAB_1000_1914:
  1000:1914     F6 46 FC 40      TEST byte ptr [BP + -0x4],0x40
  1000:1918     74 03            JZ 0x1000:191d
  1000:191a     E9 D3 00         JMP 0x1000:19f0

LAB_1000_191d:
  1000:191d     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:1920     A9 00 02         TEST AX,0x200
  1000:1923     74 1C            JZ 0x1000:1941
  1000:1925     A9 03 00         TEST AX,0x3
  1000:1928     74 09            JZ 0x1000:1933
  1000:192a     33 C9            XOR CX,CX
  1000:192c     B4 40            MOV AH,0x40
  1000:192e     CD 21            INT 0x21
  1000:1930     E9 BD 00         JMP 0x1000:19f0

LAB_1000_1933:
  1000:1933     B4 3E            MOV AH,0x3e
  1000:1935     CD 21            INT 0x21
  1000:1937     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:193a     B8 00 43         MOV AX,0x4300
  1000:193d     CD 21            INT 0x21
  1000:193f     EB 65            JMP 0x1000:19a6

LAB_1000_1941:
  1000:1941     F6 46 FC 80      TEST byte ptr [BP + -0x4],0x80
  1000:1945     75 03            JNZ 0x1000:194a
  1000:1947     E9 A6 00         JMP 0x1000:19f0

LAB_1000_194a:
  1000:194a     A9 02 00         TEST AX,0x2
  1000:194d     75 03            JNZ 0x1000:1952
  1000:194f     E9 9E 00         JMP 0x1000:19f0

LAB_1000_1952:
  1000:1952     B9 FF FF         MOV CX,0xffff
  1000:1955     8B D1            MOV DX,CX
  1000:1957     B8 02 42         MOV AX,0x4202
  1000:195a     CD 21            INT 0x21
  1000:195c     F7 D9            NEG CX
  1000:195e     8D 56 FF         LEA DX,[BP + -0x1]
  1000:1961     B4 3F            MOV AH,0x3f
  1000:1963     CD 21            INT 0x21
  1000:1965     0B C0            OR AX,AX
  1000:1967     74 15            JZ 0x1000:197e
  1000:1969     80 7E FF 1A      CMP byte ptr [BP + -0x1],0x1a
  1000:196d     75 0F            JNZ 0x1000:197e
  1000:196f     F7 D9            NEG CX
  1000:1971     8B D1            MOV DX,CX
  1000:1973     B8 02 42         MOV AX,0x4202
  1000:1976     CD 21            INT 0x21
  1000:1978     33 C9            XOR CX,CX
  1000:197a     B4 40            MOV AH,0x40
  1000:197c     CD 21            INT 0x21

LAB_1000_197e:
  1000:197e     33 C9            XOR CX,CX
  1000:1980     8B D1            MOV DX,CX
  1000:1982     B8 00 42         MOV AX,0x4200
  1000:1985     CD 21            INT 0x21
  1000:1987     EB 67            JMP 0x1000:19f0

LAB_1000_1989:
  1000:1989     C6 46 FD 00      MOV byte ptr [BP + -0x3],0x0
  1000:198d     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:1990     E8 A4 00         CALL 0x1000:1a37
  1000:1993     89 4E 08         MOV word ptr [BP + 0x8],CX
  1000:1996     F6 46 FE FF      TEST byte ptr [BP + -0x2],0xff
  1000:199a     75 07            JNZ 0x1000:19a3
  1000:199c     F7 46 06 02 00   TEST word ptr [BP + 0x6],0x2
  1000:19a1     75 03            JNZ 0x1000:19a6

LAB_1000_19a3:
  1000:19a3     80 E1 FE         AND CL,0xfe

LAB_1000_19a6:
  1000:19a6     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:19a9     B4 3C            MOV AH,0x3c
  1000:19ab     CD 21            INT 0x21
  1000:19ad     73 03            JNC 0x1000:19b2

LAB_1000_19af:
  1000:19af     E9 0D 08         JMP 0x1000:21bf

LAB_1000_19b2:
  1000:19b2     93               XCHG AX,BX
  1000:19b3     F6 46 FE FF      TEST byte ptr [BP + -0x2],0xff
  1000:19b7     75 07            JNZ 0x1000:19c0
  1000:19b9     F7 46 06 02 00   TEST word ptr [BP + 0x6],0x2
  1000:19be     75 30            JNZ 0x1000:19f0

LAB_1000_19c0:
  1000:19c0     B4 3E            MOV AH,0x3e
  1000:19c2     CD 21            INT 0x21
  1000:19c4     8A 46 06         MOV AL,byte ptr [BP + 0x6]
  1000:19c7     24 03            AND AL,0x3
  1000:19c9     0A 46 FE         OR AL,byte ptr [BP + -0x2]
  1000:19cc     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:19cf     B4 3D            MOV AH,0x3d
  1000:19d1     CD 21            INT 0x21
  1000:19d3     72 DA            JC 0x1000:19af
  1000:19d5     93               XCHG AX,BX
  1000:19d6     F6 46 FD 01      TEST byte ptr [BP + -0x3],0x1
  1000:19da     75 14            JNZ 0x1000:19f0
  1000:19dc     F7 46 08 01 00   TEST word ptr [BP + 0x8],0x1
  1000:19e1     74 0D            JZ 0x1000:19f0
  1000:19e3     80 C9 01         OR CL,0x1
  1000:19e6     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:19e9     B8 01 43         MOV AX,0x4301
  1000:19ec     CD 21            INT 0x21
  1000:19ee     72 BF            JC 0x1000:19af

LAB_1000_19f0:
  1000:19f0     F6 46 FC 40      TEST byte ptr [BP + -0x4],0x40
  1000:19f4     75 3D            JNZ 0x1000:1a33
  1000:19f6     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:19f9     B8 00 43         MOV AX,0x4300
  1000:19fc     CD 21            INT 0x21
  1000:19fe     8B C1            MOV AX,CX
  1000:1a00     32 C9            XOR CL,CL
  1000:1a02     25 01 00         AND AX,0x1
  1000:1a05     74 02            JZ 0x1000:1a09
  1000:1a07     B1 10            MOV CL,0x10

LAB_1000_1a09:
  1000:1a09     F7 46 06 08 00   TEST word ptr [BP + 0x6],0x8
  1000:1a0e     74 03            JZ 0x1000:1a13
  1000:1a10     80 C9 20         OR CL,0x20

LAB_1000_1a13:
  1000:1a13     3B 1E CF 06      CMP BX,word ptr [0x6cf]
  1000:1a17     72 0A            JC 0x1000:1a23
  1000:1a19     B4 3E            MOV AH,0x3e
  1000:1a1b     CD 21            INT 0x21
  1000:1a1d     B8 00 18         MOV AX,0x1800
  1000:1a20     E9 C7 FE         JMP 0x1000:18ea

LAB_1000_1a23:
  1000:1a23     0A 4E FC         OR CL,byte ptr [BP + -0x4]
  1000:1a26     80 C9 01         OR CL,0x1
  1000:1a29     88 8F D1 06      MOV byte ptr [BX + 0x6d1],CL
  1000:1a2d     8B C3            MOV AX,BX
  1000:1a2f     8B E5            MOV SP,BP
  1000:1a31     5D               POP BP
  1000:1a32     C3               RET

LAB_1000_1a33:
  1000:1a33     32 C9            XOR CL,CL
  1000:1a35     EB DC            JMP 0x1000:1a13

FUN_1000_1a37:
  1000:1a37     A1 C4 06         MOV AX,[0x6c4]
  1000:1a3a     F7 D0            NOT AX
  1000:1a3c     23 C1            AND AX,CX
  1000:1a3e     33 C9            XOR CX,CX
  1000:1a40     A8 80            TEST AL,0x80
  1000:1a42     75 03            JNZ 0x1000:1a47
  1000:1a44     80 C9 01         OR CL,0x1

LAB_1000_1a47:
  1000:1a47     C3               RET

FUN_1000_1a48:
  1000:1a48     55               PUSH BP
  1000:1a49     8B EC            MOV BP,SP
  1000:1a4b     83 EC 02         SUB SP,0x2
  1000:1a4e     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1a51     3B 1E CF 06      CMP BX,word ptr [0x6cf]
  1000:1a55     72 06            JC 0x1000:1a5d
  1000:1a57     F9               STC
  1000:1a58     B8 00 09         MOV AX,0x900
  1000:1a5b     EB 68            JMP 0x1000:1ac5

LAB_1000_1a5d:
  1000:1a5d     33 C0            XOR AX,AX
  1000:1a5f     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:1a62     E3 61            JCXZ 0x1000:1ac5
  1000:1a64     F6 87 D1 06 02   TEST byte ptr [BX + 0x6d1],0x2
  1000:1a69     75 5A            JNZ 0x1000:1ac5
  1000:1a6b     81 3E CE 0B D6 D6   CMP word ptr [0xbce],0xd6d6
  1000:1a71     75 04            JNZ 0x1000:1a77
  1000:1a73     FF 16 D0 0B      CALL word ptr [0xbd0]

LAB_1000_1a77:
  1000:1a77     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:1a7a     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:1a7d     B4 3F            MOV AH,0x3f
  1000:1a7f     CD 21            INT 0x21
  1000:1a81     73 04            JNC 0x1000:1a87
  1000:1a83     B4 09            MOV AH,0x9
  1000:1a85     EB 3E            JMP 0x1000:1ac5

LAB_1000_1a87:
  1000:1a87     F6 87 D1 06 80   TEST byte ptr [BX + 0x6d1],0x80
  1000:1a8c     74 37            JZ 0x1000:1ac5
  1000:1a8e     80 A7 D1 06 FB   AND byte ptr [BX + 0x6d1],0xfb
  1000:1a93     56               PUSH SI
  1000:1a94     57               PUSH DI
  1000:1a95     FC               CLD
  1000:1a96     8B F2            MOV SI,DX
  1000:1a98     8B FA            MOV DI,DX
  1000:1a9a     8B C8            MOV CX,AX
  1000:1a9c     E3 25            JCXZ 0x1000:1ac3
  1000:1a9e     B4 0D            MOV AH,0xd
  1000:1aa0     80 3C 0A         CMP byte ptr [SI],0xa
  1000:1aa3     75 05            JNZ 0x1000:1aaa
  1000:1aa5     80 8F D1 06 04   OR byte ptr [BX + 0x6d1],0x4

LAB_1000_1aaa:
  1000:1aaa     AC               LODSB SI
  1000:1aab     3A C4            CMP AL,AH
  1000:1aad     74 19            JZ 0x1000:1ac8
  1000:1aaf     3C 1A            CMP AL,0x1a
  1000:1ab1     75 07            JNZ 0x1000:1aba
  1000:1ab3     80 8F D1 06 02   OR byte ptr [BX + 0x6d1],0x2
  1000:1ab8     EB 05            JMP 0x1000:1abf

LAB_1000_1aba:
  1000:1aba     88 05            MOV byte ptr [DI],AL
  1000:1abc     47               INC DI

LAB_1000_1abd:
  1000:1abd     E2 EB            LOOP 0x1000:1aaa

LAB_1000_1abf:
  1000:1abf     8B C7            MOV AX,DI
  1000:1ac1     2B C2            SUB AX,DX

LAB_1000_1ac3:
  1000:1ac3     5F               POP DI
  1000:1ac4     5E               POP SI

LAB_1000_1ac5:
  1000:1ac5     E9 F7 06         JMP 0x1000:21bf

LAB_1000_1ac8:
  1000:1ac8     83 F9 01         CMP CX,0x1
  1000:1acb     74 07            JZ 0x1000:1ad4
  1000:1acd     80 3C 0A         CMP byte ptr [SI],0xa
  1000:1ad0     74 EB            JZ 0x1000:1abd
  1000:1ad2     EB E6            JMP 0x1000:1aba

LAB_1000_1ad4:
  1000:1ad4     F6 87 D1 06 40   TEST byte ptr [BX + 0x6d1],0x40
  1000:1ad9     74 18            JZ 0x1000:1af3
  1000:1adb     B8 00 44         MOV AX,0x4400
  1000:1ade     CD 21            INT 0x21
  1000:1ae0     F7 C2 20 00      TEST DX,0x20
  1000:1ae4     75 09            JNZ 0x1000:1aef
  1000:1ae6     8D 56 FF         LEA DX,[BP + -0x1]
  1000:1ae9     B4 3F            MOV AH,0x3f
  1000:1aeb     CD 21            INT 0x21
  1000:1aed     72 D4            JC 0x1000:1ac3

LAB_1000_1aef:
  1000:1aef     B0 0A            MOV AL,0xa
  1000:1af1     EB 2C            JMP 0x1000:1b1f

LAB_1000_1af3:
  1000:1af3     C6 46 FF 00      MOV byte ptr [BP + -0x1],0x0
  1000:1af7     8D 56 FF         LEA DX,[BP + -0x1]
  1000:1afa     B4 3F            MOV AH,0x3f
  1000:1afc     CD 21            INT 0x21
  1000:1afe     72 C3            JC 0x1000:1ac3
  1000:1b00     0B C0            OR AX,AX
  1000:1b02     74 19            JZ 0x1000:1b1d
  1000:1b04     83 7E 08 01      CMP word ptr [BP + 0x8],0x1
  1000:1b08     74 1F            JZ 0x1000:1b29

LAB_1000_1b0a:
  1000:1b0a     B9 FF FF         MOV CX,0xffff
  1000:1b0d     8B D1            MOV DX,CX
  1000:1b0f     B8 01 42         MOV AX,0x4201
  1000:1b12     CD 21            INT 0x21
  1000:1b14     B9 01 00         MOV CX,0x1
  1000:1b17     80 7E FF 0A      CMP byte ptr [BP + -0x1],0xa
  1000:1b1b     74 07            JZ 0x1000:1b24

LAB_1000_1b1d:
  1000:1b1d     B0 0D            MOV AL,0xd

LAB_1000_1b1f:
  1000:1b1f     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:1b22     EB 96            JMP 0x1000:1aba

LAB_1000_1b24:
  1000:1b24     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:1b27     EB 94            JMP 0x1000:1abd

LAB_1000_1b29:
  1000:1b29     80 7E FF 0A      CMP byte ptr [BP + -0x1],0xa
  1000:1b2d     75 DB            JNZ 0x1000:1b0a
  1000:1b2f     EB BE            JMP 0x1000:1aef

FUN_1000_1b32:
  1000:1b32     55               PUSH BP
  1000:1b33     8B EC            MOV BP,SP
  1000:1b35     83 EC 08         SUB SP,0x8
  1000:1b38     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1b3b     3B 1E CF 06      CMP BX,word ptr [0x6cf]
  1000:1b3f     72 07            JC 0x1000:1b48
  1000:1b41     B8 00 09         MOV AX,0x900
  1000:1b44     F9               STC

LAB_1000_1b45:
  1000:1b45     E9 77 06         JMP 0x1000:21bf

LAB_1000_1b48:
  1000:1b48     81 3E CE 0B D6 D6   CMP word ptr [0xbce],0xd6d6
  1000:1b4e     75 04            JNZ 0x1000:1b54
  1000:1b50     FF 16 D0 0B      CALL word ptr [0xbd0]

LAB_1000_1b54:
  1000:1b54     F6 87 D1 06 20   TEST byte ptr [BX + 0x6d1],0x20
  1000:1b59     74 0B            JZ 0x1000:1b66
  1000:1b5b     B8 02 42         MOV AX,0x4202
  1000:1b5e     33 C9            XOR CX,CX
  1000:1b60     8B D1            MOV DX,CX
  1000:1b62     CD 21            INT 0x21
  1000:1b64     72 DF            JC 0x1000:1b45

LAB_1000_1b66:
  1000:1b66     F6 87 D1 06 80   TEST byte ptr [BX + 0x6d1],0x80
  1000:1b6b     74 6E            JZ 0x1000:1bdb
  1000:1b6d     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:1b70     1E               PUSH DS
  1000:1b71     07               POP ES
  1000:1b72     33 C0            XOR AX,AX
  1000:1b74     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:1b77     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:1b7a     FC               CLD
  1000:1b7b     57               PUSH DI
  1000:1b7c     56               PUSH SI
  1000:1b7d     8B FA            MOV DI,DX
  1000:1b7f     8B F2            MOV SI,DX
  1000:1b81     89 66 F8         MOV word ptr [BP + -0x8],SP
  1000:1b84     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:1b87     E3 38            JCXZ 0x1000:1bc1
  1000:1b89     B0 0A            MOV AL,0xa
  1000:1b8b     F2 AE            SCASB.REPNE ES:DI
  1000:1b8d     75 4A            JNZ 0x1000:1bd9
  1000:1b8f     E8 34 0C         CALL 0x1000:27c6
  1000:1b92     3D A8 00         CMP AX,0xa8
  1000:1b95     76 46            JBE 0x1000:1bdd
  1000:1b97     83 EC 02         SUB SP,0x2
  1000:1b9a     8B DC            MOV BX,SP
  1000:1b9c     BA 00 02         MOV DX,0x200
  1000:1b9f     3D 28 02         CMP AX,0x228
  1000:1ba2     73 03            JNC 0x1000:1ba7
  1000:1ba4     BA 80 00         MOV DX,0x80

LAB_1000_1ba7:
  1000:1ba7     2B E2            SUB SP,DX
  1000:1ba9     8B D4            MOV DX,SP
  1000:1bab     8B FA            MOV DI,DX
  1000:1bad     16               PUSH SS
  1000:1bae     07               POP ES
  1000:1baf     8B 4E 08         MOV CX,word ptr [BP + 0x8]

LAB_1000_1bb2:
  1000:1bb2     AC               LODSB SI
  1000:1bb3     3C 0A            CMP AL,0xa
  1000:1bb5     74 0C            JZ 0x1000:1bc3

LAB_1000_1bb7:
  1000:1bb7     3B FB            CMP DI,BX
  1000:1bb9     74 19            JZ 0x1000:1bd4

LAB_1000_1bbb:
  1000:1bbb     AA               STOSB ES:DI
  1000:1bbc     E2 F4            LOOP 0x1000:1bb2
  1000:1bbe     E8 22 00         CALL 0x1000:1be3

LAB_1000_1bc1:
  1000:1bc1     EB 6A            JMP 0x1000:1c2d

LAB_1000_1bc3:
  1000:1bc3     B0 0D            MOV AL,0xd
  1000:1bc5     3B FB            CMP DI,BX
  1000:1bc7     75 03            JNZ 0x1000:1bcc
  1000:1bc9     E8 17 00         CALL 0x1000:1be3

LAB_1000_1bcc:
  1000:1bcc     AA               STOSB ES:DI
  1000:1bcd     B0 0A            MOV AL,0xa
  1000:1bcf     FF 46 FC         INC word ptr [BP + -0x4]
  1000:1bd2     EB E3            JMP 0x1000:1bb7

LAB_1000_1bd4:
  1000:1bd4     E8 0C 00         CALL 0x1000:1be3
  1000:1bd7     EB E2            JMP 0x1000:1bbb

LAB_1000_1bd9:
  1000:1bd9     5E               POP SI
  1000:1bda     5F               POP DI

LAB_1000_1bdb:
  1000:1bdb     EB 5E            JMP 0x1000:1c3b

LAB_1000_1bdd:
  1000:1bdd     B8 FC FF         MOV AX,0xfffc
  1000:1be0     E8 71 FC         CALL 0x1000:1854

FUN_1000_1be3:
  1000:1be3     50               PUSH AX
  1000:1be4     53               PUSH BX
  1000:1be5     51               PUSH CX
  1000:1be6     8B CF            MOV CX,DI
  1000:1be8     2B CA            SUB CX,DX
  1000:1bea     E3 12            JCXZ 0x1000:1bfe
  1000:1bec     51               PUSH CX
  1000:1bed     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1bf0     B4 40            MOV AH,0x40
  1000:1bf2     CD 21            INT 0x21
  1000:1bf4     59               POP CX
  1000:1bf5     72 0D            JC 0x1000:1c04
  1000:1bf7     01 46 FE         ADD word ptr [BP + -0x2],AX
  1000:1bfa     3B C8            CMP CX,AX
  1000:1bfc     77 06            JA 0x1000:1c04

LAB_1000_1bfe:
  1000:1bfe     59               POP CX
  1000:1bff     5B               POP BX
  1000:1c00     58               POP AX
  1000:1c01     8B FA            MOV DI,DX
  1000:1c03     C3               RET

LAB_1000_1c04:
  1000:1c04     9F               LAHF
  1000:1c05     83 C4 08         ADD SP,0x8
  1000:1c08     83 7E FE 00      CMP word ptr [BP + -0x2],0x0
  1000:1c0c     75 1F            JNZ 0x1000:1c2d
  1000:1c0e     9E               SAHF
  1000:1c0f     73 04            JNC 0x1000:1c15
  1000:1c11     B4 09            MOV AH,0x9
  1000:1c13     EB 1E            JMP 0x1000:1c33

LAB_1000_1c15:
  1000:1c15     F6 87 D1 06 40   TEST byte ptr [BX + 0x6d1],0x40
  1000:1c1a     74 0B            JZ 0x1000:1c27
  1000:1c1c     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:1c1f     80 3F 1A         CMP byte ptr [BX],0x1a
  1000:1c22     75 03            JNZ 0x1000:1c27
  1000:1c24     F8               CLC
  1000:1c25     EB 0C            JMP 0x1000:1c33

LAB_1000_1c27:
  1000:1c27     F9               STC
  1000:1c28     B8 00 1C         MOV AX,0x1c00
  1000:1c2b     EB 06            JMP 0x1000:1c33

FUN_1000_1c2d:
  1000:1c2d     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:1c30     2B 46 FC         SUB AX,word ptr [BP + -0x4]

LAB_1000_1c33:
  1000:1c33     8B 66 F8         MOV SP,word ptr [BP + -0x8]
  1000:1c36     5E               POP SI
  1000:1c37     5F               POP DI

LAB_1000_1c38:
  1000:1c38     E9 84 05         JMP 0x1000:21bf

FUN_1000_1c3b:
  1000:1c3b     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:1c3e     0B C9            OR CX,CX
  1000:1c40     75 05            JNZ 0x1000:1c47
  1000:1c42     8B C1            MOV AX,CX
  1000:1c44     E9 78 05         JMP 0x1000:21bf

LAB_1000_1c47:
  1000:1c47     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:1c4a     B4 40            MOV AH,0x40
  1000:1c4c     CD 21            INT 0x21
  1000:1c4e     73 04            JNC 0x1000:1c54
  1000:1c50     B4 09            MOV AH,0x9
  1000:1c52     EB E4            JMP 0x1000:1c38

LAB_1000_1c54:
  1000:1c54     0B C0            OR AX,AX
  1000:1c56     75 E0            JNZ 0x1000:1c38
  1000:1c58     F6 87 D1 06 40   TEST byte ptr [BX + 0x6d1],0x40
  1000:1c5d     74 0A            JZ 0x1000:1c69
  1000:1c5f     8B DA            MOV BX,DX
  1000:1c61     80 3F 1A         CMP byte ptr [BX],0x1a
  1000:1c64     75 03            JNZ 0x1000:1c69
  1000:1c66     F8               CLC
  1000:1c67     EB CF            JMP 0x1000:1c38

LAB_1000_1c69:
  1000:1c69     F9               STC
  1000:1c6a     B8 00 1C         MOV AX,0x1c00
  1000:1c6d     EB C9            JMP 0x1000:1c38

thunk_FUN_1000_27f9:
  1000:1c70     E9 86 0B         JMP 0x1000:27f9

thunk_FUN_1000_27d8:
  1000:1c74     E9 61 0B         JMP 0x1000:27d8

FUN_1000_1c78:
  1000:1c78     55               PUSH BP
  1000:1c79     8B EC            MOV BP,SP
  1000:1c7b     8B D7            MOV DX,DI
  1000:1c7d     8C D8            MOV AX,DS
  1000:1c7f     8E C0            MOV ES,AX
  1000:1c81     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:1c84     33 C0            XOR AX,AX
  1000:1c86     B9 FF FF         MOV CX,0xffff
  1000:1c89     F2 AE            SCASB.REPNE ES:DI
  1000:1c8b     F7 D1            NOT CX
  1000:1c8d     49               DEC CX
  1000:1c8e     91               XCHG AX,CX
  1000:1c8f     8B FA            MOV DI,DX
  1000:1c91     5D               POP BP
  1000:1c92     C3               RET

FUN_1000_1ca0:
  1000:1ca0     55               PUSH BP
  1000:1ca1     8B EC            MOV BP,SP
  1000:1ca3     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1ca6     F6 87 97 07 01   TEST byte ptr [BX + 0x797],0x1
  1000:1cab     74 05            JZ 0x1000:1cb2
  1000:1cad     8D 47 20         LEA AX,[BX + 0x20]
  1000:1cb0     EB 02            JMP 0x1000:1cb4

LAB_1000_1cb2:
  1000:1cb2     8B C3            MOV AX,BX

LAB_1000_1cb4:
  1000:1cb4     5D               POP BP
  1000:1cb5     C3               RET

FUN_1000_1cb6:
  1000:1cb6     55               PUSH BP
  1000:1cb7     8B EC            MOV BP,SP
  1000:1cb9     56               PUSH SI
  1000:1cba     57               PUSH DI
  1000:1cbb     83 EC 0A         SUB SP,0xa
  1000:1cbe     C6 46 F6 CD      MOV byte ptr [BP + -0xa],0xcd
  1000:1cc2     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:1cc5     88 46 F7         MOV byte ptr [BP + -0x9],AL
  1000:1cc8     3C 25            CMP AL,0x25
  1000:1cca     74 0A            JZ 0x1000:1cd6
  1000:1ccc     3C 26            CMP AL,0x26
  1000:1cce     74 06            JZ 0x1000:1cd6
  1000:1cd0     C6 46 F8 CB      MOV byte ptr [BP + -0x8],0xcb
  1000:1cd4     EB 0C            JMP 0x1000:1ce2

LAB_1000_1cd6:
  1000:1cd6     C6 46 FA CB      MOV byte ptr [BP + -0x6],0xcb
  1000:1cda     C6 46 F9 44      MOV byte ptr [BP + -0x7],0x44
  1000:1cde     C6 46 F8 44      MOV byte ptr [BP + -0x8],0x44

LAB_1000_1ce2:
  1000:1ce2     8C 56 F4         MOV word ptr [BP + -0xc],SS
  1000:1ce5     8D 46 F6         LEA AX,[BP + -0xa]
  1000:1ce8     89 46 F2         MOV word ptr [BP + -0xe],AX
  1000:1ceb     8B 7E 06         MOV DI,word ptr [BP + 0x6]
  1000:1cee     8B 05            MOV AX,word ptr [DI]
  1000:1cf0     8B 5D 02         MOV BX,word ptr [DI + 0x2]
  1000:1cf3     8B 4D 04         MOV CX,word ptr [DI + 0x4]
  1000:1cf6     8B 55 06         MOV DX,word ptr [DI + 0x6]
  1000:1cf9     8B 75 08         MOV SI,word ptr [DI + 0x8]
  1000:1cfc     8B 7D 0A         MOV DI,word ptr [DI + 0xa]
  1000:1cff     55               PUSH BP
  1000:1d00     FF 5E F2         CALLF [BP + -0xe]
  1000:1d03     5D               POP BP
  1000:1d04     FC               CLD
  1000:1d05     57               PUSH DI
  1000:1d06     8B 7E 08         MOV DI,word ptr [BP + 0x8]
  1000:1d09     89 05            MOV word ptr [DI],AX
  1000:1d0b     89 5D 02         MOV word ptr [DI + 0x2],BX
  1000:1d0e     89 4D 04         MOV word ptr [DI + 0x4],CX
  1000:1d11     89 55 06         MOV word ptr [DI + 0x6],DX
  1000:1d14     89 75 08         MOV word ptr [DI + 0x8],SI
  1000:1d17     8F 45 0A         POP word ptr [DI + 0xa]
  1000:1d1a     72 04            JC 0x1000:1d20
  1000:1d1c     33 F6            XOR SI,SI
  1000:1d1e     EB 08            JMP 0x1000:1d28

LAB_1000_1d20:
  1000:1d20     E8 A9 04         CALL 0x1000:21cc
  1000:1d23     BE 01 00         MOV SI,0x1
  1000:1d26     8B 05            MOV AX,word ptr [DI]

LAB_1000_1d28:
  1000:1d28     89 75 0C         MOV word ptr [DI + 0xc],SI
  1000:1d2b     83 C4 0A         ADD SP,0xa
  1000:1d2e     5F               POP DI
  1000:1d2f     5E               POP SI
  1000:1d30     8B E5            MOV SP,BP
  1000:1d32     5D               POP BP
  1000:1d33     C3               RET

FUN_1000_1d34:
  1000:1d34     55               PUSH BP
  1000:1d35     8B EC            MOV BP,SP
  1000:1d37     83 EC 02         SUB SP,0x2
  1000:1d3a     57               PUSH DI
  1000:1d3b     56               PUSH SI
  1000:1d3c     C6 06 F2 0C 42   MOV byte ptr [0xcf2],0x42
  1000:1d41     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:1d44     A3 F0 0C         MOV [0xcf0],AX
  1000:1d47     BE EC 0C         MOV SI,0xcec
  1000:1d4a     89 04            MOV word ptr [SI],AX
  1000:1d4c     C7 06 EE 0C FF 7F   MOV word ptr [0xcee],0x7fff
  1000:1d52     8D 46 08         LEA AX,[BP + 0x8]
  1000:1d55     50               PUSH AX
  1000:1d56     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:1d59     8B C6            MOV AX,SI
  1000:1d5b     50               PUSH AX
  1000:1d5c     E8 91 05         CALL 0x1000:22f0
  1000:1d5f     83 C4 06         ADD SP,0x6
  1000:1d62     8B F8            MOV DI,AX
  1000:1d64     FF 0E EE 0C      DEC word ptr [0xcee]
  1000:1d68     78 0E            JS 0x1000:1d78
  1000:1d6a     8B 1E EC 0C      MOV BX,word ptr [0xcec]
  1000:1d6e     FF 06 EC 0C      INC word ptr [0xcec]
  1000:1d72     C6 07 00         MOV byte ptr [BX],0x0
  1000:1d75     EB 0B            JMP 0x1000:1d82

LAB_1000_1d78:
  1000:1d78     56               PUSH SI
  1000:1d79     2B C0            SUB AX,AX
  1000:1d7b     50               PUSH AX
  1000:1d7c     E8 81 04         CALL 0x1000:2200
  1000:1d7f     83 C4 04         ADD SP,0x4

LAB_1000_1d82:
  1000:1d82     8B C7            MOV AX,DI
  1000:1d84     5E               POP SI
  1000:1d85     5F               POP DI
  1000:1d86     8B E5            MOV SP,BP
  1000:1d88     5D               POP BP
  1000:1d89     C3               RET

FUN_1000_1d8a:
  1000:1d8a     55               PUSH BP
  1000:1d8b     8B EC            MOV BP,SP
  1000:1d8d     57               PUSH DI
  1000:1d8e     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:1d91     1E               PUSH DS
  1000:1d92     07               POP ES
  1000:1d93     8B DF            MOV BX,DI
  1000:1d95     33 C0            XOR AX,AX
  1000:1d97     B9 FF FF         MOV CX,0xffff
  1000:1d9a     F2 AE            SCASB.REPNE ES:DI
  1000:1d9c     41               INC CX
  1000:1d9d     F7 D9            NEG CX
  1000:1d9f     8A 46 06         MOV AL,byte ptr [BP + 0x6]
  1000:1da2     8B FB            MOV DI,BX
  1000:1da4     F2 AE            SCASB.REPNE ES:DI
  1000:1da6     4F               DEC DI
  1000:1da7     38 05            CMP byte ptr [DI],AL
  1000:1da9     74 02            JZ 0x1000:1dad
  1000:1dab     33 FF            XOR DI,DI

LAB_1000_1dad:
  1000:1dad     8B C7            MOV AX,DI
  1000:1daf     5F               POP DI
  1000:1db0     8B E5            MOV SP,BP
  1000:1db2     5D               POP BP
  1000:1db3     C3               RET

FUN_1000_1db4:
  1000:1db4     55               PUSH BP
  1000:1db5     8B EC            MOV BP,SP
  1000:1db7     57               PUSH DI
  1000:1db8     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:1dbb     57               PUSH DI
  1000:1dbc     E8 B9 FE         CALL 0x1000:1c78
  1000:1dbf     40               INC AX
  1000:1dc0     50               PUSH AX
  1000:1dc1     E8 AC FE         CALL 0x1000:1c70
  1000:1dc4     5B               POP BX
  1000:1dc5     0B C0            OR AX,AX
  1000:1dc7     75 03            JNZ 0x1000:1dcc
  1000:1dc9     5B               POP BX
  1000:1dca     EB 07            JMP 0x1000:1dd3

LAB_1000_1dcc:
  1000:1dcc     50               PUSH AX
  1000:1dcd     E8 92 0A         CALL 0x1000:2862
  1000:1dd0     83 C4 04         ADD SP,0x4

LAB_1000_1dd3:
  1000:1dd3     5F               POP DI
  1000:1dd4     5D               POP BP
  1000:1dd5     C3               RET

FUN_1000_1dd6:
  1000:1dd6     55               PUSH BP
  1000:1dd7     8B EC            MOV BP,SP
  1000:1dd9     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:1ddc     8B D3            MOV DX,BX
  1000:1dde     EB 0B            JMP 0x1000:1deb

LAB_1000_1de0:
  1000:1de0     2C 41            SUB AL,0x41
  1000:1de2     3C 1A            CMP AL,0x1a
  1000:1de4     73 04            JNC 0x1000:1dea
  1000:1de6     04 61            ADD AL,0x61
  1000:1de8     88 07            MOV byte ptr [BX],AL

LAB_1000_1dea:
  1000:1dea     43               INC BX

LAB_1000_1deb:
  1000:1deb     8A 07            MOV AL,byte ptr [BX]
  1000:1ded     0A C0            OR AL,AL
  1000:1def     75 EF            JNZ 0x1000:1de0
  1000:1df1     92               XCHG AX,DX
  1000:1df2     5D               POP BP
  1000:1df3     C3               RET

FUN_1000_1df4:
  1000:1df4     55               PUSH BP
  1000:1df5     8B EC            MOV BP,SP
  1000:1df7     83 EC 02         SUB SP,0x2
  1000:1dfa     56               PUSH SI
  1000:1dfb     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:1dfe     C6 06 F4 0C 00   MOV byte ptr [0xcf4],0x0
  1000:1e03     0B F6            OR SI,SI
  1000:1e05     74 1E            JZ 0x1000:1e25
  1000:1e07     80 3C 00         CMP byte ptr [SI],0x0
  1000:1e0a     74 19            JZ 0x1000:1e25
  1000:1e0c     56               PUSH SI
  1000:1e0d     B8 F4 0C         MOV AX,0xcf4
  1000:1e10     50               PUSH AX
  1000:1e11     E8 0E 0A         CALL 0x1000:2822
  1000:1e14     83 C4 04         ADD SP,0x4
  1000:1e17     B8 FC 06         MOV AX,0x6fc
  1000:1e1a     50               PUSH AX
  1000:1e1b     B8 F4 0C         MOV AX,0xcf4
  1000:1e1e     50               PUSH AX
  1000:1e1f     E8 00 0A         CALL 0x1000:2822
  1000:1e22     83 C4 04         ADD SP,0x4

LAB_1000_1e25:
  1000:1e25     83 3E C2 06 00   CMP word ptr [0x6c2],0x0
  1000:1e2a     7C 09            JL 0x1000:1e35
  1000:1e2c     A1 C2 06         MOV AX,[0x6c2]
  1000:1e2f     39 06 18 0A      CMP word ptr [0xa18],AX
  1000:1e33     7F 05            JG 0x1000:1e3a

LAB_1000_1e35:
  1000:1e35     A1 18 0A         MOV AX,[0xa18]
  1000:1e38     EB 03            JMP 0x1000:1e3d

LAB_1000_1e3a:
  1000:1e3a     A1 C2 06         MOV AX,[0x6c2]

LAB_1000_1e3d:
  1000:1e3d     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:1e40     8B 5E FE         MOV BX,word ptr [BP + -0x2]
  1000:1e43     D1 E3            SHL BX,0x1
  1000:1e45     FF B7 CC 09      PUSH word ptr [BX + 0x9cc]
  1000:1e49     B8 F4 0C         MOV AX,0xcf4
  1000:1e4c     50               PUSH AX
  1000:1e4d     E8 D2 09         CALL 0x1000:2822
  1000:1e50     83 C4 04         ADD SP,0x4
  1000:1e53     B8 FF 06         MOV AX,0x6ff
  1000:1e56     50               PUSH AX
  1000:1e57     B8 F4 0C         MOV AX,0xcf4
  1000:1e5a     50               PUSH AX
  1000:1e5b     E8 C4 09         CALL 0x1000:2822
  1000:1e5e     83 C4 04         ADD SP,0x4
  1000:1e61     5E               POP SI
  1000:1e62     8B E5            MOV SP,BP
  1000:1e64     5D               POP BP
  1000:1e65     C3               RET

FUN_1000_1e66:
  1000:1e66     55               PUSH BP
  1000:1e67     8B EC            MOV BP,SP
  1000:1e69     83 EC 0C         SUB SP,0xc
  1000:1e6c     B8 02 07         MOV AX,0x702
  1000:1e6f     50               PUSH AX
  1000:1e70     E8 21 0A         CALL 0x1000:2894
  1000:1e73     83 C4 02         ADD SP,0x2
  1000:1e76     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:1e79     83 7E 04 00      CMP word ptr [BP + 0x4],0x0
  1000:1e7d     75 19            JNZ 0x1000:1e98
  1000:1e7f     2B C0            SUB AX,AX
  1000:1e81     50               PUSH AX
  1000:1e82     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:1e85     E8 4A 0D         CALL 0x1000:2bd2
  1000:1e88     83 C4 04         ADD SP,0x4
  1000:1e8b     0B C0            OR AX,AX
  1000:1e8d     75 05            JNZ 0x1000:1e94
  1000:1e8f     B8 01 00         MOV AX,0x1
  1000:1e92     EB 5D            JMP 0x1000:1ef1

LAB_1000_1e94:
  1000:1e94     2B C0            SUB AX,AX
  1000:1e96     EB 59            JMP 0x1000:1ef1

LAB_1000_1e98:
  1000:1e98     C7 46 FA 0A 07   MOV word ptr [BP + -0x6],0x70a
  1000:1e9d     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:1ea0     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:1ea3     C7 46 FE 00 00   MOV word ptr [BP + -0x2],0x0
  1000:1ea8     83 7E F8 00      CMP word ptr [BP + -0x8],0x0
  1000:1eac     74 2E            JZ 0x1000:1edc
  1000:1eae     FF 36 E9 06      PUSH word ptr [0x6e9]
  1000:1eb2     8D 46 F8         LEA AX,[BP + -0x8]
  1000:1eb5     50               PUSH AX
  1000:1eb6     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:1eb9     2B C9            SUB CX,CX
  1000:1ebb     51               PUSH CX
  1000:1ebc     E8 AF 0A         CALL 0x1000:296e
  1000:1ebf     83 C4 08         ADD SP,0x8
  1000:1ec2     89 46 F6         MOV word ptr [BP + -0xa],AX
  1000:1ec5     40               INC AX
  1000:1ec6     75 0E            JNZ 0x1000:1ed6
  1000:1ec8     83 3E C2 06 02   CMP word ptr [0x6c2],0x2
  1000:1ecd     74 0D            JZ 0x1000:1edc
  1000:1ecf     83 3E C2 06 0D   CMP word ptr [0x6c2],0xd
  1000:1ed4     74 06            JZ 0x1000:1edc

LAB_1000_1ed6:
  1000:1ed6     8B 46 F6         MOV AX,word ptr [BP + -0xa]
  1000:1ed9     EB 16            JMP 0x1000:1ef1

LAB_1000_1edc:
  1000:1edc     FF 36 E9 06      PUSH word ptr [0x6e9]
  1000:1ee0     8D 46 F8         LEA AX,[BP + -0x8]
  1000:1ee3     50               PUSH AX
  1000:1ee4     B9 0D 07         MOV CX,0x70d
  1000:1ee7     89 4E F8         MOV word ptr [BP + -0x8],CX
  1000:1eea     51               PUSH CX
  1000:1eeb     2B C0            SUB AX,AX
  1000:1eed     50               PUSH AX
  1000:1eee     E8 9F 0B         CALL 0x1000:2a90

LAB_1000_1ef1:
  1000:1ef1     8B E5            MOV SP,BP
  1000:1ef3     5D               POP BP
  1000:1ef4     C3               RET

FUN_1000_1ef6:
  1000:1ef6     55               PUSH BP
  1000:1ef7     8B EC            MOV BP,SP
  1000:1ef9     B8 FC 00         MOV AX,0xfc
  1000:1efc     50               PUSH AX
  1000:1efd     E8 75 02         CALL 0x1000:2175
  1000:1f00     83 3E 1A 07 00   CMP word ptr [0x71a],0x0
  1000:1f05     74 04            JZ 0x1000:1f0b
  1000:1f07     FF 16 1A 07      CALL word ptr [0x71a]

LAB_1000_1f0b:
  1000:1f0b     B8 FF 00         MOV AX,0xff
  1000:1f0e     50               PUSH AX
  1000:1f0f     E8 63 02         CALL 0x1000:2175
  1000:1f12     8B E5            MOV SP,BP
  1000:1f14     5D               POP BP
  1000:1f15     C3               RET

FUN_1000_1f16:
  1000:1f16     B8 02 00         MOV AX,0x2
  1000:1f19     E9 78 F7         JMP 0x1000:1694

FUN_1000_1f1c:
  1000:1f1c     56               PUSH SI
  1000:1f1d     33 F6            XOR SI,SI
  1000:1f1f     B9 42 00         MOV CX,0x42
  1000:1f22     32 E4            XOR AH,AH
  1000:1f24     FC               CLD

LAB_1000_1f25:
  1000:1f25     AC               LODSB SI
  1000:1f26     32 E0            XOR AH,AL
  1000:1f28     E2 FB            LOOP 0x1000:1f25
  1000:1f2a     80 F4 55         XOR AH,0x55
  1000:1f2d     74 0D            JZ 0x1000:1f3c
  1000:1f2f     E8 C4 FF         CALL 0x1000:1ef6
  1000:1f32     B8 01 00         MOV AX,0x1
  1000:1f35     50               PUSH AX
  1000:1f36     E8 3C 02         CALL 0x1000:2175
  1000:1f39     B8 01 00         MOV AX,0x1

LAB_1000_1f3c:
  1000:1f3c     5E               POP SI
  1000:1f3d     C3               RET

FUN_1000_1f3e:
  1000:1f3e     8F 06 1C 07      POP word ptr [0x71c]
  1000:1f42     B4 30            MOV AH,0x30
  1000:1f44     CD 21            INT 0x21
  1000:1f46     A3 CA 06         MOV [0x6ca],AX
  1000:1f49     BA 01 00         MOV DX,0x1
  1000:1f4c     3C 02            CMP AL,0x2
  1000:1f4e     74 29            JZ 0x1000:1f79
  1000:1f50     8E 06 C8 06      MOV ES,word ptr [0x6c8]
  1000:1f54     26 8E 06 2C 00   MOV ES,word ptr ES:[0x2c]
  1000:1f59     8C 06 ED 06      MOV word ptr [0x6ed],ES
  1000:1f5d     33 C0            XOR AX,AX
  1000:1f5f     99               CWD
  1000:1f60     B9 00 80         MOV CX,0x8000
  1000:1f63     33 FF            XOR DI,DI

LAB_1000_1f65:
  1000:1f65     F2 AE            SCASB.REPNE ES:DI
  1000:1f67     AE               SCASB ES:DI
  1000:1f68     75 FB            JNZ 0x1000:1f65
  1000:1f6a     47               INC DI
  1000:1f6b     47               INC DI
  1000:1f6c     89 3E EB 06      MOV word ptr [0x6eb],DI
  1000:1f70     B9 FF FF         MOV CX,0xffff
  1000:1f73     F2 AE            SCASB.REPNE ES:DI
  1000:1f75     F7 D1            NOT CX
  1000:1f77     8B D1            MOV DX,CX

LAB_1000_1f79:
  1000:1f79     BF 01 00         MOV DI,0x1
  1000:1f7c     BE 81 00         MOV SI,0x81
  1000:1f7f     8E 1E C8 06      MOV DS,word ptr [0x6c8]

LAB_1000_1f83:
  1000:1f83     AC               LODSB SI
  1000:1f84     3C 20            CMP AL,0x20
  1000:1f86     74 FB            JZ 0x1000:1f83
  1000:1f88     3C 09            CMP AL,0x9
  1000:1f8a     74 F7            JZ 0x1000:1f83
  1000:1f8c     3C 0D            CMP AL,0xd
  1000:1f8e     74 6F            JZ 0x1000:1fff
  1000:1f90     0A C0            OR AL,AL
  1000:1f92     74 6B            JZ 0x1000:1fff
  1000:1f94     47               INC DI

LAB_1000_1f95:
  1000:1f95     4E               DEC SI

LAB_1000_1f96:
  1000:1f96     AC               LODSB SI
  1000:1f97     3C 20            CMP AL,0x20
  1000:1f99     74 E8            JZ 0x1000:1f83
  1000:1f9b     3C 09            CMP AL,0x9
  1000:1f9d     74 E4            JZ 0x1000:1f83
  1000:1f9f     3C 0D            CMP AL,0xd
  1000:1fa1     74 5C            JZ 0x1000:1fff
  1000:1fa3     0A C0            OR AL,AL
  1000:1fa5     74 58            JZ 0x1000:1fff
  1000:1fa7     3C 22            CMP AL,0x22
  1000:1fa9     74 24            JZ 0x1000:1fcf
  1000:1fab     3C 5C            CMP AL,0x5c
  1000:1fad     74 03            JZ 0x1000:1fb2
  1000:1faf     42               INC DX
  1000:1fb0     EB E4            JMP 0x1000:1f96

LAB_1000_1fb2:
  1000:1fb2     33 C9            XOR CX,CX

LAB_1000_1fb4:
  1000:1fb4     41               INC CX
  1000:1fb5     AC               LODSB SI
  1000:1fb6     3C 5C            CMP AL,0x5c
  1000:1fb8     74 FA            JZ 0x1000:1fb4
  1000:1fba     3C 22            CMP AL,0x22
  1000:1fbc     74 04            JZ 0x1000:1fc2
  1000:1fbe     03 D1            ADD DX,CX
  1000:1fc0     EB D3            JMP 0x1000:1f95

LAB_1000_1fc2:
  1000:1fc2     8B C1            MOV AX,CX
  1000:1fc4     D1 E9            SHR CX,0x1
  1000:1fc6     13 D1            ADC DX,CX
  1000:1fc8     A8 01            TEST AL,0x1
  1000:1fca     75 CA            JNZ 0x1000:1f96
  1000:1fcc     EB 01            JMP 0x1000:1fcf

LAB_1000_1fce:
  1000:1fce     4E               DEC SI

LAB_1000_1fcf:
  1000:1fcf     AC               LODSB SI
  1000:1fd0     3C 0D            CMP AL,0xd
  1000:1fd2     74 2B            JZ 0x1000:1fff
  1000:1fd4     0A C0            OR AL,AL
  1000:1fd6     74 27            JZ 0x1000:1fff
  1000:1fd8     3C 22            CMP AL,0x22
  1000:1fda     74 BA            JZ 0x1000:1f96
  1000:1fdc     3C 5C            CMP AL,0x5c
  1000:1fde     74 03            JZ 0x1000:1fe3
  1000:1fe0     42               INC DX
  1000:1fe1     EB EC            JMP 0x1000:1fcf

LAB_1000_1fe3:
  1000:1fe3     33 C9            XOR CX,CX

LAB_1000_1fe5:
  1000:1fe5     41               INC CX
  1000:1fe6     AC               LODSB SI
  1000:1fe7     3C 5C            CMP AL,0x5c
  1000:1fe9     74 FA            JZ 0x1000:1fe5
  1000:1feb     3C 22            CMP AL,0x22
  1000:1fed     74 04            JZ 0x1000:1ff3
  1000:1fef     03 D1            ADD DX,CX
  1000:1ff1     EB DB            JMP 0x1000:1fce

LAB_1000_1ff3:
  1000:1ff3     8B C1            MOV AX,CX
  1000:1ff5     D1 E9            SHR CX,0x1
  1000:1ff7     13 D1            ADC DX,CX
  1000:1ff9     A8 01            TEST AL,0x1
  1000:1ffb     75 D2            JNZ 0x1000:1fcf
  1000:1ffd     EB 97            JMP 0x1000:1f96

LAB_1000_1fff:
  1000:1fff     16               PUSH SS
  1000:2000     1F               POP DS
  1000:2001     89 3E E5 06      MOV word ptr [0x6e5],DI
  1000:2005     03 D7            ADD DX,DI
  1000:2007     47               INC DI
  1000:2008     D1 E7            SHL DI,0x1
  1000:200a     03 D7            ADD DX,DI
  1000:200c     42               INC DX
  1000:200d     80 E2 FE         AND DL,0xfe
  1000:2010     2B E2            SUB SP,DX
  1000:2012     8B C4            MOV AX,SP
  1000:2014     A3 E7 06         MOV [0x6e7],AX
  1000:2017     8B D8            MOV BX,AX
  1000:2019     03 FB            ADD DI,BX
  1000:201b     16               PUSH SS
  1000:201c     07               POP ES
  1000:201d     36 89 3F         MOV word ptr SS:[BX],DI
  1000:2020     43               INC BX
  1000:2021     43               INC BX
  1000:2022     C5 36 EB 06      LDS SI,[0x6eb]

LAB_1000_2026:
  1000:2026     AC               LODSB SI
  1000:2027     AA               STOSB ES:DI
  1000:2028     0A C0            OR AL,AL
  1000:202a     75 FA            JNZ 0x1000:2026
  1000:202c     36 8E 1E C8 06   MOV DS,word ptr SS:[0x6c8]
  1000:2031     BE 81 00         MOV SI,0x81
  1000:2034     EB 03            JMP 0x1000:2039

LAB_1000_2036:
  1000:2036     33 C0            XOR AX,AX
  1000:2038     AA               STOSB ES:DI

LAB_1000_2039:
  1000:2039     AC               LODSB SI
  1000:203a     3C 20            CMP AL,0x20
  1000:203c     74 FB            JZ 0x1000:2039
  1000:203e     3C 09            CMP AL,0x9
  1000:2040     74 F7            JZ 0x1000:2039
  1000:2042     3C 0D            CMP AL,0xd
  1000:2044     74 7C            JZ 0x1000:20c2
  1000:2046     0A C0            OR AL,AL
  1000:2048     74 78            JZ 0x1000:20c2
  1000:204a     36 89 3F         MOV word ptr SS:[BX],DI
  1000:204d     43               INC BX
  1000:204e     43               INC BX

LAB_1000_204f:
  1000:204f     4E               DEC SI

LAB_1000_2050:
  1000:2050     AC               LODSB SI
  1000:2051     3C 20            CMP AL,0x20
  1000:2053     74 E1            JZ 0x1000:2036
  1000:2055     3C 09            CMP AL,0x9
  1000:2057     74 DD            JZ 0x1000:2036
  1000:2059     3C 0D            CMP AL,0xd
  1000:205b     74 62            JZ 0x1000:20bf
  1000:205d     0A C0            OR AL,AL
  1000:205f     74 5E            JZ 0x1000:20bf
  1000:2061     3C 22            CMP AL,0x22
  1000:2063     74 27            JZ 0x1000:208c
  1000:2065     3C 5C            CMP AL,0x5c
  1000:2067     74 03            JZ 0x1000:206c
  1000:2069     AA               STOSB ES:DI
  1000:206a     EB E4            JMP 0x1000:2050

LAB_1000_206c:
  1000:206c     33 C9            XOR CX,CX

LAB_1000_206e:
  1000:206e     41               INC CX
  1000:206f     AC               LODSB SI
  1000:2070     3C 5C            CMP AL,0x5c
  1000:2072     74 FA            JZ 0x1000:206e
  1000:2074     3C 22            CMP AL,0x22
  1000:2076     74 06            JZ 0x1000:207e
  1000:2078     B0 5C            MOV AL,0x5c
  1000:207a     F3 AA            STOSB.REP ES:DI
  1000:207c     EB D1            JMP 0x1000:204f

LAB_1000_207e:
  1000:207e     B0 5C            MOV AL,0x5c
  1000:2080     D1 E9            SHR CX,0x1
  1000:2082     F3 AA            STOSB.REP ES:DI
  1000:2084     73 06            JNC 0x1000:208c
  1000:2086     B0 22            MOV AL,0x22
  1000:2088     AA               STOSB ES:DI
  1000:2089     EB C5            JMP 0x1000:2050

LAB_1000_208b:
  1000:208b     4E               DEC SI

LAB_1000_208c:
  1000:208c     AC               LODSB SI
  1000:208d     3C 0D            CMP AL,0xd
  1000:208f     74 2E            JZ 0x1000:20bf
  1000:2091     0A C0            OR AL,AL
  1000:2093     74 2A            JZ 0x1000:20bf
  1000:2095     3C 22            CMP AL,0x22
  1000:2097     74 B7            JZ 0x1000:2050
  1000:2099     3C 5C            CMP AL,0x5c
  1000:209b     74 03            JZ 0x1000:20a0
  1000:209d     AA               STOSB ES:DI
  1000:209e     EB EC            JMP 0x1000:208c

LAB_1000_20a0:
  1000:20a0     33 C9            XOR CX,CX

LAB_1000_20a2:
  1000:20a2     41               INC CX
  1000:20a3     AC               LODSB SI
  1000:20a4     3C 5C            CMP AL,0x5c
  1000:20a6     74 FA            JZ 0x1000:20a2
  1000:20a8     3C 22            CMP AL,0x22
  1000:20aa     74 06            JZ 0x1000:20b2
  1000:20ac     B0 5C            MOV AL,0x5c
  1000:20ae     F3 AA            STOSB.REP ES:DI
  1000:20b0     EB D9            JMP 0x1000:208b

LAB_1000_20b2:
  1000:20b2     B0 5C            MOV AL,0x5c
  1000:20b4     D1 E9            SHR CX,0x1
  1000:20b6     F3 AA            STOSB.REP ES:DI
  1000:20b8     73 96            JNC 0x1000:2050
  1000:20ba     B0 22            MOV AL,0x22
  1000:20bc     AA               STOSB ES:DI
  1000:20bd     EB CD            JMP 0x1000:208c

LAB_1000_20bf:
  1000:20bf     33 C0            XOR AX,AX
  1000:20c1     AA               STOSB ES:DI

LAB_1000_20c2:
  1000:20c2     16               PUSH SS
  1000:20c3     1F               POP DS
  1000:20c4     C7 07 00 00      MOV word ptr [BX],0x0
  1000:20c8     FF 26 1C 07      JMP word ptr [0x71c]

FUN_1000_20cc:
  1000:20cc     55               PUSH BP
  1000:20cd     8B EC            MOV BP,SP
  1000:20cf     1E               PUSH DS
  1000:20d0     8E 06 C8 06      MOV ES,word ptr [0x6c8]
  1000:20d4     26 8B 1E 2C 00   MOV BX,word ptr ES:[0x2c]
  1000:20d9     8E C3            MOV ES,BX
  1000:20db     33 C0            XOR AX,AX
  1000:20dd     33 F6            XOR SI,SI
  1000:20df     33 FF            XOR DI,DI
  1000:20e1     B9 FF FF         MOV CX,0xffff
  1000:20e4     0B DB            OR BX,BX
  1000:20e6     74 0E            JZ 0x1000:20f6
  1000:20e8     26 80 3E 00 00 00   CMP byte ptr ES:[0x0],0x0
  1000:20ee     74 06            JZ 0x1000:20f6

LAB_1000_20f0:
  1000:20f0     F2 AE            SCASB.REPNE ES:DI
  1000:20f2     46               INC SI
  1000:20f3     AE               SCASB ES:DI
  1000:20f4     75 FA            JNZ 0x1000:20f0

LAB_1000_20f6:
  1000:20f6     8B C7            MOV AX,DI
  1000:20f8     40               INC AX
  1000:20f9     24 FE            AND AL,0xfe
  1000:20fb     46               INC SI
  1000:20fc     8B FE            MOV DI,SI
  1000:20fe     D1 E6            SHL SI,0x1
  1000:2100     B9 09 00         MOV CX,0x9
  1000:2103     E8 EC 0A         CALL 0x1000:2bf2
  1000:2106     50               PUSH AX
  1000:2107     8B C6            MOV AX,SI
  1000:2109     E8 E6 0A         CALL 0x1000:2bf2
  1000:210c     A3 E9 06         MOV [0x6e9],AX
  1000:210f     06               PUSH ES
  1000:2110     1E               PUSH DS
  1000:2111     07               POP ES
  1000:2112     1F               POP DS
  1000:2113     8B CF            MOV CX,DI
  1000:2115     8B D8            MOV BX,AX
  1000:2117     33 F6            XOR SI,SI
  1000:2119     5F               POP DI
  1000:211a     49               DEC CX
  1000:211b     E3 26            JCXZ 0x1000:2143

LAB_1000_211d:
  1000:211d     8B 04            MOV AX,word ptr [SI]
  1000:211f     36 3B 06 A6 06   CMP AX,word ptr SS:[0x6a6]
  1000:2124     75 10            JNZ 0x1000:2136
  1000:2126     51               PUSH CX
  1000:2127     56               PUSH SI
  1000:2128     57               PUSH DI
  1000:2129     BF A6 06         MOV DI,0x6a6
  1000:212c     B9 06 00         MOV CX,0x6
  1000:212f     F3 A7            CMPSW.REPE ES:DI,SI
  1000:2131     5F               POP DI
  1000:2132     5E               POP SI
  1000:2133     59               POP CX
  1000:2134     74 05            JZ 0x1000:213b

LAB_1000_2136:
  1000:2136     26 89 3F         MOV word ptr ES:[BX],DI
  1000:2139     43               INC BX
  1000:213a     43               INC BX

LAB_1000_213b:
  1000:213b     AC               LODSB SI
  1000:213c     AA               STOSB ES:DI
  1000:213d     0A C0            OR AL,AL
  1000:213f     75 FA            JNZ 0x1000:213b
  1000:2141     E2 DA            LOOP 0x1000:211d

LAB_1000_2143:
  1000:2143     26 89 0F         MOV word ptr ES:[BX],CX
  1000:2146     1F               POP DS
  1000:2147     5D               POP BP
  1000:2148     C3               RET

FUN_1000_214a:
  1000:214a     55               PUSH BP
  1000:214b     8B EC            MOV BP,SP
  1000:214d     56               PUSH SI
  1000:214e     57               PUSH DI
  1000:214f     1E               PUSH DS
  1000:2150     07               POP ES
  1000:2151     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:2154     BE F6 0B         MOV SI,0xbf6

LAB_1000_2157:
  1000:2157     AD               LODSW SI
  1000:2158     3B C2            CMP AX,DX
  1000:215a     74 10            JZ 0x1000:216c
  1000:215c     40               INC AX
  1000:215d     96               XCHG AX,SI
  1000:215e     74 0C            JZ 0x1000:216c
  1000:2160     97               XCHG AX,DI
  1000:2161     33 C0            XOR AX,AX
  1000:2163     B9 FF FF         MOV CX,0xffff
  1000:2166     F2 AE            SCASB.REPNE ES:DI
  1000:2168     8B F7            MOV SI,DI
  1000:216a     EB EB            JMP 0x1000:2157

LAB_1000_216c:
  1000:216c     96               XCHG AX,SI
  1000:216d     5F               POP DI
  1000:216e     5E               POP SI
  1000:216f     8B E5            MOV SP,BP
  1000:2171     5D               POP BP
  1000:2172     C2 02 00         RET 0x2

FUN_1000_2175:
  1000:2175     55               PUSH BP
  1000:2176     8B EC            MOV BP,SP
  1000:2178     57               PUSH DI
  1000:2179     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:217c     E8 CB FF         CALL 0x1000:214a
  1000:217f     0B C0            OR AX,AX
  1000:2181     74 20            JZ 0x1000:21a3
  1000:2183     92               XCHG AX,DX
  1000:2184     8B FA            MOV DI,DX
  1000:2186     33 C0            XOR AX,AX
  1000:2188     B9 FF FF         MOV CX,0xffff
  1000:218b     F2 AE            SCASB.REPNE ES:DI
  1000:218d     F7 D1            NOT CX
  1000:218f     49               DEC CX
  1000:2190     BB 02 00         MOV BX,0x2
  1000:2193     81 3E CE 0B D6 D6   CMP word ptr [0xbce],0xd6d6
  1000:2199     75 04            JNZ 0x1000:219f
  1000:219b     FF 16 D0 0B      CALL word ptr [0xbd0]

LAB_1000_219f:
  1000:219f     B4 40            MOV AH,0x40
  1000:21a1     CD 21            INT 0x21

LAB_1000_21a3:
  1000:21a3     5F               POP DI
  1000:21a4     8B E5            MOV SP,BP
  1000:21a6     5D               POP BP
  1000:21a7     C2 02 00         RET 0x2

FUN_1000_21aa:
  1000:21aa     72 15            JC 0x1000:21c1
  1000:21ac     33 C0            XOR AX,AX
  1000:21ae     8B E5            MOV SP,BP
  1000:21b0     5D               POP BP
  1000:21b1     C3               RET

FUN_1000_21bf:
  1000:21bf     73 07            JNC 0x1000:21c8

LAB_1000_21c1:
  1000:21c1     E8 0E 00         CALL 0x1000:21d2
  1000:21c4     B8 FF FF         MOV AX,0xffff
  1000:21c7     99               CWD

LAB_1000_21c8:
  1000:21c8     8B E5            MOV SP,BP
  1000:21ca     5D               POP BP
  1000:21cb     C3               RET

FUN_1000_21cc:
  1000:21cc     32 E4            XOR AH,AH
  1000:21ce     E8 01 00         CALL 0x1000:21d2
  1000:21d1     C3               RET

FUN_1000_21d2:
  1000:21d2     A2 CD 06         MOV [0x6cd],AL
  1000:21d5     0A E4            OR AH,AH
  1000:21d7     75 22            JNZ 0x1000:21fb
  1000:21d9     80 3E CA 06 03   CMP byte ptr [0x6ca],0x3
  1000:21de     72 0C            JC 0x1000:21ec
  1000:21e0     3C 22            CMP AL,0x22
  1000:21e2     73 0C            JNC 0x1000:21f0
  1000:21e4     3C 20            CMP AL,0x20
  1000:21e6     72 04            JC 0x1000:21ec
  1000:21e8     B0 05            MOV AL,0x5
  1000:21ea     EB 06            JMP 0x1000:21f2

LAB_1000_21ec:
  1000:21ec     3C 13            CMP AL,0x13
  1000:21ee     76 02            JBE 0x1000:21f2

LAB_1000_21f0:
  1000:21f0     B0 13            MOV AL,0x13

LAB_1000_21f2:
  1000:21f2     BB 1E 07         MOV BX,0x71e
  1000:21f5     D7               XLAT BX

LAB_1000_21f6:
  1000:21f6     98               CBW
  1000:21f7     A3 C2 06         MOV [0x6c2],AX
  1000:21fa     C3               RET

LAB_1000_21fb:
  1000:21fb     8A C4            MOV AL,AH
  1000:21fd     EB F7            JMP 0x1000:21f6

FUN_1000_2200:
  1000:2200     55               PUSH BP
  1000:2201     8B EC            MOV BP,SP
  1000:2203     56               PUSH SI
  1000:2204     57               PUSH DI
  1000:2205     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:2208     8A 44 06         MOV AL,byte ptr [SI + 0x6]
  1000:220b     A8 82            TEST AL,0x82
  1000:220d     74 68            JZ 0x1000:2277
  1000:220f     A8 40            TEST AL,0x40
  1000:2211     75 64            JNZ 0x1000:2277
  1000:2213     C7 44 02 00 00   MOV word ptr [SI + 0x2],0x0
  1000:2218     A8 01            TEST AL,0x1
  1000:221a     74 0B            JZ 0x1000:2227
  1000:221c     A8 10            TEST AL,0x10
  1000:221e     74 57            JZ 0x1000:2277
  1000:2220     8B 4C 04         MOV CX,word ptr [SI + 0x4]
  1000:2223     89 0C            MOV word ptr [SI],CX
  1000:2225     24 FE            AND AL,0xfe

LAB_1000_2227:
  1000:2227     0C 02            OR AL,0x2
  1000:2229     24 EF            AND AL,0xef
  1000:222b     88 44 06         MOV byte ptr [SI + 0x6],AL
  1000:222e     8B FE            MOV DI,SI
  1000:2230     81 EF 40 0A      SUB DI,0xa40
  1000:2234     81 C7 E0 0A      ADD DI,0xae0
  1000:2238     33 DB            XOR BX,BX
  1000:223a     8A 5C 07         MOV BL,byte ptr [SI + 0x7]
  1000:223d     A8 08            TEST AL,0x8
  1000:223f     75 4C            JNZ 0x1000:228d
  1000:2241     A8 04            TEST AL,0x4
  1000:2243     75 1E            JNZ 0x1000:2263
  1000:2245     F6 05 01         TEST byte ptr [DI],0x1
  1000:2248     75 43            JNZ 0x1000:228d
  1000:224a     81 FE 48 0A      CMP SI,0xa48
  1000:224e     74 0C            JZ 0x1000:225c
  1000:2250     81 FE 50 0A      CMP SI,0xa50
  1000:2254     74 06            JZ 0x1000:225c
  1000:2256     81 FE 60 0A      CMP SI,0xa60
  1000:225a     75 24            JNZ 0x1000:2280

LAB_1000_225c:
  1000:225c     F6 87 D1 06 40   TEST byte ptr [BX + 0x6d1],0x40
  1000:2261     74 1D            JZ 0x1000:2280

LAB_1000_2263:
  1000:2263     B9 01 00         MOV CX,0x1
  1000:2266     51               PUSH CX
  1000:2267     8D 7E 04         LEA DI,[BP + 0x4]
  1000:226a     57               PUSH DI
  1000:226b     53               PUSH BX
  1000:226c     E8 C3 F8         CALL 0x1000:1b32
  1000:226f     83 C4 06         ADD SP,0x6
  1000:2272     B9 01 00         MOV CX,0x1
  1000:2275     EB 3E            JMP 0x1000:22b5

LAB_1000_2277:
  1000:2277     B8 FF FF         MOV AX,0xffff
  1000:227a     80 4C 06 20      OR byte ptr [SI + 0x6],0x20
  1000:227e     EB 5C            JMP 0x1000:22dc

LAB_1000_2280:
  1000:2280     53               PUSH BX
  1000:2281     56               PUSH SI
  1000:2282     E8 91 09         CALL 0x1000:2c16
  1000:2285     5B               POP BX
  1000:2286     5B               POP BX
  1000:2287     F6 44 06 08      TEST byte ptr [SI + 0x6],0x8
  1000:228b     74 D6            JZ 0x1000:2263

LAB_1000_228d:
  1000:228d     8B 0C            MOV CX,word ptr [SI]
  1000:228f     8B 54 04         MOV DX,word ptr [SI + 0x4]
  1000:2292     2B CA            SUB CX,DX
  1000:2294     42               INC DX
  1000:2295     89 14            MOV word ptr [SI],DX
  1000:2297     8B 55 02         MOV DX,word ptr [DI + 0x2]
  1000:229a     4A               DEC DX
  1000:229b     89 54 02         MOV word ptr [SI + 0x2],DX
  1000:229e     E3 20            JCXZ 0x1000:22c0
  1000:22a0     51               PUSH CX
  1000:22a1     51               PUSH CX
  1000:22a2     FF 74 04         PUSH word ptr [SI + 0x4]
  1000:22a5     53               PUSH BX
  1000:22a6     E8 89 F8         CALL 0x1000:1b32
  1000:22a9     83 C4 06         ADD SP,0x6
  1000:22ac     59               POP CX

LAB_1000_22ad:
  1000:22ad     8B 7C 04         MOV DI,word ptr [SI + 0x4]
  1000:22b0     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:22b3     88 15            MOV byte ptr [DI],DL

LAB_1000_22b5:
  1000:22b5     3B C1            CMP AX,CX
  1000:22b7     75 BE            JNZ 0x1000:2277
  1000:22b9     33 C0            XOR AX,AX
  1000:22bb     8A 46 04         MOV AL,byte ptr [BP + 0x4]
  1000:22be     EB 1C            JMP 0x1000:22dc

LAB_1000_22c0:
  1000:22c0     33 C0            XOR AX,AX
  1000:22c2     F6 87 D1 06 20   TEST byte ptr [BX + 0x6d1],0x20
  1000:22c7     74 E4            JZ 0x1000:22ad
  1000:22c9     B9 02 00         MOV CX,0x2
  1000:22cc     51               PUSH CX
  1000:22cd     50               PUSH AX
  1000:22ce     50               PUSH AX
  1000:22cf     53               PUSH BX
  1000:22d0     E8 85 09         CALL 0x1000:2c58
  1000:22d3     83 C4 08         ADD SP,0x8
  1000:22d6     33 C0            XOR AX,AX
  1000:22d8     8B C8            MOV CX,AX
  1000:22da     EB D1            JMP 0x1000:22ad

LAB_1000_22dc:
  1000:22dc     5F               POP DI
  1000:22dd     5E               POP SI
  1000:22de     5D               POP BP
  1000:22df     C3               RET

FUN_1000_22f0:
  1000:22f0     55               PUSH BP
  1000:22f1     8B EC            MOV BP,SP
  1000:22f3     B8 71 01         MOV AX,0x171
  1000:22f6     E8 5B F5         CALL 0x1000:1854
  1000:22f9     56               PUSH SI
  1000:22fa     57               PUSH DI
  1000:22fb     33 C0            XOR AX,AX
  1000:22fd     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:2300     88 46 FB         MOV byte ptr [BP + -0x5],AL
  1000:2303     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:2306     AC               LODSB SI
  1000:2307     89 76 06         MOV word ptr [BP + 0x6],SI
  1000:230a     88 46 FE         MOV byte ptr [BP + -0x2],AL
  1000:230d     0A C0            OR AL,AL
  1000:230f     74 06            JZ 0x1000:2317
  1000:2311     83 7E F8 00      CMP word ptr [BP + -0x8],0x0
  1000:2315     7D 06            JGE 0x1000:231d

LAB_1000_2317:
  1000:2317     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:231a     E9 A2 04         JMP 0x1000:27bf

LAB_1000_231d:
  1000:231d     BB 32 07         MOV BX,0x732
  1000:2320     2C 20            SUB AL,0x20
  1000:2322     3C 58            CMP AL,0x58
  1000:2324     77 05            JA 0x1000:232b
  1000:2326     D7               XLAT BX
  1000:2327     24 0F            AND AL,0xf
  1000:2329     EB 02            JMP 0x1000:232d

LAB_1000_232b:
  1000:232b     B0 00            MOV AL,0x0

LAB_1000_232d:
  1000:232d     B1 03            MOV CL,0x3
  1000:232f     D2 E0            SHL AL,CL
  1000:2331     02 46 FB         ADD AL,byte ptr [BP + -0x5]
  1000:2334     D7               XLAT BX
  1000:2335     FE C1            INC CL
  1000:2337     D2 E8            SHR AL,CL
  1000:2339     88 46 FB         MOV byte ptr [BP + -0x5],AL
  1000:233c     98               CBW
  1000:233d     8B D8            MOV BX,AX
  1000:233f     D1 E3            SHL BX,0x1
  1000:2341     2E FF A7 E0 22   JMP word ptr CS:[BX + 0x22e0]

LAB_1000_27bf:
  1000:27bf     5F               POP DI
  1000:27c0     5E               POP SI
  1000:27c1     8B E5            MOV SP,BP
  1000:27c3     5D               POP BP
  1000:27c4     C3               RET

FUN_1000_27c6:
  1000:27c6     59               POP CX
  1000:27c7     A1 FA 06         MOV AX,[0x6fa]
  1000:27ca     3B C4            CMP AX,SP
  1000:27cc     73 06            JNC 0x1000:27d4
  1000:27ce     2B C4            SUB AX,SP
  1000:27d0     F7 D8            NEG AX

LAB_1000_27d2:
  1000:27d2     FF E1            JMP CX

LAB_1000_27d4:
  1000:27d4     33 C0            XOR AX,AX
  1000:27d6     EB FA            JMP 0x1000:27d2

FUN_1000_27d8:
  1000:27d8     55               PUSH BP
  1000:27d9     8B EC            MOV BP,SP
  1000:27db     56               PUSH SI
  1000:27dc     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:27df     BE 8E 06         MOV SI,0x68e
  1000:27e2     39 5C 06         CMP word ptr [SI + 0x6],BX
  1000:27e5     73 0D            JNC 0x1000:27f4
  1000:27e7     4B               DEC BX
  1000:27e8     4B               DEC BX
  1000:27e9     80 0F 01         OR byte ptr [BX],0x1
  1000:27ec     39 5C 08         CMP word ptr [SI + 0x8],BX
  1000:27ef     76 03            JBE 0x1000:27f4
  1000:27f1     89 5C 08         MOV word ptr [SI + 0x8],BX

LAB_1000_27f4:
  1000:27f4     5E               POP SI
  1000:27f5     8B E5            MOV SP,BP
  1000:27f7     5D               POP BP
  1000:27f8     C3               RET

FUN_1000_27f9:
  1000:27f9     55               PUSH BP
  1000:27fa     8B EC            MOV BP,SP
  1000:27fc     56               PUSH SI
  1000:27fd     57               PUSH DI
  1000:27fe     8B 4E 04         MOV CX,word ptr [BP + 0x4]
  1000:2801     83 F9 E8         CMP CX,-0x18
  1000:2804     77 12            JA 0x1000:2818
  1000:2806     BB 8E 06         MOV BX,0x68e
  1000:2809     E8 C6 04         CALL 0x1000:2cd2
  1000:280c     73 0F            JNC 0x1000:281d
  1000:280e     E8 3D 05         CALL 0x1000:2d4e
  1000:2811     72 05            JC 0x1000:2818
  1000:2813     E8 BC 04         CALL 0x1000:2cd2
  1000:2816     73 05            JNC 0x1000:281d

LAB_1000_2818:
  1000:2818     33 C0            XOR AX,AX
  1000:281a     99               CWD
  1000:281b     EB 00            JMP 0x1000:281d

LAB_1000_281d:
  1000:281d     5F               POP DI
  1000:281e     5E               POP SI
  1000:281f     5D               POP BP
  1000:2820     C3               RET

FUN_1000_2822:
  1000:2822     55               PUSH BP
  1000:2823     8B EC            MOV BP,SP
  1000:2825     8B D7            MOV DX,DI
  1000:2827     8B DE            MOV BX,SI
  1000:2829     8C D8            MOV AX,DS
  1000:282b     8E C0            MOV ES,AX
  1000:282d     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:2830     33 C0            XOR AX,AX
  1000:2832     B9 FF FF         MOV CX,0xffff
  1000:2835     F2 AE            SCASB.REPNE ES:DI
  1000:2837     8D 75 FF         LEA SI,[DI + -0x1]
  1000:283a     8B 7E 06         MOV DI,word ptr [BP + 0x6]
  1000:283d     B9 FF FF         MOV CX,0xffff
  1000:2840     F2 AE            SCASB.REPNE ES:DI
  1000:2842     F7 D1            NOT CX
  1000:2844     2B F9            SUB DI,CX
  1000:2846     87 FE            XCHG SI,DI
  1000:2848     8B 46 04         MOV AX,word ptr [BP + 0x4]
  1000:284b     F7 C6 01 00      TEST SI,0x1
  1000:284f     74 02            JZ 0x1000:2853
  1000:2851     A4               MOVSB ES:DI,SI
  1000:2852     49               DEC CX

LAB_1000_2853:
  1000:2853     D1 E9            SHR CX,0x1
  1000:2855     F3 A5            MOVSW.REP ES:DI,SI
  1000:2857     13 C9            ADC CX,CX
  1000:2859     F3 A4            MOVSB.REP ES:DI,SI
  1000:285b     8B F3            MOV SI,BX
  1000:285d     8B FA            MOV DI,DX
  1000:285f     5D               POP BP
  1000:2860     C3               RET

FUN_1000_2862:
  1000:2862     55               PUSH BP
  1000:2863     8B EC            MOV BP,SP
  1000:2865     8B D7            MOV DX,DI
  1000:2867     8B DE            MOV BX,SI
  1000:2869     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:286c     8B FE            MOV DI,SI
  1000:286e     8C D8            MOV AX,DS
  1000:2870     8E C0            MOV ES,AX
  1000:2872     33 C0            XOR AX,AX
  1000:2874     B9 FF FF         MOV CX,0xffff
  1000:2877     F2 AE            SCASB.REPNE ES:DI
  1000:2879     F7 D1            NOT CX
  1000:287b     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:287e     8B C7            MOV AX,DI
  1000:2880     A8 01            TEST AL,0x1
  1000:2882     74 02            JZ 0x1000:2886
  1000:2884     A4               MOVSB ES:DI,SI
  1000:2885     49               DEC CX

LAB_1000_2886:
  1000:2886     D1 E9            SHR CX,0x1
  1000:2888     F3 A5            MOVSW.REP ES:DI,SI
  1000:288a     13 C9            ADC CX,CX
  1000:288c     F3 A4            MOVSB.REP ES:DI,SI
  1000:288e     8B F3            MOV SI,BX
  1000:2890     8B FA            MOV DI,DX
  1000:2892     5D               POP BP
  1000:2893     C3               RET

FUN_1000_2894:
  1000:2894     55               PUSH BP
  1000:2895     8B EC            MOV BP,SP
  1000:2897     57               PUSH DI
  1000:2898     56               PUSH SI
  1000:2899     8B 36 E9 06      MOV SI,word ptr [0x6e9]
  1000:289d     0B F6            OR SI,SI
  1000:289f     74 44            JZ 0x1000:28e5
  1000:28a1     83 7E 04 00      CMP word ptr [BP + 0x4],0x0
  1000:28a5     74 3E            JZ 0x1000:28e5
  1000:28a7     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:28aa     E8 CB F3         CALL 0x1000:1c78
  1000:28ad     83 C4 02         ADD SP,0x2
  1000:28b0     8B F8            MOV DI,AX
  1000:28b2     EB 2C            JMP 0x1000:28e0

LAB_1000_28b4:
  1000:28b4     FF 34            PUSH word ptr [SI]
  1000:28b6     E8 BF F3         CALL 0x1000:1c78
  1000:28b9     83 C4 02         ADD SP,0x2
  1000:28bc     3B C7            CMP AX,DI
  1000:28be     7E 1E            JLE 0x1000:28de
  1000:28c0     8B 1C            MOV BX,word ptr [SI]
  1000:28c2     80 39 3D         CMP byte ptr [BX + DI],0x3d
  1000:28c5     75 17            JNZ 0x1000:28de
  1000:28c7     57               PUSH DI
  1000:28c8     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:28cb     53               PUSH BX
  1000:28cc     E8 7D 05         CALL 0x1000:2e4c
  1000:28cf     83 C4 06         ADD SP,0x6
  1000:28d2     0B C0            OR AX,AX
  1000:28d4     75 08            JNZ 0x1000:28de
  1000:28d6     8B 04            MOV AX,word ptr [SI]
  1000:28d8     03 C7            ADD AX,DI
  1000:28da     40               INC AX
  1000:28db     EB 0A            JMP 0x1000:28e7

LAB_1000_28de:
  1000:28de     46               INC SI
  1000:28df     46               INC SI

LAB_1000_28e0:
  1000:28e0     83 3C 00         CMP word ptr [SI],0x0
  1000:28e3     75 CF            JNZ 0x1000:28b4

LAB_1000_28e5:
  1000:28e5     2B C0            SUB AX,AX

LAB_1000_28e7:
  1000:28e7     5E               POP SI
  1000:28e8     5F               POP DI
  1000:28e9     8B E5            MOV SP,BP
  1000:28eb     5D               POP BP
  1000:28ec     C3               RET

FUN_1000_28ee:
  1000:28ee     55               PUSH BP
  1000:28ef     8B EC            MOV BP,SP
  1000:28f1     B8 88 00         MOV AX,0x88
  1000:28f4     E8 5D EF         CALL 0x1000:1854
  1000:28f7     56               PUSH SI
  1000:28f8     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:28fb     83 7E 0C 00      CMP word ptr [BP + 0xc],0x0
  1000:28ff     75 1F            JNZ 0x1000:2920
  1000:2901     89 76 FA         MOV word ptr [BP + -0x6],SI
  1000:2904     B8 1A 0A         MOV AX,0xa1a
  1000:2907     50               PUSH AX
  1000:2908     E8 89 FF         CALL 0x1000:2894
  1000:290b     83 C4 02         ADD SP,0x2
  1000:290e     8B F0            MOV SI,AX
  1000:2910     0B F6            OR SI,SI
  1000:2912     75 11            JNZ 0x1000:2925
  1000:2914     C7 06 C2 06 08 00   MOV word ptr [0x6c2],0x8

LAB_1000_291a:
  1000:291a     B8 FF FF         MOV AX,0xffff
  1000:291d     EB 49            JMP 0x1000:2968

LAB_1000_2920:
  1000:2920     C7 46 FA 00 00   MOV word ptr [BP + -0x6],0x0

LAB_1000_2925:
  1000:2925     FF 76 FA         PUSH word ptr [BP + -0x6]
  1000:2928     2B C0            SUB AX,AX
  1000:292a     50               PUSH AX
  1000:292b     8D 86 78 FF      LEA AX,[BP + 0xff78]
  1000:292f     50               PUSH AX
  1000:2930     8D 46 FE         LEA AX,[BP + -0x2]
  1000:2933     50               PUSH AX
  1000:2934     8D 46 F8         LEA AX,[BP + -0x8]
  1000:2937     50               PUSH AX
  1000:2938     FF 76 0A         PUSH word ptr [BP + 0xa]
  1000:293b     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:293e     E8 FD 05         CALL 0x1000:2f3e
  1000:2941     83 C4 0E         ADD SP,0xe
  1000:2944     40               INC AX
  1000:2945     74 D3            JZ 0x1000:291a
  1000:2947     FF 76 FE         PUSH word ptr [BP + -0x2]
  1000:294a     8D 86 78 FF      LEA AX,[BP + 0xff78]
  1000:294e     50               PUSH AX
  1000:294f     56               PUSH SI
  1000:2950     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:2953     E8 48 08         CALL 0x1000:319e
  1000:2956     83 C4 08         ADD SP,0x8
  1000:2959     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:295c     FF 76 F8         PUSH word ptr [BP + -0x8]
  1000:295f     E8 12 F3         CALL 0x1000:1c74
  1000:2962     83 C4 02         ADD SP,0x2
  1000:2965     8B 46 FC         MOV AX,word ptr [BP + -0x4]

LAB_1000_2968:
  1000:2968     5E               POP SI
  1000:2969     8B E5            MOV SP,BP
  1000:296b     5D               POP BP
  1000:296c     C3               RET

FUN_1000_296e:
  1000:296e     55               PUSH BP
  1000:296f     8B EC            MOV BP,SP
  1000:2971     B8 0A 00         MOV AX,0xa
  1000:2974     E8 DD EE         CALL 0x1000:1854
  1000:2977     57               PUSH DI
  1000:2978     56               PUSH SI
  1000:2979     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:297c     83 7E 04 02      CMP word ptr [BP + 0x4],0x2
  1000:2980     75 10            JNZ 0x1000:2992
  1000:2982     FF 76 0A         PUSH word ptr [BP + 0xa]
  1000:2985     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:2988     56               PUSH SI
  1000:2989     E8 FA 08         CALL 0x1000:3286
  1000:298c     83 C4 06         ADD SP,0x6
  1000:298f     E9 F8 00         JMP 0x1000:2a8a

LAB_1000_2992:
  1000:2992     B8 5C 00         MOV AX,0x5c
  1000:2995     50               PUSH AX
  1000:2996     56               PUSH SI
  1000:2997     E8 2E 05         CALL 0x1000:2ec8
  1000:299a     83 C4 04         ADD SP,0x4
  1000:299d     8B F8            MOV DI,AX
  1000:299f     B8 2F 00         MOV AX,0x2f
  1000:29a2     50               PUSH AX
  1000:29a3     56               PUSH SI
  1000:29a4     E8 21 05         CALL 0x1000:2ec8
  1000:29a7     83 C4 04         ADD SP,0x4
  1000:29aa     0B C0            OR AX,AX
  1000:29ac     75 08            JNZ 0x1000:29b6
  1000:29ae     0B FF            OR DI,DI
  1000:29b0     75 0E            JNZ 0x1000:29c0
  1000:29b2     8B FE            MOV DI,SI
  1000:29b4     EB 0A            JMP 0x1000:29c0

LAB_1000_29b6:
  1000:29b6     0B FF            OR DI,DI
  1000:29b8     74 04            JZ 0x1000:29be
  1000:29ba     3B C7            CMP AX,DI
  1000:29bc     76 02            JBE 0x1000:29c0

LAB_1000_29be:
  1000:29be     8B F8            MOV DI,AX

LAB_1000_29c0:
  1000:29c0     B8 2E 00         MOV AX,0x2e
  1000:29c3     50               PUSH AX
  1000:29c4     57               PUSH DI
  1000:29c5     E8 C2 F3         CALL 0x1000:1d8a
  1000:29c8     83 C4 04         ADD SP,0x4
  1000:29cb     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:29ce     0B C0            OR AX,AX
  1000:29d0     74 22            JZ 0x1000:29f4
  1000:29d2     FF 36 32 0A      PUSH word ptr [0xa32]
  1000:29d6     50               PUSH AX
  1000:29d7     E8 AC 04         CALL 0x1000:2e86
  1000:29da     83 C4 04         ADD SP,0x4
  1000:29dd     50               PUSH AX
  1000:29de     FF 76 0A         PUSH word ptr [BP + 0xa]
  1000:29e1     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:29e4     56               PUSH SI
  1000:29e5     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:29e8     E8 03 FF         CALL 0x1000:28ee
  1000:29eb     83 C4 0A         ADD SP,0xa
  1000:29ee     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:29f1     E9 93 00         JMP 0x1000:2a87

LAB_1000_29f4:
  1000:29f4     A1 82 0B         MOV AX,[0xb82]
  1000:29f7     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:29fa     C7 06 82 0B 10 00   MOV word ptr [0xb82],0x10
  1000:2a00     56               PUSH SI
  1000:2a01     E8 74 F2         CALL 0x1000:1c78
  1000:2a04     83 C4 02         ADD SP,0x2
  1000:2a07     05 05 00         ADD AX,0x5
  1000:2a0a     50               PUSH AX
  1000:2a0b     E8 62 F2         CALL 0x1000:1c70
  1000:2a0e     83 C4 02         ADD SP,0x2
  1000:2a11     8B F8            MOV DI,AX
  1000:2a13     8B 46 FA         MOV AX,word ptr [BP + -0x6]
  1000:2a16     A3 82 0B         MOV [0xb82],AX
  1000:2a19     0B FF            OR DI,DI
  1000:2a1b     75 05            JNZ 0x1000:2a22
  1000:2a1d     B8 FF FF         MOV AX,0xffff
  1000:2a20     EB 68            JMP 0x1000:2a8a

LAB_1000_2a22:
  1000:2a22     56               PUSH SI
  1000:2a23     57               PUSH DI
  1000:2a24     E8 3B FE         CALL 0x1000:2862
  1000:2a27     83 C4 04         ADD SP,0x4
  1000:2a2a     56               PUSH SI
  1000:2a2b     E8 4A F2         CALL 0x1000:1c78
  1000:2a2e     83 C4 02         ADD SP,0x2
  1000:2a31     03 C7            ADD AX,DI
  1000:2a33     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:2a36     C7 46 F8 FF FF   MOV word ptr [BP + -0x8],0xffff
  1000:2a3b     C7 46 F6 02 00   MOV word ptr [BP + -0xa],0x2
  1000:2a40     EB 03            JMP 0x1000:2a45

LAB_1000_2a42:
  1000:2a42     FF 4E F6         DEC word ptr [BP + -0xa]

LAB_1000_2a45:
  1000:2a45     83 7E F6 00      CMP word ptr [BP + -0xa],0x0
  1000:2a49     7C 35            JL 0x1000:2a80
  1000:2a4b     8B 5E F6         MOV BX,word ptr [BP + -0xa]
  1000:2a4e     D1 E3            SHL BX,0x1
  1000:2a50     FF B7 32 0A      PUSH word ptr [BX + 0xa32]
  1000:2a54     FF 76 FC         PUSH word ptr [BP + -0x4]
  1000:2a57     E8 08 FE         CALL 0x1000:2862
  1000:2a5a     83 C4 04         ADD SP,0x4
  1000:2a5d     2B C0            SUB AX,AX
  1000:2a5f     50               PUSH AX
  1000:2a60     57               PUSH DI
  1000:2a61     E8 6E 01         CALL 0x1000:2bd2
  1000:2a64     83 C4 04         ADD SP,0x4
  1000:2a67     40               INC AX
  1000:2a68     74 D8            JZ 0x1000:2a42
  1000:2a6a     FF 76 F6         PUSH word ptr [BP + -0xa]
  1000:2a6d     FF 76 0A         PUSH word ptr [BP + 0xa]
  1000:2a70     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:2a73     57               PUSH DI
  1000:2a74     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:2a77     E8 74 FE         CALL 0x1000:28ee
  1000:2a7a     83 C4 0A         ADD SP,0xa
  1000:2a7d     89 46 F8         MOV word ptr [BP + -0x8],AX

LAB_1000_2a80:
  1000:2a80     57               PUSH DI
  1000:2a81     E8 F0 F1         CALL 0x1000:1c74
  1000:2a84     83 C4 02         ADD SP,0x2

LAB_1000_2a87:
  1000:2a87     8B 46 F8         MOV AX,word ptr [BP + -0x8]

LAB_1000_2a8a:
  1000:2a8a     5E               POP SI
  1000:2a8b     5F               POP DI
  1000:2a8c     8B E5            MOV SP,BP
  1000:2a8e     5D               POP BP
  1000:2a8f     C3               RET

FUN_1000_2a90:
  1000:2a90     55               PUSH BP
  1000:2a91     8B EC            MOV BP,SP
  1000:2a93     83 EC 08         SUB SP,0x8
  1000:2a96     57               PUSH DI
  1000:2a97     56               PUSH SI
  1000:2a98     2B FF            SUB DI,DI
  1000:2a9a     A1 82 0B         MOV AX,[0xb82]
  1000:2a9d     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:2aa0     C7 06 82 0B 10 00   MOV word ptr [0xb82],0x10
  1000:2aa6     FF 76 0A         PUSH word ptr [BP + 0xa]
  1000:2aa9     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:2aac     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:2aaf     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:2ab2     E8 B9 FE         CALL 0x1000:296e
  1000:2ab5     83 C4 08         ADD SP,0x8
  1000:2ab8     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:2abb     40               INC AX
  1000:2abc     75 57            JNZ 0x1000:2b15
  1000:2abe     83 3E C2 06 02   CMP word ptr [0x6c2],0x2
  1000:2ac3     75 50            JNZ 0x1000:2b15
  1000:2ac5     B8 2F 00         MOV AX,0x2f
  1000:2ac8     50               PUSH AX
  1000:2ac9     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:2acc     E8 BB F2         CALL 0x1000:1d8a
  1000:2acf     83 C4 04         ADD SP,0x4
  1000:2ad2     0B C0            OR AX,AX
  1000:2ad4     75 3F            JNZ 0x1000:2b15
  1000:2ad6     B8 5C 00         MOV AX,0x5c
  1000:2ad9     50               PUSH AX
  1000:2ada     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:2add     E8 AA F2         CALL 0x1000:1d8a
  1000:2ae0     83 C4 04         ADD SP,0x4
  1000:2ae3     0B C0            OR AX,AX
  1000:2ae5     75 2E            JNZ 0x1000:2b15
  1000:2ae7     8B 5E 06         MOV BX,word ptr [BP + 0x6]
  1000:2aea     80 3F 00         CMP byte ptr [BX],0x0
  1000:2aed     74 06            JZ 0x1000:2af5
  1000:2aef     80 7F 01 3A      CMP byte ptr [BX + 0x1],0x3a
  1000:2af3     74 20            JZ 0x1000:2b15

LAB_1000_2af5:
  1000:2af5     B8 38 0A         MOV AX,0xa38
  1000:2af8     50               PUSH AX
  1000:2af9     E8 98 FD         CALL 0x1000:2894
  1000:2afc     83 C4 02         ADD SP,0x2
  1000:2aff     8B F0            MOV SI,AX
  1000:2b01     0B F6            OR SI,SI
  1000:2b03     74 10            JZ 0x1000:2b15
  1000:2b05     B8 04 01         MOV AX,0x104
  1000:2b08     50               PUSH AX
  1000:2b09     E8 64 F1         CALL 0x1000:1c70
  1000:2b0c     83 C4 02         ADD SP,0x2
  1000:2b0f     8B F8            MOV DI,AX
  1000:2b11     0B FF            OR DI,DI
  1000:2b13     75 09            JNZ 0x1000:2b1e

LAB_1000_2b15:
  1000:2b15     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:2b18     A3 82 0B         MOV [0xb82],AX
  1000:2b1b     E9 A0 00         JMP 0x1000:2bbe

LAB_1000_2b1e:
  1000:2b1e     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:2b21     A3 82 0B         MOV [0xb82],AX
  1000:2b24     E9 82 00         JMP 0x1000:2ba9

LAB_1000_2b28:
  1000:2b28     80 3D 00         CMP byte ptr [DI],0x0
  1000:2b2b     75 03            JNZ 0x1000:2b30
  1000:2b2d     E9 8E 00         JMP 0x1000:2bbe

LAB_1000_2b30:
  1000:2b30     57               PUSH DI
  1000:2b31     E8 44 F1         CALL 0x1000:1c78
  1000:2b34     83 C4 02         ADD SP,0x2
  1000:2b37     8B D8            MOV BX,AX
  1000:2b39     03 DF            ADD BX,DI
  1000:2b3b     4B               DEC BX
  1000:2b3c     80 3F 5C         CMP byte ptr [BX],0x5c
  1000:2b3f     74 10            JZ 0x1000:2b51
  1000:2b41     80 3F 2F         CMP byte ptr [BX],0x2f
  1000:2b44     74 0B            JZ 0x1000:2b51
  1000:2b46     B8 3D 0A         MOV AX,0xa3d
  1000:2b49     50               PUSH AX
  1000:2b4a     57               PUSH DI
  1000:2b4b     E8 D4 FC         CALL 0x1000:2822
  1000:2b4e     83 C4 04         ADD SP,0x4

LAB_1000_2b51:
  1000:2b51     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:2b54     E8 21 F1         CALL 0x1000:1c78
  1000:2b57     83 C4 02         ADD SP,0x2
  1000:2b5a     57               PUSH DI
  1000:2b5b     89 46 F8         MOV word ptr [BP + -0x8],AX
  1000:2b5e     E8 17 F1         CALL 0x1000:1c78
  1000:2b61     83 C4 02         ADD SP,0x2
  1000:2b64     03 46 F8         ADD AX,word ptr [BP + -0x8]
  1000:2b67     3D 04 01         CMP AX,0x104
  1000:2b6a     73 52            JNC 0x1000:2bbe
  1000:2b6c     FF 76 06         PUSH word ptr [BP + 0x6]
  1000:2b6f     57               PUSH DI
  1000:2b70     E8 AF FC         CALL 0x1000:2822
  1000:2b73     83 C4 04         ADD SP,0x4
  1000:2b76     FF 76 0A         PUSH word ptr [BP + 0xa]
  1000:2b79     FF 76 08         PUSH word ptr [BP + 0x8]
  1000:2b7c     57               PUSH DI
  1000:2b7d     FF 76 04         PUSH word ptr [BP + 0x4]
  1000:2b80     E8 EB FD         CALL 0x1000:296e
  1000:2b83     83 C4 08         ADD SP,0x8
  1000:2b86     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:2b89     40               INC AX
  1000:2b8a     75 32            JNZ 0x1000:2bbe
  1000:2b8c     83 3E C2 06 02   CMP word ptr [0x6c2],0x2
  1000:2b91     74 16            JZ 0x1000:2ba9
  1000:2b93     80 3D 5C         CMP byte ptr [DI],0x5c
  1000:2b96     74 05            JZ 0x1000:2b9d
  1000:2b98     80 3D 2F         CMP byte ptr [DI],0x2f
  1000:2b9b     75 21            JNZ 0x1000:2bbe

LAB_1000_2b9d:
  1000:2b9d     80 7D 01 5C      CMP byte ptr [DI + 0x1],0x5c
  1000:2ba1     74 06            JZ 0x1000:2ba9
  1000:2ba3     80 7D 01 2F      CMP byte ptr [DI + 0x1],0x2f
  1000:2ba7     75 15            JNZ 0x1000:2bbe

LAB_1000_2ba9:
  1000:2ba9     B8 03 01         MOV AX,0x103
  1000:2bac     50               PUSH AX
  1000:2bad     57               PUSH DI
  1000:2bae     56               PUSH SI
  1000:2baf     E8 42 03         CALL 0x1000:2ef4
  1000:2bb2     83 C4 06         ADD SP,0x6
  1000:2bb5     8B F0            MOV SI,AX
  1000:2bb7     0B F6            OR SI,SI
  1000:2bb9     74 03            JZ 0x1000:2bbe
  1000:2bbb     E9 6A FF         JMP 0x1000:2b28

LAB_1000_2bbe:
  1000:2bbe     0B FF            OR DI,DI
  1000:2bc0     74 07            JZ 0x1000:2bc9
  1000:2bc2     57               PUSH DI
  1000:2bc3     E8 AE F0         CALL 0x1000:1c74
  1000:2bc6     83 C4 02         ADD SP,0x2

LAB_1000_2bc9:
  1000:2bc9     8B 46 FC         MOV AX,word ptr [BP + -0x4]
  1000:2bcc     5E               POP SI
  1000:2bcd     5F               POP DI
  1000:2bce     8B E5            MOV SP,BP
  1000:2bd0     5D               POP BP
  1000:2bd1     C3               RET

FUN_1000_2bd2:
  1000:2bd2     55               PUSH BP
  1000:2bd3     8B EC            MOV BP,SP
  1000:2bd5     8B 56 04         MOV DX,word ptr [BP + 0x4]
  1000:2bd8     B8 00 43         MOV AX,0x4300
  1000:2bdb     CD 21            INT 0x21
  1000:2bdd     72 0F            JC 0x1000:2bee
  1000:2bdf     F6 46 06 02      TEST byte ptr [BP + 0x6],0x2
  1000:2be3     74 09            JZ 0x1000:2bee
  1000:2be5     F6 C1 01         TEST CL,0x1
  1000:2be8     74 04            JZ 0x1000:2bee
  1000:2bea     B8 00 0D         MOV AX,0xd00
  1000:2bed     F9               STC

LAB_1000_2bee:
  1000:2bee     E9 B9 F5         JMP 0x1000:21aa

FUN_1000_2bf2:
  1000:2bf2     53               PUSH BX
  1000:2bf3     06               PUSH ES
  1000:2bf4     51               PUSH CX
  1000:2bf5     B9 00 04         MOV CX,0x400
  1000:2bf8     87 0E 82 0B      XCHG word ptr [0xb82],CX
  1000:2bfc     51               PUSH CX
  1000:2bfd     50               PUSH AX
  1000:2bfe     E8 6F F0         CALL 0x1000:1c70
  1000:2c01     5B               POP BX
  1000:2c02     8F 06 82 0B      POP word ptr [0xb82]
  1000:2c06     59               POP CX
  1000:2c07     8C DA            MOV DX,DS
  1000:2c09     0B C0            OR AX,AX
  1000:2c0b     74 03            JZ 0x1000:2c10
  1000:2c0d     07               POP ES
  1000:2c0e     5B               POP BX
  1000:2c0f     C3               RET

LAB_1000_2c10:
  1000:2c10     8B C1            MOV AX,CX
  1000:2c12     E9 7F EA         JMP 0x1000:1694

FUN_1000_2c16:
  1000:2c16     55               PUSH BP
  1000:2c17     8B EC            MOV BP,SP
  1000:2c19     56               PUSH SI
  1000:2c1a     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:2c1d     B8 00 02         MOV AX,0x200
  1000:2c20     50               PUSH AX
  1000:2c21     E8 4C F0         CALL 0x1000:1c70
  1000:2c24     59               POP CX
  1000:2c25     8B DE            MOV BX,SI
  1000:2c27     81 EB 40 0A      SUB BX,0xa40
  1000:2c2b     81 C3 E0 0A      ADD BX,0xae0
  1000:2c2f     0B C0            OR AX,AX
  1000:2c31     74 0B            JZ 0x1000:2c3e
  1000:2c33     80 4C 06 08      OR byte ptr [SI + 0x6],0x8
  1000:2c37     C7 47 02 00 02   MOV word ptr [BX + 0x2],0x200
  1000:2c3c     EB 0C            JMP 0x1000:2c4a

LAB_1000_2c3e:
  1000:2c3e     80 4C 06 04      OR byte ptr [SI + 0x6],0x4
  1000:2c42     C7 47 02 01 00   MOV word ptr [BX + 0x2],0x1
  1000:2c47     8D 47 01         LEA AX,[BX + 0x1]

LAB_1000_2c4a:
  1000:2c4a     89 04            MOV word ptr [SI],AX
  1000:2c4c     89 44 04         MOV word ptr [SI + 0x4],AX
  1000:2c4f     C7 44 02 00 00   MOV word ptr [SI + 0x2],0x0
  1000:2c54     5E               POP SI
  1000:2c55     5D               POP BP
  1000:2c56     C3               RET

FUN_1000_2c58:
  1000:2c58     55               PUSH BP
  1000:2c59     8B EC            MOV BP,SP
  1000:2c5b     83 EC 04         SUB SP,0x4
  1000:2c5e     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:2c61     3B 1E CF 06      CMP BX,word ptr [0x6cf]
  1000:2c65     72 05            JC 0x1000:2c6c
  1000:2c67     B8 00 09         MOV AX,0x900
  1000:2c6a     EB 2A            JMP 0x1000:2c96

LAB_1000_2c6c:
  1000:2c6c     F7 46 08 00 80   TEST word ptr [BP + 0x8],0x8000
  1000:2c71     74 48            JZ 0x1000:2cbb
  1000:2c73     83 7E 0A 00      CMP word ptr [BP + 0xa],0x0
  1000:2c77     74 1A            JZ 0x1000:2c93
  1000:2c79     33 C9            XOR CX,CX
  1000:2c7b     8B D1            MOV DX,CX
  1000:2c7d     B8 01 42         MOV AX,0x4201
  1000:2c80     CD 21            INT 0x21
  1000:2c82     72 4B            JC 0x1000:2ccf
  1000:2c84     F7 46 0A 02 00   TEST word ptr [BP + 0xa],0x2
  1000:2c89     75 0E            JNZ 0x1000:2c99
  1000:2c8b     03 46 06         ADD AX,word ptr [BP + 0x6]
  1000:2c8e     13 56 08         ADC DX,word ptr [BP + 0x8]
  1000:2c91     79 28            JNS 0x1000:2cbb

LAB_1000_2c93:
  1000:2c93     B8 00 16         MOV AX,0x1600

LAB_1000_2c96:
  1000:2c96     F9               STC
  1000:2c97     EB 36            JMP 0x1000:2ccf

LAB_1000_2c99:
  1000:2c99     89 56 FE         MOV word ptr [BP + -0x2],DX
  1000:2c9c     89 46 FC         MOV word ptr [BP + -0x4],AX
  1000:2c9f     8B D1            MOV DX,CX
  1000:2ca1     B8 02 42         MOV AX,0x4202
  1000:2ca4     CD 21            INT 0x21
  1000:2ca6     03 46 06         ADD AX,word ptr [BP + 0x6]
  1000:2ca9     13 56 08         ADC DX,word ptr [BP + 0x8]
  1000:2cac     79 0D            JNS 0x1000:2cbb
  1000:2cae     8B 4E FE         MOV CX,word ptr [BP + -0x2]
  1000:2cb1     8B 56 FC         MOV DX,word ptr [BP + -0x4]
  1000:2cb4     B8 00 42         MOV AX,0x4200
  1000:2cb7     CD 21            INT 0x21
  1000:2cb9     EB D8            JMP 0x1000:2c93

LAB_1000_2cbb:
  1000:2cbb     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:2cbe     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:2cc1     8A 46 0A         MOV AL,byte ptr [BP + 0xa]
  1000:2cc4     B4 42            MOV AH,0x42
  1000:2cc6     CD 21            INT 0x21
  1000:2cc8     72 05            JC 0x1000:2ccf
  1000:2cca     80 A7 D1 06 FD   AND byte ptr [BX + 0x6d1],0xfd

LAB_1000_2ccf:
  1000:2ccf     E9 ED F4         JMP 0x1000:21bf

FUN_1000_2cd2:
  1000:2cd2     41               INC CX
  1000:2cd3     80 E1 FE         AND CL,0xfe
  1000:2cd6     53               PUSH BX
  1000:2cd7     FC               CLD
  1000:2cd8     8B 77 08         MOV SI,word ptr [BX + 0x8]
  1000:2cdb     8B 5F 0A         MOV BX,word ptr [BX + 0xa]
  1000:2cde     33 FF            XOR DI,DI
  1000:2ce0     EB 23            JMP 0x1000:2d05

LAB_1000_2ce2:
  1000:2ce2     8B C3            MOV AX,BX
  1000:2ce4     5B               POP BX
  1000:2ce5     A8 01            TEST AL,0x1
  1000:2ce7     75 42            JNZ 0x1000:2d2b
  1000:2ce9     53               PUSH BX
  1000:2cea     8B 77 06         MOV SI,word ptr [BX + 0x6]
  1000:2ced     8B 5F 08         MOV BX,word ptr [BX + 0x8]
  1000:2cf0     3B DE            CMP BX,SI
  1000:2cf2     74 36            JZ 0x1000:2d2a
  1000:2cf4     4B               DEC BX
  1000:2cf5     33 FF            XOR DI,DI
  1000:2cf7     EB 0C            JMP 0x1000:2d05

LAB_1000_2cfa:
  1000:2cfa     8D 54 FE         LEA DX,[SI + -0x2]
  1000:2cfd     3B D3            CMP DX,BX
  1000:2cff     73 E1            JNC 0x1000:2ce2
  1000:2d01     03 F0            ADD SI,AX
  1000:2d03     72 23            JC 0x1000:2d28

LAB_1000_2d05:
  1000:2d05     AD               LODSW SI
  1000:2d06     A8 01            TEST AL,0x1
  1000:2d08     74 F0            JZ 0x1000:2cfa
  1000:2d0a     8B FE            MOV DI,SI

LAB_1000_2d0c:
  1000:2d0c     48               DEC AX
  1000:2d0d     3B C1            CMP AX,CX
  1000:2d0f     73 23            JNC 0x1000:2d34
  1000:2d11     03 F0            ADD SI,AX
  1000:2d13     72 13            JC 0x1000:2d28
  1000:2d15     8B D0            MOV DX,AX
  1000:2d17     AD               LODSW SI
  1000:2d18     A8 01            TEST AL,0x1
  1000:2d1a     74 DE            JZ 0x1000:2cfa
  1000:2d1c     03 C2            ADD AX,DX
  1000:2d1e     05 02 00         ADD AX,0x2
  1000:2d21     8B F7            MOV SI,DI
  1000:2d23     89 44 FE         MOV word ptr [SI + -0x2],AX
  1000:2d26     EB E4            JMP 0x1000:2d0c

LAB_1000_2d28:
  1000:2d28     8B C0            MOV AX,AX

LAB_1000_2d2a:
  1000:2d2a     5B               POP BX

LAB_1000_2d2b:
  1000:2d2b     8B 47 06         MOV AX,word ptr [BX + 0x6]
  1000:2d2e     89 47 08         MOV word ptr [BX + 0x8],AX
  1000:2d31     F9               STC
  1000:2d32     EB 19            JMP 0x1000:2d4d

LAB_1000_2d34:
  1000:2d34     5B               POP BX
  1000:2d35     89 4C FE         MOV word ptr [SI + -0x2],CX
  1000:2d38     74 09            JZ 0x1000:2d43
  1000:2d3a     03 F9            ADD DI,CX
  1000:2d3c     2B C1            SUB AX,CX
  1000:2d3e     48               DEC AX
  1000:2d3f     89 05            MOV word ptr [DI],AX
  1000:2d41     2B F9            SUB DI,CX

LAB_1000_2d43:
  1000:2d43     03 F9            ADD DI,CX
  1000:2d45     89 7F 08         MOV word ptr [BX + 0x8],DI
  1000:2d48     8B C6            MOV AX,SI
  1000:2d4a     8C DA            MOV DX,DS
  1000:2d4c     F8               CLC

LAB_1000_2d4d:
  1000:2d4d     C3               RET

FUN_1000_2d4e:
  1000:2d4e     51               PUSH CX
  1000:2d4f     57               PUSH DI
  1000:2d50     F6 47 02 01      TEST byte ptr [BX + 0x2],0x1
  1000:2d54     74 63            JZ 0x1000:2db9
  1000:2d56     E8 D2 00         CALL 0x1000:2e2b
  1000:2d59     8B FE            MOV DI,SI
  1000:2d5b     8B 04            MOV AX,word ptr [SI]
  1000:2d5d     A8 01            TEST AL,0x1
  1000:2d5f     74 03            JZ 0x1000:2d64
  1000:2d61     2B C8            SUB CX,AX
  1000:2d63     49               DEC CX

LAB_1000_2d64:
  1000:2d64     41               INC CX
  1000:2d65     41               INC CX
  1000:2d66     8B 77 04         MOV SI,word ptr [BX + 0x4]
  1000:2d69     0B F6            OR SI,SI
  1000:2d6b     74 4C            JZ 0x1000:2db9
  1000:2d6d     03 CE            ADD CX,SI
  1000:2d6f     73 09            JNC 0x1000:2d7a
  1000:2d71     33 C0            XOR AX,AX
  1000:2d73     BA F0 FF         MOV DX,0xfff0
  1000:2d76     E3 30            JCXZ 0x1000:2da8
  1000:2d78     EB 3F            JMP 0x1000:2db9

LAB_1000_2d7a:
  1000:2d7a     16               PUSH SS
  1000:2d7b     07               POP ES
  1000:2d7c     26 A1 82 0B      MOV AX,ES:[0xb82]
  1000:2d80     3D 00 20         CMP AX,0x2000
  1000:2d83     74 16            JZ 0x1000:2d9b
  1000:2d85     BA 00 80         MOV DX,0x8000

LAB_1000_2d88:
  1000:2d88     3B D0            CMP DX,AX
  1000:2d8a     72 06            JC 0x1000:2d92
  1000:2d8c     D1 EA            SHR DX,0x1
  1000:2d8e     75 F8            JNZ 0x1000:2d88
  1000:2d90     EB 22            JMP 0x1000:2db4

LAB_1000_2d92:
  1000:2d92     83 FA 08         CMP DX,0x8
  1000:2d95     72 1D            JC 0x1000:2db4
  1000:2d97     D1 E2            SHL DX,0x1
  1000:2d99     8B C2            MOV AX,DX

LAB_1000_2d9b:
  1000:2d9b     48               DEC AX
  1000:2d9c     8B D0            MOV DX,AX
  1000:2d9e     03 C1            ADD AX,CX
  1000:2da0     73 02            JNC 0x1000:2da4
  1000:2da2     33 C0            XOR AX,AX

LAB_1000_2da4:
  1000:2da4     F7 D2            NOT DX
  1000:2da6     23 C2            AND AX,DX

LAB_1000_2da8:
  1000:2da8     52               PUSH DX
  1000:2da9     E8 2E 00         CALL 0x1000:2dda
  1000:2dac     5A               POP DX
  1000:2dad     73 0D            JNC 0x1000:2dbc
  1000:2daf     83 FA F0         CMP DX,-0x10
  1000:2db2     74 05            JZ 0x1000:2db9

LAB_1000_2db4:
  1000:2db4     B8 10 00         MOV AX,0x10
  1000:2db7     EB E2            JMP 0x1000:2d9b

LAB_1000_2db9:
  1000:2db9     F9               STC
  1000:2dba     EB 1B            JMP 0x1000:2dd7

LAB_1000_2dbc:
  1000:2dbc     8B D0            MOV DX,AX
  1000:2dbe     2B 57 04         SUB DX,word ptr [BX + 0x4]
  1000:2dc1     89 47 04         MOV word ptr [BX + 0x4],AX
  1000:2dc4     89 7F 08         MOV word ptr [BX + 0x8],DI
  1000:2dc7     8B 77 0A         MOV SI,word ptr [BX + 0xa]
  1000:2dca     4A               DEC DX
  1000:2dcb     89 14            MOV word ptr [SI],DX
  1000:2dcd     42               INC DX
  1000:2dce     03 F2            ADD SI,DX
  1000:2dd0     C7 04 FE FF      MOV word ptr [SI],0xfffe
  1000:2dd4     89 77 0A         MOV word ptr [BX + 0xa],SI

LAB_1000_2dd7:
  1000:2dd7     5F               POP DI
  1000:2dd8     59               POP CX
  1000:2dd9     C3               RET

FUN_1000_2dda:
  1000:2dda     8B D0            MOV DX,AX
  1000:2ddc     F6 47 02 04      TEST byte ptr [BX + 0x2],0x4
  1000:2de0     74 0F            JZ 0x1000:2df1
  1000:2de2     4A               DEC DX
  1000:2de3     8B 77 04         MOV SI,word ptr [BX + 0x4]
  1000:2de6     4E               DEC SI
  1000:2de7     3B D6            CMP DX,SI
  1000:2de9     72 05            JC 0x1000:2df0
  1000:2deb     39 57 FE         CMP word ptr [BX + -0x2],DX
  1000:2dee     73 36            JNC 0x1000:2e26

LAB_1000_2df0:
  1000:2df0     42               INC DX

LAB_1000_2df1:
  1000:2df1     53               PUSH BX
  1000:2df2     51               PUSH CX
  1000:2df3     8C DE            MOV SI,DS
  1000:2df5     8E C6            MOV ES,SI
  1000:2df7     B1 04            MOV CL,0x4
  1000:2df9     D3 E8            SHR AX,CL
  1000:2dfb     75 03            JNZ 0x1000:2e00
  1000:2dfd     B8 00 10         MOV AX,0x1000

LAB_1000_2e00:
  1000:2e00     F6 47 02 04      TEST byte ptr [BX + 0x2],0x4
  1000:2e04     74 0A            JZ 0x1000:2e10
  1000:2e06     03 C6            ADD AX,SI
  1000:2e08     8B 1E C8 06      MOV BX,word ptr [0x6c8]
  1000:2e0c     2B C3            SUB AX,BX
  1000:2e0e     8E C3            MOV ES,BX

LAB_1000_2e10:
  1000:2e10     8B D8            MOV BX,AX
  1000:2e12     B4 4A            MOV AH,0x4a
  1000:2e14     CD 21            INT 0x21
  1000:2e16     59               POP CX
  1000:2e17     5B               POP BX
  1000:2e18     72 10            JC 0x1000:2e2a
  1000:2e1a     8B C2            MOV AX,DX
  1000:2e1c     F6 47 02 04      TEST byte ptr [BX + 0x2],0x4
  1000:2e20     74 04            JZ 0x1000:2e26
  1000:2e22     4A               DEC DX
  1000:2e23     89 57 FE         MOV word ptr [BX + -0x2],DX

LAB_1000_2e26:
  1000:2e26     F8               CLC
  1000:2e27     EB 01            JMP 0x1000:2e2a

LAB_1000_2e2a:
  1000:2e2a     C3               RET

FUN_1000_2e2b:
  1000:2e2b     57               PUSH DI
  1000:2e2c     8B 77 08         MOV SI,word ptr [BX + 0x8]
  1000:2e2f     3B 77 0A         CMP SI,word ptr [BX + 0xa]
  1000:2e32     75 03            JNZ 0x1000:2e37
  1000:2e34     8B 77 06         MOV SI,word ptr [BX + 0x6]

LAB_1000_2e37:
  1000:2e37     AD               LODSW SI
  1000:2e38     3D FE FF         CMP AX,0xfffe
  1000:2e3b     74 08            JZ 0x1000:2e45
  1000:2e3d     8B FE            MOV DI,SI
  1000:2e3f     24 FE            AND AL,0xfe
  1000:2e41     03 F0            ADD SI,AX
  1000:2e43     EB F2            JMP 0x1000:2e37

LAB_1000_2e45:
  1000:2e45     4F               DEC DI
  1000:2e46     4F               DEC DI
  1000:2e47     8B F7            MOV SI,DI
  1000:2e49     5F               POP DI
  1000:2e4a     C3               RET

FUN_1000_2e4c:
  1000:2e4c     55               PUSH BP
  1000:2e4d     8B EC            MOV BP,SP
  1000:2e4f     57               PUSH DI
  1000:2e50     56               PUSH SI
  1000:2e51     1E               PUSH DS
  1000:2e52     07               POP ES
  1000:2e53     8B 4E 08         MOV CX,word ptr [BP + 0x8]
  1000:2e56     E3 26            JCXZ 0x1000:2e7e
  1000:2e58     8B D9            MOV BX,CX
  1000:2e5a     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:2e5d     8B F7            MOV SI,DI
  1000:2e5f     33 C0            XOR AX,AX
  1000:2e61     F2 AE            SCASB.REPNE ES:DI
  1000:2e63     F7 D9            NEG CX
  1000:2e65     03 CB            ADD CX,BX
  1000:2e67     8B FE            MOV DI,SI
  1000:2e69     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:2e6c     F3 A6            CMPSB.REPE ES:DI,SI
  1000:2e6e     8A 44 FF         MOV AL,byte ptr [SI + -0x1]
  1000:2e71     33 C9            XOR CX,CX
  1000:2e73     3A 45 FF         CMP AL,byte ptr [DI + -0x1]
  1000:2e76     77 04            JA 0x1000:2e7c
  1000:2e78     74 04            JZ 0x1000:2e7e
  1000:2e7a     49               DEC CX
  1000:2e7b     49               DEC CX

LAB_1000_2e7c:
  1000:2e7c     F7 D1            NOT CX

LAB_1000_2e7e:
  1000:2e7e     8B C1            MOV AX,CX
  1000:2e80     5E               POP SI
  1000:2e81     5F               POP DI
  1000:2e82     8B E5            MOV SP,BP
  1000:2e84     5D               POP BP
  1000:2e85     C3               RET

FUN_1000_2e86:
  1000:2e86     55               PUSH BP
  1000:2e87     8B EC            MOV BP,SP
  1000:2e89     8B D6            MOV DX,SI
  1000:2e8b     8B 76 06         MOV SI,word ptr [BP + 0x6]
  1000:2e8e     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:2e91     B0 FF            MOV AL,0xff

LAB_1000_2e93:
  1000:2e93     0A C0            OR AL,AL
  1000:2e95     74 2C            JZ 0x1000:2ec3
  1000:2e97     AC               LODSB SI
  1000:2e98     8A 27            MOV AH,byte ptr [BX]
  1000:2e9a     43               INC BX
  1000:2e9b     3A E0            CMP AH,AL
  1000:2e9d     74 F4            JZ 0x1000:2e93
  1000:2e9f     2C 41            SUB AL,0x41
  1000:2ea1     3C 1A            CMP AL,0x1a
  1000:2ea3     1A C9            SBB CL,CL
  1000:2ea5     80 E1 20         AND CL,0x20
  1000:2ea8     02 C1            ADD AL,CL
  1000:2eaa     04 41            ADD AL,0x41
  1000:2eac     86 E0            XCHG AL,AH
  1000:2eae     2C 41            SUB AL,0x41
  1000:2eb0     3C 1A            CMP AL,0x1a
  1000:2eb2     1A C9            SBB CL,CL
  1000:2eb4     80 E1 20         AND CL,0x20
  1000:2eb7     02 C1            ADD AL,CL
  1000:2eb9     04 41            ADD AL,0x41
  1000:2ebb     3A C4            CMP AL,AH
  1000:2ebd     74 D4            JZ 0x1000:2e93
  1000:2ebf     1A C0            SBB AL,AL
  1000:2ec1     1C FF            SBB AL,0xff

LAB_1000_2ec3:
  1000:2ec3     98               CBW
  1000:2ec4     8B F2            MOV SI,DX
  1000:2ec6     5D               POP BP
  1000:2ec7     C3               RET

FUN_1000_2ec8:
  1000:2ec8     55               PUSH BP
  1000:2ec9     8B EC            MOV BP,SP
  1000:2ecb     57               PUSH DI
  1000:2ecc     1E               PUSH DS
  1000:2ecd     07               POP ES
  1000:2ece     8B 7E 04         MOV DI,word ptr [BP + 0x4]
  1000:2ed1     33 C0            XOR AX,AX
  1000:2ed3     B9 FF FF         MOV CX,0xffff
  1000:2ed6     F2 AE            SCASB.REPNE ES:DI
  1000:2ed8     41               INC CX
  1000:2ed9     F7 D9            NEG CX
  1000:2edb     4F               DEC DI
  1000:2edc     8A 46 06         MOV AL,byte ptr [BP + 0x6]
  1000:2edf     FD               STD
  1000:2ee0     F2 AE            SCASB.REPNE ES:DI
  1000:2ee2     47               INC DI
  1000:2ee3     38 05            CMP byte ptr [DI],AL
  1000:2ee5     74 04            JZ 0x1000:2eeb
  1000:2ee7     33 C0            XOR AX,AX
  1000:2ee9     EB 02            JMP 0x1000:2eed

LAB_1000_2eeb:
  1000:2eeb     8B C7            MOV AX,DI

LAB_1000_2eed:
  1000:2eed     FC               CLD
  1000:2eee     5F               POP DI
  1000:2eef     8B E5            MOV SP,BP
  1000:2ef1     5D               POP BP
  1000:2ef2     C3               RET

FUN_1000_2ef4:
  1000:2ef4     55               PUSH BP
  1000:2ef5     8B EC            MOV BP,SP
  1000:2ef7     83 EC 02         SUB SP,0x2
  1000:2efa     57               PUSH DI
  1000:2efb     56               PUSH SI
  1000:2efc     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:2eff     8B 7E 06         MOV DI,word ptr [BP + 0x6]
  1000:2f02     89 76 FE         MOV word ptr [BP + -0x2],SI
  1000:2f05     FF 4E 08         DEC word ptr [BP + 0x8]
  1000:2f08     74 20            JZ 0x1000:2f2a

LAB_1000_2f0a:
  1000:2f0a     80 3C 00         CMP byte ptr [SI],0x0
  1000:2f0d     74 16            JZ 0x1000:2f25
  1000:2f0f     80 3C 3B         CMP byte ptr [SI],0x3b
  1000:2f12     74 11            JZ 0x1000:2f25
  1000:2f14     8A 04            MOV AL,byte ptr [SI]
  1000:2f16     88 05            MOV byte ptr [DI],AL
  1000:2f18     46               INC SI
  1000:2f19     47               INC DI
  1000:2f1a     FF 4E 08         DEC word ptr [BP + 0x8]
  1000:2f1d     75 EB            JNZ 0x1000:2f0a
  1000:2f1f     89 76 FE         MOV word ptr [BP + -0x2],SI
  1000:2f22     EB 06            JMP 0x1000:2f2a

LAB_1000_2f24:
  1000:2f24     46               INC SI

LAB_1000_2f25:
  1000:2f25     80 3C 3B         CMP byte ptr [SI],0x3b
  1000:2f28     74 FA            JZ 0x1000:2f24

LAB_1000_2f2a:
  1000:2f2a     C6 05 00         MOV byte ptr [DI],0x0
  1000:2f2d     39 76 FE         CMP word ptr [BP + -0x2],SI
  1000:2f30     74 04            JZ 0x1000:2f36
  1000:2f32     8B C6            MOV AX,SI
  1000:2f34     EB 02            JMP 0x1000:2f38

LAB_1000_2f36:
  1000:2f36     2B C0            SUB AX,AX

LAB_1000_2f38:
  1000:2f38     5E               POP SI
  1000:2f39     5F               POP DI
  1000:2f3a     8B E5            MOV SP,BP
  1000:2f3c     5D               POP BP
  1000:2f3d     C3               RET

FUN_1000_2f3e:
  1000:2f3e     55               PUSH BP
  1000:2f3f     8B EC            MOV BP,SP
  1000:2f41     83 EC 0C         SUB SP,0xc
  1000:2f44     57               PUSH DI
  1000:2f45     56               PUSH SI
  1000:2f46     2B F6            SUB SI,SI
  1000:2f48     39 76 06         CMP word ptr [BP + 0x6],SI
  1000:2f4b     75 06            JNZ 0x1000:2f53
  1000:2f4d     A1 E9 06         MOV AX,[0x6e9]
  1000:2f50     89 46 06         MOV word ptr [BP + 0x6],AX

LAB_1000_2f53:
  1000:2f53     39 76 06         CMP word ptr [BP + 0x6],SI
  1000:2f56     74 25            JZ 0x1000:2f7d
  1000:2f58     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:2f5b     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:2f5e     EB 0F            JMP 0x1000:2f6f

LAB_1000_2f60:
  1000:2f60     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:2f64     FF 37            PUSH word ptr [BX]
  1000:2f66     E8 0F ED         CALL 0x1000:1c78
  1000:2f69     83 C4 02         ADD SP,0x2
  1000:2f6c     40               INC AX
  1000:2f6d     03 F0            ADD SI,AX

LAB_1000_2f6f:
  1000:2f6f     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:2f72     83 3F 00         CMP word ptr [BX],0x0
  1000:2f75     74 06            JZ 0x1000:2f7d
  1000:2f77     81 FE FF 7F      CMP SI,0x7fff
  1000:2f7b     76 E3            JBE 0x1000:2f60

LAB_1000_2f7d:
  1000:2f7d     83 3E CA 0B 00   CMP word ptr [0xbca],0x0
  1000:2f82     74 1E            JZ 0x1000:2fa2
  1000:2f84     A1 CF 06         MOV AX,[0x6cf]
  1000:2f87     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:2f8a     EB 03            JMP 0x1000:2f8f

LAB_1000_2f8c:
  1000:2f8c     FF 4E FE         DEC word ptr [BP + -0x2]

LAB_1000_2f8f:
  1000:2f8f     83 7E FE 00      CMP word ptr [BP + -0x2],0x0
  1000:2f93     74 12            JZ 0x1000:2fa7
  1000:2f95     8B 5E FE         MOV BX,word ptr [BP + -0x2]
  1000:2f98     80 BF D0 06 00   CMP byte ptr [BX + 0x6d0],0x0
  1000:2f9d     75 08            JNZ 0x1000:2fa7
  1000:2f9f     EB EB            JMP 0x1000:2f8c

LAB_1000_2fa2:
  1000:2fa2     C7 46 FE 00 00   MOV word ptr [BP + -0x2],0x0

LAB_1000_2fa7:
  1000:2fa7     83 7E FE 00      CMP word ptr [BP + -0x2],0x0
  1000:2fab     74 0A            JZ 0x1000:2fb7
  1000:2fad     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:2fb0     05 07 00         ADD AX,0x7
  1000:2fb3     D1 E0            SHL AX,0x1
  1000:2fb5     03 F0            ADD SI,AX

LAB_1000_2fb7:
  1000:2fb7     83 7E 0E 00      CMP word ptr [BP + 0xe],0x0
  1000:2fbb     74 0E            JZ 0x1000:2fcb
  1000:2fbd     FF 76 0E         PUSH word ptr [BP + 0xe]
  1000:2fc0     E8 B5 EC         CALL 0x1000:1c78
  1000:2fc3     83 C4 02         ADD SP,0x2
  1000:2fc6     05 03 00         ADD AX,0x3
  1000:2fc9     03 F0            ADD SI,AX

LAB_1000_2fcb:
  1000:2fcb     46               INC SI
  1000:2fcc     89 76 F8         MOV word ptr [BP + -0x8],SI
  1000:2fcf     81 FE FF 7F      CMP SI,0x7fff
  1000:2fd3     76 13            JBE 0x1000:2fe8
  1000:2fd5     C7 06 C2 06 07 00   MOV word ptr [0x6c2],0x7
  1000:2fdb     C7 06 CD 06 0A 00   MOV word ptr [0x6cd],0xa

LAB_1000_2fe1:
  1000:2fe1     B8 FF FF         MOV AX,0xffff
  1000:2fe4     E9 A6 01         JMP 0x1000:318d

LAB_1000_2fe8:
  1000:2fe8     8B 36 82 0B      MOV SI,word ptr [0xb82]
  1000:2fec     C7 06 82 0B 10 00   MOV word ptr [0xb82],0x10
  1000:2ff2     8B 46 F8         MOV AX,word ptr [BP + -0x8]
  1000:2ff5     05 0F 00         ADD AX,0xf
  1000:2ff8     50               PUSH AX
  1000:2ff9     E8 74 EC         CALL 0x1000:1c70
  1000:2ffc     83 C4 02         ADD SP,0x2
  1000:2fff     8B F8            MOV DI,AX
  1000:3001     0B FF            OR DI,DI
  1000:3003     75 13            JNZ 0x1000:3018
  1000:3005     C7 06 C2 06 0C 00   MOV word ptr [0x6c2],0xc
  1000:300b     C7 06 CD 06 08 00   MOV word ptr [0x6cd],0x8
  1000:3011     89 36 82 0B      MOV word ptr [0xb82],SI
  1000:3015     EB CA            JMP 0x1000:2fe1

LAB_1000_3018:
  1000:3018     89 36 82 0B      MOV word ptr [0xb82],SI
  1000:301c     8B 5E 08         MOV BX,word ptr [BP + 0x8]
  1000:301f     89 3F            MOV word ptr [BX],DI
  1000:3021     05 0F 00         ADD AX,0xf
  1000:3024     24 F0            AND AL,0xf0
  1000:3026     8B F8            MOV DI,AX
  1000:3028     8B 5E 0A         MOV BX,word ptr [BP + 0xa]
  1000:302b     89 3F            MOV word ptr [BX],DI
  1000:302d     83 7E 06 00      CMP word ptr [BP + 0x6],0x0
  1000:3031     74 2B            JZ 0x1000:305e
  1000:3033     8B 46 06         MOV AX,word ptr [BP + 0x6]
  1000:3036     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:3039     EB 1B            JMP 0x1000:3056

LAB_1000_303c:
  1000:303c     2B C0            SUB AX,AX
  1000:303e     50               PUSH AX
  1000:303f     FF 37            PUSH word ptr [BX]
  1000:3041     57               PUSH DI
  1000:3042     E8 1D F8         CALL 0x1000:2862
  1000:3045     83 C4 04         ADD SP,0x4
  1000:3048     50               PUSH AX
  1000:3049     E8 3E ED         CALL 0x1000:1d8a
  1000:304c     83 C4 04         ADD SP,0x4
  1000:304f     40               INC AX
  1000:3050     8B F8            MOV DI,AX
  1000:3052     83 46 FA 02      ADD word ptr [BP + -0x6],0x2

LAB_1000_3056:
  1000:3056     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:3059     83 3F 00         CMP word ptr [BX],0x0
  1000:305c     75 DE            JNZ 0x1000:303c

LAB_1000_305e:
  1000:305e     83 7E FE 00      CMP word ptr [BP + -0x2],0x0
  1000:3062     74 45            JZ 0x1000:30a9
  1000:3064     2B C0            SUB AX,AX
  1000:3066     50               PUSH AX
  1000:3067     B8 A6 06         MOV AX,0x6a6
  1000:306a     50               PUSH AX
  1000:306b     57               PUSH DI
  1000:306c     E8 F3 F7         CALL 0x1000:2862
  1000:306f     83 C4 04         ADD SP,0x4
  1000:3072     50               PUSH AX
  1000:3073     E8 14 ED         CALL 0x1000:1d8a
  1000:3076     83 C4 04         ADD SP,0x4
  1000:3079     8B F8            MOV DI,AX
  1000:307b     2B F6            SUB SI,SI
  1000:307d     EB 1C            JMP 0x1000:309b

LAB_1000_3080:
  1000:3080     8A 84 D1 06      MOV AL,byte ptr [SI + 0x6d1]
  1000:3084     B1 04            MOV CL,0x4
  1000:3086     8B D0            MOV DX,AX
  1000:3088     D2 F8            SAR AL,CL
  1000:308a     24 0F            AND AL,0xf
  1000:308c     04 41            ADD AL,0x41
  1000:308e     88 05            MOV byte ptr [DI],AL
  1000:3090     47               INC DI
  1000:3091     80 E2 0F         AND DL,0xf
  1000:3094     80 C2 41         ADD DL,0x41
  1000:3097     88 15            MOV byte ptr [DI],DL
  1000:3099     47               INC DI
  1000:309a     46               INC SI

LAB_1000_309b:
  1000:309b     8B 46 FE         MOV AX,word ptr [BP + -0x2]
  1000:309e     FF 4E FE         DEC word ptr [BP + -0x2]
  1000:30a1     0B C0            OR AX,AX
  1000:30a3     75 DB            JNZ 0x1000:3080
  1000:30a5     C6 05 00         MOV byte ptr [DI],0x0
  1000:30a8     47               INC DI

LAB_1000_30a9:
  1000:30a9     C6 05 00         MOV byte ptr [DI],0x0
  1000:30ac     47               INC DI
  1000:30ad     83 7E 0E 00      CMP word ptr [BP + 0xe],0x0
  1000:30b1     74 12            JZ 0x1000:30c5
  1000:30b3     C6 05 01         MOV byte ptr [DI],0x1
  1000:30b6     47               INC DI
  1000:30b7     C6 05 00         MOV byte ptr [DI],0x0
  1000:30ba     47               INC DI
  1000:30bb     FF 76 0E         PUSH word ptr [BP + 0xe]
  1000:30be     57               PUSH DI
  1000:30bf     E8 A0 F7         CALL 0x1000:2862
  1000:30c2     83 C4 04         ADD SP,0x4

LAB_1000_30c5:
  1000:30c5     2B F6            SUB SI,SI
  1000:30c7     8B 7E 0C         MOV DI,word ptr [BP + 0xc]
  1000:30ca     47               INC DI
  1000:30cb     39 76 10         CMP word ptr [BP + 0x10],SI
  1000:30ce     74 34            JZ 0x1000:3104
  1000:30d0     2B C0            SUB AX,AX
  1000:30d2     50               PUSH AX
  1000:30d3     FF 76 10         PUSH word ptr [BP + 0x10]
  1000:30d6     50               PUSH AX
  1000:30d7     B8 96 0B         MOV AX,0xb96
  1000:30da     50               PUSH AX
  1000:30db     57               PUSH DI
  1000:30dc     E8 83 F7         CALL 0x1000:2862
  1000:30df     83 C4 04         ADD SP,0x4
  1000:30e2     50               PUSH AX
  1000:30e3     E8 A4 EC         CALL 0x1000:1d8a
  1000:30e6     83 C4 04         ADD SP,0x4
  1000:30e9     8B F8            MOV DI,AX
  1000:30eb     57               PUSH DI
  1000:30ec     E8 73 F7         CALL 0x1000:2862
  1000:30ef     83 C4 04         ADD SP,0x4
  1000:30f2     50               PUSH AX
  1000:30f3     E8 94 EC         CALL 0x1000:1d8a
  1000:30f6     83 C4 04         ADD SP,0x4
  1000:30f9     2D 04 00         SUB AX,0x4
  1000:30fc     8B F8            MOV DI,AX
  1000:30fe     8B F0            MOV SI,AX
  1000:3100     2B 76 0C         SUB SI,word ptr [BP + 0xc]
  1000:3103     4E               DEC SI

LAB_1000_3104:
  1000:3104     8B 5E 04         MOV BX,word ptr [BP + 0x4]
  1000:3107     83 3F 00         CMP word ptr [BX],0x0
  1000:310a     74 74            JZ 0x1000:3180
  1000:310c     83 7F 02 00      CMP word ptr [BX + 0x2],0x0
  1000:3110     74 05            JZ 0x1000:3117
  1000:3112     C6 05 20         MOV byte ptr [DI],0x20
  1000:3115     47               INC DI
  1000:3116     46               INC SI

LAB_1000_3117:
  1000:3117     8B C3            MOV AX,BX
  1000:3119     40               INC AX
  1000:311a     40               INC AX
  1000:311b     89 46 FA         MOV word ptr [BP + -0x6],AX
  1000:311e     EB 58            JMP 0x1000:3178

LAB_1000_3120:
  1000:3120     FF 37            PUSH word ptr [BX]
  1000:3122     E8 53 EB         CALL 0x1000:1c78
  1000:3125     83 C4 02         ADD SP,0x2
  1000:3128     89 46 F6         MOV word ptr [BP + -0xa],AX
  1000:312b     03 C6            ADD AX,SI
  1000:312d     3D 7D 00         CMP AX,0x7d
  1000:3130     76 1A            JBE 0x1000:314c
  1000:3132     C7 06 C2 06 07 00   MOV word ptr [0x6c2],0x7
  1000:3138     C7 06 CD 06 0A 00   MOV word ptr [0x6cd],0xa
  1000:313e     8B 5E 08         MOV BX,word ptr [BP + 0x8]
  1000:3141     FF 37            PUSH word ptr [BX]
  1000:3143     E8 2E EB         CALL 0x1000:1c74
  1000:3146     83 C4 02         ADD SP,0x2
  1000:3149     E9 95 FE         JMP 0x1000:2fe1

LAB_1000_314c:
  1000:314c     03 76 F6         ADD SI,word ptr [BP + -0xa]
  1000:314f     2B C0            SUB AX,AX
  1000:3151     50               PUSH AX
  1000:3152     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:3155     83 46 FA 02      ADD word ptr [BP + -0x6],0x2
  1000:3159     FF 37            PUSH word ptr [BX]
  1000:315b     57               PUSH DI
  1000:315c     E8 03 F7         CALL 0x1000:2862
  1000:315f     83 C4 04         ADD SP,0x4
  1000:3162     50               PUSH AX
  1000:3163     E8 24 EC         CALL 0x1000:1d8a
  1000:3166     83 C4 04         ADD SP,0x4
  1000:3169     8B F8            MOV DI,AX
  1000:316b     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:316e     83 3F 00         CMP word ptr [BX],0x0
  1000:3171     74 05            JZ 0x1000:3178
  1000:3173     C6 05 20         MOV byte ptr [DI],0x20
  1000:3176     47               INC DI
  1000:3177     46               INC SI

LAB_1000_3178:
  1000:3178     8B 5E FA         MOV BX,word ptr [BP + -0x6]
  1000:317b     83 3F 00         CMP word ptr [BX],0x0
  1000:317e     75 A0            JNZ 0x1000:3120

LAB_1000_3180:
  1000:3180     C6 05 0D         MOV byte ptr [DI],0xd
  1000:3183     8B C6            MOV AX,SI
  1000:3185     8B 5E 0C         MOV BX,word ptr [BP + 0xc]
  1000:3188     88 07            MOV byte ptr [BX],AL
  1000:318a     8B 46 F8         MOV AX,word ptr [BP + -0x8]

LAB_1000_318d:
  1000:318d     5E               POP SI
  1000:318e     5F               POP DI
  1000:318f     8B E5            MOV SP,BP
  1000:3191     5D               POP BP
  1000:3192     C3               RET

FUN_1000_319e:
  1000:319e     55               PUSH BP
  1000:319f     8B EC            MOV BP,SP
  1000:31a1     83 7E 04 01      CMP word ptr [BP + 0x4],0x1
  1000:31a5     74 13            JZ 0x1000:31ba
  1000:31a7     83 7E 04 00      CMP word ptr [BP + 0x4],0x0
  1000:31ab     74 0D            JZ 0x1000:31ba
  1000:31ad     C7 06 C2 06 16 00   MOV word ptr [0x6c2],0x16
  1000:31b3     B8 FF FF         MOV AX,0xffff
  1000:31b6     F8               CLC
  1000:31b7     E9 05 F0         JMP 0x1000:21bf

LAB_1000_31ba:
  1000:31ba     56               PUSH SI
  1000:31bb     57               PUSH DI
  1000:31bc     8C D8            MOV AX,DS
  1000:31be     8B 5E 0A         MOV BX,word ptr [BP + 0xa]
  1000:31c1     B1 04            MOV CL,0x4
  1000:31c3     D3 EB            SHR BX,CL
  1000:31c5     03 C3            ADD AX,BX
  1000:31c7     A3 9A 0B         MOV [0xb9a],AX
  1000:31ca     8B 46 08         MOV AX,word ptr [BP + 0x8]
  1000:31cd     A3 9C 0B         MOV [0xb9c],AX
  1000:31d0     8C 1E 9E 0B      MOV word ptr [0xb9e],DS
  1000:31d4     8C 1E A2 0B      MOV word ptr [0xba2],DS
  1000:31d8     8C 1E A6 0B      MOV word ptr [0xba6],DS
  1000:31dc     1E               PUSH DS
  1000:31dd     07               POP ES
  1000:31de     8B 36 9C 0B      MOV SI,word ptr [0xb9c]
  1000:31e2     46               INC SI
  1000:31e3     BF A8 0B         MOV DI,0xba8
  1000:31e6     B8 01 29         MOV AX,0x2901
  1000:31e9     CD 21            INT 0x21
  1000:31eb     B8 01 29         MOV AX,0x2901
  1000:31ee     BF B8 0B         MOV DI,0xbb8
  1000:31f1     CD 21            INT 0x21
  1000:31f3     81 3E CE 0B D6 D6   CMP word ptr [0xbce],0xd6d6
  1000:31f9     75 07            JNZ 0x1000:3202
  1000:31fb     BB FF FF         MOV BX,0xffff
  1000:31fe     FF 16 D0 0B      CALL word ptr [0xbd0]

LAB_1000_3202:
  1000:3202     55               PUSH BP
  1000:3203     06               PUSH ES
  1000:3204     1E               PUSH DS
  1000:3205     2E 8C 16 96 31   MOV word ptr CS:[0x3196],SS
  1000:320a     2E 89 26 94 31   MOV word ptr CS:[0x3194],SP
  1000:320f     BF 2E 00         MOV DI,0x2e
  1000:3212     8B 35            MOV SI,word ptr [DI]
  1000:3214     2E 89 36 98 31   MOV word ptr CS:[0x3198],SI
  1000:3219     8B 75 02         MOV SI,word ptr [DI + 0x2]
  1000:321c     2E 89 36 9A 31   MOV word ptr CS:[0x319a],SI
  1000:3221     2E 8C 1E 9C 31   MOV word ptr CS:[0x319c],DS
  1000:3226     BB 9A 0B         MOV BX,0xb9a
  1000:3229     83 7E 04 00      CMP word ptr [BP + 0x4],0x0
  1000:322d     74 06            JZ 0x1000:3235
  1000:322f     B0 04            MOV AL,0x4
  1000:3231     33 C9            XOR CX,CX
  1000:3233     EB 02            JMP 0x1000:3237

LAB_1000_3235:
  1000:3235     32 C0            XOR AL,AL

LAB_1000_3237:
  1000:3237     F8               CLC
  1000:3238     50               PUSH AX
  1000:3239     B4 0B            MOV AH,0xb
  1000:323b     CD 21            INT 0x21
  1000:323d     58               POP AX
  1000:323e     C7 06 F0 06 01 00   MOV word ptr [0x6f0],0x1
  1000:3244     8B 56 06         MOV DX,word ptr [BP + 0x6]
  1000:3247     B4 4B            MOV AH,0x4b
  1000:3249     CD 21            INT 0x21
  1000:324b     93               XCHG AX,BX
  1000:324c     9F               LAHF
  1000:324d     FA               CLI
  1000:324e     2E 8E 16 96 31   MOV SS,word ptr CS:[0x3196]
  1000:3253     2E 8B 26 94 31   MOV SP,word ptr CS:[0x3194]
  1000:3258     FB               STI
  1000:3259     BF 2E 00         MOV DI,0x2e
  1000:325c     2E 8E 1E 9C 31   MOV DS,word ptr CS:[0x319c]
  1000:3261     2E 8B 36 9A 31   MOV SI,word ptr CS:[0x319a]
  1000:3266     89 75 02         MOV word ptr [DI + 0x2],SI
  1000:3269     2E 8B 36 98 31   MOV SI,word ptr CS:[0x3198]
  1000:326e     89 35            MOV word ptr [DI],SI
  1000:3270     9E               SAHF
  1000:3271     93               XCHG AX,BX
  1000:3272     1F               POP DS
  1000:3273     C7 06 F0 06 00 00   MOV word ptr [0x6f0],0x0
  1000:3279     07               POP ES
  1000:327a     5D               POP BP
  1000:327b     5F               POP DI
  1000:327c     5E               POP SI
  1000:327d     72 04            JC 0x1000:3283
  1000:327f     B4 4D            MOV AH,0x4d
  1000:3281     CD 21            INT 0x21

LAB_1000_3283:
  1000:3283     E9 39 EF         JMP 0x1000:21bf

FUN_1000_3286:
  1000:3286     8B 0E EC 0B      MOV CX,word ptr [0xbec]
  1000:328a     E3 02            JCXZ 0x1000:328e
  1000:328c     FF E1            JMP CX

LAB_1000_328e:
  1000:328e     B8 FF FF         MOV AX,0xffff
  1000:3291     C7 06 C2 06 16 00   MOV word ptr [0x6c2],0x16
  1000:3297     E9 25 EF         JMP 0x1000:21bf

FUN_1000_329a:
  1000:329a     55               PUSH BP
  1000:329b     8B EC            MOV BP,SP
  1000:329d     83 EC 02         SUB SP,0x2
  1000:32a0     57               PUSH DI
  1000:32a1     56               PUSH SI
  1000:32a2     2B FF            SUB DI,DI
  1000:32a4     39 7E 04         CMP word ptr [BP + 0x4],DI
  1000:32a7     75 09            JNZ 0x1000:32b2
  1000:32a9     2B C0            SUB AX,AX
  1000:32ab     50               PUSH AX
  1000:32ac     E8 65 00         CALL 0x1000:3314
  1000:32af     EB 55            JMP 0x1000:3306

LAB_1000_32b2:
  1000:32b2     8B 76 04         MOV SI,word ptr [BP + 0x4]
  1000:32b5     8A 44 06         MOV AL,byte ptr [SI + 0x6]
  1000:32b8     8B C8            MOV CX,AX
  1000:32ba     24 03            AND AL,0x3
  1000:32bc     3C 02            CMP AL,0x2
  1000:32be     75 3A            JNZ 0x1000:32fa
  1000:32c0     F6 C1 08         TEST CL,0x8
  1000:32c3     75 0D            JNZ 0x1000:32d2
  1000:32c5     8B DE            MOV BX,SI
  1000:32c7     81 EB 40 0A      SUB BX,0xa40
  1000:32cb     F6 87 E0 0A 01   TEST byte ptr [BX + 0xae0],0x1
  1000:32d0     74 28            JZ 0x1000:32fa

LAB_1000_32d2:
  1000:32d2     8B 04            MOV AX,word ptr [SI]
  1000:32d4     2B 44 04         SUB AX,word ptr [SI + 0x4]
  1000:32d7     89 46 FE         MOV word ptr [BP + -0x2],AX
  1000:32da     0B C0            OR AX,AX
  1000:32dc     7E 1C            JLE 0x1000:32fa
  1000:32de     50               PUSH AX
  1000:32df     FF 74 04         PUSH word ptr [SI + 0x4]
  1000:32e2     8A 4C 07         MOV CL,byte ptr [SI + 0x7]
  1000:32e5     2A ED            SUB CH,CH
  1000:32e7     51               PUSH CX
  1000:32e8     E8 47 E8         CALL 0x1000:1b32
  1000:32eb     83 C4 06         ADD SP,0x6
  1000:32ee     39 46 FE         CMP word ptr [BP + -0x2],AX
  1000:32f1     74 07            JZ 0x1000:32fa
  1000:32f3     80 4C 06 20      OR byte ptr [SI + 0x6],0x20
  1000:32f7     BF FF FF         MOV DI,0xffff

LAB_1000_32fa:
  1000:32fa     8B 44 04         MOV AX,word ptr [SI + 0x4]
  1000:32fd     89 04            MOV word ptr [SI],AX
  1000:32ff     C7 44 02 00 00   MOV word ptr [SI + 0x2],0x0
  1000:3304     8B C7            MOV AX,DI

LAB_1000_3306:
  1000:3306     5E               POP SI
  1000:3307     5F               POP DI
  1000:3308     8B E5            MOV SP,BP
  1000:330a     5D               POP BP
  1000:330b     C3               RET

FUN_1000_3314:
  1000:3314     55               PUSH BP
  1000:3315     8B EC            MOV BP,SP
  1000:3317     83 EC 02         SUB SP,0x2
  1000:331a     57               PUSH DI
  1000:331b     56               PUSH SI
  1000:331c     BE 40 0A         MOV SI,0xa40
  1000:331f     2B FF            SUB DI,DI
  1000:3321     89 7E FE         MOV word ptr [BP + -0x2],DI
  1000:3324     EB 08            JMP 0x1000:332e

LAB_1000_3326:
  1000:3326     C7 46 FE FF FF   MOV word ptr [BP + -0x2],0xffff

LAB_1000_332b:
  1000:332b     83 C6 08         ADD SI,0x8

LAB_1000_332e:
  1000:332e     39 36 80 0B      CMP word ptr [0xb80],SI
  1000:3332     72 14            JC 0x1000:3348
  1000:3334     F6 44 06 83      TEST byte ptr [SI + 0x6],0x83
  1000:3338     74 F1            JZ 0x1000:332b
  1000:333a     56               PUSH SI
  1000:333b     E8 5C FF         CALL 0x1000:329a
  1000:333e     83 C4 02         ADD SP,0x2
  1000:3341     40               INC AX
  1000:3342     74 E2            JZ 0x1000:3326
  1000:3344     47               INC DI
  1000:3345     EB E4            JMP 0x1000:332b

LAB_1000_3348:
  1000:3348     83 7E 04 01      CMP word ptr [BP + 0x4],0x1
  1000:334c     75 04            JNZ 0x1000:3352
  1000:334e     8B C7            MOV AX,DI
  1000:3350     EB 03            JMP 0x1000:3355

LAB_1000_3352:
  1000:3352     8B 46 FE         MOV AX,word ptr [BP + -0x2]

LAB_1000_3355:
  1000:3355     5E               POP SI
  1000:3356     5F               POP DI
  1000:3357     8B E5            MOV SP,BP
  1000:3359     5D               POP BP
  1000:335a     C2 02 00         RET 0x2

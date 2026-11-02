; ============================================================================
; Linear Disassembly for: SIERRA.EXE
; Architecture: 16-bit x86 Real Mode
; ============================================================================


entry:
  135c:0012     8C C0            MOV AX,ES
  135c:0014     05 10 00         ADD AX,0x10
  135c:0017     0E               PUSH CS
  135c:0018     1F               POP DS
  135c:0019     A3 04 00         MOV [0x4],AX
  135c:001c     03 06 0C 00      ADD AX,word ptr [0xc]
  135c:0020     8E C0            MOV ES,AX
  135c:0022     8B 0E 06 00      MOV CX,word ptr [0x6]
  135c:0026     8B F9            MOV DI,CX
  135c:0028     4F               DEC DI
  135c:0029     8B F7            MOV SI,DI
  135c:002b     FD               STD
  135c:002c     F3 A4            MOVSB.REP ES:DI,SI
  135c:002e     8B 16 0E 00      MOV DX,word ptr [0xe]
  135c:0032     50               PUSH AX
  135c:0033     B8 38 00         MOV AX,0x38
  135c:0036     50               PUSH AX
  135c:0037     CB               RETF

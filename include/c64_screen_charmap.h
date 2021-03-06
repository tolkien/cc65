/*****************************************************************************/
/*                                                                           */
/* c64_screen_charmap.h                                                      */
/*                                                                           */
/* (c) Copyright 2019, Gerhard W. Gruber (sparhawk@gmx.at)                   */
/*                                                                           */
/* When using C64 mode, this include converts the characters                 */
/* from PETSCII to screen mapping, so you can write directly to              */
/* the screen memory.                                                        */
/*                                                                           */
/* If this include is used, no additional macros are needed                  */
/*                                                                           */
/*****************************************************************************/

/* No include guard here! Multiple use in one file may be intentional. */

// Char $00 ... $1F -> c + 128
#pragma warn (remap-zero, push, off)
#pragma charmap ($00, $80)
#pragma warn (remap-zero, pop)

#pragma charmap ($01, $81)
#pragma charmap ($02, $82)
#pragma charmap ($03, $83)
#pragma charmap ($04, $84)
#pragma charmap ($05, $85)
#pragma charmap ($06, $86)
#pragma charmap ($07, $87)
#pragma charmap ($08, $88)
#pragma charmap ($09, $89)
#pragma charmap ($0A, $8A)
#pragma charmap ($0B, $8B)
#pragma charmap ($0C, $8C)
#pragma charmap ($0D, $8D)
#pragma charmap ($0E, $8E)
#pragma charmap ($0F, $8F)
#pragma charmap ($10, $90)
#pragma charmap ($11, $91)
#pragma charmap ($12, $92)
#pragma charmap ($13, $93)
#pragma charmap ($14, $94)
#pragma charmap ($15, $95)
#pragma charmap ($16, $96)
#pragma charmap ($17, $97)
#pragma charmap ($18, $98)
#pragma charmap ($19, $99)
#pragma charmap ($1A, $9A)
#pragma charmap ($1B, $9B)
#pragma charmap ($1C, $9C)
#pragma charmap ($1D, $9D)
#pragma charmap ($1E, $9E)
#pragma charmap ($1F, $9F)

// Char $20 ... $3F -> c = c
#pragma charmap ($20, $20)
#pragma charmap ($21, $21)
#pragma charmap ($22, $22)
#pragma charmap ($23, $23)
#pragma charmap ($24, $24)
#pragma charmap ($25, $25)
#pragma charmap ($26, $26)
#pragma charmap ($27, $27)
#pragma charmap ($28, $28)
#pragma charmap ($29, $29)
#pragma charmap ($2A, $2A)
#pragma charmap ($2B, $2B)
#pragma charmap ($2C, $2C)
#pragma charmap ($2D, $2D)
#pragma charmap ($2E, $2E)
#pragma charmap ($2F, $2F)
#pragma charmap ($30, $30)
#pragma charmap ($31, $31)
#pragma charmap ($32, $32)
#pragma charmap ($33, $33)
#pragma charmap ($34, $34)
#pragma charmap ($35, $35)
#pragma charmap ($36, $36)
#pragma charmap ($37, $37)
#pragma charmap ($38, $38)
#pragma charmap ($39, $39)
#pragma charmap ($3A, $3A)
#pragma charmap ($3B, $3B)
#pragma charmap ($3C, $3C)
#pragma charmap ($3D, $3D)
#pragma charmap ($3E, $3E)
#pragma charmap ($3F, $3F)

// Char $40 ... $5F -> c - 64
#pragma charmap ($40, $00)
#pragma charmap ($41, $01)
#pragma charmap ($42, $02)
#pragma charmap ($43, $03)
#pragma charmap ($44, $04)
#pragma charmap ($45, $05)
#pragma charmap ($46, $06)
#pragma charmap ($47, $07)
#pragma charmap ($48, $08)
#pragma charmap ($49, $09)
#pragma charmap ($4A, $0A)
#pragma charmap ($4B, $0B)
#pragma charmap ($4C, $0C)
#pragma charmap ($4D, $0D)
#pragma charmap ($4E, $0E)
#pragma charmap ($4F, $0F)
#pragma charmap ($50, $10)
#pragma charmap ($51, $11)
#pragma charmap ($52, $12)
#pragma charmap ($53, $13)
#pragma charmap ($54, $14)
#pragma charmap ($55, $15)
#pragma charmap ($56, $16)
#pragma charmap ($57, $17)
#pragma charmap ($58, $18)
#pragma charmap ($59, $19)
#pragma charmap ($5A, $1A)
#pragma charmap ($5B, $1B)
#pragma charmap ($5C, $1C)
#pragma charmap ($5D, $1D)
#pragma charmap ($5E, $1E)
#pragma charmap ($5F, $1F)

// Char $60 ... $7F -> c - 32
#pragma charmap ($60, $40)
#pragma charmap ($61, $41)
#pragma charmap ($62, $42)
#pragma charmap ($63, $43)
#pragma charmap ($64, $44)
#pragma charmap ($65, $45)
#pragma charmap ($66, $46)
#pragma charmap ($67, $47)
#pragma charmap ($68, $48)
#pragma charmap ($69, $49)
#pragma charmap ($6A, $4A)
#pragma charmap ($6B, $4B)
#pragma charmap ($6C, $4C)
#pragma charmap ($6D, $4D)
#pragma charmap ($6E, $4E)
#pragma charmap ($6F, $4F)
#pragma charmap ($70, $50)
#pragma charmap ($71, $51)
#pragma charmap ($72, $52)
#pragma charmap ($73, $53)
#pragma charmap ($74, $54)
#pragma charmap ($75, $55)
#pragma charmap ($76, $56)
#pragma charmap ($77, $57)
#pragma charmap ($78, $58)
#pragma charmap ($79, $59)
#pragma charmap ($7A, $5A)
#pragma charmap ($7B, $5B)
#pragma charmap ($7C, $5C)
#pragma charmap ($7D, $5D)
#pragma charmap ($7E, $5E)
#pragma charmap ($7F, $5F)

// Char $80 ... $9F -> c + 64
#pragma charmap ($80, $C0)
#pragma charmap ($81, $C1)
#pragma charmap ($82, $C2)
#pragma charmap ($83, $C3)
#pragma charmap ($84, $C4)
#pragma charmap ($85, $C5)
#pragma charmap ($86, $C6)
#pragma charmap ($87, $C7)
#pragma charmap ($88, $C8)
#pragma charmap ($89, $C9)
#pragma charmap ($8A, $CA)
#pragma charmap ($8B, $CB)
#pragma charmap ($8C, $CC)
#pragma charmap ($8D, $CD)
#pragma charmap ($8E, $CE)
#pragma charmap ($8F, $CF)
#pragma charmap ($90, $D0)
#pragma charmap ($91, $D1)
#pragma charmap ($92, $D2)
#pragma charmap ($93, $D3)
#pragma charmap ($94, $D4)
#pragma charmap ($95, $D5)
#pragma charmap ($96, $D6)
#pragma charmap ($97, $D7)
#pragma charmap ($98, $D8)
#pragma charmap ($99, $D9)
#pragma charmap ($9A, $DA)
#pragma charmap ($9B, $DB)
#pragma charmap ($9C, $DC)
#pragma charmap ($9D, $DD)
#pragma charmap ($9E, $DE)
#pragma charmap ($9F, $DF)

// Char $A0 ... $BF -> c - 64
#pragma charmap ($A0, $60)
#pragma charmap ($A1, $61)
#pragma charmap ($A2, $62)
#pragma charmap ($A3, $63)
#pragma charmap ($A4, $64)
#pragma charmap ($A5, $65)
#pragma charmap ($A6, $66)
#pragma charmap ($A7, $67)
#pragma charmap ($A8, $68)
#pragma charmap ($A9, $69)
#pragma charmap ($AA, $6A)
#pragma charmap ($AB, $6B)
#pragma charmap ($AC, $6C)
#pragma charmap ($AD, $6D)
#pragma charmap ($AE, $6E)
#pragma charmap ($AF, $6F)
#pragma charmap ($B0, $70)
#pragma charmap ($B1, $71)
#pragma charmap ($B2, $72)
#pragma charmap ($B3, $73)
#pragma charmap ($B4, $74)
#pragma charmap ($B5, $75)
#pragma charmap ($B6, $76)
#pragma charmap ($B7, $77)
#pragma charmap ($B8, $78)
#pragma charmap ($B9, $79)
#pragma charmap ($BA, $7A)
#pragma charmap ($BB, $7B)
#pragma charmap ($BC, $7C)
#pragma charmap ($BD, $7D)
#pragma charmap ($BE, $7E)
#pragma charmap ($BF, $7F)

// Char $C0 ... $DF -> c - 128
#pragma charmap ($C0, $40)
#pragma charmap ($C1, $41)
#pragma charmap ($C2, $42)
#pragma charmap ($C3, $43)
#pragma charmap ($C4, $44)
#pragma charmap ($C5, $45)
#pragma charmap ($C6, $46)
#pragma charmap ($C7, $47)
#pragma charmap ($C8, $48)
#pragma charmap ($C9, $49)
#pragma charmap ($CA, $4A)
#pragma charmap ($CB, $4B)
#pragma charmap ($CC, $4C)
#pragma charmap ($CD, $4D)
#pragma charmap ($CE, $4E)
#pragma charmap ($CF, $4F)
#pragma charmap ($D0, $50)
#pragma charmap ($D1, $51)
#pragma charmap ($D2, $52)
#pragma charmap ($D3, $53)
#pragma charmap ($D4, $54)
#pragma charmap ($D5, $55)
#pragma charmap ($D6, $56)
#pragma charmap ($D7, $57)
#pragma charmap ($D8, $58)
#pragma charmap ($D9, $59)
#pragma charmap ($DA, $5A)
#pragma charmap ($DB, $5B)
#pragma charmap ($DC, $5C)
#pragma charmap ($DD, $5D)
#pragma charmap ($DE, $5E)
#pragma charmap ($DF, $5F)

// Char $E0 ... $FE -> c - 128
#pragma charmap ($E0, $60)
#pragma charmap ($E1, $61)
#pragma charmap ($E2, $62)
#pragma charmap ($E3, $63)
#pragma charmap ($E4, $64)
#pragma charmap ($E5, $65)
#pragma charmap ($E6, $66)
#pragma charmap ($E7, $67)
#pragma charmap ($E8, $68)
#pragma charmap ($E9, $69)
#pragma charmap ($EA, $6A)
#pragma charmap ($EB, $6B)
#pragma charmap ($EC, $6C)
#pragma charmap ($ED, $6D)
#pragma charmap ($EE, $6E)
#pragma charmap ($EF, $6F)
#pragma charmap ($F0, $70)
#pragma charmap ($F1, $71)
#pragma charmap ($F2, $72)
#pragma charmap ($F3, $73)
#pragma charmap ($F4, $74)
#pragma charmap ($F5, $75)
#pragma charmap ($F6, $76)
#pragma charmap ($F7, $77)
#pragma charmap ($F8, $78)
#pragma charmap ($F9, $79)
#pragma charmap ($FA, $7A)
#pragma charmap ($FB, $7B)
#pragma charmap ($FC, $7C)
#pragma charmap ($FD, $7D)
#pragma charmap ($FE, $7E)
#pragma charmap ($FF, $5E)

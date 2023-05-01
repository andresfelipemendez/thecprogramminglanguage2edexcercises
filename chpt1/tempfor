	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 3
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ; -- Begin function main
lCPI0_0:
	.quad	0x3fe1c71c71c71c72              ; double 0.55555555555555558
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	.cfi_def_cfa_offset 64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	stur	wzr, [x29, #-8]
	mov	w8, #200
	stur	w8, [x29, #-12]
	mov	w8, #20
	stur	w8, [x29, #-16]
	stur	wzr, [x29, #-20]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	w8, [x29, #-20]
	subs	w8, w8, #200
	cset	w8, gt
	tbnz	w8, #0, LBB0_4
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-20]
                                        ; implicit-def: $x9
	mov	x9, x8
	ldur	w8, [x29, #-20]
	subs	w8, w8, #32
	scvtf	d1, w8
	adrp	x8, lCPI0_0@PAGE
	ldr	d0, [x8, lCPI0_0@PAGEOFF]
	fmul	d0, d0, d1
	mov	x8, sp
	str	x9, [x8]
	str	d0, [x8, #8]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-20]
	add	w8, w8, #20
	stur	w8, [x29, #-20]
	b	LBB0_1
LBB0_4:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%3d %6.1f\n"

.subsections_via_symbols

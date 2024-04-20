	.file	"string.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%s\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	addq	$-128, %rsp
	.seh_stackalloc	128
	.seh_endprologue
	call	__main
	movabsq	$6061881860884817224, %rax
	movabsq	$801767629025143144, %rdx
	movq	%rax, -96(%rbp)
	movq	%rdx, -88(%rbp)
	movabsq	$7956016061199966496, %rax
	movabsq	$2334111870312980583, %rdx
	movq	%rax, -80(%rbp)
	movq	%rdx, -72(%rbp)
	movabsq	$7575181469798375434, %rax
	movabsq	$2339450055106306163, %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$7208891003588995436, %rax
	movabsq	$8583988884632986991, %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movabsq	$506443023981965935, %rax
	movabsq	$506381209866536711, %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movabsq	$506381209866536711, %rax
	movabsq	$1978051601041159, %rdx
	movq	%rax, -23(%rbp)
	movq	%rdx, -15(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	subq	$-128, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef

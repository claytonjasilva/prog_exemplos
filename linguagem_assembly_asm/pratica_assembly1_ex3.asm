;
; Pratica 1 - Assembly
; Exercicio 3
; Arquitetura de Computadores - Prof Clayton J A Silva

inicio:
    ldi r16,0x2
	mov r0,r16 ; carrega o primeiro par
	sts 0x200,r0 ; carrega a primeira linha de dado
	mov r1,r0
	inc r1
	inc r1 ; atualiza o segundo par
	sts 0x201,r1 ; carrega a segunda linha de dado
	mov r2,r1 
	inc r2
	inc r2 ; ...
	sts 0x202,r2 ; carrega a terceira linha de dado
	mov r3,r2
	inc r3
	inc r3 ; ...
	sts 0x203,r3 ; carrega a quarta linha de dado
	mov r4,r3
	inc r4
	inc r4 ; ...
	sts 0x204,r4 ; carrega a quinta linha de dado
	mov r5,r4
	inc r5
	inc r5 ; ...
	sts 0x205,r5 ; carrega a sexta linha de dado
	break

;
; Pratica 1 - Assembly
; Exercicio 1
; Arquitetura de Computadores - Prof Clayton J A Silva

inicio:
    ldi r16,0x8
	mov r0,r16 ; carrega o primeiro par
	mov r1,r0
	inc r1
	inc r1 ; atualiza o segundo par
	mov r2,r1 
	inc r2
	inc r2 ; ...
	mov r3,r2
	inc r3
	inc r3 ; atualiza o ultimo par
	break
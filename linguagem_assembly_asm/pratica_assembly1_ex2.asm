;
; Pratica 1 - Assembly
; Exercicio 2
; Arquitetura de Computadores - Prof Clayton J A Silva

inicio:
    ldi r16,0x2
	mov r0,r16 ; carrega o primeiro par
	add r6,r0 ; atualiza r6
	mov r1,r0
	inc r1
	inc r1 ; atualiza o segundo par
	add r6,r1 ; atualiza r6
	mov r2,r1 
	inc r2
	inc r2 ; ...
	add r6,r2 ; atualiza r6
	mov r3,r2
	inc r3
	inc r3 ; ...
	add r6,r3 ; atualiza r6
	mov r4,r3
	inc r4
	inc r4 ; ...
	add r6,r4 ; atualiza r6
	mov r5,r4
	inc r5
	inc r5 ; ...
	add r6,r5 ; atualiza r6

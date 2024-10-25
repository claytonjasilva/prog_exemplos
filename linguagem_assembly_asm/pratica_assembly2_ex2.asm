;
; Pratica 2 - Assembly
; Exercicio 2
; Arquitetura de Computadores - Prof Clayton J A Silva

.DEF num = r16
.DEF soma = r0
.DEF aux = r1

inicio:
ldi num,0xAA ; Preenche a tabela inicial
sts 0x200,num 
inc num
sts 0x201,num
inc num
sts 0x202,num
inc num
sts 0x203,num
inc num
sts 0x204,num

loop: lds soma,0x200 ; Determina a soma e armazena na memória
sts 0x205,soma
lds aux,0x201
add soma,aux
sts 0x206,soma
lds aux,0x202
add soma,aux
sts 0x207,soma
lds aux,0x203
add soma,aux
sts 0x208,soma
lds aux,0x204
add soma,aux
sts 0x209,soma
 
lds num,0x205 ; Atualiza a tabela
sts 0x200,num
lds num,0x206
sts 0x201,num
lds num,0x207
sts 0x202,num
lds num,0x208
sts 0x203,num
lds num,0x209
sts 0x204,num

rjmp loop

break


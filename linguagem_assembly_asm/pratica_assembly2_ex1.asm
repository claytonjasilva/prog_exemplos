;
; Pratica 2 - Assembly
; Exercicio 1
; Arquitetura de Computadores - Prof Clayton J A Silva

.DEF par1 = r16
.DEF par2 = r17
.DEF par3 = r18
.DEF delta = r19
.DEF soma = r0
.DEF aux = r1

inicio:
ldi par1,0xE ; Inicializa os números pares
ldi par2,0x10
ldi par3,0x12
ldi delta,0x6 ; Inicializa o incremento

loop: sts 0x200,par1 ; Armazena os pares na tabela
sts 0x201,par2 
sts 0x202,par3 

lds aux,0x200 ; Carrega e soma os valores da tabela
add soma,aux
lds aux,0x201
add soma,aux
lds aux,0x202
add soma,aux

add par1,delta ; Atualiza os pares
add par2,delta
add par3,delta

rjmp loop

break


;
; Pratica 2 - Assembly
; Exercicio 3
; Arquitetura de Computadores - Prof Clayton J A Silva

.DEF termo = r16
.DEF soma = r0
.SET exp = 0x2

inicio: ; Determina, armazena e calcula a soma os termos da serie
ldi termo,exp ; Atribui valor ao termo
sts 0x200,termo ; Armazena termo na memória
add soma,termo ; Determina a soma
.SET exp = 3 * exp + 2 ; altera exp
ldi termo,exp
sts 0x201,termo
add soma,termo
.SET exp = 3 * exp + 2
ldi termo,exp
sts 0x202,termo
add soma,termo
.SET exp = 3 * exp + 2
ldi termo,exp
sts 0x203,termo
add soma,termo
.SET exp = 3 * exp + 2
ldi termo,exp
sts 0x204,termo
add soma,termo
sts 0x205,soma

break
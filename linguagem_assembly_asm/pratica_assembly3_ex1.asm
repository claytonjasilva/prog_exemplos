;
; Pratica 3 - Assembly
; Exercicio 1
; Arquitetura de Computadores - Prof Clayton J A Silva

.DEF delta = r16
.DEF flag = r17
.DEF contador = r18
.DEF termo = r19
.DEF soma = r0

inicio:
ldi delta,0x2 ; Inicializa registradores
ldi flag,0xA
ldi termo,0x2

loop: add soma,termo
add termo,delta
inc contador
cp flag,contador
brne loop

break
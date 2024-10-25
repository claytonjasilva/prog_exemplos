;
; Pratica 3 - Assembly
; Exercicio 2
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
ldi r27,0x02 ; Inicializa o registrador X
ldi r26,0x00

loop: add soma,termo
st X,termo
add termo,delta
inc contador
inc r26
cp flag,contador
brne loop

st X,soma ; Armazena o resultado na memória

break


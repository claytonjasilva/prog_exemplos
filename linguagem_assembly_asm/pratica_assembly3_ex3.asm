;
; Pratica 3 - Assembly
; Exercicio 3
; Arquitetura de Computadores - Prof Clayton J A Silva

.DEF delta = r16
.DEF flag1 = r17
.DEF contador = r18
.DEF termo = r19
.DEF soma_par = r0
.DEF soma_y = r1
.DEF flag2 = r20
.DEF num_y = r21

.MACRO expressao_y
mov num_y,termo
mul num_y,num_y
inc num_y
inc num_y
inc num_y
add soma_y,num_y
.ENDMACRO

inicio:
ldi delta,0x2 ; Inicializa registradores
ldi flag1,0x14 
ldi flag2,0xA
ldi termo,0x2
ldi r27,0x02 ; Inicializa o registrador X
ldi r26,0x00

loop: add soma_par,termo
st X,termo
add termo,delta
inc contador
inc r26
cp contador,flag2
brlo loop2
loop3: cp flag1,contador
brne loop

st X,soma_par ; Armazena o resultado na memória
inc r26
st X,soma_y
break

loop2: expressao_y
rjmp loop3

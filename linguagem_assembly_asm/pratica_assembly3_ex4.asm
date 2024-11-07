;
; Pratica 3 - Assembly
; Exercicio 4
; Arquitetura de Computadores - Prof Clayton J A Silva

.EQU num1 = 0x2F
.EQU num2 = 0x2F
.EQU num3 = 0x2F
.EQU num4 = 0x2F
.EQU num5 = 0x2F
.EQU num6 = 0x2F
.EQU num7 = 0x2F

.DEF cont = r16
.DEF flag = r17
.DEF aux = r18

inicio: 
ldi aux,num1 ; Carrega dados na tabela
sts 0x200,aux
ldi aux,num2
sts 0x201,aux
ldi aux,num3
sts 0x202,aux
ldi aux,num4
sts 0x203,aux
ldi aux,num5
sts 0x204,aux
ldi aux,num6
sts 0x205,aux
ldi aux,num7
sts 0x206,aux

; Le dados em memoria e os compara
; Inicializa endereço X
ldi r27,0x02
ldi r26,0x00

ldi flag,0x7 ; Inicializa flag
ldi cont,0x1 ; Inicializa contador

ld r0,X ; Armazena r0 como referência
inc r26
loop: ld aux,X
cp r0,aux
brne fim
inc cont
cp cont,flag
breq arm0 ; Desvia para armazenar caso todos os valores sejam iguais
inc r26
rjmp loop ; Retorna para comparação com a próxima linha de endereço da tabela

arm0: ldi aux,0xFF ; Armazena resultado se todos os valores da tabela forem iguais
sts 0x206,aux

fim: break
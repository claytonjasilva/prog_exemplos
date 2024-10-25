;
; Pratica 1 - Assembly
; Exercicio 4
; Arquitetura de Computadores - Prof Clayton J A Silva

inicio:
ldi r16,0xF0 ; Inicializa os números pares
ldi r17,0x5 ; Inicializa os números impares
ldi r18,0x2 ; Carrega o incremento de 2

sts 0x200,r16 ; Armazena o primeiro par na tabela
sts 0x210,r17 ; Armazena o primeiro impar na tabela
muls r16,r17 ; Aplica o produto
sts 0x220,r0 ; Armazena o byte mais alto do produto na tabela
sts 0x221,r1 ; Armazena o byte mais baixo do produto na tabela

add r16,r18 ; Incrementa o par
add r17,r18 ; Incrementa o impar

sts 0x201,r16 ; Armazena o primeiro par na tabela
sts 0x211,r17 ; Armazena o primeiro impar na tabela
muls r16,r17 ; Aplica o produto
sts 0x222,r0 ; Armazena o byte mais alto do produto na tabela
sts 0x223,r1 ; Armazena o byte mais baixo do produto na tabela

add r16,r18 ; Incrementa o par
add r17,r18 ; Incrementa o impar

sts 0x202,r16 ; Armazena o primeiro par na tabela
sts 0x212,r17 ; Armazena o primeiro impar na tabela
muls r16,r17 ; Aplica o produto
sts 0x224,r0 ; Armazena o byte mais alto do produto na tabela
sts 0x225,r1 ; Armazena o byte mais baixo do produto na tabela

break

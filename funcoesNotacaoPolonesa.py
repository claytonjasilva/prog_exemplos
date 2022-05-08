#  O programa ilustra o uso de funções em Python
#  Lê um para de números e calcula a operação pedida
#  Ilustra notação polonesa x,y op z op ...

def sq(a, b):  # Retorna soma dos quadrados
    return a ** 2 + b ** 2


def sc(a, b):
    return a ** 3 + b ** 3


def qdif(a, b):
    return (a - b) ** 2


def qsoma(a, b):
    return (a + b) ** 2


def cdif(a, b):
    return (a - b) ** 3


def csoma(a, b):
    return (a + b) ** 3


# Corpo do código
num1 = float(input('Digite o 1o número: '))
num2 = float(input('Digite o 1o número: '))
operacao = input('Digite a operação desejada: sq - sc - qdif - qsoma - cdif - csoma: ')
if operacao == 'sq':
    resultado = sq(num1, num2)
elif operacao == 'sc':
    resultado = sc(num1, num2)
elif operacao == 'qdif':
    resultado = qdif(num1, num2)
elif operacao == 'qsoma':
    resultado = qsoma(num1, num2)
elif operacao == 'cdif':
    resultado = cdif(num1, num2)
elif operacao == 'csoma':
    resultado = csoma(num1, num2)
print(resultado)
num = float(input('Digite o novo número: '))
operacao = input('Digite a nova operação desejada (nop para encerrar) : sq - sc - qdif - qsoma - cdif - csoma: ')
while operacao != 'nop':
    resultado += resultado
    print(resultado)
    num = float(input('Digite o novo número: '))
    operacao = input('Digite a nova operação desejada (nop para encerrar) : sq - sc - qdif - qsoma - cdif - csoma: ')




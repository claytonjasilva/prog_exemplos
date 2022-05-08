#  O programa ilustra o uso de funções em Python
#  Lê um número e calcula séries diferentes em função do valor lido

def serie_par(numero):
    S = numero  # Inicializa S com N porque o range só vai até N-1
    for i in range(numero):
        S += i
    return S


def serie_impar(numero):
    S = 0
    for i in range(1, numero + 1):  # Usando os limites na função range
        if numero % i == 0:
            S += i
    return S


def serie_negativo(numero):
    S = 0
    for i in range(numero, 0):
        S += i ** 2
    return S


#  Corpo do programa
N = int(input('Digite um número inteiro: '))
if N < 0:
    soma = serie_negativo(N)
elif (N % 2) == 0:
    soma = serie_par(N)
else:
    soma = serie_impar(N)
print(soma)



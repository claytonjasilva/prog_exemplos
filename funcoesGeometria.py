#  Este programa ilustra a aplicação de funções para cálculo de área em figuras geométricas
#  Lê os parâmetros de N figuras geométricas (quadrado, retângulo ou círculo)
#  Determina e escreve a área de cada uma delas

import math


def quad(l):  # função que retorna a área do quadrado
    area = l * l
    return area


def ret(b, a):  # função que retonra a área do retângulo
    area = b * a / 2
    return area


def circ(r):  # função que retonra a área do círculo
    area = math.pi * r ** 2
    return area


# Início do corpo do código
N = int(input('Digite o número de figuras: '))
for i in range(N):
    tipo = input('Digite o tipo de figura: q-quadrado, r-retângulo ou c-círculo ')
    if tipo == 'q':
        lado = float(input('Digite lado: '))
        area = quad(lado)
    elif tipo == 'r':
        base = float(input('Digite a base: '))
        altura = float(input('Digite a altura: '))
        area = ret(base, altura)
    elif tipo == 'c':
        raio = float(input('Digite o raio: '))
        area = circ(raio)
    print(area)

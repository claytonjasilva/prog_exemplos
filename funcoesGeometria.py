#  Este programa ilustra a aplicação de funções para cálculo de área em figuras geométricas
#  Lê os parâmetros de N figuras geométricas (quadrado, retângulo ou círculo)
#  Determina e escreve a área de cada uma delas

import math


def quad(l):                                                                                                 # define a função quad ... usa parâmetro l
    a = l * l                                                                                                # a é uma variável local
    return a                                                                                                 # a função quad retorna o valor armazenado em a


def ret(b, a):                                                                                               # define a função ret ... usa parâmetros b e a
    ar = b * a / 2                                                                                           # ar é uma variável local
    return ar                                                                                                # ar função ret retorna o valor armazenado em ar


def circ(r):                                                                                                 # define a função circ ... usa parâmetro r
    a = math.pi * r ** 2                                                                                     # a é uma variável local
    return a                                                                                                 # a função circ retorna o valor armazenado em a


# Início do corpo do código
N = int(input('Digite o número de figuras: '))                                                                 # N é uma variável global
for i in range(N):                                                                                             # i é uma variável global
    tipo = input('Digite o tipo de figura: q-quadrado, r-retângulo ou c-círculo ')                             # tipo é uma variável global
    if tipo == 'q':
        lado = float(input('Digite lado: '))                                     # lado é uma variável global ... armazena o argumento passado para a função quad
        area = quad(lado)                                                                                      # area é uma variável global
    elif tipo == 'r':
        base = float(input('Digite a base: '))                                                                 # base e altura são variáveis globais
        altura = float(input('Digite a altura: '))
        area = ret(base, altura)                                                 # base e altura armazenam argumentos passados para a função ret
    elif tipo == 'c': 
        raio = float(input('Digite o raio: '))                                                                 # raio é uma variável global
        area = circ(raio)                                                        # raio armazena o argumento passado para a função circ
    print(area)

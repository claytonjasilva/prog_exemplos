# O código embaralha uma string digitada pelo usuário
# Clayton J A Silva
# 15abr2022

import random as rand


def embaralha(cadeia):
    n = len(cadeia)
    ind = [cont for cont in range(n)]
    rand.shuffle(ind)
    aiedac = ''
    for cont in range(n):
        aiedac += cadeia[ind[cont]]

    return aiedac


#  entrada de dados
palavra = input('Digite a string: ')
print(embaralha(palavra))

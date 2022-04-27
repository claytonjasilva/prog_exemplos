#  O programa resolve o exercício 3 da lista de funções
#  Clayton J A Silva
#  16abr2022

import random as rand


def joga():
    d = input('Lance o dado - tecle d ')
    if d == 'd':  # Lança o dado
        r = rand.randint(1, 12)
        print(r)
    return r


#  lança o dado a primeira vez
resultado = joga()
if resultado == 7 or resultado == 1:
    print('NATURAL: ganhou o jogo')
elif resultado == 2 or resultado == 3 or resultado == 12:
    print('CRAPS: perdeu o jogo')
else:
    ponto = resultado
    print('O ponto é ',ponto)
    resultado = joga()
    while (resultado != 7) and (resultado != ponto):
        resultado = joga()
    if resultado == 7:
        print('VOCÊ PERDEU O JOGO')
    else:
        print('PARABÉNS! VOCÊ GANHOU')

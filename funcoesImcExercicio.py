#  O programa ilustra o uso de funções em Python
#  Lê dados de uma pessoa
# Recomenda programa de exercícios
# Recomenda dieta

def programa(i):  # Determina o programa de exercícios em função da idade 'i'
    if i < 15:
        return 'D'
    elif i <= 40:
        return 'C'
    elif i <= 60:
        return 'B'
    else:
        return 'A'


def imc(p, a):  # Determina o imc em função do peso 'p' e da altura 'a'
    return p / a ** a


# Corpo do código
nome = input('Digite o nome da pessoa: ')
idade = int(input('Digite a idade da pessoa: '))
peso = float(input('Digite o peso da pessoa: '))
altura = float(input('Digite a altura da pessoa: '))

print('O programa de exercícios da pessoa é ', programa(idade))
indice = imc(peso, altura)
if indice < 19:
    print('dieta gorda')
elif indice > 25:
    print('dieta magra')

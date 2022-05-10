#  O programa ilustra o uso de funções em Python
#  Lê dados de uma pessoa
# Recomenda programa de exercícios
# Recomenda dieta

def exercicio(i):  # Determina o programa de exercícios em função da idade 'i'
    if i < 15:
        return 'D'
    elif i <= 40:
        return 'C'
    elif i <= 60:
        return 'B'
    else:
        return 'A'


def indice(p, a):  # Determina o imc em função do peso 'p' e da altura 'a'
    return p / a ** a


# Corpo do código
N = 3  # define o número de pessoas
nome = []  # Inicializa as listas
idade = []
peso = []
altura = []
dieta = []
imc = []

for i in range(N):
    nome.append(input('Digite o nome da pessoa: '))
    idade.append(int(input('Digite a idade da pessoa: ')))
    peso.append(float(input('Digite o peso da pessoa: ')))
    altura.append(float(input('Digite a altura da pessoa: ')))
    dieta.append(exercicio(idade[i]))
    print('O programa de exercícios da pessoa é ', dieta[i])
    imc.append(indice(peso[i], altura[i]))
    if imc[i] < 19:
        print('dieta gorda')
    elif imc[i] > 25:
        print('dieta magra')

print('nome   idade    programa      imc')
for i in range(N):
    print(nome[i], ' ', idade[i], ' ', dieta[i], ' ', round(imc[i], 1))

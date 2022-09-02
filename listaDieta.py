#  O programa na linguagem Python lê e armazene os dados de um grupo
#  de 30 pessoas: nome, idade, peso, altura.
#  Para a idade de cada pessoa lida, o programa deverá recomendar exercícios do tipo A,
#  para pessoas acima de 60 anos; do tipo B, para pessoas entre 40 e 60 anos;
#  do tipo C, para pessoas entre 15 e 40 anos; e do tipo D, para crianças (idade inferior a 15 anos).
#  Com base no peso e na altura, o programa deve calcular o IMC (dado por peso/altura^2),
#  determinando as dietas: ‘magra’, IMC superior a 25; ‘normal’, IMC entre 19 e 25;
#  e ‘gorda’, IMC inferior a 19. O programa deverá armazenar a dieta de cada pessoa e o respectivo IMC.
# Ilustra o uso de lista
# Atualizado em agosto/2022
# ProfClayton J A Silva

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
programa = []
imc = []

for i in range(N):
    nome.append(input('Digite o nome da pessoa: '))
    idade.append(int(input('Digite a idade da pessoa: ')))
    peso.append(float(input('Digite o peso da pessoa: ')))
    altura.append(float(input('Digite a altura da pessoa: ')))
    programa.append(exercicio(idade[i]))
    print('O programa de exercícios da pessoa é ', programa[i])
    imc.append(indice(peso[i], altura[i]))
    if imc[i] < 19:
        print('dieta gorda')
    elif imc[i] <= 25:
        print('dieta normal')
    else:
        print('dieta magra')

# Apresentação na forma da tabela
for i in range(N):
    print(nome[i], ' ', idade[i], ' ', programa[i], ' ', round(imc[i], 1))

# Script em Python para criar uma tupla matricula de 20 alunos
# Armazena em uma lista as notas dos alunos
# Dado um ano digitado pelo usuário o programa


N = 20
matricula = []
notas = []
for i in range(N): # digita os dados
    matricula.append(input('Digite matricula: '))
    notas.append(float(input('Digite a nota: ')))
matricula = tuple(matricula) # converte a lista em tupla

ano = input('Digite o ano da pesquisa: ') #leitura do ano a ser pesquisado
for i in range(N):
    if ano == matricula[i][0:4]: # compara o ano a ser pesquisado com os 4 primeiros carateres de matrícula
        print(matricula[i], notas[i])


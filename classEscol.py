# Este scrip de Python lê nome, idade e escolaridade de um grupo de 30 pessoas
# Calcula a média da escolaridade das pessoas com ensino médio
# Clayton J A Silva
# 19ago2022

N = 3  # define a constante do número de pessoas
cont = 1
media = 0  # inicializa a variável média
contNivelMedio = 0  # inicializa o contador para alunos do nivel medio

while cont <= N:  # leitura dos dados e soma das notas
    nome = input('Digita o nome ')
    idade = int(input('Digita a idade '))
    escol = input('Digita a escolaridade: (1) fundamental (2) medio (3) superior: ')
    if escol == '2':  # observe que a variável escol é string
        media += idade
        contNivelMedio += 1
    cont += 1

#  saída de dados
if contNivelMedio != 0:
    media = media / contNivelMedio  # determinação da media
    print('A media das idades das pessoas com o nível médio é: ', round(media, 1))
else:
    print('Nenhuma das 30 pessoas possui nível médio')

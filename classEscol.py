# Clayton J A Silva
# 3abr202
# Este scrip de Python lê a nota de um grupo de 30 alunos

N = 5  # define a constante do número de alunos
media = 0  # inicializa a variável média
cont2 = 0  # inicializa o contador para alunos do nivel medio

for cont in range(N):  # leitura dos dados e soma das notas
    nome = input('Digita o nome ')
    idade = int(input('Digita a idade '))
    escol = input('Digita a escolaridade: (1) fundamental (2) medio (3) superior: ')
    if escol == '2':  # observe que a variável escol é string
        media += idade
        cont2 += 1
media = media/cont2  # determinação da media

#  saída de dados
print('A media das idades dos alunos do nível médio é: ', media)

# Clayton J A Silva
# 3abr202
# Este scrip de Python lê a nota de um grupo de 30 alunos

N = 3  # define a constante do número de alunos
media = 0  # inicializa a variável média

for cont in range(N):  # leitura dos dados e soma das notas
    nota = float(input('Digita a nota '))
    media += nota
media = media/N  # determinação da media

#  saída de dados
print('A media da turma é: ', media)

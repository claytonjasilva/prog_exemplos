# Clayton J A Silva
# 3abr202
# Este scrip de Python lê a nota de um grupo de 30 alunos

N = 3  # define a constante do número de alunos
cont = 1  # inicializa o contador
media = 0  # inicializa a variável média

while cont <= N:  # leitura dos dados e soma das notas
    peso = float(input('Digita o peso '))
    altura = float(input('Digita a altura '))
    media += peso/altura**2
    cont += 1
media = media/N  # determinação da media

#  saída de dados
print('A media do IMC é: ', media)

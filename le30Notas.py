# Este scrip de Python lê a nota de um grupo de 30 alunos
# Calcula e escreve a media aritmética
# Clayton J A Silva
# 19ago2022

N = 30  # define a constante do número de alunos
cont = 1  # inicializa o contador
media = 0  # inicializa a variável média

while cont <= N:  # leitura dos dados e soma das notas
    nota = float(input('Digita a nota '))
    media += nota # O Python admite a forma contraída da sentença de atribuição x = x + y, por x += y
                  # A alternativa também funciona com sintaxe similar para os operadores -, *, /, //
    cont += 1

media = media/N  # determinação da media

#  saída de dados
print('A media da turma é: ', media)

# Este scrip de Python lê a altura e o peso de 20 pessoas
# Calcula e escreve o imc médio do grupo
# Clayton J A Silva
# 19ago2022

N = 20  # define a constante do número de pessoas
cont = 1  # inicializa o contador
media = 0  # inicializa a variável média

while cont <= N:  # leitura dos dados e soma dos imc individuais
    print('\n')  # \n é o que se chama caractere de escape
    # inserido na string significa 'quebra de linha'
    peso = float(input('Digita o peso '))
    altura = float(input('Digita a altura '))
    imc = peso / altura ** 2
    print('O IMC da ', cont, 'a pessoa é ', imc)
    media += imc
    cont += 1
media = media / N  # determinação da media

#  saída de dados
print('\nA media do IMC é: ', media)

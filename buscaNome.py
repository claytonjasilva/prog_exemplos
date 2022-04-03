# ---------------------------------------------------
# O programa lê o nome de uma pessoa, em seguida lê um grupo de N nomes
# Conta quantos homônimos existem no grupo

ref = input('Digite o nome: \n')  # leitura do nome procurado
cont = 0

# leitura dos nomes do grupo
nome = input('Digite o nome: \n')
while nome != '0':
    if nome == ref:
        cont += 1
    nome = input('Digite o nome: \n')

# apresenta resultado
print('Existem ', cont, ' homônimos')

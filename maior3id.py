# =========================================================
# maior3id.py
# O programa lê nome e idade de 3 animais
# calcula a idade do mais velho e escreve o seu nome
# Clayton J A Silva
# 12ago2022


# Dados do animal 1
nome = input('Digite o nome do animal ')
idade = int(input('Digite a idade do animal '))

# Inicialização dos dados do mais velho
maior_idade = idade
nome_maior = nome # Além da idade é necessário guardar também o nome do animal mais velho

# Dados do animal 2
nome = input('Digite o nome do animal ')  # Observe que os dados do animal anterior são perdidos
idade = int(input('Digite a idade do animal '))
if idade > maior_idade:  # testa se a idade é maior do que a idade do primeiro animal
                         # substitui o valor anterior somente se o animal 2 for mais velho
    maior_idade = idade
    nome_maior = nome

# Dados do animal 3
nome = input('Digite o nome do animal ')
idade = int(input('Digite a idade do animal '))
if idade > maior_idade:  # testa se a idade é maior do que o mais velho dentre os 2 anteriores
    maior_idade = idade
    nome_maior = nome

print('O nome do animal mais velho é: ', nome_maior, '\n sua idade é ', maior_idade)

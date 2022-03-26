#=========================================================
# maior3id.py
# O programa lê nome e idade de 3 animais
# Clayton J A Silva
# 26mar2022


#animal 1
nome=input('Digite o nome do animal ') # entrada de dados
idade=int(input('Digite a idade do animal '))
maior_idade=idade
nome_maior=nome

#animal 2
nome=input('Digite o nome do animal ') # entrada de dados
idade=int(input('Digite a idade do animal '))
if (idade>maior_idade): # testa se a idade é maior do que maior valor anterior
    maior_idade = idade
    nome_maior = nome

#animal 3
nome=input('Digite o nome do animal ') # entrada de dados
idade=int(input('Digite a idade do animal '))
if (idade>maior_idade): # testa se a idade é maior do que maior valor anterior
    maior_idade = idade
    nome_maior = nome

print('O nome do animal mais velho é: ',nome_maior, '\n sua idade é ',maior_idade)
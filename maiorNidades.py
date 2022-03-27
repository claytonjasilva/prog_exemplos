# =========================================================
# maiorNidades.py
# O programa lê nome e idade de N animais
# Clayton J A Silva
# 26mar2022

N=10

for contador in range(N):
    nome=input('Digite o nome do animal ') # entrada de dados
    idade=int(input('Digite a idade do animal '))
    if contador == 0:
        maior_idade=idade
        nome_maior=nome
    else:
        if idade > maior_idade: # testa se a idade é maior do que maior valor anterior
            maior_idade = idade
            nome_maior = nome

print('O nome do animal mais velho é: ',nome_maior, '\n sua idade é ',maior_idade)
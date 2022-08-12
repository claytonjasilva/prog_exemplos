# =========================================================
# calcIMC3.py
# O programa lê nome, peso e altura de 3 pessoas
# escreve somente nome e imc das pessoas abaixo ou acima de dois limites
# Clayton J A Silva
# 12ago2022

# Leitura dos dados da primeira pessoa
# Dados da pessoa 1
nome = input('Digite o nome da pessoa ')  # entrada de dados
peso = float(input('Digite o peso da pessoa '))
altura = float(input('Digite a altura da pessoa '))

# Determinação do IMC e verificação da categoria
imc = peso / altura ** 2  # calcula imc
if imc > 22 or imc < 20:  # apresenta nome seguido do resultado
    print(nome, ' , imc: ', imc)

# Dados da pessoa 2
nome = input('Digite o nome da pessoa ')  # entrada de dados
peso = float(input('Digite o peso da pessoa '))
altura = float(input('Digite a altura da pessoa '))

# Determinação do IMC e verificação da categoria
imc = peso / altura ** 2
if (imc > 22 or imc < 20):
    print(nome, ' , imc: ', imc)

# Dados da pessoa 3
nome = input('Digite o nome da pessoa ')  # entrada de dados
peso = float(input('Digite o peso da pessoa '))
altura = float(input('Digite a altura da pessoa '))

# Determinação do IMC e verificação da categoria
imc = peso / altura ** 2
if (imc > 22 or imc < 20):
    print(nome, ' , imc: ', imc)

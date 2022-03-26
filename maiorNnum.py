# =========================================================
# maiorNnum.py
# O programa lê N números, determina e escreve o maior entre eles
# Clayton J A Silva
# 26mar2022

N = 10
contador = 1

while contador <= N:
    num = float(input('Digite o número : '))  # entrada de dados
    if contador == 1:  # atribui o primeiro número a maior
        maior = num
    else:
        if maior < num:
            maior = num  # atualiza o valor guardado em maior se número lido for maior
    contador += 1  # atualiza o contador
print('O maior número lido é: ', maior)

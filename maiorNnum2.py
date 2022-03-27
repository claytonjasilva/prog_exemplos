# =========================================================
# maiorNnum.py
# O programa lê N números, determina e escreve o maior entre eles
# Clayton J A Silva
# 26mar2022

N = 10

for contador in range(N):
    num = float(input('Digite o número : '))  # entrada de dados
    if contador == 0:  # atribui o primeiro número a maior
        maior = num
    else:
        if maior < num:
            maior = num  # atualiza o valor guardado em maior se número lido for maior

print('O maior número lido é: ', maior)

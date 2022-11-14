# 1. Elaborar um programa em Python para ler uma matriz de NxN utilizando dicionário.
# A matriz possui as seguintes características: os elementos da diagonal principal (i=j)
# devem ser iguais a 1; os elementos abaixo da diagonal principal devem ser iguais ao inverso
# dos elementos acima da diagonal principal.

N = int(input('Digite o número de linhas e colunas: '))

matriz = dict()
# Leitura dos dados da matriz
for i in range(N):  # Leitura dos dados acima da diagonal principal
    for j in range(i + 1, N):
        matriz[(i, j)] = float(input(f'Digite o valor do elemento {i},{j}: '))
for i in range(N):  # Carrega os valores da diagonal principal e abaixo da diagonal
    for j in range(N):
        if i < j:
            matriz[(j, i)] = 1 / matriz[(i, j)]
        elif i == j:
            matriz[(i, j)] = 1

# Escrita da matriz
for i in range(N):  # Carrega os valores da diagonal principal e abaixo da diagonal
    for j in range(N):
        print(matriz[(i, j)], ' ', end = '')
    print('\n')


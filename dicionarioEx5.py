# Criar uma matriz MxN utilizando dicionário.
# Cada chave deve ser definida por uma tupla que defina linha e coluna do elemento.
# Todos os elementos da matriz são números de ponto flutuante.

M = int(input('Digite o número de linhas: '))
N = int(input('Digite o número de colunas: '))
matriz = dict()

for i in range(1, M + 1):
    for j in range(1, N + 1):
        matriz[(i, j)] = float(input(f'Digite o elemento da linha {i} coluna {j}: '))
print(matriz)

# O script lê os dados de uma matriz com 4 linhas e 6 colunas

matriz = [[], [], [], []] # iniciliza a matriz como uma lista de listas
for i in range(4): # le os dados da matriz linha a linha
    print('linha ', i)
    for j in range(6):
        matriz[i].append(input('Digite o dado: '))

for i in range(4): # escreve os dados da matriz
    for j in range(6):
        print(matriz[i][j],end=' ') # o argumento end=' ' permite escrever na mesma linha
    print(' ') # dá uma quebra de linha entre duas linhas diferentes


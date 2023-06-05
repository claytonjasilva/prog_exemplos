# Elaborar um programa em Python para cadastrar os dados de uma matriz 3x5 em um dicionário.
# Utilizar como chave uma tupla com a linha e coluna.

N = 3
M = 3
matriz = dict()
# Leitura dos dados da matriz por linha
for i in range(N):
  for j in range(M):
    matriz[(i + 1, j + 1)] = int(input('Digite o elemento '))
print(matriz)

# Escrevendo os elemntos de uma linha
while True:
  linha = int(input('Digite a linha: '))
  if linha > N:
    print('linha inválida')
    linha = int(input('Digite linha correta: '))
  else:
    for i in range(1, M + 1):
      print(matriz[(linha, i)])
    break

# Somando os elementos da triangular superior - para N = M
soma = 0
for i in range(1, N):
  for j in range(i + 1, M + 1):
    soma += matriz[(i, j)]

print(soma)

# Escrevendo os elementos da diagona principal - para N = M
for i in range(1, N+1):
  print(matriz[(i,i)])

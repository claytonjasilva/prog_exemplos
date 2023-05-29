# 11. Elaborar um programa em Python para cadastrar dados em uma matriz de N X M elementos.  
# O usuário deve poder digitar uma célula da matriz, na forma [linha,coluna].   
# O programa deverá alterar o valor cadastrado anteriormente por um novo dado digitado pelo usuário.

N = int(input('Digite o número de linhas: ')) # Leitura do número de linhas e colunas
M = int(input('Digite o número de colunas: '))
matriz = [] # Inicializa a matriz vazia
for i in range(N):
  matriz.append([]) # Inicializa a lista da linha vazia
  for j in range(M):
    matriz[i].append(float(input('Digite o dado '+str(i)+','+str(j)+': ')))

# Le linha e coluna
while True:
  linha = int(input('Digite a linha: '))
  if linha < N:
    while True:
      coluna = int(input('Digite a coluna: '))
      if coluna <= M:
        matriz[linha][coluna] = float(input('Digite o novo dado: ')) # Escreve o dado
        break
    break

print(matriz)

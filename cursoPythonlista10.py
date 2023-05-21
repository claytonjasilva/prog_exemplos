# Elaborar um programa em Python para cadastrar os dados de temperatura de 3 cidades em uma matriz.  
# Cada linha armazena as temperaturas de uma cidade em 5 horas diferentes do dia.  
# O usuário deve poder digitar o código da cidade (0, 1 ou 2). O programa retornarnará a temperatura média do dia.

def media(lista): # Cria função com lista como argumento
  return sum(lista)/len(lista) # A função len retorna o número de elementos da lista


N = 3 #  N define o número de linhas da matriz
M = 5 # M define o número de colunas da matriz
matriz = [[0]*M for i in range(N)] # Inicializa uma matriz de N linhas com M colunas iguais a 0
for i in range(N): # Cadastra os dados da matriz por linha
  for j in range(M):
    matriz[i][j] = float(input('Digite a tempertatura '+str(i)+','+str(j)+': '))

while True:
  cod_cidade = int(input('Digite o codigo da cidade - 1-2-3: '))
  if cod_cidade == 0 or cod_cidade == 1 or cod_cidade == 2:
    print(media(matriz[cod_cidade])) 
    break

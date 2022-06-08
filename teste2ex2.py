# O programa lê um número inteiro não negativo (N) superior a 0. 
# O programa lê a opção do usuário (op), 1 ou 2, pela função soma ou produto.  
# O programa está estruturado em duas funções: soma (S), que retorna a soma dos números da série  {1,2,3,…,N-1} – a função deve retornar 0 se o número lido for igual a 1; produto (P), que retorna o produto dos números da série {1,2,3,…, N-1} – a função deve retornar 0 se o número lido for igual a 1. 

# retorna a soma dos números da série  {1,2,3,…,N-1}
def soma(num):
  sum = 0
  for i in range(num):
    sum = sum + i
  if num==1:
    return 1
  else:
    return sum

# retorna o produto dos números da série {1,2,3,…, N-1}
def produto(num):
  prod = 1
  for i in range(1,num):
    prod = prod * i
  if num==1:
    return 1
  else:
    return prod

op = input('Digite a opção: (1) soma da série (2) produto da série: ')
N=int(input('Digite um número não negativo inteiro maior do que 0: '))
if op=='1':
  print(soma(N))
elif op=='2':
  print(produto(N))

# O programa lê o CPF de um grupo de 20 pessoas 
# Lê os saldos diários de cada pessoa com um CPF específico, em uma janela de 30 dias. 
# O programa deverá armazenar os CPF lidos na tupla cpf. 
# O programa armazena, para cada CPF, as notas na lista saldo. 
# O programa lê um CPF digitado pelo usuário, calcula e escreve o saldo médio (saldo_medio) da pessoa. 

N = 20
# leitura do CPF do grupo de pessoas e cadastro na tupla
cpf = []
for i in range(N):
  cpf.append(int(input('Digite o CPF: ')))
cpf = tuple(cpf)

# leitura dos saldo médios de cada CPF
saldo = []
for i in range(N): # cria a lista de listas
  saldo.append([])

for i in range(N): # leitura dos saldos para cada cpf
  print('cpf ',cpf[i])
  for j in range(30):
    saldo[i].append(float(input('Digite o saldo: ')))

# cálculo do saldo médio para um CPF desejado pelo usuário
print('Pesquisa do saldo médio por CPF')
cpf_us = int(input('Digite o cpf a ser pesquisado: '))
for i in range(N):
  if cpf_us==cpf[i]:
    media = 0
    for j in range(30):
      media = media + saldo[i][j]
    media = media/30
print('O saldo médio do CPF ',cpf_us,' é: ',media)
      

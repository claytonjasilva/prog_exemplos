# Elaborar um programa em Python que leia e armazene o cpf de um grupo de 10 pessoas em uma tupla.
# Leia e armazene o saldo bancário médio ao longo dos últimos 30 dias em uma lista. 
# O programa deverá criar uma lista dos cpf cujas pessoas apresentaram um saldo médio superior 
# à média de saldo do grupo.
# Atualizado em 14/10/22

N = 3
cpf = tuple([input('cpf: ') for i in range(N)])
saldo = []
for i in range(N):
    print('cpf ', cpf[i])
    saldo.append(float(input('Digite saldo: ')))
media = sum(saldo) / N
lista_cpf = [cpf[i] for i in range(N) if saldo[i] > media]
print(lista_cpf)

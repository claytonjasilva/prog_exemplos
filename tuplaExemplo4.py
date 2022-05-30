# Elaborar um programa em Python que leia e armazene o cpf e o saldo bancário
# de um grupo de 10 pessoas ao longo de 30 dias.
# O programa deverá escrever o cpf das pessoas seguido do saldo médio mensal.

c = []
for i in range(3):
    c.append(input('cpf: '))
cpf = tuple(c)
saldo = []
dados = (cpf, saldo)
saldo_medio = []
for i in range(3):
    saldo.append([])
    for j in range(3):
        saldo[i].append(float(input('Digite saldo: ')))
for i in range(3):
    saldo_medio.append(sum(saldo[i])/3)
print(dados,saldo_medio)

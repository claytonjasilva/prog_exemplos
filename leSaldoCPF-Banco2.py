# Este programa le e testa vários cpf
# Apresenta uma solução ao exercício 5 da lista sobre estruturas de repetição
# Clayton J A Silva
# 10abr2022

# determinando o saldo médio por cpf
cpf = int(input('Digite o cpf: '))  # leitura do primeiro cpf

while cpf != 0:
    N = int(input('Digite o número de instituições do cpf: '))  # leitura do número de instituições daquele cpf
    saldo_medio = 0
    for i in range(N):
        nr_fin = int(input('Digite o número da instituição financeira: '))  # leitura do número da instituição
        saldo = float(input('Digite o saldo na instituição: '))  # leitura do saldo do cpf na instituição
        saldo_medio += saldo
    saldo_medio = saldo_medio / N
    print('O saldo médio do cpf', cpf, ' é ', round(saldo_medio, 2))
    cpf = int(input('Digite o cpf: '))  # leitura do novo cpf

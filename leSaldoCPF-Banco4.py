# Este programa le e testa vários cpf
# Apresenta uma solução ao exercício 5 da lista sobre estruturas de repetição
# Clayton J A Silva
# 10abr2022

def testacpf(num):  # testa se o cpf é válido
    soma = 0
    for cont in range(11):
        soma += num % 10
        num = num // 10
    if (soma % 10) == (soma // 10):
        return 0
    else:
        return 1


# determinando o saldo médio por cpf
cpf = int(input('Digite o cpf: '))  # leitura do primeiro cpf
while testacpf(cpf) == 1:  # permanece em loop enquanto o CPF for inválido
    print('Digite um CPF válido')
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
    while testacpf == 1:  # permanece em loop enquanto o CPF for inválido
        print('Digite um CPF válido')
        cpf = int(input('Digite o cpf: '))  # leitura do primeiro cpf

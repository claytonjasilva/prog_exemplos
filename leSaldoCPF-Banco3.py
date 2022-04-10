# Este programa le e testa vários cpf
# Apresenta uma solução ao exercício 5 da lista sobre estruturas de repetição
# Clayton J A Silva
# 10abr2022

# determinando o saldo médio por instituição financeira dos cpf lidos
N = int(input('Digite o número de instituições: '))  # leitura do número de instituições daquele cpf
for i in range(N):
    nr_fin = int(input('Digite o número da instituição financeira: '))  # leitura do número da instituição
    saldo_medio = 0
    cpf = int(input('Digite o cpf: '))  # leitura do cpf

    # testa se o cpf é válido
    n = cpf
    soma = 0
    for cont in range(11):
        soma += n % 10
        n = n // 10
    if (soma % 10) == (soma // 10):
        print('O CPF é válido')

    cont_cpf = 0  # inicializa o contador de cpf de cada instituição
    while cpf != 0:
        saldo = float(input('Digite o saldo do cpf na instituição: '))
        saldo_medio += saldo
        cpf = int(input('Digite o cpf: '))  # leitura do novo cpf
        cont_cpf += 1
    saldo_medio = saldo_medio / cont_cpf
    print('O saldo médio da instituição', nr_fin, ' é ', round(saldo_medio, 2))

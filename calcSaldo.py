# Este scrip de Python lê o CPF, saldo inicial e número de operações em um dia de uma conta bancária
# Em seguida lê o tipo e o valor de cada uma das operações
# Escreve o saldo diário final após ler todas as operações do dia
# Clayton J A Silva
# 19ago2022

cpf = input('Digite o cpf: ')
saldo_ini = float(input('Digite o saldo inicial: '))
N = int(input('Digite o número de operações do dia: '))

cont = 1
saldoFinal = saldo_ini
while cont <= N:  # leitura dos dados e soma das notas
    print('\noperação ', cont)
    valor = float(input('Digita o valor da operação '))
    natureza = input('Digite a natureza da operação depósito (d) ou saque (s): ')
    if natureza == 'd':
        saldoFinal += valor
    else:
        saldoFinal -= valor
    cont += 1

#  saída de dados
print('\nO CPF do correntista é ', cpf)
print('O saldo do dia é ', round(saldoFinal, 2))

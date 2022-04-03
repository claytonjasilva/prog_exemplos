# Clayton J A Silva
# 3abr202
# Este scrip de Python lê a nota de um grupo de 30 alunos

cpf = input('Digite o cpf: ')
saldo_ini = float(input('Digite o saldo inicial: '))
N = int(input('Digite o número de operações do dia: '))

saldo = saldo_ini
for cont in range(N):  # leitura dos dados e soma das notas
    valor = float(input('Digita o valor da operação '))
    natureza = input('Digite a natureza da operação depósito (d) ou saque (s): ')
    if natureza == 'd':
        saldo += valor
    else:
        saldo -= valor

#  saída de dados
print('O CPF do correntista é ', cpf)
print('O saldo do dia é ', round(saldo, 2))

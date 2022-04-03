# O programa testa se um cpf é válido
# Clayton J A Silva
# 3abr2022

cpf = int(input('Digite o CPF: '))

# aplica o passo 1
soma = 0
n = cpf
for cont in range(11):
    soma += n % 10
    n = n // 10
if (soma % 10) == (soma // 10):
    print('O CPF é válido')

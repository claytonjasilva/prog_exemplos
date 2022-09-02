# Elaborar um programa na linguagem Python para registrar os lançamentos contáveis de uma empresa
# ao longo de um ano. O programa deverá ler o CNPJ da empresa no início do ano
# juntamente com o saldo de caixa do mês anterior.
# Deverá cadastrar, mês a mês, a receita e a despesa.
# Ao final do ano, o programa deverá apresentar o extrato do balanço contábil,
# contendo o mês, receita, despesa, saldo parcial.

# Cria a lista de meses do ano
ano = ['janeiro', 'fevereiro', 'março', 'abril', 'maio', 'junho', 'julho', 'agosto', 'setembro', 'outubro', 'novembro',
       'dezembro']

receita = []
despesa = []
cnpj = input('Digite o CNPJ da empresa: ')
saldo_anterior = float(input('Digite o saldo do ano anterior: '))
saldo = saldo_anterior
for i in range(len(ano)):
    print(ano[i])
    receita.append(float(input('Digite a receita: ')))
    despesa.append(float(input('Digite a despesa: ')))
    saldo += receita[i] - despesa[i]
    print('---------------------------------------------------')
    print('Saldo parcial: ', receita[i] - despesa[i])



# 2. Elaborar um programa em Python para ler e
# carregar os dados em um dicionário (chave=caracter; elemento=número de ponto flutuante).
# O dicionário deve ter no máximo 10 elementos.
# Quando o número de elementos alcançar o limite, o programa deve criar um novo dicionário e
# passar ao novo dicionário os novos dados, os quais não possuem limite de cadastro.


dados = dict()
cont = 0
while True:
    op = input('Deseja inserir um novo dado? (1) sim (outro caracter) não: ')
    if op != '1':
        break
    elif cont < 10: # Cadastra dados do dicionário
        chave = input('Digite a chave: ')
        dados[chave] = float(input('Digite o número: '))
    else: # Cadastra dados do novodicionário
        chave = input('Digite a chave: ')
        novos_dados[chave] = float(input('Digite o número: '))
    cont += 1
    if cont == 10: # Cria novo dicionário
        novos_dados = dict()

print(dados)
if cont > 10:
    print(novos_dados)

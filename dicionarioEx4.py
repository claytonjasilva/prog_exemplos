# Criar um sistema com dois dicionários.
# O programa deve armazenar os valores no dicionário principal,
# fazendo automaticamente o backup no dicionário de backup.
# O dicionário principal possui uma capacidade máxima para armazenar 5 elementos.
# Cada vez que o dicionário principal atingir a sua capacidade limite o programa
# deve apresentar os valores na console e apagar o seu conteúdo.

Capacidade = 5 # Capacidade do dicionário principal
principal = dict()
backup = dict()

op = input('Deseja inserir um dado? (1) sim (2) nao ')
cont = 1
while op == '1':
    chave = input('Digite a chave: ')
    principal[chave] = float(input('Digite o elemento: '))
    op = input('Deseja inserir um novo dado? (1) sim (2) nao ')
    # Faz o backup
    backup[chave]=principal[chave]
    cont += 1
    if cont > Capacidade:
        print(principal)
        principal.clear()
        cont = 1

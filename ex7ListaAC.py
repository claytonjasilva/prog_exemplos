# O script lê os códigos de itens de uma mercearia e os armazena em tupla

N = 3
item = []
preco = []
for i in range(N): # le os dados de código de item e preço
    item.append(input('Digite o código: '))
    preco.append(0.0) # inicializa todos os preços iguais a 0.00
item = tuple(item) # converte os códigos em uma tupla

op = int(input('Deseja alterar o preço? sim(1) não(2) ')) # inicializa a operação de alteração
while op == 1: # permite alterar tantos preços quanto o usuário desejar
    novo = input('Digite o código do item cujo preço vai ser alterado: ')
    for i in range(N): # altera o preço do item cujo código foi digitado pelo usuário - tente fazer com a estrutura while
        if item[i] == novo:
            preco[i] = float(input('Digite o novo preço: '))
    op = int(input('Deseja alterar novo preço? sim(1) não(2) '))

print('cod item - preço') # escreve o cabeçalho do relatório
for i in range(N): # apresenta o relatório
    print(item[i],'           ',preco[i])

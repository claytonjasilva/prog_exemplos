# Programa lê e cadastra em uma lista um conjunto inicial de N itens armazenados em uma despensa.
# Permite que, após cadastrar os itens, o usuário:
# (i) inclua um novo item;
# (ii) remova um item pelo nome;
# (iii) apague todos os itens da lista.

N = int(input('Digite o número de itens armazenados: '))
item = []
for i in range(N): # Lê e cadastra os itens da despensa
    item.append(input('Insira o nome do item: '))

print('Realizar uma operação sobre a lista')
op1 = input('Digite a opcao: (i) incluir novo item; (r) remover um item; (a) apagar lista ')
if op1 == 'i':
    op2 = input('Deseja inserir em uma posição? (S) sim (N) não ')
    novo_item = input('Digite o novo item: ')
    if op2 == 'S':
        pos = int(input('Digite a posição: '))
        item.insert(pos,novo_item)
    else:
        item.append(novo_item)
elif op1 == 'r':
    op2 = input('Deseja remover em uma posição? (S) sim (N) não ')
    if op2 == 'S':
        pos = int(input('Digite a posição: '))
        item.pop(pos)
    else:
        item_remove = input('Digite o nome do item a remover: ')
        item.remove(item_remove)
else:
    item.clear()
print(item)


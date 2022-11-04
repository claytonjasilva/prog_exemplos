# Criar um dicionário com N itens (definido pelo usuário) cuja chave seja o código de um item
# cadastrado em uma loja. Cada chave remete a uma lista composta por quantidade e valor do
# respectivo item. A soma dos dígitos do código deve ser superior a 20.
# O programa não deve permitir que seja cadastrado dados de um item cujo código seja inválido.
# Usar exceção para tratar código inválido.

# Função testa Codigo
def testaCodigo():
    while True:
        try:
            chave = input('Digite o código do item: ')
            soma = sum([int(chave[j]) for j in range(len(chave))])
            if soma < 20:
                raise ValueError
            else:
                return chave
        except ValueError:
            print('Codigo de item inválido - deve ser maior do 20')


# Leitura dos itens a cadastrar
N = int(input('Digite o número de itens a cadastrar: '))
item = dict()
for i in range(N):
    # Leitura das chaves
    codigo = testaCodigo()
    item[codigo] = [int(input('Digite a quantidade: ')), float(input('Digite o valor: '))]

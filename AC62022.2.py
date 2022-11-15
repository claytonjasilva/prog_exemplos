# 2. Elaborar um programa para criar um conjunto contendo cpf de um grupo de 10 pessoas.
# Em seguida o programa deve ler uma lista contendo
# [cpf, número de banco, agência, número de conta corrente e saldo de uma pessoa].
# Após ler todas as listas, o programa deverá ter criado um dicionário com os cpf que
# pertencem ao conjunto como chave, cujo elemento seja a soma dos saldos do respectivo cpf.
# Criar também um novo conjunto com os cpf das listas lidas que não pertencem ao conjunto criado
# incialmente.

def criaConjunto():
    conjunto = set()
    for i in range(10):
        conjunto.add(input('Digite CPF: '))
    return conjunto

def criaDicionario(conjunto):
    dicionario = dict()
    for elemento in conjunto:
        dicionario[elemento] = 0
    return dicionario

conjunto = criaConjunto()
# leitura de listas
dicionario = criaDicionario(conjunto)
novo_conjunto = set()
while True: # Leitura de várias listas
    op = input('Deseja ler uma lista? (1) sim (outro caracter) não: ')
    lista = []
    if op != '1':
        break
    else:
        lista.append(input('Digite CPF: '))
        lista.append(input('Digite banco: '))
        lista.append(input('Digite agencia: '))
        lista.append(input('Digite conta: '))
        lista.append(float(input('Digite saldo: ')))
        if lista[0] in conjunto:
            dicionario[lista[0]] += lista[4]
        else:
            novo_conjunto.add(lista[0])

print(conjunto)
print(dicionario)
print(novo_conjunto)

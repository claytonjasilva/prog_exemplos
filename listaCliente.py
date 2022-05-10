# Programa cadastra os códigos de um grupo de clientes de uma loja
# Cadastra o valor das respectivas compras realizadas em um determinado mês.
# O código 0 significa que não será cadastrado novo cliente.
# Após os clientes serem cadastrados, o usuário poderá fazer uma consulta ao sistema,
# digitando um valor qualquer.
# O sistema deverá escrever os códigos dos clientes que realizaram compras acima desse valor.

cliente = []
valor = []
cod = input('Digite o código: ')
while cod != '0':
    cliente.append(cod)
    valor.append(float(input('Digite o valor das compras: ')))
    cod = input('Digite o código: ')
# Consulta ao sistema
valor_ref = float(input('Digite o valor de referência: '))
print('Código de clientes que compraram acima da referência')
for i in range(len(cliente)):
    if valor[i] > valor_ref:
        print(cliente[i])


# O programa responde ao pedido do exercíco 7 da lista 1
# Clayton J A Silva
# 5abr2022

#  leitura de dados
numero = int(input('Digite um número: '))
num_ini = numero
novo_numero = 0

while numero > 0:
    novo_numero = novo_numero * 10
    novo_numero += numero % 10
    numero = numero // 10

#  apresentação do resultado
if novo_numero == num_ini:
    print('O número é um palíndromo')
else:
    print('O novo número é: ', novo_numero)
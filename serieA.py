# O programa responde ao pedido do exercíco 7 da lista 1
# Clayton J A Silva
# 5abr2022

#  leitura de dados
n = int(input('Digite um número: '))
m = 1

S = 0 # inicializa a variável série

for i in range(1,n+1):
    S += i/m
    m += 2

#  apresentação do resultado
print('O resultado da série é: ', S)
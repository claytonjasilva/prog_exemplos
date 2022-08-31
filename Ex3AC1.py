# 3.  Ler um conjunto de 30 números.
# Calcular e escrever a média aritmética dos números lidos maiores do que 50.

soma = 0
contMaior50 = 0
cont = 1
N = 3

while cont<=N:
    numero = float(input('Digite o número: '))
    if numero>50:
        contMaior50 += 1
        soma += numero
    cont += 1

if contMaior50!=0:
    print(soma/contMaior50)
else:
    print('Nenhum número maior do que 50')


# 1. Elaborar um programa em Python para ler o salário bruto de três pessoas.
# Calcular o salário líquido, com desconto de 15% se o salário bruto for superior a R$ 500,00.
# Calcular e mostrar: o menor salário líquido; e a soma dos três salários líquidos.

# Leitura dos salários
N = 3
cont = 1
sb = float(input('Digite o salário da pessoa: '))
if sb > 500:
    sl = sb * 0.85
else:
    sl = sb
menor = sl
total = sl
while cont < N:
    sb = float(input('Digite o salário da pessoa: '))
    if sb > 500:
        sl = sb * 0.85
    else:
        sl = sb
    if menor > sl:
        menor = sl
    total += sl
    cont += 1

print('A soma dos salários é: ', total)
print('O menor salário é: ', menor)

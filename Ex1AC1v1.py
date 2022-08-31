# 1. Elaborar um programa em Python para ler o salário bruto de três pessoas.
# Calcular o salário líquido, com desconto de 15% se o salário bruto for superior a R$ 500,00.
# Calcular e mostrar: o menor salário líquido; e a soma dos três salários líquidos.

# Leitura dos salários
sb1 = float(input('Digite o salário da primeira pessoa: '))
sb2 = float(input('Digite o salário da segunda pessoa: '))
sb3 = float(input('Digite o salário da terceira pessoa: '))

# Determinação dos salários líquidos
if sb1>500:
    sl1 = sb1 *0.85
else:
    sl1 = sb1
if sb2>500:
    sl2 = sb2 *0.85
else:
    sl2 = sb2
if sb3>500:
    sl3 = sb3 *0.85
else:
    sl3 = sb3
total = sl1 + sl2 + sl3

# Determinação do menor salário
if sl1>sl2:
    menor=sl2
else:
    menor = sl1
if menor>sl3:
    menor = sl3

print('A soma dos salários é: ',total)
print('O menor salário é: ',menor)

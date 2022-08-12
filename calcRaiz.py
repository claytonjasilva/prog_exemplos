# =========================================================
# calcRaiz.py
# O programa calcula a raiz de uma equação do segundo grau na forma ax2+bx+c=0
# Clayton J A Silva
# 12ago2022

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
a = float(input('Digite a: '))
b = float(input('Digite b: '))
c = float(input('Digite c: '))

# Calcula as raízes
delta = b ** 2 - 4 * a * c
r1 = (-b + delta ** 0.5) / (2 * a) # Também é possivel para calcular a raiz quadrada usar o método math.sqrt(numero)
                                   # Se no cabeçalho for incluido import math
r2 = (-b - delta ** 0.5) / (2 * a)

# Escreve o resultado
print('A raiz 1 é: ', r1)
print('A raiz 2 é: ', r2)

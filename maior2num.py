#=========================================================
# maior2num.py
# O programa lê dois números, determina e escreve o maior entre eles
# Clayton J A Silva
# 12ago2022

# Leitura dos números
num1=float(input('Digite o número 1: '))
num2=float(input('Digite o número 2: '))

# Determinação e apresentação do maior entre eles
if (num1>num2):
    print('O maior número é ',num1)
else: 
    if (num2>num1):
        print('O maior número é ',num2)
    else:
        print('Os números são iguais')

#=========================================================
# maior2num.py
# O programa lê dois números, determina e escreve o maior entre eles
# Clayton J A Silva
# 26mar2022

num1=float(input('Digite o número 1: '))
num2=float(input('Digite o número 2: '))

if (num1<num2):
    print('O maior número é ',num2)
elif (num1==num2):
    print('Os números são iguais ')
else:
    print('O maior número é ',num1)
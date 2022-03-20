#=========================================================
# calcRaiz2.py
# O programa calcula a raiz de uma equação do segundo grau na forma ax2+bx+c=0
# Clayton J A Silva
# 19mar2022

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
a=float(input('Digite a: '))
b=float(input('Digite b: '))
c=float(input('Digite c: '))

# Calcula as raízes
delta=b**2-4*a*c
r1=(-b+delta**0.5)/(2*a)
r2=(-b-delta**0.5)/(2*a)

# Escreve as raízes
if (delta<0):
    print('Raizes imaginárias')
    print("A raiz 1 é ",r1)
    print("A raiz 2 é ",r2) 
elif (delta==0):
    print('Raizes reais e iguais')
    print("A raiz é ",r1)
else:
    print('Raizes reais e diferentes')
    print("A raiz 1 é ",r1)
    print("A raiz 2 é ",r2) 


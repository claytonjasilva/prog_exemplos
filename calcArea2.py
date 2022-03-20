#=========================================================
# calcArea2.py
# O programa calcula a área de uma figura geométrica
# Clayton J A Silva
# 19mar2022

import math # math é uma biblioteca de funções matemáticas
            # ver m <https://docs.python.org/pt-br/3/library/math.html>

area=0 # Atribui um valor incial para a área

# Seleciona a figura
op=input("Digite a figura desejada (1) Circulo, (2) Triangulo, (3) Retangulo: ")

if (op=='1'): #As cadeias de caracteres também podem ser delimitadas por aspas simples
    raio=float(input("Digite o raio do círculo: "))
    area=math.pi*raio**2 # Usa a constante math.pi
elif (op=='2'):
    base=float(input("Digite a base do triangulo: "))
    altura=float(input("Digite a altura do triangulo: "))
    area=base*altura/2
elif (op=='3'):
    lado1=float(input("Digite o lado 1 do retangulo: "))
    lado2=float(input("Digite o lado 2 do retangulo: "))
    area=lado1*lado2
else:
   print("Você digitou uma figura inválida")

if (area!=0):
   print("A área da figura é ",round(area,2)) 

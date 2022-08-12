#=========================================================
# calcAreaCirc.py
# O programa calcula a área e o perímetro de um círculo
# Clayton J A Silva
# 12ago2022

import math # math é uma biblioteca de funções matemáticas
            # ver em <https://docs.python.org/pt-br/3/library/math.html>

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
raio=float(input("Digite o raio do círculo: "))

# Calcula a área e o perímetro
area=math.pi*raio**2 # Usa a constante math.pi
perimetro=2*math.pi*raio # math.pi é a constante matemática 3.14

# Escreve as respostas
print("A área do círculo de raio ",raio, " e \n",round(area,1)) # O caractere especial '\n' quebra linha
print("O perímetro do círculo de raio ",raio, " e \n",round(perimetro,1))

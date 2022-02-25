#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo tipos, operadores, entrada/saída 
# ============================================================================
#

# O programa implementa operações artiméticas com variáveis, usando operadores
# + adição
# - subtração
# * multiplicação
# / divisão
# // divisão inteira
# % módulo de divisão inteira
# ** potenciação

# calculando a area de um triangulo
# base(b) x altura(h)/2
b = 5 #variável do tipo inteiro
h = 3.5 #variável do tipo ponto flutuante - ponto decimal
area = b * h/2 #expressão aritmética - atenção para a precedência entre os operadores
print(area)

# calculando a area de um quadrado
# lado(l) elevado ao quadrado
l = 3.8
area = l ** 2
print(area)

# calculando a area de um trapézio
# altura (h) x [base maior (B) + base menor (b)]/2
B = 8
b = 3.6 #Python é case sensitive
h = 2
area = h * (B +b)/2
print(area)

#Calculando o número de voltas completas e a distância restante 
#em um círculo de raio (r) quando percorrida uma distância (d)
r = 150
pi = 3.14
d = 7270
perimetro = 2*pi*r
voltas = d//perimetro
print(voltas)
d_rest = d%perimetro
print(d_rest)

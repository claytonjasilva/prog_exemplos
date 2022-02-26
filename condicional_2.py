#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo condicionais 
# ============================================================================
#

print("O programa calcula as raizes de um polinomio do segundo grau na forma a.x2+b.x+c")

#Leitura dos coeficientes do polinomio
a = float(input("Digite o valor do coeficiente 'a' "))
b = float(input("Digite o valor do coeficiente 'b' "))
c = float(input("Digite o valor do coeficiente 'c' "))
delta = b**2 - 4*a*c
if (delta==0):
  r1=-b/(2*a)
  r2=r1
  print("A raiz 1 e ",r1)
  print("A raiz 2 e ",r2)
if (delta<0):
  print("As raizes sao imaginarias")
if (delta>0):
  r1 = (-b + delta**0.5)/(2*a)
  r2 = (-b - delta**0.5)/(2*a)
  print("A raiz 1 e ",r1)
  print("A raiz 2 e ",r2)

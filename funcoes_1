#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo funções 
# ============================================================================
#

def calcRaiz2(a,b,c): #Define a funcao, estabelecendo os parametros
  delta=b**2-4*a*c
  if (delta==0):
    return -b/(2*a) #O comando return pode usar uma expressão como parâmtero
  elif (delta>0):
    return [(-b+delta**0.5)/(2*a),(-b-delta**0.5)/(2*a)]
  else:
    return("Raizes imaginarias")

#Corpo do codigo
a = float(input("Digite o coeficiente 'a' do polinomio "))
b = float(input("Digite o coeficiente 'b' do polinomio "))
c = float(input("Digite o coeficiente 'c' do polinomio "))
resposta = calcRaiz2(a,b,c) #Passa os argumentos à função
print(resposta)

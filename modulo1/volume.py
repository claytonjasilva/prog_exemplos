import math #Importa o módulo math da biblioteca padrão do Python

#Usadas as fórmulas disponíveis em https://www.matematica.pt/util/formulas.php

def cubo(l): #l é o lado da figura
  return l**3

def paral(c,l,h): #c, comprimento; l, lado; e h, altura 
  return c*l*h

def prisma(Ab,h): #Ab, área da base; h, altura
  return Ab*h

def cilindro(r,h): #r, raio; h, altura
  return math.pi*r**2*h #math.pi é a constante pi, definida no módulo math

def cone(Ab,h): #Ab, área da base; H, altura
  return Ab*h/3

def esfera(r): #r, raio da esfera
  return math.pi*r**3

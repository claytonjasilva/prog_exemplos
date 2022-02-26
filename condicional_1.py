#============================================================================
# Nome        : testaString.py
# Autor       : clayton j a silva
# Versão      : 0
# Copyright   : clayton j a silva
# Descrição   : Realiza testes em uma frase
#============================================================================

frase = input("Digite a frase: ")
tamanho = len(frase) #a função len(<string>) retorna o tamanho da string

if (tamanho<20): #condição é uma expressão lógica
  print("a frase é pequena - possui ",tamanho," caracteres") #condicional simples

if (tamanho>30):
  print("a frase é grande - possui ",tamanho," caracteres")
else:
  print("a frase é pequena ou média") #condicional composta

#A expressão lógica retorna True - verdadeiro - ou False - falso
print(tamanho<20)
print(tamanho>20)

if (tamanho<20):
  print("a frase é pequena")
elif (tamanho<30):
  print("a frase é média")
else:
  print("a frase é grande")

#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo tipos, operadores, entrada/saída 
# ============================================================================
#

print("Este programa determina a area de um triangulo") #Comando de saída - print()

#Leitura dos dados do triangulo 
b = float(input("Informe o comprimento da base (em metros) ")) #Comando de entrada - input(), comando float() converte o argumento para ponto flutuante
h = float(input("Informe o comprimento da altura (em metros) "))
area = (b * h)/2
print("A area do triangulo e ",area," metros quadrados")
# Além do float(), int() converte o argumento para inteiro

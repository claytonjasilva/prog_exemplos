#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo funções 
# ============================================================================
#

def fatorial(numero):
  fat = 1
  if (numero==0 or numero==1):
    return 1
  else:
    while (numero>1):
      fat *= numero
      numero -= 1
    return fat

#Inicio do corpo do codigo
numero = int(input("Digite o numero "))
print(fatorial(numero)," é o fatorial de ...",numero)
#Observe que a função não alterou o valor de número

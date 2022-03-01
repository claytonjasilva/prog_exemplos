#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo repetições 
# ============================================================================
#

print("O programa le um numero N de cartoes de vacina...")
print("le em cada cartao qual a dose mais recente 1, 2 ou 3 ...")
print("le a idade das pessoas que tomaram a 3 dose e calcula a media")

N = int(input("Digite o numero de cartoes "))
soma = 0
cont = 0
for num in range(1,N+1):
  dose = int(input("Digite a dose "))
  if (dose == 3):
    idade = int(input("Digite a idade "))
    soma += idade
    cont += 1
if (cont>0):
  media = soma/cont
  print("A idade media de quem tomou a 3 dose e ",media)
else:
  print("Nenhum dos vacinados tomou a 3 dose")

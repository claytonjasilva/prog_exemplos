#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo condicionais 
# ============================================================================
#

print("O programa le 3 notas de aluno ap1 ap2 ac...")
print("calcula a media 40% ap1 + 40% ap2 + 20% ac")
print("informa a media e a condicao AP, se igual ou superior a 7 e frequencia superior a 25%... ")
print("le a nota as, se inferior a 7, substituindo a menor das notas ap para recalcular a media...")
print("informa o resultado final AP ou REP")

ap1 = float(input("Digite a nota da ap1..."))
ap2 = float(input("Digite a nota da ap2..."))
ac = float(input("Digite a nota da ac..."))

media = 0.4*(ap1+ap2)+ 0.2*ac #Determina a media

if (media>=7):
  print("Aluno AP, media ",media)
else:
  ps = float(input("Digite a nota da ps..."))
  if (ap1>ap2):
    media = 0.4*(ap1+ps)+ 0.2*ac #Determina a nova media
  else:
    media = 0.4*(ps+ap2)+ 0.2*ac #Determina a nova media
  if (media>=7):
    print("Aluno AP, media ",media)
  else:
    print("Aluno REP, media ",media)

#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo listas 
# ============================================================================
#

print("O programa le as notas de um grupo de N alunos...")
print("determina a maior das notas e apresenta a porcentagem de cada nota em relacao a maior")
N = int(input("Defina o numero de alunos "))
nota = [] #Cria a lista vazia
cont = 0
maior = 0
while (cont<N):
  nota.append(float(input("Digite a nota ")))
  if (nota[cont]>maior):
    maior = nota[cont]
  cont += 1
for num in range(0,N):
  print("Aluno ",num+1," ",nota[num]/maior*100) #Admite-se que pelo menos uma nota e maior do que 0

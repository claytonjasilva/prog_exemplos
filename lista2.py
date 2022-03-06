#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo listas 
# ============================================================================
#

print("O programa le as notas de uma relacao de alunos e escreve o nome dos alunos de maior nota")
alunos = ["joao","ana","igor","pedro","maria"]
notas = [8.7,7.5,8.7,8.1,6.4]
maior = 0
for num in range(0,len(alunos)-1): #Ver os metodos de lista em https://docs.python.org/pt-br/3/tutorial/datastructures.html
  if (maior<notas[num]):
    maior = notas[num]
for num in range(0,len(alunos)-1):
  if (notas[num]==maior):
    print("O aluno ",alunos[num]," tirou a maior nota = ",maior)

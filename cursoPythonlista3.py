# Elaborar um programa em Python para ler uma lista contendo as notas de um grupo de 20 alunos.  
# Escrever as notas inferiores à média da turma. 

N = 20
nota = [ float(input('Digite a nota: ')) for i in range(N) ] # Leitura das notas usando compreensao de lista
media = sum(nota)/N
for i in range(N):
  if nota[i] < media:
    print('A nota ',nota[i],'e inferior a ',media)


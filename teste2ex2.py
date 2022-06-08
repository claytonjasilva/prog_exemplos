# O script lê e armazena uma lista de notas (nota) de um grupo de 30 alunos. 
# O programa calcula a média (media) das notas da turma. 
# O programa escreve a nota de cada um dos 10 primeiros alunos, seguida da média das notas.

# Leitura e armazenamento da lista de notas
N = 30
nota = []
media = 0 # inicializa a média das notas
for i in range(N):
  nota.append(float(input('Digite a nota: ')))
  media = media + nota[i] # atualiza a soma das notas em media
media = media/N # determina a média

# Escrita das notas dos 10 primieiros alunos cadastrados seguida da média geral 
for i in range(10):
  print('Nota do aluno ',i,': ',nota[i],' em relação à média geral: ',round(media,1))


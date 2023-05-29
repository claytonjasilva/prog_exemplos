# Criar uma tupla para armazenar números inteiros de 1 a 10.
# Cada número inteiro define o código de um aluno.
# Cadastrar três notas de cada um dos alunos, digitadas pelo usuário.

codigo = 1, 2, 3, 4, 5 , 6, 7, 8, 9, 10 # Cria a tupla e incializo a tupla
nota = [[],[],[]] # Notas dos alunos
for i in range(len(codigo)):
  print('aluno ',codigo[i])
  nota[0].append(float(input('Digite a nota 1: ')))
  nota[1].append(float(input('Digite a nota 2: ')))
  nota[2].append(float(input('Digite a nota 1: ')))
  print('\n')

print(codigo,nota)

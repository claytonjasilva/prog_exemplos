# O script lê e determina a média de N números lidos

# Cadastra alunos no dicionário
N = 20
aluno = dict()
for i in range(N):
  matricula = input('Digite a matrícula: ')
  aluno[matricula] = float(input('Digite a nota: '))

# Pesquisa de matricula
while True:
  try:
    matr_pesq = input('Pesquise uma matricula: ')
    if matr_pesq not in aluno.keys():
      raise KeyError
    else:
      print(aluno[matr_pesq])
  except KeyError:
    print('Matrícula inexistente')

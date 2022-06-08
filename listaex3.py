# O programa lê e armazena a matrícula (matricula) e a nota (nota) de um grupo de 30 alunos. 
# As matrículas são armazenadas na tupla matricula. 
# As notas são armazenadas na lista nota. 
# O programa escreve as matrículas dos alunos cuja nota seja superior ou igual a 7,0. 

# Leitura a matricula dos alunos e as respectivas notas
N = 3
matricula = []
nota = []
for i in range(N):
  matricula.append(input('Digite a matricula: '))
  nota.append(float(input('Digite a nota: ')))
matricula = tuple(matricula)

# escrita das maticulas dos alunos com nota superior ou igual a 7,0
for i in range(N):
  if nota[i]>=7:
    print('matricula: ',matricula[i])

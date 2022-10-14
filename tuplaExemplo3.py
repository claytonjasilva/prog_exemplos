# Elaborar um programa em Python que leia a matrícula de um grupo de N alunos,
# cadastrando-as em uma tupla. Leia também as notas do grupo [AP1, AP2 e AC],
# adastrando-as em uma lista. O programa deverá determinar a média parcial (MP) de cada aluno,
# considerando que MP = 0,4(AP1+AP2) + 0,2 AC.
# Deverá cadastrar em uma tupla as matriculas, as notas e a média parcial de todos os alunos.
# Atualizado em 14/10/22

# Leitura do número de alunos da turma
N = int(input('Digite quantos alunos: '))

# Inicialização das listas
matricula = []
ap1 = []
ap2 = []
ac = []
media = []

# Leitura dos dados
print('Leitura de matriculas')
matricula = [input('Digite a matricula: ') for i in range(N)]
tuple(matricula)
print('Leitura de notas AP1')
ap1 = [float(input('Digite a nota da ap1: ')) for i in range(N)]
print('Leitura de notas AP2')
ap2 = [float(input('Digite a nota da ap2: ')) for i in range(N)]
print('Leitura de notas AC')
ac = [float(input('Digite a nota da ac: ')) for i in range(N)]

# Determinação das médias
media = [0.4 * (ap1[i] + ap2[i]) + 0.2 * ac[i] for i in range(N)]
nota = [ap1, ap2, ac]  # Criando uma lista de listas
aluno = matricula, nota, media

# Geração do relatório
print('RELATÓRIO')
for i in range(N):
    print(matricula[i], ' ', nota[i], ' ', media[i])

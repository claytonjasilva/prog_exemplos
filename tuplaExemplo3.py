# Elaborar um programa em Python que leia a matrícula de um grupo de N alunos.
# Leia também as notas do grupo (AP1, AP2 e AC).
# O programa deverá escrever a matrícula e a média de cada aluno.

N = int(input('Digite quantos alunos: '))
mat = []
ap1 = []
ap2 = []
ac = []
nota = [ap1, ap2, ac]
media = []
for i in range(N):
    mat.append(input('Digite a matricula: '))
    ap1.append(float(input('Digite a nota da ap1: ')))
    ap2.append(float(input('Digite a nota da ap2: ')))
    ac.append(float(input('Digite a nota da ac: ')))
    media.append(0.4 * (ap1[i] + ap2[i]) + 0.2 * ac[i])
matricula = tuple(mat)
#print(matricula)
#print(nota)
#print(media)
for i in range(N):
    print(matricula[i],' ',nota[0][i],' ',nota[1][i],' ',nota[2][i],' ',media[i])

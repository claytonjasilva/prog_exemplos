# Elaborar um programa em Python que leia a matrícula de um grupo de N alunos.
# Como a matrícula identifica de modo inequìvoco cada aluno,
# após cadastrar a matrícula dos alunos, o programa não admitirá mudar o número os dados cadastrados.

N = int(input('Digite o numero de alunos matriculados: '))
mat = []
for i in range(N):
    mat.append(input('Digite a matricula: '))
matricula = tuple(mat)
print(matricula)
# mat[0] = 3
# print(mat)

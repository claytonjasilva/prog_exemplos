# Elaborar um programa em Python que leia a matrícula de um grupo de N alunos.
# Como a matrícula identifica de modo inequìvoco cada aluno,
# após cadastrar a matrícula dos alunos, o programa não admitirá mudar a matrícula cadastrada.
# Atualizaado em 14/10/2022

N = int(input('Digite o numero de alunos matriculados: '))
matricula = []
for i in range(N):
    matricula.append(input('Digite a matricula: '))
matricula = tuple(matricula)
print(matricula)

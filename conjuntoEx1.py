# Criar dois conjuntos com alunos de duas turmas com, no máximo, 5 alunos cada.
# Os conjuntos devem conter as matrículas dos alunos.
# Os alunos são matriculados inicialmente na turma A.
# Quando a capacidade da turma A for completada o programa passa a matricular na turma B.
# Quando a capacidade da turma B for completada o programa deve ser encerrado.

A = []
B = []
A = set(A)
B = set(B)
N = 10
cont = 0
op = input('Deseja matricular um aluno?: (1) sim (2) nao ')
while (op == '1') and (cont < 10):
    cont += 1
    if cont <= 5:
        A.add(input('Digite a matrícula: '))
    else:
        B.add(input('Digite a matrícula: '))
    op = input('Deseja matricular novo aluno?: (1) sim (2) nao ')
print(A)
print('-----')
print(B)

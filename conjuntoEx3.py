# 3. Criar um conjunto contendo as matrículas de um grupo de 10 alunos.
# Considerando o conjunto de matrículas, o programa deve ler uma matrícula digitada,
# verificar se pertence ao conjunto,
# criando um dicionário, com chave matrícula e a respectiva nota.
# Caso não pertença, incluir a matrícula no conjunto.

N = 10
matricula = [input('Digite o dado do conjunto A: ') for i in range(N)]
matricula = set(matricula)
dicionario = dict([])
op = input('Deseja inserir um dado de matricula?: (1) sim (2) nao: ')
while op == '1':
    dado = input('Digite uma matrícula: ')
    if dado in matricula:
        dicionario[dado] = float(input('Digite a nota: '))
    else:
        matricula.add(dado)
        dicionario[dado] = float(input('Digite a nota: '))
    op = input('Deseja inserir um novo dado de matricula?: (1) sim (2) nao: ')
print(matricula)
print(dicionario)

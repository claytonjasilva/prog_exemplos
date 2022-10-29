# Criar um dicionário com as matrículas, nomes e notas finais de um grupo de 30 alunos.
# Com o dicionário criado, o usuário poderá digitar uma matrícula.
# O programa deverá retornar os dados cadastrados.
# Atualizado em 22/10/22

N = 3
aluno = dict() # Cria dicionário vazio

# Cadastra os dados
for i in range(N):
    matricula = input('Digite a matricula: ')
    aluno[matricula] = [input('Digite o nome do aluno: '), float(input('Digite a nota do aluno: '))]

# Pesquisa os dados pela matricula
entrada = input('Digite a matricula a ser pesquisada: ')
if entrada not in aluno.keys():
    print('Aluno inexistente')
else:
    print(aluno[entrada])

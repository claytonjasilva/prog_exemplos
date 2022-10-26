# Criar um dicionário com a matrícula (chave) e nome de um grupo de 30 alunos.
# Deseja-se implementar uma função que retorna a matrícula dado um nome.
# À medida que cada letra do nome é digitada a relação de matrículas que 'casa'
# com a formação do nome é apresentada.

def busca(nome, dicionario):
    lista = [chave for chave in dicionario.keys() if nome in dicionario[chave]]
    return lista


# Cadastra aluno
N = 5
aluno = dict()
for i in range(N):
    matricula = input('Digite a matricula: ')
    aluno[matricula] = input('Digite o nome do aluno: ')

# Pesquisa os dados
nome = ''
letra = input('Digite letra: ')
while letra != ' ':
    nome += letra
    print(nome, ' matricula(s): ', busca(nome, aluno))
    letra = input('Digite letra: ')
print('fim')

# 1. Criar uma tupla contendo pares de dados, nome e peso, de um grupo de N alunos.
# A tupla se destina a armazenar somente alunos cujo nome inicia com a letra a.
# Enquanto o usuário tentar inserir um nome que inicie com outra letra o programa
# deverá apresentar uma mensagem de erro (usar tratamento de exceção).
# Após a tupla criada, o usuário poderá pesquisar e escrever o par de informações
# pela posição em que foi inserido. Se o usuário digitar uma posição inválida o programa
# deverá apresentar uma mensagem de erro (usar tratamento de exceção).
# O usuário poderá fazer no máximo 10 pesquisas.

def criaTurma(n):
    turma = []
    for i in range(n):
        while True:
            try:
                nome = input('Digite o nome: ')
                if nome[0] != 'a':
                    raise ValueError
                else:
                    peso = float(input('Digite o peso: '))
                    turma.append([nome, peso])
                break
            except ValueError:
                print('Nome deve inciar com letra a')
    return turma


N = int(input('Digite o número de alunos: '))
turma = criaTurma(N) # Criação da turma
# Pesquisa de dados no máximo 10 vezes
cont = 0
while cont < 10:
    try:
        indice = int(input('Digite o índice a ser pesquisado: '))
        print(turma[indice])
        cont += 1
    except IndexError:
        print('Posição inválida')

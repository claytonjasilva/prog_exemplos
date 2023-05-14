# Elaborar um programa em Python para ler uma lista contendo o nome e outra lista contendo a idade de um grupo de 15 pessoas.  
# Escrever os nomes dos alunos com nota inferior à média da turma.

N = 15
nome = [] # Inicializa lista vazia
idade = []
for i in range(N):
  nome.append(input('Digite o nome: ')) # Método lista.append(dado) insere dado no final da lista
  idade.append(int(input('Digite a idade: ')))
media = sum(idade)/N
for i in range(N):
  if idade[i] < media:
    print(nome[i])
  

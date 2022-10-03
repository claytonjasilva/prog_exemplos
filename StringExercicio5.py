# 5. Elaborar um script em Python que leia uma relação de nomes de alunos 
# Após cadastrar a relação o usuário poderá digitar uma letra e o 
# programa retornará todos os nomes iniciados com a letra digitada.
# Atualizado em 3/10/22

N = int(input('Digite o tamanho da relação: '))
nome = []
for i in range(N): # leitura e cadastro da relação
  nome.append(input('Digite o nome: '))
  
letra = input('Digite a letra: ')
for i in range(N):
  if nome[i][0]==letra: # nome[i] é um string, logo nome[i][0] é a primeira letra da string nome[i]
    print(nome[i])

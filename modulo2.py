import statistics

lista=[] #Cria uma lista vazia...estudaremos lista daqui a pouco
print("O programa lê e calcula a média da idade de um grupo de alunos")
for i in range(5):
  print("aluno ",i) 
  idade=int(input("idade \n")) #'\n' realiza uma quebra de linha
  lista.append(idade) #Inlcui o elemento lido na lista
print("relação de idades \n",lista)
print("idade média: \n",statistics.mean(lista))

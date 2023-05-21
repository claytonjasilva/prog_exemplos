# 7. Elaborar um programa em Python para ler uma lista contendo 10 nomes de pessoas.  
# Em seguida, o programa deverá cadastrar para cada nome a respectiva idade   

N = 10
nome = [ input('Digite o nome: ') for i in range(N) ] # Cadastra a lista de nomes
idade = [] # Cria uma lista de idades vazia
for nm in nome: # Pesquisa os nomes na lista cadastrada para cadastro de idades
  idade.append(input('Digite a idade de '+nm+': ')) # Concatenação de strings no argumento do input

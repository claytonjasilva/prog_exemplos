# Elaborar um programa em Python para ler uma lista contendo peso e altura de um grupo de 10 pessoas.  
# Em seguida, o programa deverá criar uma nova lista contendo o IMC das pessoas.  
# O IMC é calculado pela razão entre o peso e o quadrado da altura.  

N = 10
peso = [] # Cria as listas de peso e altura vazias
altura = []
for i in range(N): # Popula as listas
  peso.append(int(input('Digite o peso: ')))
  altura.append(float(input('Digite a altura: ')))
pessoa = [peso,altura] # Cria a lista de listas pessoa
imc = [pessoa[0][i]/pessoa[1][i]**2 for i in range(N)] # Cria a lista imc com compreensao de listas
pessoa.append(imc)
print(pessoa)

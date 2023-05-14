# Elaborar um programa em Python para ler uma lista contendo a idade de um grupo de 15 pessoas.  
# Ordenar crescentemente a lista e escrever as 10 maiores idades.

N = 15
idade = [ int(input('Digite a idade: ')) for i in range(N) ]
idade.sort() # Método lista.sort de ordenar a lista
print(idade[N-10:]) # Escreve a lista fatiada

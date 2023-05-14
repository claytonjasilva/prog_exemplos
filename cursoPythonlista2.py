# Elaborar um programa em Python para criar uma lista contendo os 20 números pares a partir de um número digitado pelo usuário.  
# Se o número digitado pelo usuário não for par, o programa deve solicitar que o usuário digite um número válido.

while True: # Le um numero par
  numero = int(input('Digite um numero valido - numero par: '))
  if numero % 2 == 0:
    break
lista = [ numero+i*2 for i in range(20) ] # Cria a lista usando compreensao de lista
print(lista) # Escreve a lista criada

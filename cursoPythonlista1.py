#Elaborar um programa na Linguagem Python que, dada a lista=[1.5, 6.6, 7, 8.9, 15,12.56], 
#leia um número qualquer e escreva uma mensagem informando 
#se o número lido é maior ou menor do que a soma dos números da lista.

lista = [1.5, 6.6, 7, 8.9, 15, 12.56] # Inicializando a lista
soma = sum(lista) # A funcao sum determina a soma dos elementos da lista
numero = float(input('Digite o numero: ')) # Le um numero digitado pelo usuario
if numero > soma:
  print('O numero digitado e maior do que a soma dos elementos da lista, ',soma)
elif numero == soma:
  print('O numero digitado e igual a soma dos elementos da lista, ',soma)
else:
  print('O numero digitado e menor do que a soma dos elementos da lista, ',soma)

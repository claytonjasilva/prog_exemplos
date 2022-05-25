#3. Elaborar um script em Python que leia uma palavra digitada pelo usuário.
#O programa deverá escrever a palavra digitada com a posição das letras invertidas.

palavra = input('Digite a palavra: ')
N = len(palavra)
for i in range(N-1,-1,-1): # range(inicio,fim,passo) corresponde a inicio, inicio+passo, ... - o passo pode ser decremento 
  print(palavra[i])

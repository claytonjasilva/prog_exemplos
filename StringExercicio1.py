#1. Elaborar um script em Python que permita ler uma palavra digitada pelo usuário.
#O programa deverá escrever todas as letras da palavra diferentes da letra ‘a’. 

palavra = input('Digite a palavra: ') # Lê a palavra
N = len(palavra) # Determina o tamanho
for i in range(N):
  if palavra[i]!='a': # Uma string é uma sequência imutável - cada letra corresponde a uma posição ordenada
    print(palavra[i],end="") # Escreve a letra da palavra diferente de 'a' o argumento opcional end="" mantém na mesma linha

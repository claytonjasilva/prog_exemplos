# 3. Elaborar um script em Python que leia uma palavra digitada pelo usuário.
# O programa deverá escrever a palavra digitada com a posição das letras invertidas.
# Atualizado em 2/10/22

palavra = input('Digite a palavra: ')
N = len(palavra)
for i in range(N):
  print(palavra[N-i-1], end="") # Escreve da última letra para a primeira

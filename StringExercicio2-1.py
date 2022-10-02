# 2. Elaborar um script em Python que permita ler um texto digitado pelo usurário.
# O programa deverá calcular o número de vogais presentes no texto digitado.
# Atualizado em 2/10/22

texto = input('Digite o texto: ')
N = len(texto)
vogais = ['a','e','i','o','u']
cont = 0
for i in range(N):
  if texto[i] in vogais: # objeto in - verifica se o elemento pertence à lista
    cont += 1
print('O número de vogais no texto é ... ',cont)

#2. Elaborar um script em Python que permita ler um texto digitado pelo usurário.
#O programa deverá calcular o número de vogais presentes no texto digitado.

texto = input('Digite o texto: ')
N = len(texto)
vogais = ['a','e','i','o','u']
cont = 0
for i in range(N):
  if texto[i] in vogais:
    cont += 1
print(cont)

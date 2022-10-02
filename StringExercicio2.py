#2. Elaborar um script em Python que permita ler um texto digitado pelo usurário.
# O programa deverá calcular o número de vogais presentes no texto digitado.
# Atualizado em 2/10/22

texto = input('Digite o texto: ')
N = len(texto)
cont = 0 # Contador de letras do texto
for i in range(N):
  if (texto[i]=='a')or(texto[i]=='e')or(texto[i]=='i')or(texto[i]=='o')or(texto[i]=='u'): # Testa somente as letras vogais minúsculas
    cont += 1
print('O número de vogais no texto é... ',cont)

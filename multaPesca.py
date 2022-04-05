# O programa apresenta uma solução do exercício 2 da lista 1
# Clayton J A Silva
# 5abr2022

#  define constantes
peso_lim = 50
multa_peso_excedente = 4

#  leitura de dados
peso = float(input('Digite o peso do peixe: '))

#  determinação do excedente
excesso = peso - peso_lim
multa = excesso * multa_peso_excedente

#  apresenta os resultados
print("O excesso de peso é: ", excesso)
print("A multa pelo excesso é: ", multa)

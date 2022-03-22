#=========================================================
# calcIMC.py
# O programa calcula o índice de massa corpórea de uma pessoa
# Clayton J A Silva
# 19mar2022

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
peso=float(input("Digite o peso da pessoa: \n")) # Barra invertida - a sequência de escape '\n' quebra linha
altura=float(input("Digite a sua altura: \n"))

# Calcula o imc
imc=peso/altura**2

# Escreve as raízes
print("O IMC da pessoa é ",round(imc,1))

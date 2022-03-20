#=========================================================
# calcIMC2.py
# O programa calcula o índice de massa corpórea de uma pessoa
# Classifica o estado de acordo com o resultado
# Clayton J A Silva
# 19mar2022

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
peso=float(input("Digite o peso da pessoa: \n")) # O caractere especial '\n' quebra linha
altura=float(input("Digite a sua altura: \n"))

# Calcula o imc
imc=peso/altura**2

# Escreve o imc
print("O IMC da pessoa é ",round(imc,1))

# Testa a categoria - ref.<https://escolaeducacao.com.br/wp-content/uploads/2020/04/tabela-imc.jpg>
if (imc<16):
    print("Baixo peso grau I")
elif (imc<17):
    print("Baixo peso grau II")
elif (imc<18.5):
    print("Baixo peso grau III")
elif (imc<25):
    print("Peso ADEQUADO")
elif (imc<30):
    print("Sobrepeso")
elif (imc<35):
    print("Obesidade grau I")
elif (imc<40):
    print("Obesidade grau II")
else:
    print("Obesidade grau III")

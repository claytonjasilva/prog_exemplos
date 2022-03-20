#=========================================================
# calcVoltas.py
# O programa calcula e apresenta o número de voltas em uma pista retangular
# Calcula a distância que falta para completar a próxima volta 
# Clayton J A Silva
# 19mar2022

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
l_maior=float(input("Digite o lado 1 do retângulo: "))
l_menor=float(input("Digite o lado 2 do retângulo: "))

# Calcula o perimetro
perimetro=(l_maior+l_menor)*2

# Leitura da distância percorrida
dist=float(input("Digite a distância: "))

# Calcula o número de voltas completadas
n_voltas=dist//perimetro
# Calcula a distância para completar mais uma volta
dist_rest=perimetro-dist%perimetro

# Escreve o número de voltas e a distância a completar
print("O número de voltas é ",n_voltas)
print("A distancia restante é ",dist_rest)

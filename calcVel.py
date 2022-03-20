#=========================================================
# calcVel.py
# O programa calcula a velocidade de chegada da queda de um corpo em queda livre de altura h
# Clayton J A Silva
# 19mar2022

# Definição da constante gravitacional
g=10 # m/s2

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante
altura=float(input("Digite a altura do edifício: "))

# Calcula a velocidade da queda do corpo
v=(2*altura*g)**0.5

# Escreve a velocidade
print("\nA velocidade de queda é ",round(v,2))

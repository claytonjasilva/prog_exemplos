#=========================================================
# calcNotas.py
# um programa na linguagem Python para ler as notas da ap1, ap2 e ac;
# calcular e escrever a média do semestre do aluno, de acordo com as regras do Ibmec.
# Clayton J A Silva
# Atualizado em: 12ago2022

# Leitura dos dados de entrada e atribuição às variáveis do tipo ponto flutuante (float)
ap1=float(input("Digite a nota da AP1: ")) # O valor digitado pelo usuário será atribuído como float a ap1
ap2=float(input("Digite a nota da AP2: "))
ac=float(input("Digite a nota da AC: "))

# Cálculo da nota do período
np=0.4*(ap1+ap2)+0.2*ac # O conteúdo do parênteses tem prioridade sobre a multiplicação

# Escreve a nota do período
print("A nota final do aluno é ",round(np,1)) # Aproxima o resultado em uma casa decimal

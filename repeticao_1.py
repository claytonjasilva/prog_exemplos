#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo repetição 
# ============================================================================
#

print("O programa le o numero - N - de clientes de uma clinica...")
print("le os pesos dos clientes e calcula o peso medio")
N = int(input("Digite o numero de clientes "))
cont = 0
soma = 0
while (cont<N):
  peso = float(input("Digite o peso "))
  soma = soma + peso
  cont = cont + 1
media = soma/N
print("O peso medio dos clientes e ",media)

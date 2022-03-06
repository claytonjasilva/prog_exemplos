#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo listas 
# ============================================================================
#

print("O programa cadastra uma agenda com nome, telefone, idade de um grupo de N pessoas... ")
print("em seguida le uma idade e apresenta o nome e telefone das pessoas com idade superior a lida")

agenda = [[],[],[]] #Lista aninhada - matriz - cada lista ocupa um indice...no caso, [0][1][2] 
#A agenda esta organizada com 3 linhas - nome,idade,telefone - N colunas de pessoas
N = int(input("Digite o numero de pessoas "))
for num in range(0,N):
  agenda[0].append(str(input("Digite o nome ")))
  agenda[1].append(int(input("Digite a idade ")))
  agenda[2].append(str(input("Digite o telefone ")))
idade = int(input("Digite a idade "))
print("Pessoas com idade superior a ",idade)
for num in range(0,N):
  if (agenda[1][num]>idade):
    print("nome ",agenda[0][num]," telefone ",agenda[2][num])

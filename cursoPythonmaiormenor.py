# Este código resolve o problema
# 1. Elaborar um script na linguagem Python para ler a idade de 2 pessoas.
# Escrever a menor idade e a maior idade dentre as idades lidas e a sua própria idade.
# Admitir que o usuário digitará idades diferentes. Usar comentários no corpo do código.

# Utiliza-se como base de solução a troca que é um recurso comum nos algoritmos de ordenação

maior = menor = minhaIdade = 59  # Incializa as variaveis que referenciam a maior e menor idade

# Leitura e teste da primeira idade lida
idade1 = int(input('Digite a primeira idade: '))
if idade1 > maior:
    maior = idade1  # troca
elif idade1 < menor:
    menor = idade1  # troca
# Leitura e teste da segunda idade lida
idade2 = int(input('Digite a segunda idade: '))
if idade2 > maior:
    maior = idade2  # troca
elif idade2 < menor:
    menor = idade2  # troca

# Dados de saida
print('A maior idade eh ',maior)
print('A menor idade eh ',menor)

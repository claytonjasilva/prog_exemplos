# Elaborar um script em Python que leia o nome e a idade de um grupo de 50 animais.
# Escrever o nome do animal mais velho.
# Interromper a leitura se o usuário digitar idade igual a 0.

maior_idade = 0
N = 50
idade = int(input('Digite a idade do animal: '))
for i in range(50):
    nome = input('Digite o nome do animal: ')
    if idade > maior_idade: # troca
        maior_idade = idade
        maior_nome = nome
    idade = int(input('Digite a idade do animal: '))
    if idade == 0:
        break

if maior_idade == 0:
    print('Não foi digitado idade e nome de nenhum animal')
else:
    print('O animal mais velho possui ', maior_idade, ' anos. Seu nome eh ', maior_nome)

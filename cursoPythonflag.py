# Elaborar um script em Python que leia o nome e a idade de um grupo de animais.
# Escrever o nome do animal mais velho.
# Interromper a leitura quando o usuário digitar idade igual a 0.

maior_idade = 0
idade = int(input('Digite a idade do animal: '))
while idade != 0:
    nome = input('Digite o nome do animal: ')
    if idade > maior_idade: # troca
        maior_idade = idade
        maior_nome = nome
    idade = int(input('Digite a idade do animal: '))

if maior_idade == 0:
    print('Não foi digitado idade e nome de nenhum animal')
else:
    print('O animal mais velho possui ', maior_idade, ' anos. Seu nome eh ', maior_nome)

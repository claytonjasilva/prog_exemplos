# Elaborar um script em Python que leia o nome e a idade de um grupo de 50 animais. 
# Escrever o nome do animal mais velho.
# Interromper a leitura se o usuário digitar idade igual a 0.

cont = 0 # Inicializa contador
maior_idade = 0 # Inicializa a variável que armazena a maior idade
idade = int(input('Digite a idade do animal: '))
while cont<50:
    if idade == 0:
      break
    else:
      nome = input('Digite o nome do animal: ')
      if idade > maior_idade:
        maior_idade = idade
        maior_nome = nome
      cont += 1
      idade = int(input('Digite a idade do animal: '))

if cont == 0:
    print('Não foi digitado idade e nome de nenhum animal')
else:
    print('O nome do animal mais velho dentre os ',cont, ' animais eh ',maior_nome)

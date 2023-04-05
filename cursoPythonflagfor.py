# Elaborar um script em Python que leia o nome e a idade de um grupo de 50 animais. 
# Escrever o nome do animal mais velho.
# Interromper a leitura se o usuário digitar idade igual a 0.

N = 50 # Define a constante que limita a contagem
maior_idade = 0 # Inicializa a variável que armazena a maior idade
idade = int(input('Digite a idade do animal: '))
for cont in range(N):
    if idade == 0: 
      break # Sai do loop se o flag de idade igual a 0 ocorrer
    else:
      nome = input('Digite o nome do animal: ')
      if idade > maior_idade: # troca
        maior_idade = idade
        maior_nome = nome
      idade = int(input('Digite a idade do animal: '))

if cont == 0:
    print('Não foi digitado idade e nome de nenhum animal')
else:
    print('O nome do animal mais velho dentre os ',cont, ' animais eh ',maior_nome)

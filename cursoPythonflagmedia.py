# Elaborar um script em Python que leia o nome e a idade de um grupo de animais.
# Escrever o nome do animal mais velho.
# Interromper a leitura quando o usuário digitar idade igual a 0.

cont = 0
soma = 0
idade = int(input('Digite a idade do animal: '))
while idade != 0:
    cont += 1
    nome = input('Digite o nome do animal: ')
    soma += idade
    idade = int(input('Digite a idade do animal: '))

if cont == 0:
    print('Não foi digitado idade e nome de nenhum animal')
else:
    media = soma / cont
    print('A media das idades eh', media, ' anos.')

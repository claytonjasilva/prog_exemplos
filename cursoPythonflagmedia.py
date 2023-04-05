# Elaborar um script em Python que leia o nome e a idade de um grupo de animais. 
# Escrever a média das idades lidas.
# Interromper a leitura quando o usuário digitar idade igual a 0.

cont = 0 # Inicializa o contador de idades válidas
soma = 0 # Inicializa a variável que armazena a soma das idades válidas lidas
idade = int(input('Digite a idade do animal: '))
while idade != 0: # A idade é o flag para sair do loop
    cont += 1 # Incrementa o contador de idade válida
    nome = input('Digite o nome do animal: ')
    soma += idade # Atualiza a soma das idades
    idade = int(input('Digite a idade do animal: '))

if cont == 0:
    print('Não foi digitado idade e nome de nenhum animal')
else:
    media = soma / cont
    print('A media da idade dos anmiais eh ', media)

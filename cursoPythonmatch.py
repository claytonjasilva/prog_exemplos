# Elaborar um script em Python que leia a classificação (J - jovem, A - adulto, V - velho),
# a idade e o peso de um grupo de animais.
# Escrever a média das idades dos animais jovens.
# Escrever a idade do animal mais pesado dentre os adultos.
# Escrever o percentual dos animais velhos.
# Interromper a leitura quando o usuário digitar idade igual a 0.

cont = 0 # Inicializa variável que conta os animais com idades válidas
cont_jovem = 0 # Inicializa variável que conta os animais jovens
soma = 0 # Inicializa a variável que armazena a soma dos pesos dos animais jovens
maior_peso = 0 # Inicializa a variável que armazena o mairo pesso dos animais adultos
cont_velho = 0 # Inicializa variável que conta os animais velhos
idade = int(input('Digite a idade do animal: '))
while idade != 0:
  if idade == 0:
    break
  else:
    cont += 1 # Incrementa a variável que conta os animias como idades válidas
    classe = input('Digite a classe do animal: ')
    peso = float(input('Digite o peso do animal '))
    match classe:
        case 'J':
            soma += idade # Atualiza a soma dos pesos dos animais jovens
            cont_jovem += 1 # Atualiza a contagem do número de animias jovens
        case 'A':
            if peso > maior_peso: #troca e armazena peso e nome dos animias adultos mais pesados 
                maior_peso = peso
                maior_idade = idade
        case 'V':
            cont_velho += 1 # Atualiza a contagem do número de animias velhos
    idade = int(input('Digite a idade do animal: '))

if cont == 0:
    print('Não foi digitado idade, classe e peso de nenhum animal')
else:
    if cont_jovem != 0:
        media_jovem = soma / cont_jovem
        print('A media das idades dos animais jovens eh', media_jovem, ' anos.')
    else:
        print('Nao ha animais jovens.')
    if maior_peso == 0:
      print('Não foi digitado dado de animal adulto')
    else:
      print('A idade do animal adulto mais pesado eh ', maior_idade)
    if cont_velho == 0:
      print('Não foi digitado dado de animal velho')
    else:
      print('O percentual de animais velhos eh ', cont_velho * 100 / cont, ' %')

# Elaborar um script em Python que leia a classificação (J - jovem, A - adulto, V - velho),
# a idade e o peso de um grupo de animais.
# Escrever a média das idades dos animais jovens.
# Escrever a idade do animal mais pesado dentre os adultos.
# Escrever o percentual dos animais velhos.
# Interromper a leitura quando o usuário digitar idade igual a 0.

cont = 0
cont_jovem = 0
cont_velho = 0
maior_peso = 0
soma = 0
idade = int(input('Digite a idade do animal: '))
while idade != 0:
    cont += 1
    classe = input('Digite a classe do animal: ')
    peso = float(input('Digite o peso do animal '))
    match classe:
        case 'J':
            soma += idade
            cont_jovem += 1
        case 'A':
            if peso > maior_peso:
                maior_peso = peso
                maior_idade = idade
        case 'V':
            cont_velho += 1
    idade = int(input('Digite a idade do animal: '))

if cont == 0:
    print('Não foi digitado idade, classe e peso de nenhum animal')
else:
    if cont_jovem != 0:
        media_jovem = soma / cont_jovem
        print('A media das idades dos animais jovens eh', media_jovem, ' anos.')
    else:
        print('Nao ha animais jovens.')
    print('A idade do animal adulto mais pesado eh ', maior_idade)
    print('O percentual de animais velhos eh ', cont_velho * 100 / cont, ' %')

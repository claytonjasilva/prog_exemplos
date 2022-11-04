# Ler um conjunto de valores e armazenar em uma lista.
# O usuário deve teclar a opção 'sim' para cadastrar um novo valor ou 'nao'
# para encerrar o programa. Para qualquer outra opção digitada, deve receber a mensagem
# 'Opção inválida'.

lista = []
while True:
    try:
        opcao = input('Digite um novo valor para a lista: sim ou nao: ')
        if (opcao!='sim') and (opcao!='nao'):
            raise ValueError
        elif (opcao=='sim'):
            lista.append(input('Digite novo valor: '))
        else:
            break
    except ValueError:
        print('Opção inválida')

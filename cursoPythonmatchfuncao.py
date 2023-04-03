# Elaborar um script em Python para ler um número inteiro e uma dentre 4 opções de operação:
# fatorial, primos, soma e pares.
# Se a opção dada for fatorial, o script deve escrever o fatorial do número.
# Se for primo, escrever os primos inferiroes ao número lido.
# Se for soma, escrever a soma dos números inferiores não negativos.
# Se for pares, escrever todos os pares inferiores ao número.

def fatorial(numero):  // Recursividade
    if numero == 1:
        return 1
    else:
        return numero * fatorial(numero - 1)


def primo(numero):
    flag = True
    for i in range(2, numero):
        if numero % i == 0:
            flag = False
            break
    return flag


def soma(numero):
    tot = 0
    for i in range(numero):
        tot += i
    return tot


def par(numero):
    tot = 0
    for i in range(2, numero, 2):
        tot += i
    return tot


N = int(input('Digite o numero: '))
opcao = input('Digite a opcao: ')
match opcao:
    case 'fatorial':
        print(fatorial(N))
    case 'primo':
        if primo(N):
            print('O numero eh primo')
        else:
            print('O numero nao eh nao primo')
    case 'soma':
        print('A soma dos numeros inferiores eh ',soma(N))
    case 'par':
        print('A soma dos numeros pares infeirores eh ',par(N))

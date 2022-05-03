#  Este programa ilustra a aplicação de funções
#  Ilustra o conceito de variáveis locais e globais
#  Lê N números (num) e determina a série S = 1/num + 2/num + ... + (n-1)/num

def serie(n):  # define a função serie ... usa parâmetro n
    S = 0  # S é uma variável local
    for i in range(n):  # Não dá erro, embora haja uma variável global i -
                        # é instanciado um objeto para guardar localmente o valor
        print('loop da função: ', i)
        S += i / n
    return S  # a função serie retorna o valor armazenado em S


# Início do corpo do código
N = int(input('Digite quantos números serão lidos: '))  # N é uma variável global
for i in range(N):  # i é uma variável global
    print('Interação do corpo do código: ', i)  # Não há conflito com a variável local i
    num = int(input('Digite o número: '))
    soma = serie(num)  # o valor de num é passado ao parâmetro n da função serie
                       # - a função retorna a soma da serie para a variável global soma
    print(soma)
    # print(S) # Vai dar erro!!!!! S é uma variável interna - local - à função

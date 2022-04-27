#  O programa imprime uma série tringular para um número digitado pelo usuário

def lin(n):
    linha = ''
    for i in range(1, n + 1):
        linha += str(i) + ' '
    print(linha)


num = int(input('Digite o número n: '))
for j in range(1, num + 1):
    lin(j)

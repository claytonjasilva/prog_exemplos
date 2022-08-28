#  O programa ilustra o uso de funções em Python
#  Calcula por uma série a raiz quadrada de um número

def fat(x): # Calcula o fatorial de x
    resultado = 1
    if (x == 0) or (x == 1):
        return resultado
    else:
        for i in range(2, x + 1):
            resultado = resultado * i
        return resultado


def serie(x, N): # Calcula e^x com N interações
    S = 0
    for i in range(N):
        S += x ** i / fat(i)
    return S


# Corpo do código
num = int(input('Digite um número: '))
aprox = int(input('Digite o número de aproximações: '))
print('O valor de e^', num, ' é ', serie(num, aprox))

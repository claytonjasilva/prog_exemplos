
#=========================================================
# leTexto.py
# O programa lê e testa um texto
# Clayton J A Silva
# 26mar2022

texto=input('Digite o texto com no máximo 20 caracteres:\nMáximo de 3 tentativas\n ') # entrada de dados
dim=len(texto) # a função len() retorna o tamanho de string
contador=1 # a variável conta quantas vezes o usuário digitou

if (dim<=20):
    print(texto)
else:
    print('Texto maior do que o permitido')
    print('Você digitou ', contador, ' de 3 vezes')
    texto = input('Digite o texto com no máximo 20 caracteres: ')
    contador = contador + 1  # Pode-se usar a forma x+=1
    dim = len(texto)
    if (dim <= 20):
        print(texto)
    else:
        print('Texto maior do que o permitido')
        print('Você digitou ', contador, ' de 3 vezes')
        texto = input('Digite o texto com no máximo 20 caracteres: ')
        contador = contador + 1  # Pode-se usar a forma x+=1
        dim = len(texto)
        if (dim <= 20):
            print(texto)


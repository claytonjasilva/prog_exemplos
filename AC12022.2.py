# 1. Escreva um programa Python que aceite o nome do primeiro e último nome do usuário e
# imprima-os em ordem inversa com um espaço entre eles.

def firstName(nome):
    N = len(nome)
    for i in range(N):
        if nome[i] == ' ':
            break
    return nome[0:i]


def lastName(nome):
    N = len(nome)
    ultimo = ''
    for i in range(N - 1, 0, -1):
        if nome[i] == ' ':
            break
    return nome[i + 1:N]


# Leitura de dados
nome_completo = input('Digite o nome completo: ')

primeiro = firstName(nome_completo)
ultimo = lastName(nome_completo)
print(ultimo, ' ', primeiro)

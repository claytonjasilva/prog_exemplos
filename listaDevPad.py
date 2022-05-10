# O programa lê e armazene as matrículas e notas de um grupo de 20 alunos.
# Calcula a média das notas lidas e o desvio padrão
# (usando a fórmula disponível em https://www.todamateria.com.br/desvio-padrao/).
# Escreve somente as matrículas dos alunos com nota inferior à nota média.

def media(lista):  # função retorna a média dos valores de uma lista
    soma = 0
    for i in range(len(lista)):
        soma += lista[i]
    md = soma / len(lista)
    return md


def devpad(lista, md):  # função retorna o desvio padrão dos valores de uma lista
    soma = 0
    for i in range(len(lista)):
        soma += (lista[i] - md) ** 2 / len(lista)
    dp = soma ** 0.5
    return dp


# Corpo do código
N = 5
matricula = []
nota = []
for i in range(N):  # cadastra matrícula e notas dos alunos
    matricula.append(int(input('Digite a matrícula: ')))
    nota.append(float(input('Digite a nota: ')))
# Escreve média e desvio padrão
print('A média das notas é: ', media(nota))
print('O desvio padrão das notas é: ', devpad(nota, media(nota)))
# Escreve somente matrículas dos números inferiores à média
for i in range(N):
    if nota[i] < media(nota):
        print(matricula[i])

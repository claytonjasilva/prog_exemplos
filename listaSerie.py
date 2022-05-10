# Programa lê uma sequência de vários números inteiros.
# É interrompido quando for lido um número igual a 0.
# Para cada número lido o programa deverá determinar:
# (i) a soma da série {0,1,2, ..., N};
# (ii) determinar a soma da série {1/N,2/N-1, ..., N/1}.
# O programa deverá escrever todos os números superiores ao primeiro número lido.
# Deverá escrever também todos os números inferiores ao último número lido antes do 0.


def serie1(num):
    soma = 0
    for i in range(num + 1):
        soma += i
    return soma


def serie2(num):
    soma = 0
    for i in range(1, num + 1):
        soma += 1 / (num - i + 1)
    return soma


# Corpo do código
numero = []
dado = int(input('Digite o número: '))
while dado != 0:  # Cadastra todos os números válidos e calcula as séries
    numero.append(dado)
    print(serie1(dado))
    print(serie2(dado))
    dado = int(input('Digite o número: '))
# Escreve os números superiores ao primeiro número lido e inferiores ao último
print('superiores')
for i in range(len(numero)):
    if numero[i] > numero[0]:  # escreve números superiores ao primeiro
        print(numero[i])
print('inferiores')
for i in range(len(numero)):
    if numero[i] < numero[len(numero) - 1]:  # escreve números inferiores ao último
        print(numero[i])

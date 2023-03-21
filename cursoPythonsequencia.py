# O codigo resolve o seguinte problema

# 3. Elaborar um script na linguagem Python para determinar e escrever a soma
# dos N primeiros termos de uma sequência.
# Cada termo k da sequência é dado por 1/2k.
# O usuário deve digitar o número de termos cuja soma deve ser calculada.
# Admitir que o usuário irá digitar um número não negativo. Usar comentários no código.

# Entrada de dados
N = int(input('Digite o numero de termos: '))

# Determinacao do resultado
S = 0  # Inicializa a variavel S, que acumula a soma dos termos
k = 1  # Inicializa a variavel contador, que conta o numero de repeticoes para calcular cada termo
while k <= N:
    termo = 1 / (2 * k)
    S += termo
    k += 1

# Apresentacao dos resultados
print('A soma dos ', N, ' termos eh', round(S, 2)) # A funcao round(x,n) arredonda x em n casas

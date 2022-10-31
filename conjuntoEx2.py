# Criar dois conjuntos A e B com N elementos cada.
# Escrever os elementos que pertencem ao conjunto A e não pertencem ao B.
# Escrever os elementos que pertencem a ambos os conjuntos.

N = int(input('Digite o número de elementos dos conjuntos: '))
A = [input('Digite o dado do conjunto A: ') for i in range(N)]
B = [input('Digite o dado do conjunto B: ') for i in range(N)]
A = set(A)
B = set(B)

print(A-B)
print('-----')
print(A&B)

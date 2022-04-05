#  O programa apresenta uma solução do exercício 3 da lista 1
#  Clayton J A Silva
#  5abr2022

#  define constantes
popA = 80000  # populações de A e B
popB = 200000
txA = 0.03  # taxas de crescimento de A e B
txB = 0.015

anos = 0 # inicializa o contador de anos

while popA < popB:
    anos += 1
    popA *= 1 + txA
    popB *= 1 + txB

#  apresentação do resultado
if anos == 0:
    print('A população de A é menor do que a população de B')
else:
    print('A população de A irá superar a população de B em ', anos, ' anos')
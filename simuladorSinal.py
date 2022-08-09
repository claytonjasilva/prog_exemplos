# O programa lê a expressão que define um sinal x em função do tempo (t), x=f(t),
# e cria um sinal amostrado em função do tempo e apresenta
import math
import matplotlib.pyplot as plt
import numpy as np

Ta = float(input("Digite o valor do intervalo de amostragem (Ta), em seg: "))  # Define o intervalo de amostragem
TN = float(input('Digite o tempo de observação (Tn), em seg: '))
N = int(TN / Ta)
t = [i * Ta for i in range(N)]
t = np.array(t)
x = []
print('Tipos de sinais especiais')
print('(1) degrau unitário')
print('(2) rampa')
print('(3) impulso')
print('(4) dente de serra')
print('(5) senoidal')
print('(6) triangular')
print('(7) sinc')
op = input('Selecione uma opção para continuar ')
match op:
    case '1':  # Função degrau
        # Entra parâmetros
        A = float(input('Digite a amplitude do sinal (A) '))
        delay = float(input('Digite o delay do sinal, em seg: '))
        delay = int(delay / Ta)
        x = t * 0
        for i in range(delay, N):  # x = 0, t<delay; x = A, t>= delay
            x[i] = A
        x = np.array(x)
    case '2':  # Função Rampa
        # Entra parâmetros
        delay = float(input('Digite o delay do sinal, em seg: '))
        delay = int(delay / Ta)
        x = t * 0
        for i in range(delay, N):  # x = 0, t<delay; x = t, t>= delay
            x[i] = t[i] - delay * Ta
        x = np.array(x)
    case '3':  # Função Impulso
        # Entra parâmetros
        A = float(input('Digite a amplitude do sinal (A) '))
        delay = float(input('Digite o delay do sinal, em seg: '))
        delay = int(delay / Ta)
        x = t * 0
        x[delay] = A  # x = A, t=delay; x = 0, t!= delay
        x = np.array(x)
    case '4':  # Função Dente de Serra
        # Entra parâmetro
        L = float(input('Digite a largura do dente (L), em seg '))
        L = int(L / Ta)
        for i in range(N):  # x = t, t<L, x(t) = x(t+L) - sinal periódico
            d = i % L
            x.append(t[d])
        x = np.array(x)
    case '5':  # Função Senoide
        # Entra parâmetro
        A = float(input('Digite a amplitude do sinal (A) '))
        f = float(input('Digite a frequência do sinal, em Hertz: '))
        if f > 1 / (2 * Ta):
            print('A frequência deve ser menor do que ', 1 / (2 * Ta))  # Aplicação do teorema de Nyquist
            f = float(input('Digite a frequência do sinal, em Hertz: '))
        x = np.sin(2 * math.pi * f * t)
    case '6':  # Função Triangular
        # Entra parâmetro
        L = float(input('Digite a largura da base (L), em seg '))
        L = int(L / Ta)
        for i in range(N):  # x = t, t<L/2; x = 2t(L/2)-t, L/2<t<L, x(t) = x(t+L) - sinal periódico
            d = i % L
            if d < (L / 2):
                x.append(t[d])
            else:
                x.append(2 * t[int(L / 2)] - t[d])
        x = np.array(x)
    case '7':  # Função Sinc
        # Entra parâmetro
        A = float(input('Digite a amplitude do sinal (A) '))
        f = float(input('Digite a frequência do sinal, em Hertz: '))
        x = np.sinc(2 * math.pi * f * t)
plt.plot(t, x)
plt.show()

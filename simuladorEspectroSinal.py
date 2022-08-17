# O programa lê os dados de um arquivo contendo um sinal no domínio do tempo,
# contendo também o período de amostragem.
# Gera a resposta de frequência do sinal
import matplotlib.pyplot as plt
import numpy as np

f = open('C:/Users/Clayton J A Silva/PycharmProjects/sinalFrequencia/sinalT.txt', 'r')  # Lê arquivo
y = list(f.read())  # Converte arquivo em lista
x = []
s = ''
for i in range(len(y)):  # Gera lista dos valores do sinal em float
    if y[i] != '\n':
        s = s + y[i]
    else:
        x.append(float(s))
        s = ''
Ta = float(s)  # Recupera o período de amostragem
x = np.array(x)
t = np.array([i * Ta for i in range(len(x))])  # Define a janela temporal
Xf = np.absolute(np.fft.fft(x))  # Calcula a Transformada de Fourier
f = np.fft.fftfreq(len(Xf),Ta)  # Define as frequências
plt.plot(t, x)
plt.show()
plt.plot(f, Xf)
plt.show()

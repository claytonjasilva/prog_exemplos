# Lendo um sinal de entrada de um canal, no domínio do tempo, a partir da leitura de um arquivo .txt.
# a razão sinal/ruído e adiciona ao sinal de entrada um ruído térmico ao sinal. Gera a resposta de
# frequência do sinal de entrada com o ruído adicionado.

import matplotlib.pyplot as plt
import numpy as np

f = open('C:/Users/Clayton J A Silva/PycharmProjects/sinalRuido/sinalT.txt', 'r')  # Lê arquivo
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
Xf = np.fft.fft(x)  # Calcula a Transformada de Fourier
f = np.fft.fftfreq(x.size)  # Define as frequências
plt.plot(t, x)
plt.show()
plt.plot(f, Xf)
plt.show()

razaoSN = float(input('Digite a razão sinal ruído (S/N), em dB: '))
ruido_md = (np.mean(x) * 20)/10 ** razaoSN
ruido_dv = 0.5 * ruido_md
ruido = np.random.normal(loc=ruido_md,scale=ruido_dv,size=len(x))
plt.plot(t, ruido)
plt.show()
plt.plot(t, x+ruido)
plt.show()
print(np.mean(x))
print(np.mean(ruido))

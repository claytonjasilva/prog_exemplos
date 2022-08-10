# O programa lê os dados de um arquivo contendo um sinal no domínio do tempo,
# contendo também o período de amostragem.
# Lê também os dados da resposta de frequência de um canal,
# gerando a resposta de frequência do sinal de saída do canal
# O sinal de entrada e o canal devem possuir o mesmo intervalo de observação
import matplotlib.pyplot as plt
import numpy as np

# Leitura do sinal de entrada x(t)
f = open('C:/Users/Clayton J A Silva/PycharmProjects/respostaCanal/sinalT.txt', 'r')  # Lê arquivo
x_aux = list(f.read())  # Converte arquivo em lista
x = []
s = ''
for i in range(len(x_aux)):  # Gera lista dos valores do sinal em float
    if x_aux[i] != '\n':
        s = s + x_aux[i]
    else:
        x.append(float(s))
        s = ''
Ta = float(s)  # Recupera o período de amostragem
x = np.array(x)
t = np.array([i * Ta for i in range(len(x))])  # Define a janela temporal
plt.plot(t, x)
plt.xlabel('tempo (t), em seg')
plt.ylabel('x(t)')
plt.grid(True)
plt.show()

# Geração do sinal de entrada no domíno da frequência
Xf = np.fft.fft(x)  # Calcula a Transformada de Fourier
f = np.fft.fftfreq(x.size)  # Define as frequências
plt.plot(f, Xf)
plt.xlabel('frequência (f), em Hertz')
plt.ylabel('X(f)')
plt.grid(True)
plt.show()

# Leitura da resposta do canal - semi-eixo positivo das frequências
g = open('C:/Users/Clayton J A Silva/PycharmProjects/respostaCanal/canal.txt', 'r')  # Lê arquivo
z = list(g.read())  # Converte arquivo em lista
H = []
s = ''
for i in range(len(z)):  # Gera lista dos valores do canal em float
    if z[i] != '\n':
        s = s + z[i]
    else:
        H.append(float(s))
        s = ''
H.append(float(s))
H = list(reversed(H))[0:len(H) - 1] + H # Dobramento da resposta
H = np.array(H)
plt.plot(f, H)
plt.xlabel('frequência (f), em Hertz')
plt.ylabel('H(f)')
plt.grid(True)
plt.show()

# Determinação do sinal de saída Y(f), no domínio da frequência
Yf = np.multiply(Xf, H)
plt.plot(f, Yf)
plt.xlabel('frequência (f), em Hertz')
plt.ylabel('Y(f)')
plt.grid(True)
plt.show()

# Transformada inversa para determinação do sinal de saída no domíno do tempo
y = np.fft.ifft(Yf)  # Calcula a Transformada de Fourier
plt.plot(t, y)
plt.xlabel('tempo (t), em seg')
plt.ylabel('y(t)')
plt.grid(True)
plt.show()

# O script lê os proventos de um grupo de 15 pessoas em janeiro

N = 3
janeiro =[]
for i in range(N): # le dados de janeiro
    janeiro.append(float(input('Digite o vencimento de janeiro: ')))
fevereiro = []
for i in range(N): # le dados de fevereiro
    fevereiro.append(float(input('Digite o vencimento de fevereiro: ')))
for i in range(N): # escreve a soma das listas
    print(janeiro[i]+fevereiro[i])

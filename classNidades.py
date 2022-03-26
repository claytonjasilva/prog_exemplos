# =========================================================
# classNidades.py
# O programa lê a idade de N pessoas e as classifica
# Clayton J A Silva
# 26mar2022

N = 10  # número de pessoas a classificar
contador = 1
tot_adol = 0

while contador <= N:
    idade = int(input('Digite a idade: '))  # leitura de dados
    if (idade > 10) and (idade < 18):  # teste da idade
        print('ADOLESCENTE')
        tot_adol += 1
    contador += 1

#  apresentação do resumo da leitura de idades
print('No grupo foram contabilizados ', tot_adol, ' adolescentes')

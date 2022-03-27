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
    # sai do laço quando o usuário digitar idade 0
    contador += 1  # atualiza contador
    if idade == 0:
        break  # o laço é interrompido pelo comando break se o usuário digitar 0
    if (idade > 10) and (idade < 18):  # teste da idade
        print('ADOLESCENTE')
        tot_adol += 1
        continue
    if idade <= 10:
        print('CRIANÇA')
    if idade >= 18:
        print('ADULTO')


#  apresentação do resumo da leitura de idades
print('No grupo foram contabilizados ', tot_adol, ' adolescentes')
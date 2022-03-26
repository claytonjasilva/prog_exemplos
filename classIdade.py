#=========================================================
# classIdade.py
# O programa lê a idade de uma pessoa e classifica
# Clayton J A Silva
# 26mar2022

idade=int(input('Digite a idade: '))

if (idade<=10):
    print('CRIANÇA')
elif (idade<18):
    print('ADOLESCENTE')
else:
    print('ADULTO')
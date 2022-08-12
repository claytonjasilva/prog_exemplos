#=========================================================
# classIdade.py
# O programa lê a idade de uma pessoa e classifica
# Clayton J A Silva
# 12ago2022

# Leitura da idade
idade=int(input('Digite a idade: '))

# Classificação da idade lida
if (idade<=10):
    print('CRIANÇA')
elif (idade<18): # Utiliza-se a expressão condicional elif, que é a contração de else+if = elif
    print('ADOLESCENTE')
else:
    print('ADULTO')

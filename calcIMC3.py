#=========================================================
# calcIMC3.py
# O programa lê nome, peso e altura de pessoas
# Clayton J A Silva
# 26mar2022


#pessoa 1
nome=input('Digite o nome da pessoa ') # entrada de dados
peso=float(input('Digite o peso da pessoa '))
altura=float(input('Digite a altura da pessoa '))

imc=peso/altura**2 #calcula imc

if (imc>22 or imc<20): # apresenta resultado
    print(nome,' , imc: ',imc)

#pessoa 2
nome=input('Digite o nome da pessoa ') # entrada de dados
peso=float(input('Digite o peso da pessoa '))
altura=float(input('Digite a altura da pessoa '))

imc=peso/altura**2 #calcula imc

if (imc>22 or imc<20): # apresenta resultado
    print(nome, ' , imc: ', imc)

#pessoa 3
nome=input('Digite o nome da pessoa ') # entrada de dados
peso=float(input('Digite o peso da pessoa '))
altura=float(input('Digite a altura da pessoa '))

imc=peso/altura**2 #calcula imc

if (imc>22 or imc<20): # apresenta resultado
    print(nome, ' , imc: ', imc)
#  O programa apresenta uma solução do exercício 3 da lista 1
#  Clayton J A Silva
#  5abr2022

#  define constantes
lim1 = 280
lim2 = 700
lim3 = 1500
perc_aum1 = 0.2
perc_aum2 = 0.15
perc_aum3 = 0.1
perc_aum4 = 0.05

#  leitura de dados
salario = float(input('Digite o salário do colaborador: '))

#  determinação da solução
if salario <= lim1:
    aumento = salario * perc_aum1 # determina o aumento
    perc = '20%'
elif salario <= lim2:
    aumento = salario * perc_aum2 # determina o aumento
    perc = '15%'
elif salario <= lim3:
    aumento = salario * perc_aum3 # determina o aumento
    perc = '10%'
else:
    aumento = salario * perc_aum4  # determina o aumento
    perc = '5%'

#  apresentação do resultado
print('o salário antes do reajuste era ', salario)
print('o percentual de aumento aplicado foi ', perc)
print('o valor do aumento é ', round(aumento,2))
print('o novo salário, após aumento é ', aumento + salario)
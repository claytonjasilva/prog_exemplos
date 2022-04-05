# O programa apresenta uma solução do exercício 1 da lista 1
# Clayton J A Silva
# 5abr2022

#  define constantes
al1 = 0.15
al2 = 0.25
sal_al1 = 5000
sal_al2 = 10000
sal_min = 1000

#  leitura de dados
sal_hora = float(input('Digite seu salário por hora: '))
horas = float(input('Digie o número de horas trabalhas no mês: '))

#  determinação do salário e tributo
sal_bruto = sal_hora * horas  # calcula o salário bruto
if sal_bruto < sal_min:  # corrige o salário para o mínimo
    sal_bruto = sal_min
#  calcula o salário líquido
if sal_bruto < sal_al1:
    sal_liq = sal_bruto
elif sal_bruto <= sal_al2:
    sal_liq = sal_bruto * (1 - al1)
else:
    sal_liq = sal_bruto * (1 - al2)

#  apresenta os resultados
print("O salário bruto é: ", sal_bruto)
print("O salário líquido é: ", sal_liq)

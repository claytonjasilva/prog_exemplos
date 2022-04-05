#  O programa apresenta uma solução do exercício 3 da lista 1
#  Clayton J A Silva
#  5abr2022

#  define constantes
rend = 1 / 6  # rendimento 1 litro por 6 metros quadrados
vol_lata = 18
vol_galao = 3.6
pr_lata = 80.00
pr_galao = 25.00

#  leitura de dados
area = float(input('Digite a área a ser pintada: '))
op = input('informar se deseja comprar apenas latas (1), apenas galões (2) ou ambos-menor sobra (3) ')

#  determinação da solução
vol = rend * area * 1.1  # determina volume necessário com folga de 10%
if op == '1':
    n_latas = int(vol / vol_lata + 1)  # determina o número de latas
    print('Serão necessárias ', n_latas, ' latas')
    print('ao preço de R$ ', n_latas * pr_lata)
elif op == '2':
    n_galoes = int(vol / vol_galao + 1)  # determina o número de galões
    print('Serão necessários ', n_galoes, ' galões')
    print('ao preço de R$ ', n_galoes * pr_galao)
else:
    n_latas = int(vol / vol_lata)  # determina o número de latas e galões
    n_galoes = int((vol - n_latas * vol_lata) / vol_galao + 1)
    print('Serão necessárias ', n_latas, ' latas') #  priorizar a compra de latsa pq é mais barata por litro
    print('Serão necessários ', n_galoes, ' galões')
    print('ao preço total de R$ ', n_latas * pr_lata + n_galoes * pr_galao)

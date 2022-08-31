# 2.  Ler a altura (a) de uma pessoa.
# Escrever ‘estatura alta’, ‘estatura mediana’ ou ‘estatura baixa’.
# A classificação se baseia nos seguintes limites: pessoas são consideradas altas se
# possuírem altura superior a 1,85 metro. São consideradas baixa, se possuírem altura inferior
# a 1,50 metro.

a = float(input('Digite a altura da pessoa: '))
if a>1.85:
    print('estatura alta')
elif a>=1.5:
    print('estatura mediana')
else:
    print('estatura baixa')

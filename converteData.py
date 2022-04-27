# O programa usa uma função que converte data no formato DD/MM/AAAA
# para o formato D de mesPorExtenso de AAAA

def converte(d):
    nova_data = d[0] + d[1]
    mes = d[3] + d[4]
    ano = d[6] + d[7] + d[8] + d[9]
    if mes == '01':
        nova_data += ' de janeiro de ' + ano
    elif mes == '02':
        nova_data += ' de fevereiro de ' + ano
    elif mes == '03':
        nova_data += ' de março de ' + ano
    elif mes == '04':
        nova_data += ' de abril de ' + ano
    elif mes == '05':
        nova_data += ' de maio de ' + ano
    elif mes == '06':
        nova_data += ' de junho de ' + ano
    elif mes == '07':
        nova_data += ' de julho de ' + ano
    elif mes == '08':
        nova_data += ' de agosto de ' + ano
    elif mes == '09':
        nova_data += ' de setembro de ' + ano
    elif mes == '10':
        nova_data += ' de outubro de ' + ano
    elif mes == '11':
        nova_data += ' de novembro de ' + ano
    elif mes == '12':
        nova_data += ' de dezembro de ' + ano
    return nova_data


def testa(d):
    dia = int(d[0] + d[1])
    mes = int(d[3] + d[4])
    if (dia >= 1) and (dia <= 30):
        if (mes >= 1) and (mes <= 12):
            return 0
        else:
            return 'NULL'
    else:
        return 'NULL'


data = input('Digite a data no formato DD/MM/AAAA: ')
print(testa(data))
while testa(data) != 0:
    data = input('Digite a data no formato DD/MM/AAAA: ')
    print(testa(data))
print(converte(data))
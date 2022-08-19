# O programa testa se um cpf é válido
# Lê o cpf e a UF
# Clayton J A Silva
# 19ago2022

cpf = int(input('Digite o CPF: '))
uf = input('Digite a UF: ')

flagNumero = False  # As variáveis booleanas podem assumir dois valores False | True
                    # instancia uma variável para armazenar o se o cpf é válido ou não
                    # o flag só será válido se o número for válido e a UF também
flagUF = False


# aplica o passo 1 - testa o número
soma = 0
aux = cpf
cont = 1
while cont <= 11:
    digito = aux % 10  # extrair o dígito menos significativo
    if cont == 3:
        codigo = digito
    soma += digito  # acumula a soma dos dígitos
    aux = aux // 10  # extrair o restante do número sem o menos signficativo
    cont += 1

# Verifica se o número é válido 
if (soma % 10) == (soma // 10):
    flagNumero = True

# aplica o passo 2 - testa a UF
if (uf == 'rs') and (codigo == 0):
    flagUF = True
elif ((uf == 'df') or (uf == 'go') or (uf == 'mt') or (uf == 'ms') or (uf == 'to')) and (codigo == 1):
    flagUF = True
elif ((uf == 'pa') or (uf == 'am') or (uf == 'ac') or (uf == 'ap') or (uf == 'ro') or (uf == 'rr')) and (codigo == 2):
    flagUF = True
elif ((uf == 'ce') or (uf == 'ma') or (uf == 'pi')) and (codigo == 3):
    flagUF = True
elif ((uf == 'pe') or (uf == 'rn') or (uf == 'pb') or (uf == 'al')) and (codigo == 4):
    flagUF = True
elif ((uf == 'ba') or (uf == 'se')) and (codigo == 5):
    flagUF = True
elif (uf == 'mg') and (codigo == 6):
    flagUF = True
elif ((uf == 'rj') or (uf == 'es')) and (codigo == 7):
    flagUF = True
elif (uf == 'sp') and (codigo == 8):
    flagUF = True
elif ((uf == 'pr') or (uf == 'sc')) and (codigo == 9):
    flagUF = True

if flagNumero and flagUF:
    print('O CPF digitado é válido')
else:
    print('O CPF digitado é inválido')

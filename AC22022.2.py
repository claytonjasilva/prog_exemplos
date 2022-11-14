# 2. Elaborar um script em Python que carregue uma tupla com o código de três objetos:
# 2A34, 1C45 e 3A56. Leia uma lista com o custo desses itens e
# uma lista com a respectiva quantidade em estoque de cada um.
# Gerar uma tupla com os dados lidos e uma nova lista com o valor em estoque de cada item.
# Escrever um relatório com os dados, item por item.

objetos = ('2A34', '1C45', '3A56')  # Carrega tupla
custo = [float(input(f'Digite o custo do item {i}: ')) for i in range(3)]  # Leitura do custo
quantidade = [int(input(f'Digite a quantidade do item {i}: ')) for i in range(3)]  # Leitura da quantidade

dados = tuple([objetos, custo, quantidade])
valor = [custo[i]*quantidade[i] for i in range(3)] # Determinação do valor em estoque

for i in range(3):
    print(objetos[i],custo[i],quantidade[i],valor[i])

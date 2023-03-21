# Este codigo resolve o problema

# 2. Elaborar um script na linguagem Python para determinar e escrever em quanto tempo (em minutos)
# uma bomba poderá encher um reservatório de água.
# O usuário digitará a capacidade do reservatório, em litros.
# Digitará também a vazão da bomba, litros por hora. Usar comentários no código.

# Entrada de dados
capacidade = float(input('Digite a capacidade do reservatorio - em litros: '))
vazao = float(input('Digite a vazao da bomba - em litros/hora: '))

# Conversao e determinacao do resultado
vazao /= 60  # 1 h = 60 minutos # Observe a possibilidade de uso do atribuidor de ATRIBUIÇÃO
tempo = capacidade / vazao

# Apresentacao do resultado
print('O tempo de enchimento eh ', tempo, 'minutos')

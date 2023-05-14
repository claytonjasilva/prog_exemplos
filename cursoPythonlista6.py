# Elaborar um programa em Python para ler uma lista contendo 10 nomes de pessoas.
# Em seguida, o programa deverá permitir que o usuário digite um nome qualquer 
# para cadastrar o tipo sanguineo válido de uma das pessoas cadastradas.
# Se o usuário digitar uma pessoa não cadastrada o programa deverá informar.
# O programa deverá localizar a pessoa na lista anterior e cadastrar um tipo sanguíneo válido ('O','A','B' ou 'AB').

N = 10
nome = [ input('Digite o nome: ') for i in range(N)] # Cadastra os nomes
tipo_sangue = ['o'] * N # Cadastra uma lista com N tipos inválidos 'o'
tipo_val  = ['O', 'A', 'B', 'AB'] # Cadastra as opcoes validas

nome_qualquer = input('Digite um nome para cadastrar TS: ')
if nome_qualquer not in nome: # Testa se o nome digitdo pertence a lista de nomes
  print('PESSOA NAO CADASTRADA')
else:
  while True:
    ts = input('Digite um TS: O, A, B ou AB ') 
    if ts in tipo_val: # Testa se o tipo digitado e validado
      tipo_sangue[nome.index(nome_qualquer)] = ts
      break

print(tipo_sangue)

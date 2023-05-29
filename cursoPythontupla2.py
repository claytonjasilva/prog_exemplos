# Criar uma lista contendo um par de dados de identificação (identidade e cpf) de um grupo de 30 pessoas.
# Após cadastrar os dados, o usuário poderá digitar cadastrar o salário de uma pessoa.  
# Deverá digitar o par de dados válidos (identidade e cpf) para cadastrar o salário.  
# Se o par de dados não for correto ou se a pessoa não tiver sido cadastrada, 
# o programa deverá apresentar uma mensagem de alerta.

N = 10
chaves = [(input('Identidade: '), input('CPF: ')) for i in range(N)] # Cadastra dados pessoais
salarios = [0 for i in range(N)]
dado = input('cpf: ') , input('idt: ')
if dado in chaves:
  salarios[chaves.index(dado)] = float(input('Digite salario: '))
else:
  print('MENSAGEM DE ALERTA!')
  

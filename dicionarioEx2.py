# Criar uma agenda com os campos de dados de nome, email e celular,
# utilizando o celular como chave. Quando o usuário digitar celular igual a 0
# a criação do dicionário se encerra. Deve permitir também exclusão de todos os campos.
# Atualizado em 20/10/22

# Criação da agenda
agenda = dict()
celular = input('Digite o celular: ')
while celular != '0':
    nome = input('Digite o nome: ')
    email = input('Digite email: ')
    agenda[celular] = [nome, email]
    celular = input('Digite o celular: ')
print(agenda)

# Exclusão do dado
opcao = input('Deseja excluir um dados cadastrado? (1) sim (2) não ')
if opcao == '1':
    entrada = input('Digite a chave: ')
    agenda.pop(entrada)
print(agenda)

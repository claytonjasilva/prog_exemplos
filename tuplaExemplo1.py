# Elaborar um programa na linguagem Python que armazene as vogais em uma tupla. Leia também uma string,
# verifique e escreva em uma lista quantas vezes cada vogal está presente na string lida.

#vogais = 'a','e','i','o','u'
#vogais = tuple(['a','e','i','o','u'])
vogais = ('a','e','i','o','u')
print(vogais)
texto = input('Digite o texto ')
nvogais = []
for i in range(5):
    nvogais.append(texto.count(vogais[i])) # usando o método count
print(nvogais)

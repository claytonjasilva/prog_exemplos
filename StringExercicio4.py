#4. Elaborar um script em Python que leia o nome completo de uma pessoa 
#e escreva o endereço de e-mail formado da seguinte maneira: 
#primeiro nome + ponto + funcao + arroba + ‘empresa.com.br’. 
#O endereço de e-mail deve ser formado por letras minúsculas.

nome = input('Digite o nome: ')
funcao = input('Digite a funcao: ')
k=nome.index(' ') # o método index em strings retorna a primeira posição que o caractere do argumento se encontra
email = nome[0:k]+'.'+funcao+'@empresa.com.br' # o operador + concatena strings
print(email)

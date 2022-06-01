# Elaborar um script em Python que leia um texto digitado pelo usuário. 
# Após digitar o texto, o usuário poderá digitar uma palavra e 
# o programa determinará o número de vezes que a palavra está presente no texto digitado.

texto = input('Digite o texto: ')
palavra = input('Digite a palavra a ser pesquisada: ')
print(texto.count(palavra)) # uso do método count

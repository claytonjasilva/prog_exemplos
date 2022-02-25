#
#============================================================================
# Autor       : clayton j a silva
# Descrição   : exemplo tipos, operadores, entrada/saída 
# ============================================================================
#

# O programa apresenta a tabela de conversão Fahrenheit-Celsius
# para fahr=0,50,...,300, usando a fórmula matemática Tc=5.(Tf-32)/9 

fahr=0   #variável 'fahr'... 
         #'=' é instrução de atribuição que executa 0 -> fahr...
         #diz-se que variável 'fahr' recebe 0

celsius=5*(fahr-32)/9 #variável 'celsius' recebe o resultado do processamento da expressão - operadores adição:'*',subtração:'-' e divisão:'/'
print(fahr,celsius)   #print(.) apresenta os valores de 'fahr' e de 'celsius' 
fahr=100
celsius=5*(fahr-32)/9
print(fahr,celsius)
fahr=150
celsius=5*(fahr-32)/9
print(fahr,celsius)
fahr=200
celsius=5*(fahr-32)/9
print(fahr,celsius)
fahr=250
celsius=5*(fahr-32)/9
print(fahr,celsius)
fahr=300
celsius=5*(fahr-32)/9
print(fahr,celsius)

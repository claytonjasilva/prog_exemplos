#Calcula e escreve nota se aluno for aprovado
print("Calcula e escreve nota se aluno for aprovado")

#Leitura das notas ap1, ap2 e ac
ap1=float(input("ap1: "))
ap2=float(input("ap2: "))
ac=float(input("ac: "))

#Calcula media
md=0.4*(ap1+ap2)+0.2*ac

#Escreve a nota do aluno aprovado
if (md>=7):
  print("a nota do aluno eh ",md)

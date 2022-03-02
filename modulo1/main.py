import volume

s='0'
while (s=='0'):
  print("Tabela:")
  print("(1)cubo")
  print("(2)paralelepipedo")
  print("(3)prisma regular")
  print("(4)cilindro")
  print("(5)cone")
  print("(6)esfera")
  s=input("Digite a figura cuja área deseja conhecer: ")
  if (s=='1'):
    lado=float(input("Digite o lado: "))
    print(volume.cubo(lado))
  elif (s=='2'):
    comprimento=float(input("Digite o comprimento: "))
    largura=float(input("Digite a largura: "))
    altura=float(input("Digite a altura: "))
    print(volume.paral(comprimento, largura, altura))
  elif (s=='3'):
    area=float(input("Digite a área da base: "))
    altura=float(input("Digite a altura: "))
    print(volume.prisma(area,altura))
  elif (s=='4'):
    raio=float(input("Digite o raio: "))
    altura=float(input("Digite a altura: "))
    print(volume.cilindro(raio,altura))
  elif (s=='5'):
    area=float(input("Digite a área da base: "))
    altura=float(input("Digite a altura: "))
    print(volume.cone(area,altura))
  elif (s=='6'):
    raio=float(input("Digite o raio: "))
    print(volume.esfera(raio))
  else:
    s='0'

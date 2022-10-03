# Elaborar um script em Python que leia um texto digitado pelo usuário.
# O texto poderá ter no máximo 50 caracteres.
# Enquanto o texto não for válido o programa deverá solicitar
# que o usuário digite um texto dentro do limite.
# Caso o usuário tente três vezes o programa interromperá a execução,
# informando que o texto não foi cadastrado.
# Elaborado em 3/10/22

texto = input('Digite o texto:\n')
while (len(texto)>50):
  print('Limite 50 caracteres')
  texto = input('Digite o texto:\n')

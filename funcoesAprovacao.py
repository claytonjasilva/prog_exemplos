#  O programa ilustra a utilização de funções em Python
#  Possui funções para determinar mf, mf com as e frequência
#  Apresenta 'reprovado' ou 'aprovado' para o grupo de alunos

def media(a1, a2, a3):
    m = 0.4 * (a1 + a2) + 0.2 * a3
    return m


def media_as(a1, a2, a3, a4):
    if a1 > a2:
        m = 0.4 * (a1 + a4) + 0.2 * a3
    else:
        m = 0.4 * (a4 + a2) + 0.2 * a3
    return m


def porc(f, tot):
    p = ((tot - f) / tot) * 100
    return p


#  Inicio do corpo do código
N = 30  # Número total de alunos
aula = int(input('Digite o número de aulas da disciplina: '))
for i in range(N):
    #  Leitura dos dados sem AS
    Ap1 = float(input('Digite a nota da AP1: '))
    Ap2 = float(input('Digite a nota da AP2: '))
    Ac = float(input('Digite a nota da AC: '))
    falta = int(input('Digite o número de faltas: '))
    mf = media(Ap1, Ap2, Ac)
    if mf < 7:
        print('Nota inferior a 7.0\n')
        As = float(input('Digite a nota da AS: '))
        mf = media_as(Ap1, Ap2, Ac, As)
    porc_faltas = porc(falta, aula)
    if (porc_faltas < 75) or (mf < 7):
        print('A média final é ', mf, '. O percentual de frequência é ', porc_faltas, '% - aluno REPROVADO')
    else:
        print('A média final é ', mf, '. O percentual de frequência é ', porc_faltas, '% - aluno APROVADO')

qtd_alunos = int(input("Digite quantos alunos deseja calcular a média: "))
soma_medias = 0
aprovados = 0
reprovados = 0
recuperacao = 0
media = 0
contador = 0
while contador < qtd_alunos:
    print(f"\nAluno {contador +1}")
    somatorio = 0

    for notas in range(1, 5):
      nota = float(input(f"Digite a nota {notas} do aluno:"))
    somatorio += nota
    media = somatorio / 4
    soma_medias += media
    if media >= 7:
        aprovados += 1
    elif media >= 5 and media <= 6.9:
        recuperacao += 1
    elif media < 5:
        reprovados += 1
    contador +=1
media_da_turma = soma_medias / qtd_alunos
print(f"Numero de alunos aprovados: {aprovados}, \nNumero de alunos reprovados: {reprovados}, \nNumero de alunos em recuperação:{recuperacao}")
print(f"Média da turma: {media_da_turma:.2f}")
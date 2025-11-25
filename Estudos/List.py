notas = []
for i in range(4):
    nota = float(input(f"Digite a {i+1}ᵃ nota: "))
    notas.append(nota)
media = sum(notas)/len(notas)

maior_nota = max(notas)
menor_nota = min(notas)

print("Média Final:", media)
print("Maior nota:", maior_nota)
print("Menor nota:", menor_nota)
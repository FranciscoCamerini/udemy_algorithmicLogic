n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]
vet = [0 for x in range(n)]

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] > vet[i]:
            vet[i] = mat[i][j]

print(f"\nMAIOR ELEMENTO DE CADA LINHA: ")
for i in range(0, n):
    print(vet[i])

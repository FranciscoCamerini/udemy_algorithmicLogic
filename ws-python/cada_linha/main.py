n = int(input("Qual a ordem da matriz? "))
print(f"")


mat: [int] = [[0 for x in range (n)] for x in range(n)]
vet: [int] = [0 for x in range(n)]


for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))


for i in range(0, n):
    vet[i] = 0
    for j in range(0, n):
       if mat[i][j] > vet[i]:
           vet[i] = mat[i][j]


print(f"")
print(f"MAIOR ELEMENTO DE CADA LINHA: ")
for i in range(0, n):
    print(vet[i])
print(f"")
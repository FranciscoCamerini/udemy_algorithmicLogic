m = int(input("Qual a quantidade de linhas da matriz? "))
n = int(input("Qual a quantidade de colunas da matriz? "))
print(f"")

mat: [[float]] = [[0 for x in range(n)] for x in range(m)]
vet: [[float]] = [0 for x in range(m)]


for i in range(0, m):
    print(f"Digite os elementos da {i+1}a. linha: ")
    for j in range(0, n):
        mat[i][j] = float(input())
        vet[i] = vet[i] + mat[i][j]

print(f"")
print(f"VETOR GERADO: ")
for i in range(0, m):
    print("%.2f" % vet[i] )
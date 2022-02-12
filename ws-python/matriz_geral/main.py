n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

soma = 0
for i in range(0,n):
    for j in range(0,n):
        mat[i][j] = float(input(f"ELEMENTO [{i},{j}]: "))
        if mat[i][j] > 0:
            soma = soma + mat[i][j]

print(f" ")
print(f"SOMA DOS POSITIVOS = {soma}")
print(f" ")

z = int(input(f"Escolha uma linha: "))
print(f"LINHA ESCOLHIDA: ", end=" ")
for j in range(0,n):
    print(mat[z][j], end=" ")
print(f" ")

print(f" ")
z = int(input(f"Escolha uma coluna: "))
print(f"COLUNA ESCOLHIDA: ", end=" ")
for i in range(0,n):
    print(mat[i][z], end=" ")
print(f" ")

print(f" ")
print(f"DIAGONAL PRINCIPAL: ", end=" ")
for i in range(0,n):
    for j in range(0,n):
        if i == j:
            print(mat[i][j], end=" ")
print(f" ")

print(f" ")
print(f"MATRIZ ALTERADA: ")
for i in range(0,n):
    for j in range(0,n):
        if mat[i][j] >= 0:
            print(mat[i][j], end=" ")
        else:
            print((mat[i][j]**2), end=" ")
    print(" ")

print(f" ")





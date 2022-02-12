n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

negativo = 0

print()
for i in range(0,n):
    for j in range(0,n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))
        if mat[i][j] < 0:
            negativo = negativo + 1

print()
print(f"DIAGONAL PRINCIPAL: ")
for i in range(0, n):
    for j in range(0, n):
        if i == j:
            print("%.1f" % mat[i][j], end = " ")

print()
print(f"QUANTIDADE DE NEGATIVOS = {negativo}")



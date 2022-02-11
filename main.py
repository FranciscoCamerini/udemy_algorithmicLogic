import math

altura = float(input("Altura do retangulo: "))
base = float(input("Base do retangulo: "))

area = base * altura
perimetro = 2*(base + altura)
diagonal = math.sqrt(base**2 + altura**2)

print(f"AREA = {area}")
print(f"PERIMETRO = {perimetro}")
print(f"DIAGONAL = {diagonal}")
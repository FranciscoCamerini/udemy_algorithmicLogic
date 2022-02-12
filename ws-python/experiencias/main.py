n = int(input("Quantos casos serao digitados? "))
print(f"")

s = 0
c = 0
r = 0
total = 0

for i in range (0, n):
    qnt = int(input("Quantidade de cobaias: "))
    total = total + qnt
    tipo = input("Tipo de cobaia: " )
    if tipo == "s":
        s = s + qnt
    elif tipo == "c":
        c = c + qnt
    else:
        r = r + qnt
print(f"")

print(f"RELATORIO FINAL: ")
print(f"Total: %d" % total)
print(f"Total de coelhos: %d" % c)
print(f"Total de ratos: %d" % r)
print(f"Total de sapos: %d" % s)

perC = c*100 / total
perR = r*100 / total
perS = s*100 / total

print(f"")
print(f"Percentual de coelhos: %.2f" % perC)
print(f"Percentual de ratos: %.2f" % perR)
print(f"Percentual de sapos: %.2f" % perS)
print(f"")
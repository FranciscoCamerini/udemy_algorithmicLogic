print(f"Digite dois numeros: ")
x = int(input())
y = int(input())

while x != y:
    if x < y:
        print(f"CRESCENTE!")
    else:
        print(f"DECRESCENTE!")
    print()

    print(f"Digite outros dois numeros: ")
    x = int(input())
    y = int(input())

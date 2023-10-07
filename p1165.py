def verificaNumero(numero):
    if numero <= 1:
        return False
    if numero <= 3:
        return True
    if numero % 2 == 0 or numero % 3 == 0:
        return False
    i = 5
    while i * i <= numero:
        if numero % i == 0 or numero % (i + 2) == 0:
            return False
        i += 6
    return True

casos = int(input())

for i in range(casos):
    numero = int(input())
    if verificaNumero(numero):
        print(f"{numero} eh primo")
    else:
        print(f"{numero} nao eh primo")
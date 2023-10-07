def encontrarDivisores(numero):
    divisores = []
    for i in range(1, numero):
        if numero % i == 0:
            divisores.append(i)
    return divisores

casos = int(input())
contador = 0
while (contador < casos):

    numero = int(input())
    divisores = encontrarDivisores(numero)
    somarDivisores = sum(divisores)
    if (somarDivisores == numero):
        print(f"{numero} eh perfeito")
    else:
        print(f"{numero} nao eh perfeito")
    
    contador += 1
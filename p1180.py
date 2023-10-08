lista = []
tamanho = int(input())
entrada = input()
valores = entrada.split(" ")

for i in range(tamanho):
    lista.append(int(valores[i]))

minimo = min(lista)
posicao = lista.index(minimo)

print(f"Menor valor: {minimo}")
print(f"Posicao: {posicao}")
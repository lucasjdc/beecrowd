minha_lista = []

tamanho = int(input())
entrada = input()
valores = entrada.split(" ")

for i in range(tamanho):
    minha_lista.append(int(valores[i]))


minimo = min(minha_lista)
posicao = minha_lista.index(minimo)

print(f"Menor valor: {minimo}")
print(f"Posicao: {posicao}")
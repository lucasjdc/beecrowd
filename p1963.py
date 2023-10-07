entrada = input()
valor = entrada.split(' ')
a = float(valor[0])
b = float(valor[1])

aumento = (100 * (b - a)) / a

print(f'{aumento:.2f}%')
quantidadeDeAlunos = int(input())
alunos = {}

for i in range(quantidadeDeAlunos):
    entrada = input()
    cadastroDeAluntos = entrada.split(" ")
    numeroDeMatricula = int(cadastroDeAluntos[0])
    nota = float(cadastroDeAluntos[1])
    alunos[numeroDeMatricula] = nota

melhorAluno = max(alunos, key=alunos.get)
melhorNota = alunos[melhorAluno]

if (melhorNota < 8):
    print("Minimum note not reached")
else:
    print(melhorAluno)
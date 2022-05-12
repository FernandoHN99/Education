from run import *
import sys
import os

# Abrindo o arquivo
with open('m.dfa') as dfa_file:
    dfa_data = dfa_file.read()
dfa = eval(dfa_data)

os.system('CLS') # Limpa a Tela

# Entrada de Dados
input_user = "a"
while input_user != "":
    input_user = input("Digite a cadeia de instruções ou Enter para Sair: ")
    if input_user.lower() != '':
        os.system('CLS') # Limpa a Tela
        print(f'Cadeia: {input_user}')
        resultado = run(dfa, list(input_user))
        if resultado:
            print(f'A cadeia {input_user} foi aceita pelo autômato!')
        else:
            print(f'A cadeia {input_user} foi rejeitada pelo autômato!')

    else:
        print('Programa finalizado pelo usuário!')

    print("-"*45)
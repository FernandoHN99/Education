def run(dfa, input):
    estadoAtual = dfa['initial_state']          # Estado inicial
    i = 0
    for i, c in enumerate(input):
        
        if c not in dfa['sigma']:          # Verificar simbolo pertence alfabeto
            print(f'O símbolo {c} não pertence ao alfabeto do autômato!')
            break
       
        if estadoAtual not in dfa['states']:    # Verificar estado pertence conjunto
            print(f'O estado {estadoAtual} não pertence ao conjunto de estados do autômato!')
            break

        try:
            estadoAnterior = estadoAtual        
            estadoAtual = dfa['delta'][(estadoAtual, c)]
            print(f"({estadoAnterior}, '{c}') => {estadoAtual}")
        except:
            print(f'Não foi possível realizar a transição do estado {estadoAtual} com entrada {c}')
            break
    
    return True if estadoAtual in dfa['final_states'] and len(input) == (i+1) else False
        
    
        
        
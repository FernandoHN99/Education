#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

 int gFree = 4;
 int gHead = 7;

int allocateObject(int vetNext[]){
    if(gFree ==-1 ){
        return -1;
    }else{
        int x = gFree; 
        gFree = vetNext[x-1]; 
        return x; 
    }
}

void addElement(int vetPrev[], int vetKey[], int vetNext[], int value){
    int freePrev = allocateObject(vetNext); 
    if(freePrev != -1){
        vetPrev[gHead-1] = freePrev; 
        vetNext[freePrev-1] = gHead;
        vetPrev[freePrev-1] = 0;
        vetKey[freePrev-1] = value;
        gHead = freePrev;
    }
}

void freeObject(int vetNext[], int deletedPosition){
    vetNext[deletedPosition] = gFree;
    gFree = deletedPosition + 1;
}


void removeElement(int vetPrev[], int vetKey[], int vetNext[], int position){
    
    position = position - 1;                     
    int proxPosition = vetNext[position]-1;     
    int antPosition = vetPrev[position]-1;      

    vetNext[antPosition] = proxPosition +1;    
    vetPrev[proxPosition] = antPosition +1;

    vetKey[position] = -1;
    vetPrev[position] = -1;
    freeObject(vetNext, position);
    

}

void showList(int vet[]){
    int j;
    for(j=0; j<8; j++){
        if(j ==0){
            printf("[%i, ", vet[j]);
        }
        else if(j !=7){
            printf("%i, ", vet[j]);
        }else{
             printf("%i]\n", vet[j]);
        }
    }  
}

void showOptions(){
    int aux;
    char strMenu[] = "\n\t MENU DE OPCOES \n\n Opcao 1 - Adicionar elemento\n Opcao 2 - Remover elemento\n Opcao 3 - Visualizar todas Listas\n Opcao 4 - Sair\n\n";
    printf(strMenu);
    scanf("%i", &aux);
    }

void callOptions(int option, int vetPrev[], int vetKey[], int vetNext[]){
    int value;
    switch (option) {
        case 1:
            printf("\nValor a ser adicionado na Posicao %i: ", gFree);
            scanf("%i", &value);
            addElement(vetPrev, vetKey, vetNext, value);
            showList(vetKey);
            break;
        case 2:
            printf("\nValor a ser retirado: ");
            scanf("%i", &value);
            removeElement(vetPrev, vetKey, vetNext, value);
            showList(vetKey);
            break;
        case 3:
            showList(vetNext);
            showList(vetKey);
            showList(vetPrev);
            break;
    }
}

void clrscr()
{
    system("@cls||clear");
}



int main(){

    int vetNext[] = {-1, 3, 0,  8,  2,  1, 5,  6};
    int vetKey[]  = {-1, 4, 1, -1, 16, -1, 9, -1};
    int vetPrev[] = {-1, 5, 2, -1, 7,  -1, 0, -1}; 

    int option = 3;

    while(option!=4){
        clrscr();
        showOptions();
        printf("Digite a Opcao Desejada - (S)air: ");
        scanf("%i", &option);
        callOptions(option, vetPrev, vetKey, vetNext);
        
    }
    return 0;
}



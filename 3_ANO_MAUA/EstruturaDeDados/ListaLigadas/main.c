#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.c"
#include "Flow.c"

int gFree, gHead;

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

void showList(int vet[], int n){
    int j;
    printf("[");
    for(j=0; j<n; j++){
        if(j != (n-1)){
            printf("%i, ", vet[j]);
        }else{
            printf("%i", vet[j]);
        }
    }
    printf("]");
}


int main(){

    //Limpando Tela
    clrscr();

    // Montando Listas
    int n = sizeArray();
    int vetNext[n], vetKey[n], vetPrev[n];
    fillList(vetKey, vetPrev,n);
    inputUser(vetNext, n);

    // Fluxo das operacoes basicas de Lista Ligadas
    int optionInt = 3;
    char optionChar[10];

    while(optionInt!=4){
        clrscr();
        showOptions();
        printf("Digite a Opcao Desejada: ");
        readString(optionChar);
        optionInt = atoi(optionChar);
        callOptions(optionInt, vetPrev, vetKey, vetNext, n);
    }

    return 0;
}



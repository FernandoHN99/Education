#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputUser(int vetNext[], int n){
    int i=1, valuePast, aux=-1;
    while(aux<=0 || aux>n){
        printf("Posicao do %i Elemento a ser inserido na Lista: ", i);
        scanf("%i", &aux);
    }
    gFree = aux;
    valuePast = aux;
    for(i=1; i<n; i++){
        clrscr();
        aux = -1;
        while(aux<=0 || aux>n || gFree == aux || vetContains(vetNext, aux,n)){
            printf("Posicao do %i Elemento a ser inserido na Lista: ", (i+1));
            scanf("%i", &aux);
        }
        vetNext[valuePast-1] = aux;
        valuePast = aux;
    }
    vetNext[valuePast-1] = -1;
}

void callOptions(int option, int vetPrev[], int vetKey[], int vetNext[], int vetSize){
    
    char aux[10];
    switch (option){
        case 1:
            clrscr();
            showList(vetKey, vetSize);
            if (gFree != -1){
                flowAddElement(vetPrev, vetKey, vetNext, vetSize);
            }else{
                printf("\n\nNao eh possivel adicionar elementos!");
            }
            printf("\n\nDigite 'Enter' para voltar ao menu ");
            readString(aux);
            break;
        case 2:
            clrscr();
            showList(vetKey, vetSize);
            flowRemoveElement(vetPrev, vetKey, vetNext, vetSize);
            printf("\n\nDigite 'Enter' para voltar ao menu ");
            readString(aux);
            break;
        case 3:
            clrscr();
            printf("Next -->  ");
            showList(vetNext, vetSize);
            printf("\n\nKey -->   ");
            showList(vetKey, vetSize);
            printf("\n\nPrev -->  ");
            showList(vetPrev, vetSize);
            printf("\n\nDigite 'Enter' para voltar ao menu ");
            readString(aux);
            break;
    }
}

void flowAddElement(int vetPrev[], int vetKey[], int vetNext[], int vetSize){
    int value;
    printf("\n\nValor a ser adicionado na Posicao %i: ", gFree);
    scanf("%i", &value);
    addElement(vetPrev, vetKey, vetNext, value);
    printf("\n");
    showList(vetKey, vetSize);            
}

void flowRemoveElement(int vetPrev[], int vetKey[], int vetNext[], int vetSize){
    int value;
    printf("\n\nPosicao a ser retirada: ");
    scanf("%i", &value);
    removeElement(vetPrev, vetKey, vetNext, value);
    printf("\n");
    showList(vetKey,vetSize);
}

void showOptions(){
    char strMenu[] = "\n\t MENU DE OPCOES \n\n Opcao 1 - Adicionar elemento\n Opcao 2 - Remover elemento\n Opcao 3 - Visualizar todas Listas\n Opcao 4 - Sair\n\n";
    printf(strMenu);
}

int sizeArray(){
    int n;
    printf("Tamanho da Lista: ");
    scanf("%i", &n);
    return n;
}
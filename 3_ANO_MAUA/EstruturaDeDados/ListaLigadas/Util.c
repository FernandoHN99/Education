#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Flow.c"
#include "Main.c"


int vetContains(int vetNext[], int value, int sizeVet){
    int i;
    for(i=0; i<sizeVet; i++){
        if(vetNext[i] == value){
            return 1;
            break;
        }
     }
     return 0;
}

void fillList(int vetKey[],int vetPrev[], int n){
    int i;
     for(i=0; i<n; i++){
         vetKey[i] =-1;
         vetPrev[i] =-1;
     }
}

void readString(char s[]){
    setbuf(stdin,0);
    fgets(s,10,stdin);
    if(s[strlen(s)-1]=='\n'){
        s[strlen(s)-1] = '\0';
    }

}

void clrscr(){
    system("@cls||clear");
}
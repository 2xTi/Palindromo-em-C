#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20


typedef struct{
   char dados[MAX];
   int topo;

}pilha;

void push(char x, pilha *p){
    if(p->topo==9)
        printf("Stack overflow!");
    else
        p->dados[(++p->topo)]=x;
}

char pop(pilha *p){
    if(p->topo==-1){
        printf("Stack underflow!");
        return "!";
    }
    else
        return (p->dados[p->topo--]);

}

int main()
{
    int i, n;
    char num[MAX];
    pilha p1;
    int verifica=0;
    p1.topo=-1;

    printf("Digite as letras: ");
    scanf("%s", num);

    for(i=0; i<strlen(num); i++){
        push(num[i], &p1);
    }

    for(i=0; i<strlen(num); i++){
        if(num[i] != pop(&p1)){
            verifica = 1;
        }
        else{
            verifica = 0;
        }
    }

    if(verifica==1){
        printf("\n--Palavra digita nao e palindromo");
    }
    else if(verifica==0){
         printf("\n--Palavra digitada e palindromo");
    }


    return 0;
}

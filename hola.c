#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int data;
    struct nodo* next;
}Nodo;

typedef Nodo* Link;

Link push(Link head, int val){
    Link new = (Link)malloc(sizeof(Nodo));
    new->data = val;
    new->next = head;
    return new;
}

void print_ls(Link head){
    while(head != NULL){
        printf("[%d] -> ",head->data);
        head = head->next;
    }
    printf("NULL\n\n");
}

int main(){

    Link lista1 = NULL;

    lista1 = push(lista1,0);
    lista1 = push(lista1,1);
    lista1 = push(lista1,2);

    print_ls(lista1);

    return 0;
}
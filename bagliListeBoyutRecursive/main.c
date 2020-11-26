#include <stdio.h>
#include <stdlib.h>
typedef struct n{
struct n *next;
}node;

int boyutBul(node * liste){
if(liste->next == NULL){
    return 1;
}
return 1+boyutBul(liste->next);
}

int main()
{
    node * liste = (node *)malloc(sizeof(node));
    node * temp1 = (node *)malloc(sizeof(node));
    node * temp2= (node *)malloc(sizeof(node));
    node * temp3 = (node *)malloc(sizeof(node));
    node * temp4 = (node *)malloc(sizeof(node));
    liste->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = NULL;

    int boyut = boyutBul(liste);
    printf("%d",boyut);
    return 0;
}

#include <stdlib.h>
#include <stdio.h>

struct lista {
    int i;
    struct lista *next;
};
void print_lista(struct lista *);
struct lista *Append7(struct lista *, int,int);

int main(){
    struct lista *p,*q,*t;
    int x;
    printf("Unijeti elemente liste (lista se zavrsava unosom prvog\
        broja veceg od 50): ");
    p=(struct lista *)malloc(sizeof(struct lista));
    p->next=NULL;
    scanf("%d",&x);
    p->i=x;
    t=p;
    while(x<=50){
        q=(struct lista *)malloc(sizeof(struct lista));
        scanf("%d",&x);
        q->next=NULL;
        q->i=x;
        t->next=q;
        t=q;
    }
    print_lista(p);

    /**/
    int N,P;
    printf("Unesi brojeve N i P: ");
    scanf("%d %d", &N, &P);
    p = Append7(p,N,P);
    print_lista(p);
}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }printf("\n");

}

struct lista *Append7(struct lista *gl, int n, int p){
    if(n>0 && n<=7){
        int i;
        struct lista *tr;
        tr=gl;
        do{
            tr = tr->next;
        }while(tr->next!=NULL);
        for(i=0;i<n;i++){
            tr->next =(struct lista*)malloc(sizeof(struct lista));
            tr->next->i = p;
            tr=tr->next;
            
        }tr->next=NULL;
    }
    return gl;
}

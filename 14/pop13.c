#include <stdio.h>
#include <stdlib.h>

struct lista {
    int i;
    struct lista *next;
};

void print_lista(struct lista *);
int Step(struct lista *, int);

int main(){
    struct lista *p,*q,*t;
    int x;
    printf("Unijeti elemente liste (lista se zavrsava unosom prvog broja\
        veceg od 50): ");
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
    printf("Zbir je %d.", Step(p,3));

}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }

}

int Step (struct lista *gl, int k){
    if(k<0) return 0;
    struct lista *cv;
    cv=gl;
    int n=1;
    while(cv->next!=NULL){
        n++;
        cv=cv->next;
    }
    if(k>n)return 0;

    cv=gl;
    n=0;
    int zbir=0;
    while(cv!=NULL){
        n++;
        if(n%k==0) zbir+=cv->i;
        cv=cv->next;
    }
    return zbir;
}

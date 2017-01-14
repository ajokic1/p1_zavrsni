#include <stdio.h>
#include <stdlib.h>

struct lista {
    int i;
    struct lista *next;
};

void print_lista(struct lista *);
struct lista *prebacivanje(struct lista *,int);

int main(){
    struct lista *p,*q,*t;
    int x;
    printf("Unijeti elemente liste (lista se zavrsava unosom prvog broja veceg\
        od 50): ");
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
    int n;
    printf("Unesi n: ");
    scanf("%d", &n);
    prebacivanje(p,n);
    print_lista(p);
}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }

}
struct lista *prebacivanje(struct lista *gl, int n){
    if(n<1) return gl;
    struct lista *tr, *pom;
    int c=0, ind=0;
    tr=gl;
    while(tr!=NULL){
        c++;
        
        if(c==n-1){
            pom=tr->next;
            tr->next=tr->next->next;
            pom->next=NULL;
        }
        if(ind==0 && tr->next==NULL) {
            tr->next=pom;
            ind=1;
        }
        
        tr=tr->next;
    }
    return gl;
    
}

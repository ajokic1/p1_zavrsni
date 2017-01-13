#include <stdio.h>
#include <stdlib.h>

struct lista {
    int i;
    struct lista *next;
};

void print_lista(struct lista *);
struct lista *uklVece(struct lista *);

int main(){
    struct lista *p,*q,*t;
    int x;
    printf("Unijeti elemente liste (lista se zavrsava unosom prvog broja veceg od 50): ");
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
    uklVece(p);
    print_lista(p);
}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }printf("\n");

}

struct lista *uklVece(struct lista *gl){
    struct lista *tr, *pom;
    tr=gl;
    while(tr->next!=NULL){
        if(tr->next->i > gl->i){
            pom = tr->next;
            tr->next = pom->next;
            free(pom);
        }else tr=tr->next;
    }return gl;
}

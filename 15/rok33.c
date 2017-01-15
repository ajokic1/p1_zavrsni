#include <stdio.h>
#include <stdlib.h>

struct lista {
    int i;
    struct lista *next;
};

void print_lista(struct lista *);
struct lista *removeRange(struct lista *, int, int);

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
            int m,n;
            printf("Unesi dva cijela broja: ");
            scanf("%d %d",&m,&n);
            removeRange(p,m,n);
            print_lista(p);
}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }

}
struct lista *removeRange(struct lista *gl, int m, int n){
    int c=0;
    struct lista *pom, *pom1, *pom2, *tr;
    tr=gl;
    while(tr!=NULL){
        if(c==m-1){
            pom=tr;
            pom1 = tr->next; 
        }
        if(c==n){
            pom2=tr->next;
            tr->next=NULL;
            pom->next=pom2;
            while (pom1!=NULL){
                pom2=pom1;
                pom1=pom1->next;
                free(pom2);
            }
        }
        c++;
        tr=tr->next;
    }
    return gl;

}

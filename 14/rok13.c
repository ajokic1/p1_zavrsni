#include <stdio.h>
#include <stdlib.h>

struct lista {
    int i;
    struct lista *next;
};
struct lista *Swap(struct lista *, int, int);

void print_lista(struct lista *);

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
    printf("Unesi dva broja: ");
    scanf("%d %d",&m,&n);
    print_lista(Swap(p,m,n));

    
}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }

}

struct lista *Swap(struct lista *gl, int m, int n){
    struct lista *l,*s,*d,*tr;
    if(m>n){
        int temp = m;
        m=n;
        n=temp;}
    
    int c=0,swp=0;
    tr=gl;
    while(tr!=NULL){
        if(c+1==m){
            l=tr;
            s=tr->next;
            d=tr->next->next;
            swp++;
        }if(c+1==n){
            l->next=tr->next;
            s->next=tr->next->next;
            tr->next->next=d;
            tr->next=s;
            swp++;

        }tr = tr->next;
        c++;
    }
    if(swp==2)return gl;
    else{puts("M i N moraju biti manji od duzine liste.");exit(-1);}
}

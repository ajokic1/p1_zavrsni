#include <stdio.h>
#include <stdlib.h>

struct lista {
    int i;
    struct lista *next;
};
void print_lista(struct lista *);
struct lista *makniN(struct lista *,int);

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
    scanf("%d",&n);
    makniN(p,n);
    print_lista(p);
    printf("\n\n\n\n");
    return 0;

}

void print_lista(struct lista *p){
    struct lista *q=p;
    while(q!=NULL){
        printf("%d ",q->i);
        q=q->next;
    }
    printf("\n");
}

struct lista *makniN(struct lista *gl, int n){
    if(n<1)return gl;
    struct lista *tr, *pom;
    int c=0,nInd;
    tr=gl;
    while(tr!=NULL){
        c++;
        tr=tr->next;
    }
    nInd=c-n;
    tr=gl;
    if(n<c){
        c=0;
        while(tr!=NULL){
            c++;
            if(c>nInd){
                pom=tr->next;
                tr->next=NULL;
                free(tr);
                tr=pom;
                //if(pom==NULL) break;
            }else if(c==nInd){
                pom=tr->next;
                tr->next=NULL;
                tr=pom;
            }
            else{
                tr=tr->next; 
            }
        }
    }
    return gl;
}



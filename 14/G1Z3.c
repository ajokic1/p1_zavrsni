#include <stdio.h>

struct lista {
int i;
struct lista *next;
};

void print_lista(struct lista *);

void main(){
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
}

void print_lista(struct lista *p){
struct lista *q=p;
while(q!=NULL){
	printf("%d ",q->i);
	q=q->next;
	}

}

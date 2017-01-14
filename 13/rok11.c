#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,max,ind=0;
    printf("Duzina niza: ");
    scanf("%d",&n);
    int *x=(int*)malloc(n*sizeof(int));
    printf("Unesi niz: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);       
    }

    for(i=0;i<n;i++){
        printf("%d, ",x[i]);
        if(ind==0 && x[i]%2==0){
            max=x[i];
            ind=1;
        }
        if(ind==1 && x[i]%2==0 && x[i]>max){
            max=x[i];
            ind=1;
        }
    }
    if(ind==1) printf("Najveci parni element niza je %d\n",max);
    else printf("Nema parnih elemenata\n");
    
    free(x);
    return 0;
}

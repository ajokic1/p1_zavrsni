#include <stdio.h>
#include <stdlib.h>

int najveci(int*, int);
int main(){
    int n,i;
    printf("Unesi broj clanova niza: ");
    scanf("%d",&n);
    int *x=(int*)malloc(n*sizeof(int));
    printf("Unesi elemente niza: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int maxi = najveci(x,n);
    printf("Najvecu sumu ima par %d i %d.\n",x[maxi],x[maxi+1]);
        
    free(x);
}
int najveci(int x[], int n){
    int i,max, maxi=0;
    max=x[0]+x[1];
    for(i=1;i<n-1;i++){
        if(x[i]+x[i+1]>=max){
            max=x[i]+x[i+1];
            maxi=i;
        }
    }
    return maxi;
}


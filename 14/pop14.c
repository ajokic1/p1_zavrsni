#include <stdio.h>
#include <stdlib.h>

int deset(int);
int main(){
    int n,m,n1,n2,i,min, mini;
    printf("Unesi dva cijela broja: ");
    scanf("%d %d",&n,&m);

    i=0;
    n2=0;
    n1=n;
    min=n1-m;
    while(n1>0){
        n2+=deset(i++)*n1%10;
        n1/=10;
        if(abs(n1+n2-m)<min){
            min=abs(n1+n2-m);
            mini=i;
        }    
    }
    printf("Rezultat: %d, %d",n/deset(mini), n%deset(mini));
    return 0;


}

int deset(int n){
    int br=1;
    while (n>=0){
        br*=10;
        n--;
    }return br;
}

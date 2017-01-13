#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j;
    printf("Unesi duzinu niza: ");
    scanf("%d",&n);
    int *x = (int*)malloc(n*sizeof(int));
    printf("Unesi niz: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++){
        for(j=0;j<=i;j++){
            printf(j==0?"%d":", %d", x[j]);
        }printf("\n");
    }

    free(x);
    return 0;
}

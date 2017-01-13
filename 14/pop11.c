#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Unesi duzinu niza: ");
    scanf("%d",&n);
    int *x = (int*)malloc(n*sizeof(int));
    printf("Unesi niz: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(i>0)x[i]+=x[i-1];
    }
    printf("Novi niz: ");
    for(i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    free(x);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10], i, ind=0, brNeg=0;
    printf("Unesi 10 brojeva: ");
    for(i=0;i<10;i++){
        scanf("%d",&x[i]);
        if(x[i]<0){
            ind=1;
            brNeg++;}
    }
    if(ind){
        printf("Unseseno je %d negativnih brojeva.",brNeg);
    }else{
        int max=x[0];
        for(i=1;i<10;i++){
            if(x[i]>max)max=x[i];
        }
        printf("Najveci uneseni broj je %d.", max);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int faktorijel(int);

int main(){
    int razlika, br, fk, i, rez[20],c=0;


    printf("Unesi broj: ");
    scanf("%d",&br);
    
    razlika = br;
    while(razlika>0){
        for(i=1;i<=razlika;i++){
            if(razlika-faktorijel(i)>=0)fk=i;
            else break;
        }
        razlika=razlika-faktorijel(fk);
        printf("razlika: %d, faktorijel: %d\n",razlika, 
                faktorijel(fk));        
        rez[c++]=fk;
    }
    for(i=0;i<c;i++){
        printf("%d, ",rez[i]);
    }printf("\n");
    return 0;

}

int faktorijel(int n){
    if(n==1) return 1;
    return n * faktorijel(n-1);
}

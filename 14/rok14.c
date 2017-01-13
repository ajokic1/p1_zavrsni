#include <stdio.h>
#include <string.h>
int max(int*,int);
int main(){
    FILE *f = fopen("Visine.txt", "r");
    int n[50], i=0,j, rez=0, tmp=0;
    while(!feof(f)){
        fscanf(f, "%d", &n[i++]);
    }
    int br = i;

    int lijeva=0;
    int mx = max(n,br);    

    for(i=0;i<mx;i++){//visina
        //Krenem od najnizeg reda, postavljam lijevu granicu
        lijeva=-1; tmp=0;
        for(j=0;j<br;j++){//niz
            if(lijeva==-1){
                if(n[j]>i){
                    lijeva=j;
                }
            }
            else{
                if(n[j]>i){
                    rez+=tmp;
                    tmp=0;
                }
                else {
                    tmp++;
                }
            }
        }
    }

    printf ("Kockice vode: %d\n",rez);

    printf("\n");
    fclose(f);
    return 0;
}
int max(int niz[], int n){
    int i,mx;
    mx=niz[0];
    for(i=0;i<n;i++){
        if(niz[i]>mx)mx=niz[i];
    }return mx;
}


#include <stdio.h>
#include <string.h>
int max(int*,int);
int main(){
    FILE *f = fopen("Visine.txt", "r");
    int n[50], i=0,j, rez=0, tmp=0;
    printf("Ucitane visine: ");
    while(!feof(f)){
        fscanf(f, "%d", &n[i++]);
        printf(" %d",n[i-1]);//
    }printf("\n");//
    int br = i;
    printf("br: %d\n", br);//
    int lijeva=0;
    int mx = max(n,br);
    char mat[mx][br];
    printf("mx: %d\n",mx);//
    for(i=0;i<mx;i++){//red
        //Krenem od najnizeg reda, postavljam lijevu granicu
        lijeva=-1; tmp=0;
        for(j=0;j<br;j++){//niz
            mat[i][j]=' ';
            if(lijeva==-1){
                if(n[j]>i){
                    lijeva=j;
                    mat[i][j]='#';}
            }
            else{
                if(n[j]>i){
                    //lijeva=-1;
                    mat[i][j]='#';
                    rez+=tmp;
                    while(tmp>0)mat[i][j-tmp--]='-';
                    tmp=0;
                }
                else {
                    tmp++;
                    //mat[i][j]='-';
                }
            }
        }
    }
    
    printf ("Kockice vode: %d\n",rez);
    printf ("Bonus - slika: \n");
    for(i=mx;i>=0;i--){
        for(j=0;j<br;j++){
            printf("%c",mat[i][j]);
        }printf("\n");
    }
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


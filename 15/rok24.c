#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define brojevi 100
#define cifre 50
int ucitaj(char br[brojevi][cifre]);
int saberi2(char*);
char zbir[2*cifre];//za medjurezultate fje saberi2()

int main(){
    char br[brojevi][cifre];
    char rez[11];
    int i;
    for(i=0;i<2*cifre;i++)zbir[i]='0';
    if(!ucitaj(br)){
        printf("Greska u ucitavanju brojeva.\n");return -1;
    }
    for(i=0;i<brojevi;i++){
        saberi2(br[i]);
        printf("%s\n",zbir);
    }
    int ind=0,c=0; //nismo stigli do pocetka
    for(i=0;i<2*cifre;i++){
        if(ind==0 && zbir[i]!='0')ind=1;
        if(ind==1 && c<11){rez[c++]=zbir[i];}
        if(c==10)rez[c]='\n';
    }
    printf("Dobijeni broj: %s\n",rez);
    return 0;
}

int ucitaj(char br[brojevi][cifre]){
    FILE *f;
    int i;
    f=fopen("Brojevi.txt", "r");
    for(i=0;i<brojevi;i++){
        fscanf(f,"%s",br[i]);
    }
    fclose(f);
    return 1;
}

int saberi2(char br[]){
    int i=cifre-1,k,pom,prenos=0;
    for(k=2*cifre-1;k>=0;k--){
        pom = (i>=0?br[i--]-'0':0) + zbir[k]-'0' + prenos;
        zbir[k]= pom%10 + '0';
        pom/=10;
        prenos=pom;
    }
    /*for(i=cifre-1;i>=0;i--){
      pom = br[i]-'0' + zbir[k]-'0' + prenos;
      zbir[k] = pom%10 + '0';
      pom/=10;
      prenos = pom;
      k--;
      }
      while(prenos>0){
      zbir[k--] = prenos%10 + '0';
      prenos/=10;}*/
    return 1;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringIzmedju(char*,int,int);

int main(){
    int p,q;
    char s[50];
    printf("Unesi string: ");
    scanf("%s",s);
    printf("Unesi dva cijela broja: ");
    scanf("%d %d",&p,&q);
    stringIzmedju(s,p,q);
    printf("Novi string: %s",s);
    return 0;
}
void stringIzmedju(char* s, int p, int q){
    char ss[50];
    int i, n=strlen(s),c=0;
    if(p<q && q<n && p>=0 && q>=0){
        for(i=0;i<n;i++){
            if(i>=p && i<=q){
                ss[c++]=s[i];
            }
        }
        ss[c]='\0';
        strcpy(s,ss);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Izmijeni(char*);
int main(){
    char s[50];
    printf("Unesi string: ");
    scanf("%s",s);
    Izmijeni(s);
    printf("Novi string: %s\n",s);
}

void Izmijeni(char* s){
    int i,n=strlen(s),k=0;
    char p[50];
    for(i=0;i<n;i++){
        if(s[i]>='0' && s[i]<'9'){
            p[k++]=s[i]+1;}
        else if(s[i]=='9');
        else p[k++]=s[i];
    }p[k]='\0';
    strcpy(s,p);
}

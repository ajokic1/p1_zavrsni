#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ostaviSlova(char*);

int main(){
    char s[50];
    printf("Unesi string: ");
    scanf("%s",s);
    ostaviSlova(s);
    printf("%s",s);
    return 0;
}

void ostaviSlova(char *s){
    char p[50];
    int i,n=strlen(s),c=0;
    for(i=0;i<n;i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            p[c++]=s[i];
        }
    }
    p[c]='\0';
    strcpy(s,p);
    
}

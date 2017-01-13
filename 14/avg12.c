#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isprIme(char*);

int main(){
    char s[50];
    printf("Unesi string: ");
    scanf("%s",s);
    printf("String %spredstavlja ime.",isprIme(s)?"":"ne ");
    return 0;
}

int isprIme(char *s){
    int i;
    if(strlen(s)<3) return 0;
    for(i=0;i<strlen(s);i++){
        if(i==0 && (s[i]<'A' || s[i]>'Z')) return 0;
        if(i>0 && (s[i]<'a' || s[i]>'z')) return 0;
    }return 1;
}

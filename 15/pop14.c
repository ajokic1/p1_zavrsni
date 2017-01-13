#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void makestr(char*,int);
int main(){ 
    int n,i;
    char str[7];
    FILE *f=fopen("Leksika.txt", "w");

    printf("Unesi broj slova: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        makestr(str,i);
        printf("%s\n", str);
    }
}

void makestr(char *s, int i){
    int j;
    for(j=5;j>=0;j--){
        s[j]='a' + i%6;
        i/=6;
    }s[6]='\0';
}

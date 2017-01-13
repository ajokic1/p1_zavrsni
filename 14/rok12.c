#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Samoglasnici(char*);
int samogl(char);
int main(){
    char str[50];
    printf("Unesi rijec: ");
    scanf("%s", str);

    Samoglasnici(str);
    printf("Izmijenjena rijec je: %s",str);
    puts("");
    return 0;
}

void Samoglasnici(char *s){
    int i,c=0;
    char p[50];
    for(i=0;i<(int)strlen(s);i++){
        if(samogl(s[i])){
            p[c++]=s[i];
            p[c++]=' ';
        }else p[c++]=s[i];
    }p[c]='\0';
    strcpy(s,p);
}
int samogl(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;
    else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return 1;
    else return 0;
}

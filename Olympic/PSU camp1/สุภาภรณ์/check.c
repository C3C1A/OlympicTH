#include <stdio.h>
#include<string.h>
int main(){

    int i;
    char a[20]={},b[20]={};
    printf("String 1 : ");
    scanf(" %s",&a);
    printf("String 2 : ");
    scanf(" %s",&b);
    if(!(strcmp(a,"root"))){
        if(!(strcmp(b,"admin")))
            printf("Welcome");
        else    printf("Sorry");
    }
    else    printf("Sorry");



    return 0;

}

#include <stdio.h>
#include<string.h>
int main(){

    int i;
    char a[20]={},b[20]={};
    printf("String 1 : ");
    scanf(" %s",&a);
    printf("String 2 : ");
    scanf(" %s",&b);
    for(i=0;;i++){

        if(a[i]!='\0'&&b[i]!='\0')
            printf("%c%c",a[i],b[i]);

        else if(a[i]!='\0'&&b[i]=='\0')
                printf("%c",a[i]);

        else if(a[i]=='\0'&&b[i]!='\0')
                printf("%c",b[i]);

        else
                break;

    }



    return 0;

}

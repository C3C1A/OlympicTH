#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    int i;
    char a[100],s;

    printf("Input String : ");
    gets(a);

    s = strlen(a);

    printf("------------------------\n");

    printf("Character\tASCII\n");
    for(i=0;i<s;i++){
        printf("%c\t\t%d\n",a[i],a[i]-'\0');
    }

    return 0;

}

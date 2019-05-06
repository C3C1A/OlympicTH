#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    int i,j;
    char a[100],s,re[100];

    printf("Input String : ");
    gets(a);
    s = strlen(a);

    for(i=s-1,j=0;i>=0,j<s;i--,j++)
        re[j] = a[i];

    for(i=0;i<s;i++){
        if((re[i]-'\0')==(a[i]-'\0'));
        else{
            printf("Not Palindrome String\n");
            return 0;
        }
    }
    printf("Palindrome String\n");


    return 0;

}

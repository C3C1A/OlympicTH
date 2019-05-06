#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    int i,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
    char a[100],s,big;

    printf("Input String : ");
    gets(a);

    printf("Length of String : ");
    s = strlen(a);
    printf("%d\n",s);

    printf("Reverse String : ");
    for(i=s-1;i>=0;i--)
        printf("%c",a[i]);
    printf("\n");

    printf("Lower to Upper : ");
    for(i=0;i<s;i++)
        printf("%c",toupper(a[i]));
    printf("\n");

    printf("Upper to Lower : ");
    for(i=0;i<s;i++)
        printf("%c",tolower(a[i]));
    printf("\n");

    for(i=0;i<s;i++){
        if(a[i]=='A'||a[i]=='a')    count_a++;
        else if(a[i]=='E'||a[i]=='e')    count_e++;
        else if(a[i]=='I'||a[i]=='i')    count_i++;
        else if(a[i]=='O'||a[i]=='o')    count_o++;
        else if(a[i]=='U'||a[i]=='u')    count_u++;
    }
    printf("-------------------------\n");
    printf("Number of Vowel\n");
    printf("A or a = %d\n",count_a);
    printf("E or e = %d\n",count_e);
    printf("I or i = %d\n",count_i);
    printf("O or o = %d\n",count_o);
    printf("U or u = %d\n",count_u);


    return 0;

}

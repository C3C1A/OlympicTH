#include <stdio.h>
#include <string.h>
int main(){

    int i;
    struct student{
        char name[30];
        int age;
        int level;

    }std1 = {"Suda",19,2},std2 = {"Malee",18,2};

    if(std1.level==std2.level)
        printf("Yes\n");
    else
        printf("No\n");

    if(!(strcmp(std1.name,std2.name)))
        printf("Yes\n");
    else
        printf("No\n");




    return 0;

}

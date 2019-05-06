#include <stdio.h>
#include <string.h>
#include<math.h>
typedef struct{
    int id;
    char name[50];
    float salary;
}employ;

int main(){
    employ a[20];
    int i;
    float sum=0;
    printf(" ID  Name   Saraly\n");
    printf("------------------------\n");

    for(i=0;i<20;i++){
        scanf("%d %s %f",&a[i].id,&a[i].name,&a[i].salary);
        sum += a[i].salary;
    }

    printf("   ID\t\tName\t\tSaraly\n");
    printf("============================================\n");
    for(i=0;i<20;i++){
        printf("%5d\t\t%s\t     %.2f\n",a[i].id,a[i].name,a[i].salary);
    }

    printf("   \t\tTotal\t     %.2f",sum);

    return 0;
}




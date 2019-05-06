#include <stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x=0,y=0;

    printf("a1 : ");
    scanf(" %lf",&a1);
    printf("b1 : ");
    scanf(" %lf",&b1);
    printf("c1 : ");
    scanf(" %lf",&c1);
    printf("a2 : ");
    scanf(" %lf",&a2);
    printf("b2 : ");
    scanf(" %lf",&b2);
    printf("c2 : ");
    scanf(" %lf",&c2);

    if(a1/b1!=a2/b2){
    x = (c1*b2 - c2*b1) / (a1*b2 - a2*b1);
    y = (a2*c1 - a1*c2) / (a2*b1 - a1*b2);
    printf("( %.1lf , %.1lf )",x,y);}

    else
        printf("Pararelle");





    return 0;
}

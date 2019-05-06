#include<stdio.h>
int main(){
    
    
    int x,price,time,day,work;
    float d,ot=.0f,total=.0f;
    
    printf("Price/day is ");
    scanf("%d",&price);
    printf("day is ");
    scanf("%d",&day);
    printf("OT hour is ");
    scanf("%d",&time);
    printf("Work hour ");
    scanf("%d",&work);
    
    ot = (price/work)*1.5*time;
    total = (price*day) + ot;
    printf("Money is %.0f",total);
    
    
    scanf("%d",&x);
    return 0;
}

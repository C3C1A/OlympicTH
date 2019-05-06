#include<stdio.h>
int main(){
    
    
    int x,price,time;
    float dok,total=.0f;
    
    printf("Price is ");
    scanf("%d",&price);
    printf("Interest is ");
    scanf("%f",&dok);
    printf("time is ");
    scanf("%d",&time);
    
    total = (price*(1+(dok/100)))/time;
    printf("Money is %.2f",total);
    
    
    scanf("%d",&x);
    return 0;
}

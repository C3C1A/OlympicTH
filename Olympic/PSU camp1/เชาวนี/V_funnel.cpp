#include<stdio.h>
int main(){
    
    
    int x;
    double volume=.0f,radian,high,pi=3.141592653589793238462643383279502884197169399375105820974944592;
    
    printf("radian is ");
    scanf("%f",&radian);
    printf("high is ");
    scanf("%d",&high);
    volume = (1/3)*pi*radian*radian*high;
    printf("volume of funnel is %.2f",volume);
    
    
    scanf("%d",&x);
    return 0;
}

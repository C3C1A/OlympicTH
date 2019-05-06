#include<stdio.h>
int main(){
    
    
    int x;
    float area=.0f,high,a,b;
    printf("high is ");
    scanf("%f",&high);
    printf("short is ");
    scanf("%f",&a);
    printf("long is ");
    scanf("%f",&b);
    area = high*(a+b)*0.5;
    printf("Area of trapezoid is %.1f",area);
    
    
    scanf("%d",&x);
    return 0;
}

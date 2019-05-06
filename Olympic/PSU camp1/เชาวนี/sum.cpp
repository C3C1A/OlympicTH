#include<stdio.h>
int main(){
    
    
    int x,a[5],i,sum=0;
    //double volume=.0f,radian,high,pi=3.141592653589793238462643383279502884197169399375105820974944592;
    
    for(i=0;i<5;i++){
                     printf("num%d is ",i+1);
                     scanf("%d",&a[i]);
                     sum += a[i];
                     }
    printf("Sum is %d",sum);
    
    
    scanf("%d",&x);
    return 0;
}

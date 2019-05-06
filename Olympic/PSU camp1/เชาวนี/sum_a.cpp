#include<stdio.h>
int main(){
    
    
    int x,a[5],i,sum=0;
    
    printf("Starter num is ");
    scanf("%d",&a[0]);
    printf("a is ");
    scanf("%d",&x);
    for(i=0;i<4;i++)
                     a[i+1] = a[i] + x;
    for(i=0;i<5;i++)
                    sum += a[i];
    printf("Sum is %d",sum);
    
    
    scanf("%d",&x);
    return 0;
}

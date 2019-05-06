#include<stdio.h>
int main(){
    
    
    int x,a[2],i,sum=0;
    
    for(i=0;i<2;i++){
                     printf("Input a%d = ",i+1);
                     scanf("%d",&a[i]);
    }
    if(a[0]<a[1])
    printf("Max is %d",a[1]);
    else
    printf("Max is %d",a[0]);
    
    
    scanf("%d",&x);
    return 0;
}

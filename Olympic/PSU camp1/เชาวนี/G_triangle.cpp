#include<stdio.h>
int main(){
    
    
    int x;
    int girth=0,high,base,a;
    
    printf("high is ");
    scanf("%d",&high);
    printf("base is ");
    scanf("%d",&base);
    printf("long is ");
    scanf("%d",&a);
    girth = high+base+a;
    printf("girth of triangle is %d",girth);
    
    
    scanf("%d",&x);
    return 0;
}

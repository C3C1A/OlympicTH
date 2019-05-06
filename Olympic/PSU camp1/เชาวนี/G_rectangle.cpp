#include<stdio.h>
int main(){
    
    
    int x,girth=0,width,lenght;
    
    printf("width is ");
    scanf("%d",&width);
    printf("lenght is ");
    scanf("%d",&lenght);
    girth = (width+lenght)*2;
    printf("girth of rectangle is %d",girth);
    
    
    scanf("%d",&x);
    return 0;
}

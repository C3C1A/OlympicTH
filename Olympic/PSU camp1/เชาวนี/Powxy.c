#include <stdio.h>
float Powerxy(int x,int y){

    float i,total=1;
    if(y>0){
    for(i=0;i<y;i++)    total *= x;
    }
    else if(y=0) total = 1;
    else    total /= x;

    return total;
}

void main(){
    int x,y;
    printf("Enter first positive integer : ");
    scanf("%d",&x);
    printf("Enter second positive integer : ");
    scanf("%d",&y);
    printf("\nResult of %d and %d is %.1f\n",x,y,Powerxy(x,y));

}

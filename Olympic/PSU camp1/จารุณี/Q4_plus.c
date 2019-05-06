#include <stdio.h>
int main(){

    int x,y,carry1=0,sum=0;
    scanf("%d%d",&x,&y);

    for(;;){
        sum = x^y;
        carry1 = x&y;
        if(carry1==0)   break;
        carry1 <<= 1;
        x = sum;
        y = carry1;
    }
    printf("%d",sum);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(){

    int x;
    scanf("%d",&x);
    (x&1)?printf("Odd"):printf("Even");
    /*if(x&1)
        printf("Odd");
    else
        printf("Even");*/

    return 0;
}

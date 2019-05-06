#include <stdio.h>
void add(int *x,int *y){
    printf("%d %d\n",*x,*y);
    *x += 10;
    *y += 20;
    printf("%d %d\n",*x,*y);
}

int main(){

    int a=10,b=20;

    printf("%d %d\n",a,b);
    add(&a,&b);
    printf("%d %d \n",a,b);

    return 0;
}




#include<stdio.h>
int main(){

int num=0,n[5],col=10000,sum=0,i;

// input
// num = 123;
num = 12345;
for(i=0;i<5;i++){
    n[i] = num / col;
    sum += n[i];
    num = num % col;
    col = col / 10;
}
printf("%d\n",sum);

return 0;
}

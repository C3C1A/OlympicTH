#include <stdio.h>
int fibo(int);
int main(){

    int n,x,i;
    scanf("%d",&n);
    //x = fibo(n);
    for(i=0;i<n;i++)
    printf("%d ",fibo(i));

    return 0;
}
int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else    return fibo(n-2) + fibo(n-1);
}

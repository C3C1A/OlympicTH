#include <stdio.h>
int pow2(int);
int pow(int,int);
int main(){

    int n,x,a;
    scanf("%d%d",&a,&n);
    x = pow(a,n);
    printf("%d ^ (2^%d) : %d\n",a,n,pow(a,pow(2,n)));

    return 0;
}
int pow(int a,int n){
    if(n==0) return 1;
    else return a*pow(a,n-1);
}

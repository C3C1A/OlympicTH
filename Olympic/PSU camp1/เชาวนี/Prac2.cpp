#include<stdio.h>
#include<stdlib.h>
int func(int n){
    int a[n];
    scanf("%d",&a[0]);
    int i,total=0;
    for(i=1;i<n+1;i++){

            a[i] = (2*a[i-1])+6;

    }
    for(i=0;i<n+1;i++)
    total += ((2*i)+1)*a[i];
    return total;
}

int main(){

    int x,n,total=0;

    scanf("%d",&n);

    total = func(n);

    printf("%d\n",total);


system("PAUSE");
return 0;
}

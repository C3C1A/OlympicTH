#include <stdio.h>
int sum(int *,int);
int main(){

    int n,x,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    n--;
    x = sum(a,n);
    printf("%d\n",sum(a,n));

    return 0;
}
int sum(int *a,int n){
    if(n==0) return a[0];
    else    return a[n] + sum(a,n-1);

}

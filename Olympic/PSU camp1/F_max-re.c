#include <stdio.h>
int max(int *,int);
int main(){

    int n,x,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    n--;
    x = max(a,n);
    printf("Max : %d\n",max(a,n));

    return 0;
}
int max(int *a,int n){
    if(n>0){
        if(a[n]>a[n-1]) return a[n];

        else    return a[n-1];
    }

}

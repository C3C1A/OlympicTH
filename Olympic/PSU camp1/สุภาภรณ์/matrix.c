#include <stdio.h>
int main(){

    int a[4][5],sum=0,j,i;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++)    scanf("%d",&a[i][j]);
    }
    for(j=0;j<5;j++){
        for(i=0;i<4;i++)    sum += a[i][j];
    printf("%d ",sum);
    sum = 0;
    }


    return 0;

}

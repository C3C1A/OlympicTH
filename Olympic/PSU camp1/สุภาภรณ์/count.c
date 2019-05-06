#include <stdio.h>
int main(){

    int a[1][5],positive=0,zero=0,negative=0,i,j;

    for(i=0;i<1;i++){
        for(j=0;j<5;j++)    scanf("%d",&a[i][j]);
    }
    for(i=0;i<1;i++){
        for(j=0;j<5;j++){
            if(a[i][j]>0)   positive++;
            else if(a[i][j]==0) zero++;
            else    negative++;
        }
    }
    printf("A number of positive numbers : %d\n",positive);
    printf("A number of zeroes : %d\n",zero);
    printf("A number of negative numbers : %d\n",positive);


    return 0;

}

#include <stdio.h>
int main(){

    int a[1][5],b[1][5],sum=0,j,i,k;

    printf("Array a: ");
    for(i=0;i<1;i++){
        for(j=0;j<5;j++)    scanf("%d",&a[i][j]);
    }
    printf("Array b: ");
    for(i=0;i<1;i++){
        for(k=0;k<5;k++)    scanf("%d",&b[i][k]);
    }
    for(i=0;i<1;i++){
        for(j=0,k=4;j<5;j++,k--){
            if(a[i][j]!=b[i][k])    printf("They are not equal\n");
            else if(i==4&&a[i][j]==b[i][k]){
                printf("They are equal\n");
            }
        }
    }

    return 0;

}

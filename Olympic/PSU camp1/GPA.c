#include <stdio.h>
#include<string.h>
#include<conio.h>

int main(){

    int m,n,i,j;
    float sum[100],credit[100],count[100],total[100];
    char grade[100];

    scanf("%d%d",&m,&n);

    for(i=0;i<n;i++){
        sum[i] = 0;
        count[i] = 0;
        for(j=0;j<m;j++){
            scanf(" %s",&grade);
            scanf("%f",&credit[j]);
            if(strcmp(grade,"A")==0){
                sum[i] += 4*credit[j];
                count[i] += credit[j];
            }
            else if(strcmp(grade,"B")==0){
                sum[i] += 3*credit[j];
                count[i] += credit[j];
            }
            else if(strcmp(grade,"C")==0){
                sum[i] += 2*credit[j];
                count[i] += credit[j];
            }
            else if(strcmp(grade,"D")==0){
                sum[i] += 1*credit[j];
                count[i] += credit[j];
            }
            else if(strcmp(grade,"E")==0){
                sum[i] += 0*credit[j];
                count[i] += credit[j];
            }
        }
        total[i] = sum[i]/count[i];
    }

    for(i=0;i<n;i++){
        printf("%.2f\n",total[i]);
    }

    return 0;

}

#include<stdio.h>
int main(){

    int x,i,n,a,max=0,min=0,sum=0;
    float mean=.0f;

    scanf("%d",&n);
    scanf("%d",&a);
    max = a;
    min = a;
    sum = a;
    for(i=0;i<n-1;i++){
                 scanf("%d",&a);
                 if(max<=a){
                           max = a;
                           sum += a;
                           }
                 else{
                      min = a;
                      sum += a;
                      }
    }
    mean = sum / n;
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
    printf("Mean is %.1f",mean);


    scanf("%d",&x);
    return 0;
}

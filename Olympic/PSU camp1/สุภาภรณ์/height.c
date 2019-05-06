#include <stdio.h>
int main(){

    int a[10],i,x,y,max=0,min=0,sum=0;
    for(i=0;i<10;i++)    scanf("%d",&a[i]);
    max = a[0];
    min = a[0];

    for(i=0;i<10;i++){
        if(a[i]>max){
            max = a[i];
            x = i;
        }
        if(a[i]<min){
            y = i;
            min = a[i];
        }
        sum += a[i];
    }

    printf("Average: %.2f\n",sum/10.0);
    printf("Tallest: %d %d\n",max,x+1);
    printf("Shortest: %d %d\n",min,y+1);


    return 0;

}

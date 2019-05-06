#include <stdio.h>
int main(){

    int a[20],count_o=0,count_e=0,i;

    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==1)  count_o++;
        else    count_e++;
    }

    printf("Number of odd : %d\n",count_o);
    printf("Number of even : %d",count_e);


    return 0;

}

#include <stdio.h>
int main()
{
    int i,sum=0;

    for(i=0;i<100;i++){
        if(i%2==0)
            sum += i;
    }
    printf("%d",sum);

    return 0;
}

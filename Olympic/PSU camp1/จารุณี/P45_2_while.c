#include <stdio.h>

int main()
{
    int i=2,sum=0;

    while(i<100){
        if(i%2==0)
            sum += i;
            i++;

    }

    printf("%d",sum);

    return 0;
}

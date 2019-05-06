#include <stdio.h>

int main()
{
    int i=1,sum=0;

    do{
        if(i%2==0)
            sum += i;
            i++;

    }while(i<100);

    printf("%d",sum);

    return 0;
}

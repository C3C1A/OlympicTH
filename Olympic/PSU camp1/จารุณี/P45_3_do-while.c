#include <stdio.h>
int main()
{
    int i=1,x,y,total=0;

    scanf("%d%d",&x,&y);
    total = 1;
    do{
        total *= x;
        i++;
    }while(i<y);



    printf("%d",total);

    return 0;
}

#include <stdio.h>
int main()
{
    int i,x,y,total=0;

    scanf("%d%d",&x,&y);
    total = 1;
    for(i=1;i<y;i++)
        total *= x;

    printf("%d",total);

    return 0;
}

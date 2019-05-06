#include <stdio.h>
int main()
{
    int i=1,x,y,total=0;

    scanf("%d%d",&x,&y);
    total = 1;
    while(i<y){
        total *= x;
        i++;
    }


    printf("%d",total);

    return 0;
}

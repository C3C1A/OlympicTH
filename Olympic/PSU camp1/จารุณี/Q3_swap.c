#include <stdio.h>
int main(){

    int x=2,y=3;
    //scanf("%d%d",&x,&y);
    x ^= y;
    y ^= x;
    x ^= y;
    printf("%d %d",x,y);

	return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
int main( ){

    int money,a=0,i;
    scanf("%d",&money);

    //Let coin 50,20,10,5,1 bath
    while(money!=0){
        if(money>=50){
            a += money/50;
            money %= 50;
        }
        else if(money<50&&money>=20){
            a += money/20;
            money %= 20;
        }
        else if(money<20&&money>=10){
            a += money/10;
            money %= 10;
        }
        else if(money<10&&money>=5){
            a += money/5;
            money %= 5;
        }
        else if(money<5&&money>=1){
            a += money/1;
            money %= 1;
        }
    }

    printf("%d",a);

	return 0;
}

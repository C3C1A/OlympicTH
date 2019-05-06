#include<stdio.h>
#include<math.h>
int main(){

int num,sum=0,res=0;
scanf("%d",&num);
while(num>0){
    res = num % 10;
    sum = sum + res;
    num = num / 10;
    }
printf("%d",sum);

return 0;
}

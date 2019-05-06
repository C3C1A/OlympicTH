#include <stdio.h>
#include <string.h>
#include<math.h>
typedef struct{
    int x;
    int y;
}City;

City getCity();
float distance1(City p1,City p2);
float distance2(City q1,City q2);

int main(){

    int a=0;
    getCity();

    return 0;
}


City getCity(){
    City base,ci1,ci2;
    float b=0,c=0;
    printf("Base City : ");
    scanf("%d%d",&base.x,&base.y);
    printf("City : ");
    scanf("%d%d",&ci1.x,&ci1.y);
    printf("City : ");
    scanf("%d%d",&ci2.x,&ci2.y);

    b = distance1(ci1,base);
    c = distance2(ci2,base);

    if(b>c)   printf("Go to City 1\n");
    else if(b<c)  printf("Go to City 2\n");
}


float distance1(City p1,City p2){
    float d1=0;
    d1 = sqrt( pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2) );
    return d1;
}


float distance2(City q1,City q2){
    float d2=0;
    d2 = sqrt( pow((q1.x-q2.x),2) + pow((q1.y-q2.y),2) );
    return d2;
}




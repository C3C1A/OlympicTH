#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int *)a - *(int *)b);}



int main( ){

	int m,n,i,sum=0;
	scanf("%d %d",&m,&n);
	int price[1000];
	for(i=0;i<n;i++){
		scanf("%d",&price[i]);
	}
	qsort(price,n,sizeof(int),compare);

	for(i=0;i<m;i++){
        sum += price[i];
	}
	printf("%d",sum);


    return 0;
}

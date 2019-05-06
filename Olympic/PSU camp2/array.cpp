#include<stdio.h>
main(){
	printf("n\tsquare\tcube\n");
	int i;
	for(i=1;i<=10;i++){
		printf("%d",i);
		printf("\t%d",i*i);
		printf("\t%d\n",i*i*i);
	}
}

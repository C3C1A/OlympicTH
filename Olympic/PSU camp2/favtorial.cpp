#include<stdio.h>

void fac(int i){
	int total=1;
	for(int j=1;j<=i;j++){
		total *= j;
	}
	printf(" %d\n",total);
}

main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d",i);
		fac(i);
	}
	
	return 0;
}

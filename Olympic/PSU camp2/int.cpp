#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int num[1000],i,min;
	for(i=0;i<n;i++)	scanf("%d",&num[i]);
	min = num[0];
	for(i=0;i<n;i++){
		if(num[i]<min)	min = num[i];
	}
	int count=0;
	for(i=0;i<n;i++){
		if(num[i]==min)	count++;
	}
	printf("%d",count);
	
	return 0;
}

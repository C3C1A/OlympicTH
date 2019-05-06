#include<stdio.h>

int fibo(int n){
	int i,sum[5000],count=0;
	sum[0] = 0;
	sum[1] = 1;
	for(i=2;i<=n;i++){
		sum[i] = sum[i-2] + sum[i-1];
		count++;
	}
	return sum[count];
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fibo(n));
	return 0;
}

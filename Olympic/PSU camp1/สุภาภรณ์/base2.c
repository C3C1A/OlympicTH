#include<stdio.h>
int main(){

	int x,i,a[100],count=0;
	scanf("%d",&x);
	for(i=0;;i++){
		if(x/2!=1){
			a[i] = x % 2;
			x = x / 2;
			count = count + 1;
		}
		else{
			a[i] = x % 2;
			a[i+1] = x / 2;
			count = count + 2;
			break;

		}
	}
	for(i=count-1;i>=0;i--)
	printf("%d",a[i]);

	scanf("%d",&x);
	return 0;
}


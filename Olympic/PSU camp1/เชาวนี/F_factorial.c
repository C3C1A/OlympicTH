#include<stdio.h>
unsigned long long factorial(int);
int main()
{
	unsigned long long n,fac;
	scanf("%lld",&n);

	fac = factorial(n);
	printf("factorial : %lld",fac);

	return 0;
}
unsigned long long factorial(int a)
{
	unsigned long long total=1;
		for(;a>0;  a-- )
			total *= a;
		return total;
	}


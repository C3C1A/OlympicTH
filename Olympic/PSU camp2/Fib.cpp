#include <iostream>
#include <cstdlib>
using namespace std;

int fib1(int n){
	int fn,fn1,fn2;
	if(n<2)		return n;
	fn1 = fib1(n-1);
	fn2 = fib1(n-2);
	fn = fn1 + fn2;
	return fn;
}

int fib2(int n){
	int k,fn;
	int fn2 = 0;
	int fn1 = 1;
	for(k=2;k<=n;k++){
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}

int main(){
	int n;
	cin >> n;
	cout << fib2(n) << endl;
	cout << fib1(n) << endl;
	
	return 0;
}

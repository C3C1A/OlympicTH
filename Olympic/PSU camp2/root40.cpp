#include <iostream>
#include <cstdlib>
using namespace std;

double binary_search(double left,double right,double x){
	double m;
//	if(left > right)	return -1;
	m = (left + right) / 2;
	if(x == m)		return m;
	if(x < m)	return binary_search(left,m-1,x);
	else	return binary_search(m+1,right,x);
}

int main (){
	double n;
	int i;
	cin >> n;
	cout << binary_search(0,n,n);
	
	return 0;
}

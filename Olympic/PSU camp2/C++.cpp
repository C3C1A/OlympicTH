#include<iostream>
using namespace std;
int main(){
	int value1 = 5 , value2 = 15;
	int *p1 , *p2;
	p1 = &value1;
	p2 = &value2;
	*p1 = 10;
	*p2 = value2 + (*p1);
	cout<<"value1 = "<<value1<<"/value2 = "<<value2<<endl;
	p1 = p2;
	*p1 = value1 + (value2 * (*p2) );
	cout<<"
	value1 = "<<value1<<" / value2 == "<<value2<<endl;
	return 0;
}

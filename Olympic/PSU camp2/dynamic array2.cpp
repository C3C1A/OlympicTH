#include<iostream>
using namespace std;

int maximum(int x,int m){
	if(x>m)	m = x;
	return m;
}

int get(double *&a,int &n){
	int i,m,z;
	cin>>n;
	a = new double[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0)	z=a[0];
		z = maximum(a[i],z);
	}
	return z;
}

main(){
	double *a;
	int x,i,n;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		cout<<get(a,n)<<endl;
		delete[] a;
	}
}


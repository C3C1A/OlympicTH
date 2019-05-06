#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	int num,i,m;
	FILE *fp;
	fp = fopen("inputtest.dat","w");
	for(i=0;i<5;i++){
		cin >> num;
		fprintf(fp,"%d\n",num);
	}
	fclose(fp);
	
	fp = fopen("inputtest.dat","r");
	fscanf(fp,"%d",&num);
	while(!feof(fp)){
		cout << num << endl;
		fscanf(fp,"%d",&num);
	}
	fclose(fp);
	
	return 0;
}

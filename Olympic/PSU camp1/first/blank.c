#include <stdio.h>
#include <string.h>

int main(){
	int i,j,l,pt;
	int f = 0;
	char str[100][1001];
	int x[100];
	for(i = 0;i < 100;i ++){
		x[i] = 1;
	}
	
	
	for(pt=0,scanf("%s",str[pt]) ; str[pt][strlen(str[pt]) - 1] != '.' ; pt++,scanf("%s",str[pt])){
		for(i = 0;i < pt;i ++){
			if(strcmp (str[pt],str[i]) == 0){
				x[pt] = x[i] + 1;
			}
		}
	}
	printf("%d\n",pt + 1);
	for(i = 0;i < pt;i ++){
		if(x[i] == 2){
			printf("%s\n",str[i]);
			f = 1;
		}
		
	}
	if(f == 0) printf("Not Found");
	
	return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
int i,s;
    char name[30];
    gets(name);
    s = strlen(name);
    for(i = 0;i < s;i ++){
    	printf("%s\n",&name);
    	name[s - i - 1] = 0;
	}

	return 0;
}

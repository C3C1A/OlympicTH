#include <stdio.h>
#include <string.h>
#include <math.h>
int main( ){

    /*struct type{
        char tence[1000];
    }a[100];*/

    int i,count=0,j,x=0,n[100];
    char tence[1000][100];

    for(i=0;;i++){
        //scanf("%s",&a[i].tence);
        //scanf("%s",&tence[1000][i]);
        count++;
		//x = strlen(a[i].tence);
		x = (strlen(tence[i])) - 2;
        //if(strcmp(a[i].tence,".")==0)
        if(strcmp(tence[x][i],".")==0)
            break;
    }
    printf("%d\n",count);

    for(i=0;i<count;i++){
        n[i]=0;
        for(j=0;j<count;j++){
            if(strcmp(tence[1000][i],tence[1000][j])==0){
                n[i]++;
                }
        }printf("%d ",n[i]);

    }
    return 0;
}

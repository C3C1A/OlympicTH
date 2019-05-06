#include <stdio.h>
#include <string.h>
#include <math.h>
int main( ){

	int n,z,x,y,row,col;
	int i,j,cy=0,cx=0;
	char table[100][100];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)	table[i][j] = '\0';
	}
	scanf("%d",&x);
	while(x!=-1){
		cx = x;
		scanf("%d %d %d",&y,&col,&row);
		for(i=0;i<row;i++){
			cy = y;
			for(j=0;j<col;j++){
				table[cx][cy++] = '*';
				if(cy==n)	cy = 0;
			}
			cx++;
			if(cx==n)	cx = 0;
		}
		scanf("%d",&x);
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c",table[i][j]);
		}
		printf("\n");
	}




    return 0;
}
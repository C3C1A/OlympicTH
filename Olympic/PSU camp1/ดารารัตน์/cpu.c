#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main( )
{

    FILE *fp;
    int n,i,j;
    fp = fopen("process.dat","r");
    scanf("%d",&n);
    struct type{
        char name[30];
        int time;
    }a[20];

    for(i=0;i<n;i++){
        fscanf(fp,"%s%d",&a[i].name,&a[i].time);
    }

    for(i=0;i<n;i++){
        printf("Round %d : ",i+1);
        for(j=0;j<n;j++){
            if(a[j].time>0){
                printf("%s\t",a[j].name);
                a[j].time = a[j].time-n;
            }
        }
    printf("\n");
    }




    fclose(fp);
    	getch();
	return 0;
	getch();
}

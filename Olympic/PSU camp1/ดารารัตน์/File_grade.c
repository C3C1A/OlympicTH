#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main( )
{
    struct type{
    char id[10],name[30],grade;
    int credit;
    }A[100];


	FILE    *rfp;
	int i=0,n;
	float avg=0,sumc=0,sum=0;

    rfp = fopen("test2.dat","r");

    printf("ID     \t\tName  \t\t\t\tCredit\tGrade\n\n");

    while(!feof(rfp)){
        fscanf(rfp,"%s",A[i].id);
        //printf("%s\t",A[i].id);
        fgets(A[i].name,30,rfp);
        //printf("%s\t",A[i].name);
        fscanf(rfp,"%d %c",&A[i].credit,&A[i].grade);
        //printf("%d\t%c\n",A[i].credit,A[i].grade);
        i++;

    }
    for(n=0;n<i-1;n++){
        if(A[n].grade=='A') sum += (4.0*A[n].credit);
        if(A[n].grade=='B') sum += (3.0*A[n].credit);
        if(A[n].grade=='C') sum += (2.0*A[n].credit);
        if(A[n].grade=='D') sum += (1.0*A[n].credit);
        sumc += A[n].credit;
        printf("%s\t%s\t%d\t%c\n",A[n].id,A[n].name,A[n].credit,A[n].grade);
    }
    printf("\n");
    avg = sum / sumc;
    printf("\t\t\t\t\t\t%.0f",sumc);
    printf("\t%.2f\n",avg);



    fclose(rfp);
	return 0;
}

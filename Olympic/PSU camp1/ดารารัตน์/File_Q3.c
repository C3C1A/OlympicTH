#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main( )
{
	FILE    *rfp,*wfp;
	int i=1;
	float mid[100],final[100],sum[100];
	char name[30][100],grade[100];

    rfp = fopen("test.dat","r");
    wfp = fopen("result.dat","w");

    fscanf(rfp,"%s%f%f",name[0],&mid[0],&final[0]);
    sum[0] = mid[0] + final[0];
        if(sum[0]>=85.00&&sum[0]<100)     grade[0] = 'A';
        else if(sum[0]>=75.00&&sum[0]<85.00)    grade[0] = 'B';
        else if(sum[0]>=55.00&&sum[0]<75.00)    grade[0] = 'C';
        else if(sum[0]>=45.00&&sum[0]<55.00)    grade[0] = 'D';
        else if(sum[0]<45.00)    grade[0] = 'E';

        fprintf(wfp,"%s  %.2f  %c\n",name[0],sum[0],grade[0]);
    //printf("%s %.2f %.2f\n",name[0],mid[0],final[0]);
    while(!feof(rfp)){
        fscanf(rfp,"%s%f%f",name[i],&mid[i],&final[i]);
        //printf("%s %.2f %.2f\n",name[i],mid[i],final[i]);
        sum[i] = mid[i] + final[i];
        if(sum[i]>=85.00&&sum[i]<100)     grade[i] = 'A';
        else if(sum[i]>=75.00&&sum[i]<85.00)    grade[i] = 'B';
        else if(sum[i]>=55.00&&sum[i]<75.00)    grade[i] = 'C';
        else if(sum[i]>=45.00&&sum[i]<55.00)    grade[i] = 'D';
        else if(sum[i]<45.00)    grade[i] = 'E';

        fprintf(wfp,"%s  %.2f  %c\n",name[i],sum[i],grade[i]);
        i++;
    }



    fclose(rfp);
    fclose(wfp);
	return 0;
}

#include <stdio.h>
#include <conio.h>
	
typedef  struct   {
		    char    name [10];
		    float   midterm ;
		    float   final ;
		  }   Infor;

Infor  student ;
Infor  datarec[10];

int    count = 0;
double    sumscore = 0;

FILE   *outfp ;

int main()
{
//  Now read data from score.dat  into array datarec
     printf("Now read data ...\n");
     if (( outfp =  fopen ("d:/dararat/score.dat","r"))  ==  NULL)
     {
	       printf ("Error : cannot open file to read!!\n");
     }
     else
     {
	       count = 0;
	       fscanf(outfp, "%s %f %f", student.name, &student.midterm, &student.final);
	       while (!feof(outfp))
	       {
	             datarec[count] = student;
	             printf("%s %f %f\n",datarec[count].name,datarec[count].midterm,datarec[count].final);
	             sumscore   +=   datarec[count].midterm ;
	             count++;
	             fscanf(outfp, "%s %f %f", student.name, &student.midterm, &student.final);
	        }
            printf ("average midterm score  =  %8.2f\n",  sumscore / count);
            fclose (outfp);
            getch();
      }
     return 0;
}

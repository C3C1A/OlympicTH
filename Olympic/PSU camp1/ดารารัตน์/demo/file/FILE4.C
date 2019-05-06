#include <stdio.h>
	
typedef  struct   {
		    int      id ;
		    char    name [20];
		    int      salary ;
		  }   Infor;

Infor  custrec ;
Infor  datarec[10];

int    count = 0;
long    sumsalary = 0;

FILE   *outfp ;

int main()
{
//  Now read data from cust.dat  into array datarec
     printf("Now read data ...\n");
     if (( outfp =  fopen ("d:/dararat/cust.dat","r"))  ==  NULL)
     {
	       printf ("Error : cannot open file to read!!\n");
     }
     else
     {
	       count = 0;
	       fscanf(outfp, "%d %s %d", &custrec.id, custrec.name, &custrec.salary);
	       while (!feof(outfile))
	       {
	           datarec[count] = custrec;
	           printf("%d %s %d\n",datarec[count].id,datarec[count].name,datarec[count].salary);
	           sumsalary   +=   datarec[count].salary;
	           count++;
	           fscanf(outfp, "%d %s %d", &custrec.id, custrec.name, &custrec.salary);
	       }
      }
      printf ("average salary  =  %8.2f\n", (float) sumsalary / count);
      fclose (outfp);
   }
   return 0;
}

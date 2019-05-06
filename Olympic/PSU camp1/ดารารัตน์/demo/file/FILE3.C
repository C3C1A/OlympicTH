#include <stdio.h>
	
typedef  struct   {
		    int      id ;
		    char    name [20];
		    int      salary ;
		  }   Infor;

Infor  custrec ;

int    count = 0;
long    sumsalary = 0;

FILE   *infile, *outfile ;

int main()
{
//  Firstly ,  write data to cust.dat

	if (( infile =  fopen ("d:/dararat/cust.dat","w"))  ==  NULL)
    {
	      printf ("Error : cannot open file\n");
    }
    else
    {
     do  {
	    printf ("enter id ( 0 to exit) : ");
	    scanf ("%d", &custrec.id);
	    if (custrec.id  !=  0)
	    {
	       printf ("enter name : ");
	       scanf ("%s", custrec.name);
	       printf ("enter salary : ");
	       scanf ("%d", &custrec.salary);
	       fprintf (infile,"%d %s %d\n",custrec.id, custrec.name, custrec.salary);
	       count++;

	     }
	 }
     while  (custrec.id  !=  0);
     printf ("total record written = %d\n",count);
     fclose(infile);

//  Now read data from cust.dat
     printf("Now read data ...\n");
     if (( outfile =  fopen ("d:/dararat/cust.dat","r"))  ==  NULL)
     {
	       printf ("Error : cannot open file to read!!\n");
     }
     else
     {
	       count = 0;
	       fscanf(outfile, "%d %s %d", &custrec.id, custrec.name, &custrec.salary);
	       while (!feof(outfile))
	       {
	          count++;
	          printf("%d %s %d\n",custrec.id,custrec.name,custrec.salary);
	          sumsalary   +=   custrec.salary;
	          fscanf(outfile, "%d %s %d", &custrec.id, custrec.name, &custrec.salary);
	       }
      }
      printf ("average salary  =  %8.2f\n", (float) sumsalary / count);
      fclose (outfile);
   }
   return 0;
}

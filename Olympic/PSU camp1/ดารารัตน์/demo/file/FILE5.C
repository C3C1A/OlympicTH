#include <stdio.h>
	
typedef  struct   {
		    int      id ;
		    char    name [20];
		    int      salary ;
		  }   Infor;

Infor  custrec ;

#define   TRUE   1
#define   FALSE  0

int     id, found;
long    sumsalary = 0;

FILE   *inf;



int main()
{

     if (( inf =  fopen ("d:/dararat/cust.dat","r"))  ==  NULL)
     {
	       printf ("Error : cannot open file\n");
     }
     else
     {
	       printf ("enter id to search : ");
	       scanf ("%d", &id);
	       found = FALSE;
	       fscanf(inf, "%d %s %d", &custrec.id, custrec.name, &custrec.salary);
	       while (!feof(inf) && !found)
	       {
                 if (id == custrec.id)
                 {
	                printf("%d %s %d\n",custrec.id,custrec.name,custrec.salary);
		            found = TRUE;
	             }
	             fscanf(inf, "%d %s %d", &custrec.id, custrec.name, &custrec.salary);
	       }
           fclose (inf);
           if (!found)
           {
	          printf ("id = %d : No record found !!!\n",id);
           }
      }
   return 0;
}

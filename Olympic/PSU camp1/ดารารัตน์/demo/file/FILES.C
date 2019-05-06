#include <stdio.h>
#include <stdlib.h>


int main( )
{
	FILE    *fp;
	int     l;
	char    name[20];

	fp = fopen ("d:/New folder/PSU/first/datas.dat","w");
	if (fp == NULL)
	{      printf("Error open file.");
	       exit(-1);
	}
	
	for (l=1; l<=3; l++)
	{
         printf ("enter name : ");
	     scanf ("%s",name);
	     fputs (name, fp);
	}
    fp = freopen("d:/dararat/datas.dat","r",fp);
    printf ("Now read from file \n");
    while (!feof (fp))  
	{
	      fgets (name,20,fp);
	      printf ("%s",name);
    }
    fclose(fp);
	return 0;
}

#include <stdio.h>
#include<conio.h>
int  main()
{
	FILE    *inf;
	int        j , num;
	char name[50];
    if  ((inf  =  fopen ("Writetest.dat", "w"))  ==  NULL)
    {
		printf ("Error...cannot open file!!!\n");
        exit(-1);
    }
    else
    {
        for (j = 1; j <= 2; j++)
        {
            printf ("enter  number  :  ");
            scanf ("%d", &num);
            
            fprintf (inf, "%d", num);
            
            scanf("%s",&name);
            
            fprintf(inf," %s\n",name);
            
            printf ("\n");

        }
        fclose (inf);
    }
	return 0;
}



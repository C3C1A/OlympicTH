#include <stdio.h>	
int  main()
{
	FILE    *inf;
	int        j , num;
    if  ((inf  =  fopen ("d:/dararat/test.dat", "w"))  ==  NULL)
    {
		printf ("Error...cannot open file!!!\n");
        exit(-1);
    }
    else
    {
        for (j = 1; j <= 10; j++) 
        {
            printf ("enter  number  :  ");
            scanf ("%d", &num);
            fprintf (inf, "%d\n", num);
            printf ("\n");
        }
        fclose (inf);
    }
	return 0;
}

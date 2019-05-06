#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main( )
{
	FILE    *fp;
	int     l;
	char    ch;

	fp = fopen ("d:/posn_exam/datac.dat","w");
	if (fp == NULL)
	{      printf("Error open file.");
	       exit(-1);
	}
	ch = 'A';
	for (l=1; l<=16; l++)
	{
	    putc (ch, fp);
	    ch++;
	}
    fp = freopen("d:/posn_exam/datac.dat","r",fp);
    printf ("Now read from file \n");
    l = 0;
    while (!feof (fp))  
	{
	     ch = getc (fp);
	     printf ("c %c %d %x\n",ch,ch,ch);
	     printf ("d    %d  %x\n",l,l);
	     l++;
    }
    getch();
    fclose(fp);
	return 0;
}

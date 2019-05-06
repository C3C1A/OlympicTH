        #include <stdio.h>
        #include <conio.h>
		int  main()
        {
			FILE    *infp;
			char    a[5];
			int     b[5];
            int     i = 0;

		   if  ((infp  =  fopen ("d:/dararat/data.dat", "r"))  ==  NULL)
				printf ("Error : cannot open file\n");
		   else 
               {
				 while  (!feof (infp) )
				 {
				       fscanf (infp, "%c %d\n",  &a[i], &b[i]);		
				       printf ("%c %d\n",  a[i], b[i]);		       
				       i++;
				  }
				  printf("total data = %d\n",i);
				  getch();
			      fclose (infp);
			      return 0;
			     }
        }


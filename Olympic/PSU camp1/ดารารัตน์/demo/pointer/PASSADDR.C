                        #include <stdio.h>
			int  check (char , char *);
                        int  main()
			{   int i;
			    char c,d; ;
                            printf ("enter  char : ");
			    scanf ("%c", &c);
			    i = check (c , &d);
			    printf ("char(a-z) : %c --> %c :  %d\n", c, d,i);
				return 0;
                          }
			  int check (char a , char *b)
                          {
			     if (a < 'a' || a > 'z')
			     {
			       *b = '#';
			       return 0;
			     }
			     else
			     {
			       *b = '*';
			       return 1;
			     }
			  }

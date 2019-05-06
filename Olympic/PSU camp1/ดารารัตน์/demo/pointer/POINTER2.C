                        #include <stdio.h>
			void  swap (int , int);
			int  main()
			{
			    int   a , b ;
			    printf ("enter  number1 and number2 : ");
			    scanf ("%d %d", &a , &b);
			    swap (a , b);
			    printf ("number1  : %d  and number2  :  %d\n", a, b);
				return 0;
			  }
			  void swap (int x , int y)
			  {
			       int    temp;
			       temp =   x;
			       x     =   y;
			       y     =    temp;
			    }

                        #include <stdio.h>
                        #include<conio.h>
                        void  swap (int * , int *);
                        int  main()
                        {
                            int   a , b ;
                            printf ("enter  number1 and number2 : ");
			    scanf ("%d %d", &a , &b);
			    printf("&a = %d  &b = %d\n",&a,&b);
                            swap (&a , &b);
                            printf ("number1  : %d  and number2  :  %d\n", a, b);
                            getch();
                            return 0;
                          }
			  void swap (int *x , int *y)
                          {
                               int    temp;
                               temp =   *x;
                   printf("x = %d y= %d\n",x,y);
			       *x   =   *y;
			       *y   =    temp;
                            }

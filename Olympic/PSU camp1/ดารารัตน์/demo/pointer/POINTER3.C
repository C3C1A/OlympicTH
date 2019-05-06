                      #include <stdio.h>
                      int  array[10]  = {1, 3, 4, 5, 7, 9, 0, 8, 1, 6};
                      int  sum (int *data , int size);
                      int main()
                      {
                           printf ("sum of data in array =  %d\n", sum (array , 10));
						   return 0;
                       }
                       int  sum (int *data , int size)
                       {
                           int  sumall = 0;
                           int  j;
                           for (j = 0; j < size; j++)
                           {
                                sumall  +=  *data;
                                ++data;
                            }
                            return (sumall);
                        }

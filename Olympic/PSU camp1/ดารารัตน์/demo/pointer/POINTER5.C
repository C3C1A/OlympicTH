#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct   infor { int     id;
		         char    name[20];
	      } ;
struct infor *std;
typedef  struct infor  *data;
char dept[20] = "Computer Science";

#define  TRUE         1
#define  FALSE        0

int main()
{
  data   cust;
  if ((cust = (data) malloc(sizeof(data))) == (data) NULL)
	 return(FALSE);

  strcpy(cust->name,dept);
  printf("%s\n",(*cust).name);
  return 0;
}

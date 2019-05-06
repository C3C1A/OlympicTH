#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dept = "Computer Science";

int main()
{
int l;
  l = strlen(dept);
  printf("%s has %d characters\n",dept,l);
  printf("address of dept = %p\n",dept);
  return 0;
}

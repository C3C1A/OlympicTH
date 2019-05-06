#include <stdio.h>
#include <conio.h>

int main()
{
	int  a[3] = {40,60,80}, b=29, c, d, e, f;
	int  *px, *py;

	px  = &b;
	printf("\nb = %d  and *px = %d\n", b, *px);

	*px  = 0;
	c     = *px  + 1;
	printf("b = %d  and *px = %d  c = %d\n", b, *px, c);

	px = &a[0];
	printf("px = %d *px = %d\n",px,*px);
	d    = (*px)++;  // d = *px then increment *px
	printf("px = %d *px = %d d = %d\n",px,*px,d);
	e    = *px++;    // equivalence with  e = *px ; px++;
	printf("px = %d *px = %d e = %d\n",px,*px,e);
	f    = *(px++);  // f = *px then increment px
	printf("f = %d  px = %d\n", f,px);

	py   = px;
	printf("px = %d   *px = %d  *py = %d\n", px, *px, *py);
	getch();
	
return 0;
}

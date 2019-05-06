#include <stdio.h>
#include<math.h>
int main()
{
    float x[3],y[3],a=0,b=0,c=0;
    float s=0,area=0;
    FILE *ifp;

    ifp = fopen("answer.dat","w");
    scanf("%f%f%f%f%f%f",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);

    a = sqrt( pow((x[1]-x[0]),2) + pow((y[1]-y[0]),2) );
    b = sqrt( pow((x[2]-x[1]),2) + pow((y[2]-y[1]),2) );
    c = sqrt( pow((x[0]-x[2]),2) + pow((y[0]-y[2]),2) );
    s = (a+b+c) / 2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    fprintf(ifp,"Triangle 1 area = %.2f",area);

    fclose(ifp);

    return 0;
}

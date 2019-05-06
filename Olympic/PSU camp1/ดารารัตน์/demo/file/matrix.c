#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *infp;
    int a[10][10], n, i=0, j=0, x;
    if ((infp = fopen("d:/dararat/matrix.dat","r")) == NULL)
    {
        printf("Error opening file...\n");
        exit(-1);
    }
    fscanf (infp,"%d",&n);
    fscanf(infp,"%d",&x);
    while (!feof(infp))
    {
        a[i][j] = x;
        printf("%d ",a[i][j]);
        j++;
        fscanf(infp,"%d",&x);
        if (j >= n)
        {
           printf("\n");                  
           j = 0;
           i++;
        }
    }
    fclose(infp);
    getch();
    return 0;
}

    

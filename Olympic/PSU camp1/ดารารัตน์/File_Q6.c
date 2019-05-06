#include<stdio.h>
#include<math.h>

int main()
{
    FILE *fp;
    int weight,height;
    int i=0,n=0;
    float dmi[50],h;

    if  ((fp=fopen ("d:/Boy/file/data.dat", "r")) == NULL)
    {
		printf ("Error...cannot open file!!!\n");
        return 0;
    }
    else
    {
        fscanf(fp,"%d %d",&weight,&height);
        while  (!feof (fp) )
        {
            n++;
            printf("number #%d : %d %d\n", n, weight,height);
            h=height/100.0;
            dmi[i]= weight*1.0/pow(h,2)*1.0;
            printf("%.2f\n",dmi[i]);
            i++;
            fscanf(fp,"%d %d",&weight,&height);
        }
    }

    int a=0,b=0,c=0,d=0,e=0;
    for(i=0;i<n;i++)
    {
        if(dmi[i]<18.5)
            a++;
        else if(dmi[i]<25)
            b++;
        else if(dmi[i]<30)
            c++;
        else if(dmi[i]<40)
            d++;
        else
            e++;
    }

    printf("too fat = %d\n",e);
    printf("fat = %d\n",d);
    printf("nearly fat = %d\n",c);
    printf("slim = %d\n",b);
    printf("too slim = %d\n",a);

}

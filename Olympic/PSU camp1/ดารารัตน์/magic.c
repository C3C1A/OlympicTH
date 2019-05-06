#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main( )
{

    FILE *fp;
    int n,i,j;
    fp = fopen("input1.dat","r");
    fscanf(fp,"%d",&n);
    int num[n][n],sumi[n],sumj[n],sumol=0,sumor=0;

    //---Row
    for(i=0;i<n;i++){
        sumi[i]=0;
        for(j=0;j<n;j++){
            fscanf(fp,"%d\n",&num[i][j]);
            sumi[i] += num[i][j];
        }//printf("%d\n",sumi[i]);
    }

    //---Column
    for(i=0;i<n;i++){
        sumj[i]=0;
        for(j=0;j<n;j++){
            sumj[i] += num[j][i];
        }//printf("%d\n",sumj[i]);
    }

    //---Oblique*left->right
    for(i=0;i<n;i++){
        sumol += num[i][i];
    }//printf("%d\n",sumol);

    //---Oblique*right->left
    for(i=0,j=0;i<n;i++,j++){
        sumor += num[i][n-i-1];
    }//printf("%d\n",sumor);

    for(i=0;i<n-1;i++){
        if(sumi[i]==sumi[i+1]){
            if(sumi[i]==sumj[i]&&sumj[i]==sumj[i+1]){
                if(sumj[i]==sumol&&sumor);
            }
        }
        else{
            printf("No,not magic.\n");
            fclose(fp);
            return 0;
        }
    }
    printf("Yes,magic number = %d\n",sumor);

    fclose(fp);
	return 0;
}

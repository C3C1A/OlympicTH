#include <stdio.h>
#include<string.h>
#include<conio.h>

int main()
{

    int i,j,k,s=0,x=0,y=0,count,n,m,f[80],z[80];
    char word[80],re[80],str[80];
    int a=0,b=0,l;

    scanf("%d",&n);
    for(i=0; i<80; i++){
            z[i] = 0;
        }

    for(i=0; i<n; i++){
        scanf("%s",&word);
        s = strlen(word);

        for(m=0; m<80; m++){
            re[m] = '\0';
            str[m] = '\0';
        }

        count = 0;

        for(y=0; y<s; y++){
            if(s / 2 > 0){
                x = s/2;
                for(j=0,k=s-1; j<x,k>=x; j++,k--){
                    re[j] = word[k];
                    str[j] = word[j];
                }
                if(strcmp(re,str)==0){
                    count++;
                }
                s /= 2;
                if(count==0)    break;
            }
        }
        if(count>0) z[i] = count;
        else if(count==0)   z[i] = -1;
    }

    for(i=0; i<n; i++){
        if(z[i]!=-1) printf("%d\n",z[i]);
        else if(z[i]==-1)   printf("no\n");
    }

    return 0;

}

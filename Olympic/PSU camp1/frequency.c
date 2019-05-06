#include <stdio.h>
#include<string.h>
#include<conio.h>

int main(){

    int i,j,l=0,count=0,n[100],x[100],f;
    char word[100][1000];

    for(i=0;;i++){
        scanf("%s",&word[i]);
        l = strlen(word[i]) - 1;
        count++;
        x[i] = 1;
        for(j=0;j<i;j++){
            if(strcmp(word[i],word[j])==0){
                x[i] = x[j]+1;
            }
        }
        if(word[i][l] == '.') break;

    }
    printf("%d\n",count);

    for(i=0;i<count;i++){
        if(x[i]==2){
            printf("%s\n",word[i]);
            f = 1;
        }
    }
    if(f==0)    printf("Not Found\n");

    return 0;

}

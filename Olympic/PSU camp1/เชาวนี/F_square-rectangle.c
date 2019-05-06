#include <stdio.h>
void square();
void rectangle();
void main(){
    int menu;
    printf("1.Square\n2.Rectangle\nPlease choose number 1 or 2 : ");
    scanf("%d",&menu);
    switch(menu){
        case 1 : square();
                    break;
        case 2 : rectangle();
    }
}

void square(){
    int n,j,i;
    printf("Input width of square : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||i==n-1)    printf("* ");
            else{
                if(j==0||j==n-1)    printf("* ");
                else    printf("  ");
            }
        }
        printf("\n");
    }
}

void rectangle(){
    int col,rol,i,j;
    printf("Input roll : ");
    scanf("%d",&rol);
    printf("Input collumn : ");
    scanf("%d",&col);
    for(i=0;i<rol;i++){
        for(j=0;j<col;j++){
            if(i==0||i==rol-1)    printf("* ");
            else{
                if(j==0||j==col-1)    printf("* ");
                else    printf("  ");
            }
        }
        printf("\n");
    }
}

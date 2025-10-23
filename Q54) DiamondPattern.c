#include <stdio.h>
int main()
{
    int i,j,s;
    for(i=1;i<=4;i++){
        for(s=4;s>i;s--)printf(" ");
        for(j=1;j<=2*i-1;j++)printf("*");
        printf("\n");
    }
    for(i=3;i>=1;i--){
        for(s=4;s>i;s--)printf(" ");
        for(j=1;j<=2*i-1;j++)printf("*");
        printf("\n");
    }
}

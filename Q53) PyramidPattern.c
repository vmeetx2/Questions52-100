#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=2*i-1;j++)printf("*");
        printf("\n");
    }
    for(i=4;i>=1;i--){
        for(j=1;j<=2*i-1;j++)printf("*");
        printf("\n");
    }
}


🔄
Q53 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

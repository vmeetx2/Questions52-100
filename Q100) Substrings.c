#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,j,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++){
        for(j=i;j<l;j++){
            for(int k=i;k<=j;k++)printf("%c",s[k]);
            printf("\n");
        }
    }
}

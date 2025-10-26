#include <stdio.h>
int main()
{
    char s[1000];
    int i,c=0;
    scanf("%[^\n]",s);
    for(i=0;s[i];i++)c++;
    printf("%d",c);
}

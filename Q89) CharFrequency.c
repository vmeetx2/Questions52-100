#include <stdio.h>
int main()
{
    char s[1000],x;
    int i,f=0;
    scanf("%[^\n]",s);
    getchar();
    scanf("%c",&x);
    for(i=0;s[i];i++)if(s[i]==x)f++;
    printf("%d",f);
}

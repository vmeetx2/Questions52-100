#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    scanf("%[^\n]",s);
    for(i=0;s[i];i++)if(s[i]==' ')s[i]='-';
    printf("%s",s);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i;
    scanf("%[^\n]",s);
    printf("%c",s[0]);
    for(i=0;s[i];i++)if(s[i]==' '&&s[i+1])printf("%c",s[i+1]);
}

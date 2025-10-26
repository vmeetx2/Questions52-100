#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    scanf("%[^\n]",s);
    for(i=0;s[i];i++)printf("%c\n",s[i]);
}

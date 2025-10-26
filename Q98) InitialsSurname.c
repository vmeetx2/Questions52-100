#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,last=0;
    scanf("%[^\n]",s);
    printf("%c. ",s[0]);
    for(i=0;s[i];i++)if(s[i]==' '){last=i;}
    for(i=last+1;s[i];i++)printf("%c",s[i]);
}

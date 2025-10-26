#include <stdio.h>
int main()
{
    char s[1000];
    int i,j=0;
    char t[1000];
    scanf("%[^\n]",s);
    for(i=0;s[i];i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')t[j++]=s[i];
    }
    t[j]='\0';
    printf("%s",t);
}

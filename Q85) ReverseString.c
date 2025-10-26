#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,j;
    scanf("%[^\n]",s);
    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        char t=s[i];s[i]=s[j];s[j]=t;
    }
    printf("%s",s);
}

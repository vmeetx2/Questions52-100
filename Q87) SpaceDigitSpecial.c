#include <stdio.h>
int main()
{
    char s[1000];
    int i,sp=0,d=0,sc=0;
    scanf("%[^\n]",s);
    for(i=0;s[i];i++){
        if(s[i]==' ')sp++;
        else if(s[i]>='0'&&s[i]<='9')d++;
        else sc++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d",sp,d,sc);
}

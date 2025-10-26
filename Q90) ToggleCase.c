#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    scanf("%[^\n]",s);
    for(i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z')s[i]-=32;
        else if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
    }
    printf("%s",s);
}

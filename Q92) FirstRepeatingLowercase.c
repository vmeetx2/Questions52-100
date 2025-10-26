#include <stdio.h>
int main()
{
    char s[1000];
    int i,f[26]={0};
    scanf("%[^\n]",s);
    for(i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z'){
            f[s[i]-'a']++;
            if(f[s[i]-'a']==2){printf("%c",s[i]);return 0;}
        }
    }
    printf("-1");
}

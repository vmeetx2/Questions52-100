#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],w[1000],longest[1000];
    int i,j=0,maxlen=0,len;
    scanf("%[^\n]",s);
    s[strlen(s)]=' ';
    for(i=0;i<=strlen(s);i++){
        if(s[i]!=' '){w[j++]=s[i];}
        else{
            w[j]='\0';j=0;
            len=strlen(w);
if(len>maxlen){maxlen=len;strcpy(longest,w);}
 }
 }
    printf("%s",longest);
}

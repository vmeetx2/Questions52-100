#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],w[1000];
    int i,j=0;
    scanf("%[^\n]",s);
    s[strlen(s)]=' ';
    for(i=0;i<=strlen(s);i++){
        if(s[i]!=' '){w[j++]=s[i];}
        else{
            w[j]='\0';j=0;
            for(int k=strlen(w)-1;k>=0;k--)printf("%c",w[k]);
            printf(" ");
        }
    }
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,f=1,n;
    scanf("%[^\n]",s);
    n=strlen(s);
  //traversing the string similar to how in class once

    for(i=0;i<n/2;i++)if(s[i]!=s[n-1-i])f=0;
    printf(f?"Yes":"No");
}

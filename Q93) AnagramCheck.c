#include <stdio.h>
int main()
{
    char a[1000],b[1000];
    int f1[26]={0},f2[26]={0},i;
    scanf("%s %s",a,b);
    for(i=0;a[i];i++)f1[a[i]-'a']++;
    for(i=0;b[i];i++)f2[b[i]-'a']++;
    for(i=0;i<26;i++)if(f1[i]!=f2[i]){printf("No");return 0;}
    printf("Yes");
}

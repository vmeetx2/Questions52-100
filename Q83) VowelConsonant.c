#include <stdio.h>
int main()
{
    char s[1000];
    int i,v=0,c=0;
    scanf("%[^\n]",s);
    for(i=0;s[i];i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')v++;
            else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d",v,c);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000],temp[2000];
    scanf("%s %s",a,b);
    strcpy(temp,a);strcat(temp,a);
    if(strstr(temp,b))printf("Yes");
    else printf("No");
}


//a bit non intuitive logic, but a+a contains string, so thats our solution, but edge cases where strlen varies will have to be more complex but, problem statement was very simple

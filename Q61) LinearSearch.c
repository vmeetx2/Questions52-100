#include <stdio.h>
int main()
{
    int n,i,a[100],x,f=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)if(a[i]==x)f=i;
    if(f!=-1)printf("Found at index %d",f);
    else printf("-1");
}


//linear search, edge case result = -1

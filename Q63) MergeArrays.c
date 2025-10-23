#include <stdio.h>
int main()
{
    int n,m,i,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)scanf("%d",&b[i]);
    for(i=0;i<n;i++)printf("%d ",a[i]);
    for(i=0;i<m;i++)printf("%d ",b[i]);
}

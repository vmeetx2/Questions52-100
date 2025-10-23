#include <stdio.h>
int main()
{
    int n,i,a[100],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&p);
    for(i=p;i<n-1;i++)a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++)printf("%d ",a[i]);
}

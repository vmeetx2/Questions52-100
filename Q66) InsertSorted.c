#include <stdio.h>
int main()
{
    int n,i,a[100],x,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n&&a[i]<x;i++);
    for(j=n;j>i;j--)a[j]=a[j-1];
    a[i]=x;
    n++;
    for(i=0;i<n;i++)printf("%d ",a[i]);
}

//qu) insert element in sorted array

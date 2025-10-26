#include <stdio.h>
int main()
{
    int n,i,k,a[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    k=k%n;
    for(i=0;i<k;i++){
        t=a[n-1];
        for(int j=n-1;j>0;j--)a[j]=a[j-1];
        a[0]=t;
    }
    for(i=0;i<n;i++)printf("%d ",a[i]);
}

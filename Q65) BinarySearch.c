#include <stdio.h>
int main()
{
    int n,i,a[100],x,l=0,r,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    r=n-1;
    while(l<=r){
        m=(l+r)/2;
        if(a[m]==x){printf("Found at index %d",m);return 0;}
        if(a[m]<x)l=m+1;else r=m-1;
    }
    printf("-1");
}

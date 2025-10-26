#include <stdio.h>
int main()
{
    int n,i,a[100],max=-2147483648,smax=-2147483648;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]>max){smax=max;max=a[i];}
        else if(a[i]>smax&&a[i]<max)smax=a[i];
    }
    printf("%d",smax);
}

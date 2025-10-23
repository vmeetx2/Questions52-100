#include <stdio.h>
int main()
{
    long long n;
    int d[10]={0},x,i,m=0,ans=0;
    scanf("%lld",&n);
    while(n){
        x=n%10;
        d[x]++;
        n/=10;
    }
    for(i=0;i<10;i++)if(d[i]>m){m=d[i];ans=i;}
    printf("%d",ans);
}

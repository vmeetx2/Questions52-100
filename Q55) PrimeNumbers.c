#include <stdio.h>
int main()
{
    int n,i,j,flag;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        flag=1;
        for(j=2;j*j<=i;j++)
            if(i%j==0)flag=0;
        if(flag)printf("%d ",i);
    }
}

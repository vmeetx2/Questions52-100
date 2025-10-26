#include <stdio.h>
int main()
{
    int n,i,j,a[100][100],f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)for(j=0;j<n;j++)if(a[i][j]!=a[j][i])f=0;
    printf(f?"Yes":"No");
}

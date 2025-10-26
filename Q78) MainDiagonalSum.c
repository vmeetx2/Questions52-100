#include <stdio.h>
int main()
{
    int n,i,j,a[100][100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)s+=a[i][i];
    printf("%d",s);
}

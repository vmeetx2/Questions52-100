#include <stdio.h>
int main()
{
    int n,i,j,a[100][100],d[100]={0},f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)if(a[i][i]==a[j][j])f=0;
    }
    printf(f?"Yes":"No");
}

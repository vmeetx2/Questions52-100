#include <stdio.h>
int main()
{
    int r,c,i,j,a[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(i=0;i<r+c-1;i++){
        for(j=0;j<=i;j++){
            if(j<r && i-j<c)printf("%d ",a[j][i-j]);
        }
    }
}

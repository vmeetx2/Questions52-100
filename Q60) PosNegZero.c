#include <stdio.h>
int main()
{
    int n,i,a[100],p=0,ne=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0)p++;
        else if(a[i]<0)ne++;
        else z++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d",p,ne,z);
}

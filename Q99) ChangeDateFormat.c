#include <stdio.h>
int main()
{
    char d[3],m[3],y[5],mon[13][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int month;
    scanf("%2s/%2s/%4s",d,m,y);
    sscanf(m,"%d",&month);
    printf("%s-%s-%s",d,mon[month-1],y);
}

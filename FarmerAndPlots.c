#include<stdio.h>
int gcd(int a,int b)
{
    while(a)
    {
        b=b%a;
        b^=a^=b^=a;
    }
    return b;
}
int main(void)
{
    int t,b,l,div;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&l,&b);
        div=gcd(l,b);
        printf("%d\n",(l/div)*(b/div));
    }
    return 0;
}

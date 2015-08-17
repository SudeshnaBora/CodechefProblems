#include<stdio.h>
int main(void)
{
    int t,n,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        r=0;
        while(n)
        {
            r=r*10+n%10;
            n=n/10;
        }
        printf("%d\n",r);
    }
}

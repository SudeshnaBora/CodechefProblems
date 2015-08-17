#include<stdio.h>
int main(void)
{
    int t,n,f,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        f=1;
        for(i=1;i<=n;i++)
        {
            f*=i;
        }
        printf("%d\n",f);
    }
    return 0;
}

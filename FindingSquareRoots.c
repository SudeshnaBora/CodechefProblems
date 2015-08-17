#include<stdio.h>
int main(void)
{
    int t,n,i,num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        i=1;
        while(i<=n)
        {
          if (i*i<=n)
                num=i;
          i++;
        }
        printf("%d\n",num);
    }
    return 0;
}

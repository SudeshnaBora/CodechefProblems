#include<stdio.h>
int main(void)
{
    int t,n,i,j,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            count=1;
            if(a[i]!=-1)
            {
               for(j=i+1;j<n;j++)
                {
                  if(a[i]==a[j])
                     {
                      count++;
                      a[j]=-1;
                     }
                }
               if(count!=2)
                {
                  printf("%d\n",a[i]);
                  a[i]=-1;
                 }
               }
          }
    }
    return 0;
}

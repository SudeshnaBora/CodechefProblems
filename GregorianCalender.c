#include<stdio.h>
int main(void)
{
    int t,yr,temp,count;
     const char* weekdays[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&yr);
        temp=2001;
        count=0;
        if(2001<yr)
        {
          while(temp<yr)
          {
              if((temp%4==0 &&temp%100!=0)||temp%400==0)
                count=count+2;
              else
                count++;
              temp++;
          }
          printf("%s\n",weekdays[count%7]);
        }
        else
        {
            while(temp>yr)
          {
              if((temp%4==0 &&temp%100!=0)||temp%400==0)
                count=count+2;
              else
                count++;
              temp--;
          }
          printf("%s\n",weekdays[(7-(count%7))%7]);
        }
    }
    return 0;
}

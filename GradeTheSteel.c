#include<stdio.h>
int main(void)
{
    int t,hard,ten,c=0;
    float carbon;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%g%d",&hard,&carbon,&ten);
        if(hard>50 && carbon<0.7 && ten>5600)
            printf("10\n");
        else if(hard>50 && carbon<0.7)
                printf("9\n");
            else if(carbon<0.7 && ten>5600)
                    printf("8\n");
                 else if(hard>50 && ten>5600)
                        printf("7\n");
                      else if(hard>50 || carbon<0.7 || ten>5600)
                              printf("6\n");
                           else
                              printf("5\n");
    }
    return 0;
}

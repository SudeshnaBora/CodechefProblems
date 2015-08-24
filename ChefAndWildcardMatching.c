#include<stdio.h>
int TestCases;
int main(void)
{
    int Index1,Flag,Length;
    char String1[11],String2[11];
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%s",String1);
        scanf("%s",String2);
        Index1=Flag=0;
        for(Length=0;String1[Length];Length++);
        while(Index1<Length)
        {
            if(String1[Index1]==String2[Index1])
            {
               Index1++;
            }
            else if((String1[Index1]=='?' && String2[Index1]!='?')||(String1[Index1]!='?' && String2[Index1]=='?'))
                {
                    Index1++;
                }
            else if(String1[Index1]!=String2[Index1])
            {
                printf("No\n");
                Flag=1;
                break;
            }
        }
        if(Flag==0)
            printf("Yes\n");
    }
    return 0;
}

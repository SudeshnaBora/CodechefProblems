#include<stdio.h>
int TestCases;
int main(void)
{
    int Max,Index,Length,Min;
    char String1[101],String2[101];
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%s",String1);
        scanf("%s",String2);
        for(Length=0;String1[Length];Length++);
        Index=Max=Min=0;
        while(Index<Length)
        {
            if((String1[Index]!=String2[Index])&&(String1[Index]!='?')&&String2[Index]!='?')
            {
                Index++;
                Min++;
                Max++;
            }
            else if(String1[Index]=='?' && String2[Index]=='?')
            {
                Index++;
                Max++;
            }
            else if((String1[Index]=='?' && String2[Index]!='?')||(String1[Index]!='?' && String2[Index]=='?'))
            {
                Index++;
                Max++;
            }
            else if(String1[Index]==String2[Index])
            {
                Index++;
            }
        }
        printf("%d %d\n",Min,Max);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(void)
{
    int TestCases,Number,Index,Counter;
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        Counter=0;
        scanf("%d",&Number);
        for(Index=2;Index<Number/2;Index++)
        {
            if(Number%Index==0)
                {
                    Counter++;
                }
        }
        if(Counter==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

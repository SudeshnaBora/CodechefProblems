/*
The catch in this code was - Person was upper limit.
We can have any number of person ranging from 1 to Person , but it should have maximum remainder
*/
#include<stdio.h>
int main(void)
{
    int TestCases, Coins, Person,RemainderCoins,TempDivisor;
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%d%d",&Coins,&Person);
        RemainderCoins = 0;
        TempDivisor=2;
        while(TempDivisor<=Person)
        {
            if(RemainderCoins<(Coins%TempDivisor))
            {
                RemainderCoins = Coins%TempDivisor;
            }
            TempDivisor++;
        }
       printf("%d\n",RemainderCoins);
    }
    return 0;
}

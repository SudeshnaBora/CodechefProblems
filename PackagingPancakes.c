/*
This was a tricky question for me.
I tried applying the logic of "GREEDY PUPPY" but time limit exceeded.
Since, the motive of this problem was to find the highest number of packages which will lead to maximum remainders.
So, we just need to find the divisor which gives the highest remainder.
This can be done by adding 1 to N/2 as N/2 leaves 0 remainder, so N/2+1 will leave the highest remainder.

*/
#include<stdio.h>
int main(void)
{
    int TestCases,NumCupcakes;
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%d",&NumCupcakes);
        printf("%d\n",NumCupcakes/2+1);
    }
    return 0;
}

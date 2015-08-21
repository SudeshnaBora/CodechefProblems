#include<stdio.h>
int gcd(int a,int b)
{
    while(a)
    {
        b=b%a;
        b^=a^=b^=a;
    }
        return b;
}
int main(void)
{
    int TestCases,NumIngredients,Index,Divisor;
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%d",&NumIngredients);
        int Ingredient[NumIngredients];
        for(Index=0;Index<NumIngredients;Index++)
            scanf("%d",&Ingredient[Index]);
        Divisor = gcd(Ingredient[0],Ingredient[1]);
        for(Index=2;Index<NumIngredients;Index++)
            Divisor=gcd(Divisor,Ingredient[Index]);
        for(Index=0;Index<NumIngredients;Index++)
            printf("%d ",Ingredient[Index]/Divisor);
        printf("\n");
    }
    return 0;
}

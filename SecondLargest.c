/*To find the second largest among 3 numbers.
  I have used selection sort and then printed the second element
  Another amazing code I found is:-
   d = (a > b)?((a < c)?a:(b > c)?b:c):((a > c)? a:(b > c)?c:b) ;
    */
#include<stdio.h>
int main(void)
{
    int TestCases,Num[3],IndexOuter,IndexInner,SwapTemp;
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%d%d%d",&Num[0],&Num[1],&Num[2]);
        for(IndexOuter=0;IndexOuter<3;IndexOuter++)
        {
            SwapTemp=0;
            for(IndexInner=IndexOuter+1;IndexInner<3;IndexInner++)
            {
                if(Num[IndexOuter]>Num[IndexInner])
                    {
                        SwapTemp=Num[IndexOuter];
                        Num[IndexOuter]=Num[IndexInner];
                        Num[IndexInner]=SwapTemp;
                    }
            }
        }
        printf("%d\n",Num[1]);
    }
    return 0;
}

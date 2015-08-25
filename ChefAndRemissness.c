#include<stdio.h>
int main(void)
{
    int TestCases,Guard1,Guard2;
    scanf("%d",&TestCases);
    while(TestCases--)
    {
        scanf("%d%d",&Guard1,&Guard2);
        printf("%d %d\n",(Guard1>=Guard2)?Guard1:Guard2,Guard1+Guard2);
    }
    return 0;
}

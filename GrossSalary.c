#include<stdio.h>
int main(void)
{
    int t,Salary;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&Salary);
        if(Salary>=1500)
            printf("%g\n",Salary+500+.98*Salary);
        else
            printf("%g\n",Salary+.1*Salary+.9*Salary);
    }
    return 0;
}

#include<stdio.h>
int main(void)
{
    int Rounds,Player1,Player2,Lead1,Lead2,Lead,Win;
    scanf("%d",&Rounds);
    Lead=Lead1=Lead2=0;
    while(Rounds--)
    {
        scanf("%d%d",&Player1,&Player2);
        Lead1+=Player1;
        Lead2+=Player2;
        if(Lead1>Lead2 && (Lead1-Lead2)>Lead)
        {
            Lead = Lead1-Lead2;
            Win = 1;
        }
        else if(Lead2>Lead1 && (Lead2-Lead1)>Lead)
        {
            Lead =Lead2 - Lead1;
            Win = 2;
        }
    }
    printf("%d %d\n",Win,Lead);
    return 0;
}

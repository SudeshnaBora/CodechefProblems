#include<stdio.h>
int main()
{
    int x;float y;
    scanf("%d %f",&x,&y);
    if(x%5 == 0 && x<(y-0.50))
        printf("%.2f",y-x-0.50);
    else
       printf("%.2f",y);
    return 0;
}

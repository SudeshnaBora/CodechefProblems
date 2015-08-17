#include<stdio.h>
char stack[200];
int t,index=0;
void push(char c)
{
    stack[index]=c;
    index++;
}
char pop()
{
    if(index==0)
        return -1;
    else
    {
        index--;
        return stack[index];
    }
}
int main(void)
{
    int i;
    char exp[400];
    scanf("%d",&t);
    while(t--)
    {
        index=0;
        i=0;
        exp[0]='\0';
        scanf("%s",exp);
        while(exp[i]!='\0')
        {
            if(exp[i]=='(')
            {
                i++;
            }
            else if(isalnum(exp[i]))
                   {
                     printf("%c",exp[i]);
                     i++;
                    }
                  else if(exp[i]==')')
                         {
                           printf("%c",pop());
                           i++;
                          }
                        else
                           {
                            push(exp[i]);
                            i++;
                           }
         }
         printf("\n");
    }
    return 0;
}

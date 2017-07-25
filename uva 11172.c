///Relational Operator
#include<stdio.h>

int main()
{
    int a,b,i,tc;

    scanf("%d",&tc);

    for(i = 0;i<tc;i++)
    {
        scanf("%d%d",&a,&b);

        if(a == b)
        {
            printf("=\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
        else
        {
            printf("<\n");
        }
    }
}

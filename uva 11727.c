///Cost Cutting

#include<stdio.h>

int main()
{
    int a,b,c,i,tc,casesno=0;

    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if((a > b && a < c)||(c < a && a < b))
        {
            printf("Case %d: %d\n",++casesno,a);
        }
        else if ((b > a && b < c)||(a > b && c < b))
        {
            printf("Case %d: %d\n",++casesno,b);
        }
        else if((c > a && c < b)||(a > c && b < c))
        {
            printf("Case %d: %d\n",++casesno,c);
        }

    }
    return 0;
}

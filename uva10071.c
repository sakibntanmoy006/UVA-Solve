#include<stdio.h>

int main()
{
    int a,b,c;

    while(scanf("%d %d",&a,&b)==2)
    {
        if((a>=-100)&&(a<=100)&&(b>=0)&&(b<=200))
        {
        printf("%d\n",2*a*b);
        }
    }
    return 0;
}

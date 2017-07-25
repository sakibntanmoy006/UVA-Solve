#include<stdio.h>

int main()
{
    char a[10];

    int i = 0;

    while(scanf("%s",&a))
    {
            if(a == '*')
            {
                break;
            }
            if(a == "Hajj")
            {
                printf("Case %d: Hajj-e-Akbar\n",++i);
            }
            if(a=="Umrah")
            {
                printf("Case %d: Hajj-e-Asghar\n",++i);
            }
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string line;

    while(getline(cin,line))
    {
        for(long long int i = 0; line[i]!='\0';i++)
        {
            printf("%c",line[i]-7);
        }
        printf("\n");
    }
    return 0;
}

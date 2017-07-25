#include<iostream>
#include<string>

using namespace std;

int main()
{
    int count = 0;
    string a;
    while(getline(cin,a))
    {
        int i = a.size();
        for(int j = 0; j<i; j++)
        {
            if((a[j] >= 65 && a[j] <= 90) || (a[j] >= 97 && a[j] <= 122))
            {
                if((a[j+1] >= 0 && a[j+1]<= 64) || (a[j+1] >= 91 && a[j+1] <= 96) || (a[j+1] >= 123 && a[j+1] <= 255) )
                {
                    count++;
                }
            }

        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}

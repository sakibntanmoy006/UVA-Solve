#include<iostream>

using namespace std;

int main()
{
    string a;
    int i = 0;

    while(cin >> a)
    {
        if(a == "Hajj")
        {
            cout << "Case " << ++i << ": " << "Hajj-e-Akbar"<<endl;
        }
        else if(a == "Umrah")
        {
            cout << "Case " << ++i << ": "  << "Hajj-e-Asghar"<<endl;
        }
        else if(a == "*")
        {
            break;
        }
    }
    return 0;
}

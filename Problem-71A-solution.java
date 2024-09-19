#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str.size() > 10)
        {
            int count = str.size() - 2;
            cout << str.at(0) + to_string(count) + str.at(str.size() - 1)<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;  
        transform(str.begin(), str.end(), str.begin(), ::tolower);
 
        if (str == "++x")
        {
            ++value;
        }
        else if (str == "x++")
        {
            value++;
        }
        else if (str == "--x")
        {
            --value;
        }
        else if (str == "x--")
        {
            value--;
        }
    }
    cout << value << endl;
    return 0;
}

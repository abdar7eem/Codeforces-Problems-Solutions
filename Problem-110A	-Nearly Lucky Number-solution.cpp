#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int k = n % 10;
        if (k == 4 || k == 7)
        {
            count++;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

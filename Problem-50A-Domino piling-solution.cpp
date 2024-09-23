#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int m, n;
    cin >> m >> n;
    if (m >= 1 && n >= 1 && m <= 16 && n <= 16)
    {
        int res = (m * n) / 2;
        cout << res << endl;
    }
    return 0;
}

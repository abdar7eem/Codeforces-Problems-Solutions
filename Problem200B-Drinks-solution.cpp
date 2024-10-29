#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double count = 0;
    if (n > 0 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            double k;
            cin >> k;
            if (k >= 0 && k <= 100)
            {
                count += (k / 100);
            }
        }
 
        cout << (count / n) * 100 << endl;
    }
    return 0;
}

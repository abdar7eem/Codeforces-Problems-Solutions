#include <iostream>
using namespace std;
 
int main()
{
    int n, h;
    cin >> n >> h;
    int count = 0;
    if (n <= 1000 && h <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            if (w <= h)
            {
                count += 1;
            }
            if (w > h)
            {
                count += 2;
            }
        }
        cout << count << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        if (p >= 0 && p <= q && q <= 100)
        {
            if (q - p >= 2)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

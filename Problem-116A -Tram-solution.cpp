#include <iostream>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 0;
    int pas_num = 0;
    if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (pas_num-a>=0)
            {
                pas_num -= a;
            }
            pas_num += b;
            if (pas_num > max)
            {
                max = pas_num;
            }
        }
        cout << max << endl;
    }
    return 0;
}

#include <iostream>
 
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int price = 0;
    int borrow = 0;
    if (w <= 1000)
    {
        for (int i = 1; i <= w; i++)
        {
            price += k * i;
        }
        if (price >= n)
        {
            borrow = price - n;
            cout << borrow;
        }
        else
        {
            cout << 0;
        }
    }
 
    return 0;
}

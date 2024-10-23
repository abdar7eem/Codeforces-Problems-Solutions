#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool state = true;
    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 1)
            {
                state = false;
            }
        }
 
        if (state)
        {
            cout << "EASY" << endl;
        }
        else
        {
            cout << "HARD" << endl;
        }
    }
    return 0;
}

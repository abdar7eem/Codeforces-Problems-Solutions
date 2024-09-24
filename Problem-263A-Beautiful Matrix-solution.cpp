#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int steps = 0;
    bool state = false;
    for (int i = 0; i < 5; i++)
    {
        vector<int> v;
 
        for (int j = 0; j < 5; j++)
        {
            int n;
            cin >> n;
            if (n == 0)
            {
                v.push_back(0);
            }
            else if (n == 1)
            {
                v.push_back(1);
                steps += abs(2 - i);
                steps += abs(2 - j);
                state = true;
            }
        }
        if (state == true)
        {
            break;
        }
    }
    cout << steps;
    return 0;
}

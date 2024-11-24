#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v = {100, 20, 10, 5, 1};
    int count = 0;
    while (n >0)
    {
        for (int i = 0; i < v.size(); i++)
        {
 
            if (n >= v.at(i))
            {
                n -= v.at(i);
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}

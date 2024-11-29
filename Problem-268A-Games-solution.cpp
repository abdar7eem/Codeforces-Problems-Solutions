#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n;
    cin >> n;
    int count = 0;
    if (n >= 2 && n <= 30)
    {
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v1.push_back(a);
            v2.push_back(b);
        }
 
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v1.size(); j++)
            {
                if (v1.at(i) == v2.at(j))
                {
                    count++;
                }
            }
        }
    }
    cout << count << " ";
    return 0;
}

#include <iostream>
#include <set>
#include <string>
 
using namespace std;
 
int main()
{
    int y;
    cin >> y;
    if (y >= 1000 && y <= 9000)
    {
        while (true)
        {
            y++;
            string yearStr = to_string(y);
            set<char> digits;
 
            for (int i = 0; i < yearStr.size(); i++)
            {
                digits.insert(yearStr.at(i));
            }
 
            if (yearStr.size() == digits.size())
            {
                cout << yearStr << endl;
                break;
            }
        }
    }
    return 0;
}

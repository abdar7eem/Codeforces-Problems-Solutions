#include <iostream>
#include <string>
#include <set>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    set<char> st;
    if (str.size() <= 100)
    {
        for (int i = 0; i < str.size(); i++)
        {
            st.insert(str.at(i));
        }
        if (st.size() % 2 == 0)
        {
            cout << "CHAT WITH HER!" << endl;
        }
        else
        {
            cout << "IGNORE HIM!" << endl;
        }
    }
    return 0;
}

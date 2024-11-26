#include <iostream>
#include <string>
#include <set>
using namespace std;
 
int main()
{
    string str;
    getline(cin, str);
    set<char> st;
    str.shrink_to_fit();
    for (int i = 0; i < str.size(); i++)
    {
        if (str.at(i) >= 97 && str.at(i) <= 122)
        {
 
            st.insert(str.at(i));
        }
    }
    cout<<st.size()<<endl;
    return 0;
}

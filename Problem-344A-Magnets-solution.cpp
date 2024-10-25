#include <iostream>
#include <string>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    string temp;
    cin >> temp;
    for (int i = 1; i < n; i++)
    {
        string str;
        cin>>str;
 
        if(str !=temp){
            count++;
            temp=str;
        }
    }
    cout<<count<<endl;
    return 0;
}

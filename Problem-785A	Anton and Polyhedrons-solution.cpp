#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        if(str =="Tetrahedron"){
            count+=4;
        }
        if(str =="Cube"){
            count+=6;
        }
        if(str =="Octahedron"){
            count+=8;
        }
        if(str =="Dodecahedron"){
            count+=12;
        }
        if(str =="Icosahedron"){
            count+=20;
        }
    }
    cout<<count;
    return 0;
}

#include <iostream>
 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if((x==0 || x==1) && (y==0 || y==1) && (z==0 || z==1)){
            if((x+y+z)>=2){
                count+=1;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}

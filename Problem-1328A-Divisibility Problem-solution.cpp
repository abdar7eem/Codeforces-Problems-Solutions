#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int k, w;
        cin >> k >> w;
        int remainder = k % w;
        if (remainder == 0) {
            cout << 0 << endl;
        } else {
            cout << w - remainder << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    set<int> st;
    int x, y;
    cin >> x;
    bool state = true;
 
    if (n > 0 && n <= 100) {
        for (int i = 0; i < x; i++) {
            int k;
            cin >> k;
            st.insert(k);
        }
        cin >> y;
        for (int i = 0; i < y; i++) {
            int k;
            cin >> k;
            st.insert(k);
        }
        for (int i = 1; i <= n; i++) {
            if (st.find(i) == st.end()) {
                state = false;
                break;
            }
        }
    } else {
        state = false;
    }
 
    if (state) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}

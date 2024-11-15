#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
 
    int max_pos = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i] > v[max_pos]) {
            max_pos = i;
        }
    }
 
    int min_pos = n - 1;
    for (int i = n - 2; i >= 0; --i) {
        if (v[i] < v[min_pos]) {
            min_pos = i;
        }
    }
 
    int swaps = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) {
        swaps -= 1;
    }
 
    cout << swaps << endl;
 
    return 0;
}

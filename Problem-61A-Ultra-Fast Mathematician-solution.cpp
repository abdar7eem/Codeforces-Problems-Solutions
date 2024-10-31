#include <iostream>
#include <string>
using namespace std;
int main() {
    string num1, num2;
    cin >> num1 >> num2;
 
    string result;
 
    for (size_t i = 0; i < num1.length(); ++i) {
        if (num1[i] != num2[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }
 
    std::cout << result << std::endl;
 
    return 0;
}

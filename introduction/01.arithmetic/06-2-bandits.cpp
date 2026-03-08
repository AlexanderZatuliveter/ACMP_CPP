#include <iostream>
using namespace std;

int main() {
    short num1, num2;
    cin >> num1 >> num2;
    cout << (num1 + num2) - 1 - num1 << ' ' << (num1 + num2) - 1 - num2;
    return 0;
}
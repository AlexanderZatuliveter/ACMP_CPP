#include <iostream>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    int num0 = 0;
    int num1 = 0;
    for (int i = 0; i < sum; i++) {
        int num;
        cin >> num;
        if (num == 0)
            num0 += 1;
        if (num == 1)
            num1 += 1;
    }
    if (num0 <= num1)
        cout << num0;
    else
        cout << num1;
    return 0;
}

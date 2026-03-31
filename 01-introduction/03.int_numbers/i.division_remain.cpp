#include <iostream>
#include <cmath>
using namespace std;

string fn(long long num1, long long num2)
{
    long long res = 0;
    res = num1 % num2;
    if (res < 0)
        res += abs(num2);
    return to_string(res);
}

int main1() {
    long long num1, num2;
    cin >> num1 >> num2;
    cout << fn(num1, num2);
    return 0;
}

void expect(string actual, string expected, string test_name = "") {
    if (actual == expected) {
        cout << "[OK] " << test_name << endl;
    } else {
        cout << "[FAIL] " << test_name << endl;
        cout << "   Expected: \"" << expected << "\"" << endl;
        cout << "   Got:      \"" << actual << "\"" << endl;
    }
}

int main() {
    // INPUT.TXT -> OUTPUT.TXT 
    expect(fn(27, 4), "3");
    expect(fn(-15, 4), "1");
    expect(fn(113, -3), "2");
    expect(fn(-15, -7), "6");
    return 0;
}

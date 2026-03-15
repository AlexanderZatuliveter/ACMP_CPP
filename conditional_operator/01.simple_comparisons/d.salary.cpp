#include <iostream>
using namespace std;

string fn(int num1, int num2, int num3)
{
    int res = 0;
    int maximum = max(num1, max(num2, num3));
    int minimum = min(num1, min(num2, num3));
    return to_string(maximum - minimum);
}

int main1() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << fn(num1, num2, num3);
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
    expect(fn(100, 500, 1000), "900");
    expect(fn(36, 11, 20), "25");
    return 0;
}

#include <iostream>
using namespace std;

string fn(int num1, int num2)
{
    if (num1 % num2 == 0 || num2 % num1 == 0)
        return "1";
    else
        return "67";
}

int main1() {
    int num1, num2;
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
    expect(fn(3, 6), "1");
    expect(fn(6, 3), "1");
    expect(fn(5, 7), "67");
    return 0;
}

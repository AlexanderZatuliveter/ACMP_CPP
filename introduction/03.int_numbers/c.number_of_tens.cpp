#include <iostream>
using namespace std;

string fn(int number)
{
    int res = (number / 10) % 10;
    return to_string(res);
}

int main1() {
    int number;
    cin >> number;
    cout << fn(number);
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
    expect(fn(123), "2");
    expect(fn(46), "4");
    expect(fn(532), "3");
    expect(fn(1692), "9");
    return 0;
}

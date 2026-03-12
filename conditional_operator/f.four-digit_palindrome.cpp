#include <iostream>
using namespace std;

string fn(string number)
{
    int a = number[0];
    int b = number[1];
    int c = number[2];
    int d = number[3];

    return (a == d && b == c) ? "YES" : "NO";
}

int main1() {
    string number;
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
    expect(fn("6116"), "YES");
    expect(fn("1231"), "NO");
    return 0;
}

#include <iostream>
using namespace std;

string fn(int sum, int prod)
{
    return "0";
}

int main1() {
    int sum, prod;
    cin >> sum >> prod;
    cout << fn(sum, prod);
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
    expect(fn(123), "6");
    expect(fn(999), "27");
    expect(fn(154), "10");
    expect(fn(0), "0");
    return 0;
}

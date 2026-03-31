#include <iostream>
using namespace std;

string fn(int number)
{
    int part = number / 6;
    int katya = part * 4;
    return to_string(part) + ' ' + to_string(katya) + ' ' + to_string(part);
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
    expect(fn(6), "1 4 1");
    expect(fn(24), "4 16 4");
    expect(fn(60), "10 40 10");
    return 0;
}

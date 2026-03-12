#include <iostream>
using namespace std;

string fn(int number)
{
    if (number <= 1) return "0";
    return (number % 2 == 0) ? to_string(number / 2) : to_string(number) ;
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
    expect(fn(0), "0");
    expect(fn(1), "0");
    expect(fn(2), "1");
    expect(fn(3), "3");
    expect(fn(4), "2");
    expect(fn(5), "5");
    expect(fn(6), "3");
    expect(fn(7), "7");
    return 0;
}

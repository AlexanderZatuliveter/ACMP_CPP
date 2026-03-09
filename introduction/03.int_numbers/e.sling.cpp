#include <iostream>
using namespace std;

string fn(int number)
{
    int res = number / 10;
    if (number % 10 != 0)
        res += 1;
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
    expect(fn(200), "20");
    expect(fn(203), "21");
    expect(fn(199), "20");
    expect(fn(354), "36");
    return 0;
}

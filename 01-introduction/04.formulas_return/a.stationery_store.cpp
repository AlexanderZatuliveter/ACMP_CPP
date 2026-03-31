#include <iostream>
using namespace std;

string fn(long long pencils, long long pens, long long felt_tip_pen)
{
    long long res = 0;
    res = 3 * pencils + 5 * pens + 12 * felt_tip_pen;
    return to_string(res);
}

int main1() {
    long long pencils, pens, felt_tip_pen;
    cin >> pencils >> pens >> felt_tip_pen;
    cout << fn(pencils, pens, felt_tip_pen);
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
    expect(fn(1, 1, 1), "20");
    return 0;
}

#include <iostream>
using namespace std;

string fn(int number)
{
    int res;
    res = (number / 10) * (number / 10 + 1);
    if (res == 0)
        return "25";
    else
        return to_string(res) + "25";
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
    expect(fn(5), "25");
    expect(fn(75), "5625");
    expect(fn(4255), "18105025");
    expect(fn(125), "15625");
    return 0;
}

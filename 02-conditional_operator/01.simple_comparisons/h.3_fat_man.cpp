#include <iostream>
#include <cmath>
using namespace std;

string fn(int num1, int num2, int num3)
{
    int minimum = min(num1, min(num2, num3));
    int maximum = max(num1, max(num2, num3));
    if (minimum < 94 || maximum > 727)
        return "Error";
    if (maximum > 94 && maximum < 727)
        return to_string(maximum);
    else
        return "Error";
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
    expect(fn(98, 106, 214), "214");
    expect(fn(100, 100, 100), "100");
    expect(fn(93, 500, 1000), "Error");
    expect(fn(1, 500, 500), "Error");
    return 0;
}

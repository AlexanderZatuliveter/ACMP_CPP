#include <iostream>
using namespace std;

string fn(int num1, int num2)
{
    if (num1 < num2)
        return "<";
    else if (num1 > num2)
        return ">";
    else
        return "=";
}

int main1() {
    int num1, num2;
    cin >> num1;
    cin >> num2;
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
    expect(fn(5, 7), "<");
    expect(fn(-7, -12), ">");
    expect(fn(13, 13), "=");
    return 0;
}

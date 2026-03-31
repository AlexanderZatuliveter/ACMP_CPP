#include <iostream>
using namespace std;

string fn(int num1, int num2, int num3)
{
    if (num1 + num2 == num3 || num1 + num3 == num2 || num2 + num3 == num1)
        return "YES";
    else
        return "NO";
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
    expect(fn(3, 5, 2), "YES");
    expect(fn(2, 2, 5), "NO");
    expect(fn(2, 2, 4), "YES");
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

string fn(int num1, int num2)
{
    int res = 0;
    if (num1 == abs(num1) && num2 == abs(num2))
        res = num1 - (num1 / num2) * num2;
    else {
        if ((float)num1 / (float)num2 < 0)
            res = num1 - floor((float)num1 / (float)num2) * num2;
        else
            res = num1 - ceil((float)num1 / (float)num2) * num2;
    }
    return to_string(res);
}

int main1() {
    int num1, num2;
    cin >> num1 >> num2;
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
    expect(fn(27, 4), "3");
    expect(fn(-15, 4), "1");
    expect(fn(113, -3), "2");
    expect(fn(-15, -7), "6");
    return 0;
}

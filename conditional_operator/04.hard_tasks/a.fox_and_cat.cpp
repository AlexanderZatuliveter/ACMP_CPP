#include <iostream>
using namespace std;

string fn(int number)
{
    int num5 = number - (number % 5);
    int num3 = 0;
    while (true) {
        if ((number - num5) % 3 != 0) {
            num5 -= 5;
        }
        else {
            num3 = number - num5;
            break;
        }
    }
    return to_string(num5 / 5) + ' ' + to_string(num3 / 3);
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
    expect(fn(8), "1 1");
    expect(fn(11), "1 2");
    expect(fn(15), "3 0");
    return 0;
}

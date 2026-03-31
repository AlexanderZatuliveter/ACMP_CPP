#include <iostream>
using namespace std;

// int num1 = number / 1000;
// int num2 = number % 1000;
// return (num1 / 100 + (num1 / 10) % 10 + (num1 % 100) % 10 == num2 / 100 + (num2 / 10) % 10 + (num2 % 100) % 10)?"YES":"NO";

string fn(string number)
{
    int sum1 = number[0] + number[1] + number[2];
    int sum2 = number[3] + number[4] + number[5];
    return (sum1 == sum2)?"YES":"NO";
}

int main1() {
    string number;
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
    expect(fn("385916"), "YES");
    expect(fn("123456"), "NO");
    return 0;
}

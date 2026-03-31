#include <iostream>
using namespace std;

string fn(int number)
{
    return to_string(number % 10);
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
    expect(fn(5), "5");
    expect(fn(273), "3");
    expect(fn(1054), "4");
    expect(fn(174897067), "7");
    return 0;
}

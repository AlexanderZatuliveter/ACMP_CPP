#include <iostream>
using namespace std;

string fn(int speed, int time)
{
    int res = ((speed * time) % 109 + 109) % 109 + 1;
    return to_string(res);
}

int main1() {
    int speed, time;
    cin >> speed >> time;
    cout << fn(speed, time);
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
    expect(fn(60, 2), "12");
    expect(fn(-1, 1), "109");
    expect(fn(109, 1), "1");
    expect(fn(109, 2), "1");
    return 0;
}

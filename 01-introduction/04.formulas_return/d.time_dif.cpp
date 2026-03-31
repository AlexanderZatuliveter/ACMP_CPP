#include <iostream>
using namespace std;

string fn(int hour1, int min1, int sec1, int hour2, int min2, int sec2)
{
    int res = 0;
    res = sec2 - sec1 + (min2 - min1) * 60 + (hour2 - hour1) * 3600;
    return to_string(res);
}

int main1() {
    int hour1, min1, sec1, hour2, min2, sec2;
    cin >> hour1 >> min1 >> sec1;
    cin >> hour2 >> min2 >> sec2;
    cout << fn(hour1, min1, sec1, hour2, min2, sec2);
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
    expect(fn(1, 1, 1, 2, 2, 2), "3661");
    expect(fn(1, 2, 30, 1, 3, 20), "50");
    return 0;
}

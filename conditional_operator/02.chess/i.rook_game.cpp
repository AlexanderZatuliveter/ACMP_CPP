#include <iostream>
using namespace std;

string fn(int x, int y)
{
    if (x == 1 && y == 1) return "0";
    if (x == y) return "2";
    if (x != y) return "1";
}

int main1() {
    int x, y;
    cin >> x >> y;
    cout << fn(x, y);
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
    expect(fn(0, 0), "0");
    expect(fn(1, 1), "0");
    expect(fn(1, 6), "1");
    expect(fn(4, 12), "2");
    expect(fn(20, 20), "2");
    return 0;
}

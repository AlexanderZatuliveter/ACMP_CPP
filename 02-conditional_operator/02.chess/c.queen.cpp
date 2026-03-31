#include <iostream>
using namespace std;

string fn(int x1, int y1, int x2, int y2)
{
    return (abs(x1 - x2) == abs(y1 - y2) || (x1 == x2 || y1 == y2)) ? "YES" : "NO";
}

int main1() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << fn(x1, y1, x2, y2);
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
    expect(fn(5, 4, 5, 8), "YES");
    expect(fn(5, 4, 7, 6), "YES");
    expect(fn(1, 1, 2, 3), "NO");
    return 0;
}

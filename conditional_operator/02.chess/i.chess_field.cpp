#include <iostream>
using namespace std;

string fn(int x1, int y1, int x2, int y2)
{
    string c1 = "BLACK";
    if ((x1 % 2 == 1 && y1 % 2 == 0) ||
        (x1 % 2 == 0 && y1 % 2 == 1)) c1 = "WHITE";
    string c2 = "BLACK";
    if ((x2 % 2 == 1 && y2 % 2 == 0) ||
        (x2 % 2 == 0 && y2 % 2 == 1)) c2 = "WHITE";
    return c1 == c2 ? "YES" : "NO";
}

int main1() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
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
    expect(fn(1, 1, 4, 4), "YES");
    expect(fn(1, 2, 7, 5), "NO");
    return 0;
}

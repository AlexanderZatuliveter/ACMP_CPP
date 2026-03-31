#include <iostream>
#include <cmath>
using namespace std;

string fn(int x1, int y1, int r1, int x2, int y2, int r2) {
    double dist = hypot(x1 - x2, y1 - y2);
    if (dist < abs(r1-r2)) return "NO";
    return r1 + r2 >= dist ? "YES" : "NO";
}

int main1() {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    cout << fn(x1, y1, r1, x2, y2, r2);
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
    expect(fn(0, 0, 2, 0, 3, 2), "YES");
    expect(fn(1, 1, 1, 4, 4, 1), "NO");
    expect(fn(0, 0, 2, 0, 3, 1000), "NO");
    expect(fn(1, 1, 2, 10, 10, 2), "NO");
    expect(fn(1, 1, 10, 10, 10, 10), "YES");
    expect(fn(1, 0, 10, 100, 0, 1000), "NO");
    expect(fn(1, 0, 10, 100, 0, 1000), "NO");
    expect(fn(0, 0, 10, 0, 0, 10), "YES");
    expect(fn(0, 0, 5, 5, 5, 5), "YES");
    expect(fn(0, 0, 3, 4, 4, 2), "NO");
    return 0;
}
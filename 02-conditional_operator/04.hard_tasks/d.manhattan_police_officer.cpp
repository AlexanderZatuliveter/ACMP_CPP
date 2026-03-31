#include <iostream>
using namespace std;

string fn(int n, int m) {
    if (n == 0 && m == 0) return "0";
    if (n == 1 && m == 1) return "4";
    int res = (n + 1) * m + (m + 1) * n;
    return to_string(res);
}

int main1() {
    int n, m;
    cin >> n >> m;
    cout << fn(n, m);
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
    expect(fn(1, 1), "4");
    expect(fn(2, 2), "16");
    expect(fn(4, 3), "38");
    expect(fn(1, 2), "8", "Rectangle 1x2");
    expect(fn(3, 3), "28", "Square 3x3");
    expect(fn(10, 1), "40", "Strip 10x1");
    expect(fn(10000, 10000), "200039998", "Large scale test");
    return 0;
}

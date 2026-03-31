#include <iostream>
using namespace std;

string fn(int p1, int p2, int p3, int c1, int c2, int c3)
{
    int min1 = min(p1, min(p2, p3));
    int max1 = max(p1, max(p2, p3));
    int mid1 = p1 + p2 + p3 - min1 - max1;
    int min2 = min(c1, min(c2, c3));
    int max2 = max(c1, max(c2, c3));
    int mid2 = c1 + c2 + c3 - min2 - max2;
    return to_string(min1 * min2 + mid1 * mid2 + max1 * max2);
}

int main1() {
    int p1, p2, p3;
    int c1, c2, c3;
    cin >> p1 >> p2 >> p3 >> c1 >> c2 >> c3;
    cout << fn(p1, p2, p3, c1, c2, c3);
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
    expect(fn(1, 2, 3, 3, 2, 1), "14");
    expect(fn(4, 8, 10, 4, 6, 12), "184");
    return 0;
}

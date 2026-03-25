#include <iostream>
#include <string>
using namespace std;

string fn(int l1, int w1, int h1, int l2, int w2, int h2, int lc, int wc, int hc) {
    int min1 = min(w1, l1);
    int max1 = max(w1, l1);
    int min2 = min(w2, l2);
    int max2 = max(w2, l2);

    if (hc < max(h1, h2)) return "NO";
    if (
        ((min1 + min2) > wc && (max1 + max2) > lc) || ((min1 + min2) > lc && (max1 + max2) > wc)
    ) {
        if (
            ((min1 + min2) > wc && max(max1, max2) > lc) ||
            ((min1 + min2) > lc && max(max1, max2) > wc)
        )
            return "NO";
        if (
            ((max1 + max2) > wc && max(min1, min2) > lc) ||
            ((max1 + max2) > lc && max(min1, min2) > wc)
        )
            return "NO";
        return hc < (h1 + h2) ? "NO" : "YES";
    }
    return "YES";
}

int main1() {
    int l1, w1, h1, l2, w2, h2, lc, wc, hc;
    cin >> l1 >> w1 >> h1;
    cin >> l2 >> w2 >> h2;
    cin >> lc >> wc >> hc;
    cout << fn(l1, w1, h1, l2, w2, h2, lc, wc, hc) << endl;
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
    expect(fn(2, 2, 3, 3, 3, 3, 3, 5, 3), "YES");
    expect(fn(2, 3, 3, 3, 2, 3, 4, 4, 4), "YES");
    expect(fn(4, 1, 2, 3, 3, 2, 4, 3, 4), "YES");
    expect(fn(1, 1, 4, 1, 1, 3, 10, 10, 3), "NO");
    expect(fn(3, 2, 2, 3, 1, 2, 5, 2, 3), "NO");
    expect(fn(5, 2, 3, 4, 3, 3, 10, 3, 3), "YES");
    return 0;
}
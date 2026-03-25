#include <iostream>
#include <string>
using namespace std;

string fn(int l1, int w1, int h1, int l2, int w2, int h2, int lc, int wc, int hc) {
    bool is_placed = false;

    bool box1_fits = (l1 <= lc && w1 <= wc) || (w1 <= lc && l1 <= wc);
    bool box2_fits = (l2 <= lc && w2 <= wc) || (w2 <= lc && l2 <= wc);

    if (h1 + h2 <= hc && box1_fits && box2_fits) {
        is_placed = true;
    }

    if (max(h1, h2) <= hc) 
    {
        if (l1 + l2 <= lc && max(w1, w2) <= wc)
            is_placed = true;
        if (l1 + l2 <= wc && max(w1, w2) <= lc)
            is_placed = true;
        if (w1 + w2 <= lc && max(l1, l2) <= wc)
            is_placed = true;
        if (w1 + w2 <= wc && max(l1, l2) <= lc)
            is_placed = true;
        if (l1 + w2 <= lc && max(l2, w1) <= wc)
            is_placed = true;
        if (l1 + w2 <= wc && max(l2, w1) <= lc)
            is_placed = true;
        if (l2 + w1 <= lc && max(l1, w2) <= wc)
            is_placed = true;
        if (l2 + w1 <= wc && max(l1, w2) <= lc)
            is_placed = true;
    }

    return is_placed ? "YES" : "NO";
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
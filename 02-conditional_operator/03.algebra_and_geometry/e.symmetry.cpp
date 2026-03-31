#include <iostream>
#include <string>
using namespace std;

string fn(int lx1, int ly1, int lx2, int ly2, int ax, int ay) {
    if (lx1 != lx2) {
        int len = ly1 - ay;
        int by = ly1 + len;
        return to_string(ax) + ' ' + to_string(by);
    }
    if (ly1 != ly2) {
        int len = lx1 - ax;
        int bx = lx1 + len;
        return to_string(bx) + ' ' + to_string(ay);
    }
    if (ax == lx1 || ay == ly1)
        return to_string(ax) + ' ' + to_string(ay);
    return "0 0";
}

int main1() {
    int lx1, ly1, lx2, ly2, ax, ay;
    cin >> lx1 >> ly1 >> lx2 >> ly2;
    cin >> ax >> ay;
    cout << fn(lx1, ly1, lx2, ly2, ax, ay);
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
    expect(fn(0, 0, 0, 1, 10, 10), "-10 10");
    expect(fn(0, 0, 1, 0, 10, 10), "10 -10");
    expect(fn(-1, -1, 10, -1, 5, -5), "5 3");
    expect(fn(-1, -1, -1, 5, -2, 2), "0 2");
    return 0;
}
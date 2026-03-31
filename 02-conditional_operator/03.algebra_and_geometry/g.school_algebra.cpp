#include <iostream>
#include <string>
using namespace std;

string fn(int a, int b, int c) {
    if (a == b && b == c && a == 0) return "0";

    string res;

    if (a != 0) res += to_string(a);

    if (b == -1)
        res += '-';
    else if (b > 0)
        res += '+';

    if (abs(b) == 1)
        res += 'x';
    else
        if (b != 0) res += to_string(b) + 'x';

    if (c == -1)
        res += '-';
    else if (c > 0)
        res += '+';

    if (abs(c) == 1)
        res += 'y';
    else
        if (c != 0) res += to_string(c) + 'y';

    if (!res.empty() && (res[0] == '+')) {
        return res.substr(1);
    }
    return res;
}

int main1() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << fn(a, b, c) << endl;
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
    expect(fn(0, 2, -1), "2x-y");
    expect(fn(3, 0, -2), "3-2y");
    expect(fn(5, 0, 0), "5");
    expect(fn(-10, 2, 4), "-10+2x+4y");
    expect(fn(-10, 0, -12), "-10-12y");
    expect(fn(0, 0, 0), "0");
    expect(fn(0, -67, 0), "-67x");
    return 0;
}
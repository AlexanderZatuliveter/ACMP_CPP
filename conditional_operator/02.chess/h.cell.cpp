#include <iostream>
using namespace std;

string fn(string coord)
{
    int x = coord[0] - 'A' + 1;
    int y = coord[1] - '1' + 1;
    if ((x % 2 == 1 && y % 2 == 0) ||
        (x % 2 == 0 && y % 2 == 1)) return "WHITE";
    return "BLACK";
}

int main1() {
    string coord;
    cin >> coord;
    cout << fn(coord);
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
    expect(fn("C3"), "BLACK");
    expect(fn("G8"), "WHITE");
    expect(fn("A1"), "BLACK");
    expect(fn("A2"), "WHITE");
    expect(fn("B1"), "WHITE");
    expect(fn("B2"), "BLACK");
    return 0;
}

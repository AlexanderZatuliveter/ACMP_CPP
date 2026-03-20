#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
using namespace std;

string fn(int x1, int y1, int x2, int y2) {
    double distance = hypot(x1 - x2, y1 - y2);
    ostringstream oss;
    oss << fixed << setprecision(5) << distance;
    return oss.str();
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
    expect(fn(3, 4, 8, 4), "5");
    return 0;
}
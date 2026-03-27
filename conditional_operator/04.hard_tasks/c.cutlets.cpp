#include <iostream>
#include <cmath>
using namespace std;

string fn(float capacity, float min_for_1_side, float count) {
    float loops = ceil(count / capacity);
    float res = min_for_1_side * 2 * loops;
    return to_string((int)round(res));
}

int main1() {
    float capacity, min_for_1_side, count;
    cin >> capacity >> min_for_1_side >> count;
    cout << fn(capacity, min_for_1_side, count);
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
    expect(fn(1, 1, 1), "2");
    expect(fn(2, 2, 1), "4");
    expect(fn(2, 2, 8), "16");
    return 0;
}

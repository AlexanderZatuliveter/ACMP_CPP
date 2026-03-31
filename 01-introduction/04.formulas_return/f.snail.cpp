#include <iostream>
using namespace std;

string fn(int high, int day_path, int night_path)
{
    if (high <= day_path) return  "1";
    int res = ((high - night_path) + (day_path - night_path) - 1) / (day_path - night_path);
    return to_string(res);
}

int main1() {
    int high, day_path, night_path;
    cin >> high >> day_path >> night_path;
    cout << fn(high, day_path, night_path);
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
    expect(fn(10, 3, 2), "8");
    expect(fn(10, 3, 1), "5");
    return 0;
}

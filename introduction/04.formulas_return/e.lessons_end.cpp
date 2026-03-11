#include <iostream>
using namespace std;

string fn(int lesson_num)
{
    int res = 540;
    for (int i = 1; i < lesson_num + 1; i++) {
        res += 45;
        if (i < lesson_num) {
            if (i % 2 == 1)
                res += 5;
            else
                res += 15;
        }
    }
    return to_string(res / 60) + ' ' + to_string(res % 60);
}

int main1() {
    int lesson_num;
    cin >> lesson_num;
    cout << fn(lesson_num);
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
    expect(fn(1), "9 45");
    expect(fn(2), "10 35");
    expect(fn(3), "11 35");
    return 0;
}

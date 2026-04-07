#include <iostream>
#include <vector>
using namespace std;

string fn(int n)
{
    int sum = 0;
    if (n <= 0) {
        for (int i = 1; i >= n; i--) {
            sum += i;
        }
    }
    else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }
    return to_string(sum);
}

int main1() {
    int n;
    cin >> n;
    cout << fn(n);
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
    expect(fn(5), "15");
    expect(fn(6), "21");
    expect(fn(7), "28");
    expect(fn(-1), "0");
    expect(fn(-3), "-5");
    expect(fn(1), "1");
    expect(fn(0), "1");
    return 0;
}

#include <iostream>
using namespace std;

string fn(int multi1, int multi2, int prod)
{
    return (multi1 * multi2 == prod)?"YES":"NO";
}

int main1() {
    int multi1, multi2, prod;
    cin >> multi1 >> multi2 >> prod;
    cout << fn(multi1, multi2, prod);
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
    expect(fn(8, 54, 432), "YES");
    expect(fn(16, 19, 777), "NO");
    return 0;
}

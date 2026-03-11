#include <iostream>
#include <cmath>
using namespace std;

string fn(int how_bigger, int mattress_layers)
{
    int res = pow(how_bigger, 2) * mattress_layers;
    return to_string(res);
}

int main1() {
    int how_bigger, mattress_layers;
    cin >> how_bigger >> mattress_layers;
    cout << fn(how_bigger, mattress_layers);
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
    expect(fn(2, 2), "8");
    expect(fn(12, 4), "576");
    return 0;
}

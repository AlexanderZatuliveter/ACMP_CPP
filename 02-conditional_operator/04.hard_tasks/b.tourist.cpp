#include <iostream>
using namespace std;

string fn(int capacity, int weight, int w1, int c1, int w2, int c2, int w3, int c3)
{
    if (w1 + w2 + w3 <= weight && c1 + c2 + c3 >= capacity)
        return "YES";
    if (w1 + w2 <= weight && c1 + c2 >= capacity)
        return "YES";
    if (w1 + w3 <= weight && c1 + c3 >= capacity)
        return "YES";
    if (w2 + w3 <= weight && c2 + c3 >= capacity)
        return "YES";
    if (w1 <= weight && c1 >= capacity)
        return "YES";
    if (w2 <= weight && c2 >= capacity)
        return "YES";
    if (w3 <= weight && c3 >= capacity)
        return "YES";

    return "NO";
}

int main1() {
    int capacity, weight, w1, c1, w2, c2, w3, c3;
    cin >> capacity >> weight;
    cin >> w1 >> c1 >> w2 >> c2 >> w3 >> c3;
    cout << fn(capacity, weight, w1, c1, w2, c2, w3, c3);
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
    expect(fn(10, 10, 5, 5, 6, 6, 4, 5), "YES");
    expect(fn(10, 10, 5, 5, 6, 6, 7, 7), "NO");
    return 0;
}

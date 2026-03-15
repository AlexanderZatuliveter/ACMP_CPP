#include <iostream>
using namespace std;

string fn(int x1, int y1, int x2, int y2)
{
    if (x1 != x2) return "NO";

    if (y1 == 2) {
        if (y2 - y1 == 2 || y2 - y1 == 1) return "YES";
        return "NO";        
    }

    if (y1 == 1 || y1 == 8) return "NO";
    if (y2 - y1 == 1)  return "YES";    
    return "NO";    
}

int main1() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
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
    expect(fn(5, 2, 5, 4), "YES");
    expect(fn(5, 6, 5, 7), "YES");
    expect(fn(2, 3, 3, 4), "NO");
    expect(fn(5, 4, 5, 2), "NO");
    expect(fn(2, 7, 2, 8), "YES");
    expect(fn(1, 1, 8, 8), "NO");
    expect(fn(1, 1, 2, 1), "NO");
    expect(fn(1, 1, 3, 1), "NO");
    expect(fn(8, 8, 7, 8), "NO");
    expect(fn(8, 8, 8, 8), "NO");
    expect(fn(1, 1, 1, 1), "NO");
    expect(fn(1, 1, 2, 1), "NO");
    return 0;
}

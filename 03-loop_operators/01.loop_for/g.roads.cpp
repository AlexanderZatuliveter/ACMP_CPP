#include <iostream>
#include <vector>
using namespace std;

string fn(vector<vector<int>> cities, int n)
{
    int roads = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i && cities[i][j] == 1)
                roads += 1;
        }
    }
    return to_string(roads);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> cities(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cities[i][j];
        }
    }
    cout << fn(cities, n);
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

int main1() {
    // INPUT.TXT -> OUTPUT.TXT 
    // expect(fn(), "2 2");
    // expect(fn(5, 6), "2 3");
    // expect(fn(10, 24), "4 6");
    return 0;
}

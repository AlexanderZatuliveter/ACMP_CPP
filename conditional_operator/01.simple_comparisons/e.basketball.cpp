#include <iostream>
using namespace std;

string fn(int team1[4], int team2[4])
{
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 4; i++) {
        sum1 += team1[i];
        sum2 += team2[i];
    }

    if (sum1 > sum2) return "1";
    if (sum1 < sum2) return "2";
    return "DRAW";
}

int main1() {
    int team1[4], team2[4];
    for (int i = 0; i < 4; i++)
        cin >> team1[i] >> team2[i];
    cout << fn(team1, team2);
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
    int list1[] = {26, 13, 19, 14};
    int list2[] = {17, 15, 11, 16};
    expect(fn(list1, list2), "1");

    int list3[] = {14, 17, 20, 15};
    int list4[] = {15, 18, 20, 17};
    expect(fn(list3, list4), "2");
    return 0;
}

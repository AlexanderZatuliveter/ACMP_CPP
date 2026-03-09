#include <iostream>
#include <cmath>

using namespace std;

string fn(int number)
{
    int res = 0;
    for (char c : to_string(number)) {
        res += c - '0';
    }
    return to_string(res);
}

int main1() {
    int number;
    cin >> number;
    cout << fn(number);
    return 0;
}

// Самодельный "умный" assert
void expect(string actual, string expected, string test_name = "") {
    if (actual == expected) {
        cout << "[OK] " << test_name << endl;
    } else {
        cout << "[FAIL] " << test_name << endl;
        cout << "   Expected: \"" << expected << "\"" << endl;
        cout << "   Got:      \"" << actual << "\"" << endl;
        // Здесь программа НЕ падает, а идет дальше
    }
}

int main() {
    /*
№	INPUT.TXT	OUTPUT.TXT
1	100	1
2	123	6
    */
   expect(fn(123), "6");
   expect(fn(999), "27");
   expect(fn(154), "10");
   expect(fn(0), "0");
   return 0;
}

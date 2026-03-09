#include <iostream>
using namespace std;

string fn(int people_num, int apples_num)
{   
    string div = to_string(apples_num / people_num);
    if (apples_num % people_num == 0) {
        return div + " 0 0";
    }
    else {
        return div + ' ' + to_string(apples_num % people_num) + ' ' + to_string(people_num - apples_num % people_num);
    }
}

int main1() {
    int people_num, apples_num;
    cin >> people_num >> apples_num;
    cout << fn(people_num, apples_num);
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
    expect(fn(7, 30), "4 2 5");
    expect(fn(5, 15), "3 0 0");
    return 0;
}

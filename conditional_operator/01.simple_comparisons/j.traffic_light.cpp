#include <iostream>
using namespace std;

string fn(string light1, string light2, string light3)
{
    if (light1 == "black" && light2 == "black" && light3 == "green")
        return "black\nblack\nGREEN";
    if (light1 == "black" && light2 == "black" && light3 == "GREEN")
        return "black\nyellow\nblack";
    if (light1 == "black" && light2 == "yellow" && light3 == "black")
        return "red\nblack\nblack";
    if (light1 == "red" && light2 == "black" && light3 == "black")
        return "red\nyellow\nblack";
    if (light1 == "red" && light2 == "yellow" && light3 == "black")
        return "black\nblack\ngreen";
    if (light1 == "black" && light2 == "YELLOW" &&light3 == "black")
        return "black\nYELLOW\nblack";
    else
        return "error";
}

int main1() {
    string light1, light2, light3;
    cin >> light1;
    cin >> light2;
    cin >> light3;
    cout << fn(light1, light2, light3);
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
    expect(fn("black", "YELLOW", "black"), "black\nYELLOW\nblack");
    return 0;
}

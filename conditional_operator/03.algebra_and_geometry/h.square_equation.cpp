#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

string fn(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    ostringstream oss;
    oss << fixed << setprecision(6);

    if (a == 0 && b == 0) {
        if (c == 0)
            return "-1";
        else if (c != 0)
            return "0";
    }

    else if (a == 0) {
        double x = -c/b;
        oss << 1 << "\n" << x;
        return oss.str();
    }

    else {
        if (d > 0) {
            double x1 = (-b - sqrt(d)) / (2 * a);
            double x2 = (-b + sqrt(d)) / (2 * a);
            oss << 2 << "\n" << x1 << "\n" << x2;
            return oss.str();
        } 
        else if (d == 0) {
            double x1 = -b / (2 * a);
            oss << 1 << "\n" << x1;
            return oss.str();
        }
        else {
            return "0";
        }
    }
}

int main1() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << fn(a, b, c) << endl;
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
    expect(fn(1, -3, 2), "2\n1.000000\n2.000000");
    expect(fn(0, -1, 6), "1\n6.000000");
    return 0;
}
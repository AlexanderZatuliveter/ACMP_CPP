#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string fn(int a1, int b1, int c1, int a2, int b2, int c2) {
    int box1[3], box2[3];
    
    box1[0] = a1; box1[1] = b1; box1[2] = c1;
    box2[0] = a2; box2[1] = b2; box2[2] = c2;

    sort(box1, box1 + 3);
    sort(box2, box2 + 3);

    if (box1[0] == box2[0] && box1[1] == box2[1] && box1[2] == box2[2]) {
        return "Boxes are equal";
    } 
    
    if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]) {
        return "The first box is smaller than the second one";
    } 
    
    if (box1[0] >= box2[0] && box1[1] >= box2[1] && box1[2] >= box2[2]) {
        return "The first box is larger than the second one";
    }

    return "Boxes are incomparable";
}

int main1() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    cout << fn(a1, b1, c1, a2, b2, c2) << endl;
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
    expect(fn(1, 2, 3, 3, 2, 1), "Boxes are equal");
    expect(fn(2, 2, 3, 3, 2, 1), "The first box is larger than the second one");
    expect(fn(2, 2, 3, 3, 2, 3), "The first box is smaller than the second one");
    expect(fn(3, 4, 5, 2, 4, 6), "Boxes are incomparable");
    expect(fn(1000, 1000, 1000, 1000, 1000, 1000), "Boxes are equal");
    expect(fn(5, 2, 3, 5, 6, 7), "Boxes are incomparable");
    expect(fn(1, 1, 2, 1, 1, 3), "The first box is smaller than the second one");
    expect(fn(1, 4, 5, 5, 6, 1), "The first box is smaller than the second one");
    expect(fn(1, 2, 3, 2, 3, 1), "Boxes are equal", "Permutation 2");
    expect(fn(10, 10, 10, 10, 10, 11), "The first box is smaller than the second one", "Two sides equal, one smaller");
    expect(fn(10, 10, 11, 10, 10, 10), "The first box is larger than the second one", "Two sides equal, one larger");
    expect(fn(2, 2, 10, 3, 3, 5), "Boxes are incomparable", "Two sides smaller, one much larger");
    expect(fn(1, 5, 5, 2, 2, 10), "Boxes are incomparable", "One side smaller, others larger/smaller mix");
    expect(fn(1, 1, 1, 1, 1, 1), "Boxes are equal", "Minimal cube");
    expect(fn(1, 1, 1, 1, 1, 2), "The first box is smaller than the second one", "Minimal difference");
    expect(fn(999, 1000, 1000, 1000, 1000, 1000), "The first box is smaller than the second one", "Max boundary -1");
    expect(fn(10, 10, 10, 10, 10, 11), "The first box is smaller than the second one", "Single side difference");
    expect(fn(10, 10, 11, 10, 10, 10), "The first box is larger than the second one", "Single side difference reversed");
    expect(fn(2, 10, 10, 5, 5, 20), "Boxes are incomparable", "Mixed dimensions");
    expect(fn(1, 2, 3, 1, 2, 3), "Boxes are equal", "Identical order");
    expect(fn(3, 2, 1, 1, 2, 3), "Boxes are equal", "Reverse order");
    return 0;
}
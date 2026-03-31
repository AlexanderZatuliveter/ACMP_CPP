#include <iostream>
#include <vector>
using namespace std;

class Point 
{
  public:
    int x;
    int y;
    Point(string coord) 
    {
        x = coord[0] - 'A' + 1; 
        y = coord[1] - '1' + 1;
    }
};

string fn(string p1str, string p2str)
{
    Point p1(p1str);
    Point p2(p2str);

    vector<string> items;

    if (abs(p1.x - p2.x) <= 1 && abs(p1.y - p2.y) <= 1)
        items.push_back("King");

    if ((p1.x == p2.x || p1.y == p2.y) || (abs(p1.x - p2.x) == abs(p1.y - p2.y)))
        items.push_back("Queen");

    if (p1.x == p2.x || p1.y == p2.y)
        items.push_back("Rook");

    if (abs(p1.x - p2.x) == abs(p1.y - p2.y))
        items.push_back("Bishop");

    if (abs(p1.x - p2.x) == 2 && abs(p1.y - p2.y) == 1)
        items.push_back("Knight");
    else if (abs(p1.x - p2.x) == 1 && abs(p1.y - p2.y) == 2)
        items.push_back("Knight");

    if (p1.x == p2.x) {
        if (p2.y - p1.y == 1 && p1.y >= 2 && p1.y <= 7) {
            items.push_back("Pawn");
        } else if (p2.y - p1.y == 2 && p1.y == 2) {
            items.push_back("Pawn");
        }
    }

    if (items.empty()) return "Nobody";

    string result;
    for (size_t i = 0; i < items.size(); ++i) {
        result += items[i];
        if (i < items.size() - 1)
            result += '\n';
    }
    return result;
}

int main1() {
    string coord1, coord2;
    cin >> coord1 >> coord2;
    cout << fn(coord1, coord2);
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
    expect(fn("D3", "D7"), "Queen\nRook");
    expect(fn("F4", "H5"), "Knight");
    expect(fn("E2", "E3"), "King\nQueen\nRook\nPawn");
    expect(fn("A1", "H7"), "Nobody");
    return 0;
}

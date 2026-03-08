#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

string fn(int page_size, int line_number)
{
    
    int page = ceil((double)line_number / (double)page_size);

    string result = to_string(page) + " " + to_string(line_number - (page - 1) * page_size);

    return result;
}

int main1() {
    int page_size, line_number;
    cin >> page_size >> line_number;
    cout << fn(page_size, line_number);
    return 0;
}

// Самодельный "умный" ассерт
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
    Строк на странице, строка  ->  Страница, номер строки
    50 1 -> 1 1
    20 25 -> 2 5
    15 43 -> 3 13
    50 50 -> 1 50
    */
   expect(fn(50, 1), "1 1");
   expect(fn(20, 25), "2 5");
   expect(fn(15, 43), "3 13");
   expect(fn(50, 50), "1 50");
   return 0;
}

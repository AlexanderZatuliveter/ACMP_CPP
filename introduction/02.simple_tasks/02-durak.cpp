#include <iostream>
using namespace std;

int main() {
    short vova_num, anton_num;
    cin >> vova_num >> anton_num;
    if (vova_num > anton_num)
        cout << "Vova";
    else if (vova_num < anton_num)
        cout << "Anton";
    else
        cout << "Draw";
    return 0;
}
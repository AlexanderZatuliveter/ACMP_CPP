#include <iostream>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    int nums[sum];

    for (int i = 0; i < sum; i++) {
        int age, sex;
        cin >> age >> sex;
        if (sex == 1)
            nums[i] = age;
        else
            nums[i] = 0;
    }

    int max = 0;
    int index = 0;
    for (int i = 0; i < sum; i++) {
        if (nums[i] > max) {
            max = nums[i];
            index = i + 1;
        }
    }

    if (max == 0)
        cout << "-1";
    else
        cout << index;

    return 0;
}
#include <iostream>
using namespace std;

string fn(int sum, int nums[])
{
    for (int i = 0; i < sum; i++) {
        if (nums[i] <= 437)
            return "Crash " + to_string(i + 1);
    }

    return "No crash";
}

int main() {
    int sum;
    cin >> sum;
    int nums[sum];

    for (int i = 0; i < sum; i++) {
        cin >> nums[i];
    }

    cout << fn(sum, nums);
    return 0;
}

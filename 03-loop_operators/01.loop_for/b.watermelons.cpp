#include <iostream>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    int nums[sum];

    for (int i = 0; i < sum; i++) {
        cin >> nums[i];
    }

    int max = nums[0];
    int min = nums[0];

    for (int i = 0; i < sum; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }

    cout << min << ' ' << max;
    return 0;
}

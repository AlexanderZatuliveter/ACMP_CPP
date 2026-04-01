#include <iostream>
using namespace std;

int main() {
    int sum;
    cin >> sum;
    int nums[sum];

    for (int i = 0; i < sum; i++) {
        int m, n;
        cin >> n >> m;
        nums[i] = 19 * m + (n + 239) * (n + 366) / 2;
    }

    for (int num : nums) {
        cout << num << endl;
    }

    return 0;
}

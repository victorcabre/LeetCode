#include <iostream>
#include <vector>
using namespace std;




int main() {
    vector<int> nums = {1,1,1,1,2};

    Solution s;
    cout << s.removeDuplicates(nums) << endl;

    for (int num: nums) {
        cout << num << ' ';
    }
}
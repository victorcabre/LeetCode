#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol;
        for (int i = 0; i < n; ++i) {
            sol.push_back(nums[i]);
            sol.push_back(nums[n + i]);
        }
        return sol;
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6};
    int n = 3;

    Solution s;
    // cout << s.shuffle(nums, n) << endl;
    vector<int> sol = s.shuffle(nums, n);
    for (int num: sol) {
        cout << num << ' ';
    }
}
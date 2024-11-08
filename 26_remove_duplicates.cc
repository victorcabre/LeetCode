#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[j - 1]) {
                if (j != i) nums[j] = nums[i];
                ++j;
            }
        }
    return j;
    }
    
};
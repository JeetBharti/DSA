#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;  // stores value -> index

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];  // find the complement

            if (ans.find(rem) != ans.end()) {
                // if complement exists in map, return its index and current index
                return {ans[rem], i};
            }

            // store current value with its index
            ans[nums[i]] = i;
        }

        return {};  // return empty if no valid pair found
    }
};

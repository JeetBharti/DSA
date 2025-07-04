class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> valWithIndex;

        // Step 1: Store each value with its index
        for (int i = 0; i < n; i++) {
            valWithIndex.push_back({nums[i], i});
        }

        // Step 2: Sort by value descending
        sort(valWithIndex.begin(), valWithIndex.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        // Step 3: Take top k elements
        vector<pair<int, int>> topK(valWithIndex.begin(), valWithIndex.begin() + k);

        // Step 4: Sort top k by original index to maintain order
        sort(topK.begin(), topK.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        // Step 5: Extract values
        vector<int> result;
        for (auto &p : topK) {
            result.push_back(p.first);
        }

        return result;
    }
};

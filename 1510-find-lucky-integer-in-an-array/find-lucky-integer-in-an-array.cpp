class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501, 0);

        for (int num : arr) {
            freq[num]++;
        }

        int result = -1;
        for (int i = 1; i <= 500; i++) {
            if (freq[i] == i) {
                result = i;
            }
        }

        return result;
    }
};

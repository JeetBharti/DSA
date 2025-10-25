class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int start = 1;
        int day = 0;

        for (int i = 1; i <= n; i++) {
            total += start + day;
            day++;
            if (day == 7) {
                day = 0;
                start++;
            }
        }

        return total;
    }
};

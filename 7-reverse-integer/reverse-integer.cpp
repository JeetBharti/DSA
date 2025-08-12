class Solution {
public:
    int reverse(int x) {
        int num=x;
        int rev=0;

        while(num!=0){
            int n=num%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev=(rev*10)+n;
            num=num/10;
        }
        return rev;
    }
};
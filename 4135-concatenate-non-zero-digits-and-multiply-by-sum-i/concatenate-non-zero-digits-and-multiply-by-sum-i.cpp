class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num=n;
        long x=0;
        long y=1;
        int sum=0;
        while(num>0){
            int rem=num%10;
            if(rem!=0){
                x=x+(rem*y);
                y=y*10;
                sum=sum+rem;
            }
            num=num/10;
        }
        return x*sum;        
    }
};
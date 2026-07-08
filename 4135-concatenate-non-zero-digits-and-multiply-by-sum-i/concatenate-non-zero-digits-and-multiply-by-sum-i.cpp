class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num=0;
        long x=1;
        int sum=0;
        while(n>0){
            int rem=n%10;

            if(rem!=0){
                num=num+(rem*x);
                x=x*10;
                sum=sum+rem;
            }
            n=n/10;
        }
        return num*sum;
        
    }
};
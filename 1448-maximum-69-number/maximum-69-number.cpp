class Solution {
public:
    int maximum69Number (int num) {
        int count=0;
        int placesix=-1;
        int n=num;

        while(num>0){
            int rem=num%10;
            if(rem==6){
                placesix=count;
            }
            num=num/10;
            count++;
        }
        if(placesix==-1){
            return n;
        }
        else{
            return n+3*pow(10,placesix);
        }

        
    }
};
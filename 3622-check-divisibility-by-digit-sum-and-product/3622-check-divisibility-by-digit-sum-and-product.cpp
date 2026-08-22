class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int remainder=0;
        int temp=n;
        while (n>0){
            remainder=n%10;
            sum+=remainder;
             product=product*remainder;
           
            n=n/10;
            
        }
        if (temp% (sum+product) ==0 ) {return true;
        }

        return false;
    }
};
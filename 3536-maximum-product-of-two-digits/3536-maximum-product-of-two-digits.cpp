class Solution {
public:
    int maxProduct(int n) {
        long  greatest = INT_MIN;
        long second_greatest = INT_MIN;

        while (n>0){
            long r=  n%10 ;
   if (r>greatest){
    second_greatest = greatest;
    greatest = r;
   }
    else if (r>second_greatest){
    second_greatest = r;
   }
   n=n/10;
        }
        return second_greatest*greatest;
    }
};
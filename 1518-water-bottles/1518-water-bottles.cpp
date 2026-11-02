class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
     int count = 0;
     while (numBottles >= numExchange){

        int new_bottles  = numBottles/numExchange;
        int rem_bottles  = numBottles%numExchange;
        count =  count + (new_bottles*numExchange);
        numBottles =new_bottles+rem_bottles;
     }
    count += numBottles; 
return count;
    }
};
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        
  int count = 0;
     while (numBottles >= numExchange){
   count += numExchange;
        numBottles =numBottles - numExchange;
        numExchange++;
        numBottles+=1;
        
     }
    count += numBottles; 
return count;

    }
};




class Solution {
public:
int solve(int n,int sum){
    while (n>0){
        int r=n%10;
        sum+= r;
        n = n/10;
    }
    return sum;

}
    int smallestIndex(vector<int>& nums) {
        for (int i=0 ; i<nums.size() ;i++){
        if (solve(nums[i],0) == i){
            return i;
        }
        }
    return -1;}
};
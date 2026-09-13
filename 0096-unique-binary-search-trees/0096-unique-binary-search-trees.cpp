class Solution {
public:

int solve (int n){
    if (n == 0 || n==1)
    return 1;
    

    int ans =0;
    for (int root=1 ;root<=n ; root++){
         int leftnodes =  root -1;
         int rightnodes = n-root;

         int left = solve (leftnodes);
         int right = solve(rightnodes);

         ans+= left * right; 
    }
return ans;
}
    int numTrees(int n) {

    return solve(n);    
    }
};
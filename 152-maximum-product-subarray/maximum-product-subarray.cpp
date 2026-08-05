class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefixSum = 1;
        int suffixSum = 1;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){

            if(prefixSum==0){
                prefixSum = 1;
            }
            if(suffixSum==0){
                suffixSum = 1;
            }

            prefixSum *= nums[i];
            suffixSum *= nums[n-i-1];

            ans = max(ans,max(prefixSum,suffixSum));
        }
        return ans;
    }
};
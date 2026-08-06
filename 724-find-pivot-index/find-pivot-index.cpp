class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i=0;i<n;i++){
            totalSum += nums[i];
        }
        int prefixSum = 0;
        int suffixSum = 0;
        for(int i=0;i<n;i++){
            
            suffixSum = totalSum - nums[i] - prefixSum;
            if(prefixSum == suffixSum){
                return i;
            }
            prefixSum += nums[i];
        }
        return -1;
    }
};
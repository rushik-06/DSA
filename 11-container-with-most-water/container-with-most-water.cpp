class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int maxwater = 0;
        while(left<right){
            int water = abs(right-left) * (min(nums[left],nums[right]));
            if(nums[left]>nums[right]){
                right--;
            }
            else{
                left++;
            }
            if(water>maxwater){
                maxwater = water;
            }
        }
        return maxwater;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int m = 0; m < n - 2; m++) {
            int left = m + 1;
            int right = n - 1;
            if (m > 0 && nums[m] == nums[m - 1]) {
                continue;
            }
            while (left < right) {
                if (nums[left] + nums[right] == -nums[m]) {
                    ans.push_back({nums[m], nums[left], nums[right]});
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                } else if (nums[left] + nums[right] < -nums[m]) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;
    }
};

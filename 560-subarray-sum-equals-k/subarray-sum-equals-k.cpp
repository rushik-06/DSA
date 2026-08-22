class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> preSum(n, 0);
        preSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            preSum[i] += preSum[i - 1] + nums[i];
        }
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int j = 0; j < n; j++) {
            int value = preSum[j] - k;
            if (mp.find(value) != mp.end()) {
                count += mp[value];
            }

            mp[preSum[j]]++;
        }
        return count;
    }
};
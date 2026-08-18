class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int PcurrSum = 0;
        int NcurrSum = 0;
        int PmaxSum = INT_MIN;
        int NmaxSum = INT_MAX;
        for (int i = 0; i < n; i++) {
            PcurrSum += nums[i];
            PmaxSum = max(PcurrSum, PmaxSum);
            if (PcurrSum < 0) {
                PcurrSum = 0;
            }
            NcurrSum += nums[i];
            NmaxSum = min(NcurrSum, NmaxSum);
            if (NcurrSum > 0) {
                NcurrSum = 0;
            }
        }
        int maxSum = max(PmaxSum,abs(NmaxSum));
        return maxSum;
    }
};
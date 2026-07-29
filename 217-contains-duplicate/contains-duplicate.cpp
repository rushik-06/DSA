class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>hashmap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(hashmap.find(nums[i]) != hashmap.end()){
                return true;
            }
            hashmap.insert(nums[i]);
        }
        return 0;
    }
};
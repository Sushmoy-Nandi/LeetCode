class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        
        for(int i = 0; i < nums.size(); i++) {
            if(set.find(nums[i]) != set.end()) {
                return true;
            } else {
                set.insert(nums[i]);
            }
        }
        return false;
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        unordered_set<int> s(n);
        for(int i = 0; i<n;i++){
            if(!s.contains(nums[i])){
            s.insert(nums[i]);
            }else{
                ans = true;
                break;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> ind;

        for(int i = 0;i<n;i++){
            ind[nums[i]] = i;
        }

        for(int i = 0;i<n;i++){
            int req = target - nums[i];
            if(ind.count(req) && ind[req] != i){
                return{i,ind[req]};
            }
        }

        return{};


    }
};

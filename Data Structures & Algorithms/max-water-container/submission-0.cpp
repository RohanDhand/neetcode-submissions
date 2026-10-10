class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0, curr=0;
        int l = 0, r = n-1;
        while(l<r){
            int h = min(heights[l], heights[r]);
            int w = r-l;
            curr = w*h;
            ans = max(ans,curr);
            if(heights[l]<=heights[r]){
                l++;
            }else{
                r--;
            }
        }

        return ans;

    }
};

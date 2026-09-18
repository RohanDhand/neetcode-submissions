class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        bool ans = false;
        unordered_map<char,int> art;
        if(n!=m) return false;

        for(int i = 0 ;i<n;i++){
            art[s[i]]++;
        }
        for(int i = 0 ;i<n;i++){
            art[t[i]]--;
            if(art[t[i]] < 0){
                 return false;
            }
        }
        return true;

    }
};

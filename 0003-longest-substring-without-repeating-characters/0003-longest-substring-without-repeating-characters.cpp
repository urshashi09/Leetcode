class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0; int high=0;
        unordered_map <char, int> mp;
        int res= 0;
        for(high=0; high<s.size(); high++){
            mp[s[high]]++;
            int k=high-low+1;
            while(k>mp.size()){
                mp[s[low]]--;
                if( mp[s[low]]==0) mp.erase(s[low]);
                low++;
                k=high-low+1;
            }
            if(k==mp.size()){
                int len=high-low+1;
                res= max(res, len);
            }
        }
        return res;
    }
};
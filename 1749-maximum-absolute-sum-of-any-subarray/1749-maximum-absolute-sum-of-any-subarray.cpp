class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int maxsum= 0;
    int minsum= 0;
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        int maxend= maxsum + arr[i];
        int minend= minsum + arr[i];

        maxsum= max(maxend, arr[i]);
        minsum= min(minend, arr[i]);

        ans= max(ans, max(abs(maxsum),abs(minsum)));
        
    }
    return ans;
    }
};
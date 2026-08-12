class Solution {
public:
    int maxCount(vector <int> & arr){
        int count=0;
        for(int i=0; i<arr.size(); i++){
            count= max(count, arr[i]);
        }
        return count;
    }

    int characterReplacement(string s, int k) {
        vector<int> arr(256, 0);
        int low=0;
        int high=0;
        int res=0;
        for(high=0; high<s.size(); high++){
            arr[s[high]]++;
            int len= high-low+1;
            int diff= len-maxCount(arr);
            while (diff>k){
                arr[s[low]]--;
                low++;
                len=high-low+1;
                diff= len-maxCount(arr);
            }
            if (diff==k || diff <k){
                len=high-low+1;
                res= max(res, len);
            }
        }
        return res;

        
    }
};
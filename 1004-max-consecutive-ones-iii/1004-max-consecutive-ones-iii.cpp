class Solution {
public:
    
    int longestOnes(vector<int>& nums, int k) {
        vector <int> arr(2,0);
    int low=0; int high=0;
    int res=0;
    for (high=0; high<nums.size(); high++){
        arr[nums[high]]++;
        int len=high-low+1;
        int diff= len- arr[1];
        while (diff>k){
            arr[nums[low]]--;
            low++;
            len=high-low+1;
            diff= len- arr[1];
        }
        if (diff==k || diff<k){
            len= high-low+1;
            res= max(res, len);
        }
    }
    return res;
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
          int low=0;
    int high=0;
    int sum=0;
    int mini=INT_MAX;
    while(high<arr.size()){
        sum+=arr[high];
        if(sum>=target){
            while(sum>=target){
            int len= high-low+1;
            mini= min(mini, len);
            sum-=arr[low];
            low++;
            }
        }
            high++;
    }
    if (mini==INT_MAX){
        return 0;
    }
    return mini;
    
    }
};
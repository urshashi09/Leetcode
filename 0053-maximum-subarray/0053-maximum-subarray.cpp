class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int n= arr.size();
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        
        currsum+= arr[i];
        maxsum=max(maxsum, currsum);
        if (currsum<0){
            currsum=0;
            
        }
    }
    return maxsum;
    }
};
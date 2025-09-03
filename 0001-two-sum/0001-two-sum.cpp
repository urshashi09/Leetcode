class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map <int,int> mpp;
        int n= arr.size();
        for(int i=0; i<n; i++){
            int a=arr[i];
            int more= target- a;
            if(mpp.find(more)!= mpp.end()){
                return {mpp[more],i};
            }
            mpp[a]= i;
        } 
        return {};
    }   
};
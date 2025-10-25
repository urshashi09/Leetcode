class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> mpp;
        int count=0;
        int prefix=0;
        for(int i=0; i<n; i++){
            prefix+=arr[i];
            if(prefix==k) count++;
            if(mpp.find(prefix-k)!=mpp.end()){
                count+=mpp[prefix-k];
            }
            mpp[prefix]++;
        }
        return count;
    }
};
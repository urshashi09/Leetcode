class Solution {
public:
    int minPairSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
    int i=0;
    int j=arr.size()-1;
    int maxi=0;
    while(i<j){
        maxi=max(maxi, arr[i]+arr[j]);
        i++;
        j--;
    }
    return maxi;
    }
};
class Solution {
public:

vector <int> power(int x){
    vector <int> arr(x);
    arr[0]=1;
    int mod= 1000000007;
    for(int i=1; i<x; i++){
        arr[i]=(arr[i-1]*2)%mod;
    }
    return arr;
}
    int numSubseq(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
     int i=0;
     int j= arr.size() -1;
     int mod= 1000000007;
     long long count=0;
     vector <int> ans= power(arr.size());
     while(i<=j){
         if(arr[i]+arr[j]> target){
             j--;
         }
         else if(arr[i]+arr[j]<= target){
             int diff= j-i;
             count = (count+ans[diff])%mod ;
             i++;
         }
     }
     return count;
    }
};
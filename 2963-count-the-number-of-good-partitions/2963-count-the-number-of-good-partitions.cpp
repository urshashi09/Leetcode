class Solution {
public:
    int numberOfGoodPartitions(vector<int>& arr) {
        int n=arr.size();
    unordered_map<int, int> mp;
    for (int i=0; i<n; i++){
        mp[arr[i]]= i;
    }
    int i=0;
    int j= 0;
    int result=1;
    while(i<n){
        if(i>j){
            result= (result*2) % 1000000007;
        }
        j= max(j, mp[arr[i]]);
        i++;
    }
    return result;
    }
};
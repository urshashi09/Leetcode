class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int i=0; int j=arr.size()-1;
    int count=0;
    sort(arr.begin(), arr.end()); 
    while (i<j){
        
        if(arr[i]+arr[j]>=target){
            j--;
        }else{
            count+=j-i;
            i++;
        }
    }
    return count;
    }
};
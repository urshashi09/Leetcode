class Solution {
public:
    int numRescueBoats(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
    int i=0;
    int j=arr.size()-1;
    int count=0;
    while(i<=j){
        if(arr[i]+arr[j]<=target){
            count++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>target){
            count++;
            j--;
        }
        else{
            count++;
        }
    }
    return count;
    }
};
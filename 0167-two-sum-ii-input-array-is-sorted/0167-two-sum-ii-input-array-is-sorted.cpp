class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector <int> ans={};
        int i=0;
    int j=arr.size()-1;
    while (i<j){
        if (arr[i]+arr[j]>target){
            j--;
        } else if(arr[i]+arr[j]<target){
            i++;
        }else{
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        }
        
    }
        return ans;
    }
    
};
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int start=0;
    int end= arr.size()-1;
    int mid=0;
    while (mid<=end){
        if (arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==0){
            int temp= arr[start];
            arr[start]= arr[mid];
            arr[mid]=temp;
            start++;
            mid++;
            
        }
        else{
            int temp= arr[end];
            arr[end]= arr[mid];
            arr[mid]=temp;
            end--;
            
        }
    }
    }
};
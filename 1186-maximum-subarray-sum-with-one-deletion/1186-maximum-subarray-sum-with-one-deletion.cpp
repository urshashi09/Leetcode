class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete= arr[0];
        int oneDelete= INT_MIN;
        int ans=arr[0];

        for (int i=1; i<arr.size(); i++){
            int prevnoDelete= noDelete;
            int prevoneDelete= oneDelete;

            noDelete= max(prevnoDelete + arr[i], arr[i]);

            int currOneDelete;
            if (oneDelete==INT_MIN){
                currOneDelete=arr[i];
            }
            else{
                currOneDelete= prevoneDelete + arr[i];
            }

            oneDelete= max(currOneDelete, prevnoDelete);

            ans= max(ans, max(noDelete,oneDelete));
        }
        return ans;
    }
};
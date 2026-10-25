class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxend= arr[0];
        int minend= arr[0];
        int ans= arr[0];
        for(int i=1; i<arr.size(); i++){
            int prod= arr[i];
            int maxprod= maxend * arr[i];
            int minprod= minend * arr[i];

            maxend= max(prod, max(maxprod,minprod));
            minend= min(prod, min(maxprod,minprod));

            ans= max(ans, max(maxend,minend));
        }
        return ans;
    }
};
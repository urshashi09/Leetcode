class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
    int maxending = arr[0], minending = arr[0];
    int maxsum = arr[0], minsum = arr[0];
    int total = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        total += arr[i];

        maxending = max(maxending + arr[i], arr[i]);
        minending = min(minending + arr[i], arr[i]);

        maxsum = max(maxsum, maxending);
        minsum = min(minsum, minending);
    }

    int ans=maxsum;
    if (minsum != total){
        ans= max(maxsum, total-minsum);
    }
    return ans;
    }
};
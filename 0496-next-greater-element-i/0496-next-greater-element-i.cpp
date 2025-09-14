class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int, int> m;
        stack <int> st;
        int n2= nums2.size();
        int n1= nums1.size();
        for(int i=n2-1; i>=0; i--){
            while (st.size()>0 && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) m[nums2[i]]=-1;
            else m[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector <int> ans;
        for(int i=0; i<n1; i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};
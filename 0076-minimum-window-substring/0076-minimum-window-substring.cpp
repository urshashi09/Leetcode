class Solution {
public:
    bool check(vector <int>& hashs1,vector <int>& hashs2){
    for (int i=0; i<256; i++){
        if(hashs2[i]<hashs1[i]){
            return false;
        }
    }
    return true;
}
    string minWindow(string s2, string s1) {
        int low=0;
    int high=0;
    vector <int> hashs1 (256,0);
    vector <int> hashs2 (256,0);
    int res=INT_MAX;
    int start=0;
    for(int i=0; i<s1.size(); i++){
        hashs1[s1[i]]++;
    }
    
    for(high=0; high<s2.size(); high++){
        hashs2[s2[high]]++;
        while(check(hashs1,hashs2)){
            
            int len=high-low+1;
            if (res>len){
                res= len;
                start=low;

            }
            hashs2[s2[low]]--;
            low++;
        }
            

    }
    if(res==INT_MAX) return "";
    return s2.substr(start,res);
    }
};
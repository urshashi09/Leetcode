class Solution {
public:
    bool check(vector <int>& counter){
        for(int i=0; i<256; i++){
            if(counter[i]!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int low=0;
        int high=0;
        vector <int> counter (256,0);
        int count=0;
        for(int i=0; i<p.size(); i++){
            counter[p[i]]++;
        }
        vector <int> answer;

        while(high<s.size()){
            counter[s[high]]--;
            int len=high-low+1;
            if(len==p.size()){
                if(check(counter)){
                    answer.push_back(low);

                }
                counter[s[low]]++;
                low++;
            }
            high++;
        }
        return answer;
    }
};
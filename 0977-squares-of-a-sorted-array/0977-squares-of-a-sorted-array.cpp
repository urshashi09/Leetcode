class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n= arr.size();
    
    vector <int> a;
    vector <int> b;

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            a.push_back(arr[i]);
        }
        else{
            b.push_back(arr[i]);
        }
    }
    
    int neg=0;
    int pos=0;
    int id=0;
    
    if(a.size()==0){
        for(int j=0; j<b.size(); j++){
            b[j]=b[j]*b[j];
        }
        return b;
    }
    if(b.size()==0){
        for(int j=0; j<a.size(); j++){
            a[j]=a[j]*a[j];
        }
        reverse(a.begin(), a.end());
        return a;
    }
    
    vector <int> ans;
    for(int i=0; i<a.size(); i++){
        a[i]=a[i]*a[i];
    }
    reverse(a.begin(), a.end());
    
    for(int j=0; j<b.size(); j++){
            b[j]=b[j]*b[j];
    }
    
    while(neg<a.size() && pos<b.size()){
        if(a[neg]<=b[pos]){
            ans.push_back(a[neg]);
            neg++;
        }
        else{
            ans.push_back(b[pos]);
            pos++;
        }
    }
    
    while(neg<a.size()){
        ans.push_back(a[neg]);
            neg++;
    }
    while(pos<b.size()){
        ans.push_back(b[pos]);
            pos++;
    }
    return ans;
    }
};
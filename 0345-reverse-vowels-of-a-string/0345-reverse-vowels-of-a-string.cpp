class Solution {
public:
    bool isVowel(char x){
    return x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||x=='A' || x=='E' || x=='I' || x=='O' || x=='U';
}
    string reverseVowels(string x) {
        int i=0;
    int j= x.length()-1;
    while(i<=j){
        if (isVowel(x[i])&& isVowel(x[j])){
            char temp= x[i];
            x[i]= x[j];
            x[j]= temp;
            i++;
            j--;
        }
        else if(!isVowel(x[i])) i++;
        else j--;
    }
    return x;
    }
};
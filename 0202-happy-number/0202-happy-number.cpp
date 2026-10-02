class Solution {
public:
int calc(int num){
    int ans=0;
    while (num!=0){
        int temp= num% 10;
        ans+=temp* temp;
        num/=10;
        
    }
    return ans;
}
    bool isHappy(int n) {
        int slow=n;
    int fast=n;
    while(true){
        slow= calc(slow);
        fast= calc(fast);
        fast= calc(fast);
        if (slow==1) return true;
        if(slow==fast) return false;
        
    }
    }
};
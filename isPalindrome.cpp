class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev=0;
        for(int i=x;i>0;i=i/10){
            int rem=i%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return false;
            }
            rev=(rev*10)+rem;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};

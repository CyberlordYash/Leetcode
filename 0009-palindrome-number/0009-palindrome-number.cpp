class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int copy=x,rev=0,rem;
        if(x<0) return false;
        while(x)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev==copy)return true;
        else return false;
    }
};
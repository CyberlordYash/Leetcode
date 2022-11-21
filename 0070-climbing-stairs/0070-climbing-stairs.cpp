class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;

        int base0 = 1;
        int base1 = 2;
        
        for(int i = 3; i < n; i++)
        {
            int res = base0 + base1;
            base0 = base1;
            base1 = res;
        }
        
        return base0 + base1;
    }
};